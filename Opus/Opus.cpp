// Opus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "header\opus.h"

using namespace std;

int main()
{
	int error;
	OpusEncoder *enc;

	enc = opus_encoder_create(16000, 1, OPUS_APPLICATION_VOIP, &error);

	float *input = new float[320];
	unsigned char *output = new unsigned char[4000];

	cout << opus_encode_float(enc, input, 320, output, 4000) << endl;

	opus_encoder_destroy(enc);
    return 0;
}

