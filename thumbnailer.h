#pragma once
#include "ffmpeg.h"

struct Buffer {
    uint8_t* data;
    size_t size;
    unsigned long width, height;
};

struct Dims {
    unsigned long width, height;
};

// Writes RGBA thumbnail buffer to img
int generate_thumbnail(struct Buffer* img, AVFormatContext* avfc,
    AVCodecContext* avcc, const int stream, const int offset, const struct Dims thumb_dims);
