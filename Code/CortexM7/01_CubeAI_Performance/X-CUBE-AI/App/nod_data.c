#include "nod_data.h"

ai_handle ai_nod_data_weights_get(void)
{

  AI_ALIGNED(4)
  static const ai_u8 s_nod_weights[ 2196 ] = {
    0xc0, 0x83, 0x7b, 0x3d, 0x68, 0xc6, 0x56, 0xbe, 0x90, 0xcc,
    0x9e, 0xbe, 0x44, 0x47, 0xa0, 0xbe, 0xbc, 0xc5, 0x19, 0x3e,
    0x80, 0xfc, 0xb1, 0x3b, 0x8c, 0x28, 0xd3, 0xbe, 0x30, 0x95,
    0x22, 0x3e, 0x60, 0x16, 0x96, 0x3d, 0x69, 0x4f, 0x15, 0xbf,
    0x79, 0x02, 0xe5, 0xbe, 0x40, 0x42, 0x97, 0x3d, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x40, 0xbf, 0x53, 0x3d, 0x60, 0x2a,
    0x43, 0x3e, 0xf0, 0xaf, 0xf0, 0xbe, 0xe0, 0xbd, 0x65, 0x3d,
    0x70, 0x72, 0x19, 0x3e, 0x70, 0x58, 0x67, 0x3e, 0xf8, 0xeb,
    0x1b, 0x3e, 0x40, 0x10, 0xd2, 0xbc, 0x88, 0x4d, 0x26, 0xbe,
    0x90, 0x64, 0x3d, 0xbe, 0xc0, 0x73, 0x6a, 0x3e, 0x60, 0x82,
    0x5c, 0xbd, 0xb8, 0x5e, 0x86, 0x3e, 0x04, 0x50, 0xf8, 0xbe,
    0xe0, 0xe7, 0x6e, 0x3d, 0x10, 0x1c, 0x70, 0xbe, 0x88, 0x58,
    0x93, 0x3e, 0x90, 0x7a, 0x9b, 0xbe, 0x18, 0x74, 0xb6, 0x3e,
    0xf0, 0x9a, 0x69, 0x3e, 0x5c, 0x16, 0x94, 0x3e, 0x04, 0x31,
    0xd1, 0xbe, 0x80, 0x0d, 0xa0, 0x3e, 0x58, 0x33, 0x62, 0xbe,
    0x90, 0xdb, 0xee, 0x3d, 0xa0, 0x9e, 0xed, 0x3d, 0x88, 0x5b,
    0x98, 0x3e, 0x2c, 0x86, 0xfb, 0x3e, 0x64, 0x6b, 0xc1, 0xbe,
    0xf8, 0x25, 0x7f, 0xbe, 0xa4, 0x8b, 0xd5, 0xbe, 0x54, 0x8e,
    0x86, 0xbe, 0x24, 0x4f, 0xb9, 0xbe, 0xf8, 0x57, 0x89, 0x3e,
    0xbc, 0x5d, 0x95, 0x3e, 0x80, 0x57, 0x95, 0x3c, 0x28, 0x27,
    0xb5, 0x3e, 0x08, 0xf0, 0xe0, 0xbe, 0x48, 0xe4, 0x85, 0xbe,
    0x0c, 0xd9, 0xd1, 0x3e, 0xe0, 0xf4, 0x3d, 0x3d, 0x78, 0x62,
    0xb3, 0xbe, 0x64, 0xaa, 0xb9, 0xbe, 0xb0, 0x0c, 0xdb, 0x3e,
    0x00, 0x9e, 0x65, 0x3c, 0xc0, 0x34, 0x09, 0x3e, 0x5c, 0xcb,
    0xf3, 0x3e, 0x00, 0xdd, 0x48, 0xbc, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x20, 0xe2, 0x40, 0xbe, 0x00, 0x4d, 0x98, 0xbb,
    0xfc, 0xde, 0xdf, 0xbe, 0x68, 0xbc, 0x7b, 0x3e, 0x40, 0xc2,
    0x73, 0xbd, 0xf8, 0xaa, 0x9d, 0xbe, 0xec, 0xb2, 0x87, 0xbe,
    0x24, 0x5c, 0xb3, 0x3e, 0x10, 0x4c, 0xb7, 0x3d, 0xf4, 0xf3,
    0x8a, 0xbe, 0x60, 0xfa, 0x17, 0xbd, 0x3c, 0xee, 0xd8, 0xbe,
    0xd8, 0x21, 0x7b, 0x3e, 0xec, 0xac, 0xb8, 0xbe, 0x88, 0x39,
    0xf0, 0x3e, 0x14, 0x80, 0xed, 0x3e, 0xa0, 0x42, 0xaf, 0xbe,
    0xe0, 0xfc, 0x99, 0x3d, 0x48, 0xf5, 0xe7, 0x3e, 0x00, 0xc4,
    0x9d, 0x3c, 0xd0, 0x22, 0x00, 0x3e, 0xb8, 0xce, 0x25, 0xbe,
    0x30, 0x8f, 0x12, 0x3e, 0xa0, 0xe4, 0x8f, 0x3d, 0x20, 0x40,
    0x65, 0x3e, 0x40, 0x3b, 0xfa, 0x3e, 0x40, 0x0d, 0x4c, 0xbd,
    0x34, 0x92, 0xf5, 0x3e, 0xc0, 0x74, 0xce, 0xbe, 0x7c, 0x4a,
    0xd6, 0x3e, 0xd4, 0x5c, 0xb4, 0xbe, 0xc0, 0x75, 0xdd, 0xbd,
    0x94, 0x24, 0xa5, 0x3e, 0x48, 0x4a, 0x3d, 0x3e, 0xbc, 0x0e,
    0xe0, 0xbe, 0x00, 0xde, 0x19, 0x3b, 0xb8, 0x49, 0x43, 0xbe,
    0x00, 0x9c, 0xcf, 0xba, 0x64, 0x21, 0xf2, 0xbe, 0x48, 0x47,
    0xd6, 0xbe, 0x10, 0x7e, 0x33, 0x3e, 0xb8, 0x55, 0xd3, 0x3e,
    0x38, 0x71, 0xd7, 0xbe, 0x50, 0xf1, 0xa9, 0xbd, 0xc4, 0xdc,
    0x8e, 0xbe, 0x40, 0xdc, 0x8b, 0x3d, 0xc0, 0xc2, 0x10, 0xbe,
    0x9c, 0xe7, 0x84, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3c, 0xa2, 0xf4, 0x3e, 0xa4, 0xb1, 0xcd, 0x3e, 0x08, 0xf5,
    0x1b, 0x3e, 0xcc, 0x89, 0xc0, 0x3e, 0xf8, 0xe3, 0x3f, 0x3e,
    0x80, 0x91, 0x15, 0xbd, 0x50, 0x8d, 0xcb, 0x3e, 0x20, 0x82,
    0xe4, 0xbd, 0x40, 0x74, 0x36, 0x3e, 0x60, 0xfd, 0x3b, 0xbd,
    0x80, 0x29, 0x3a, 0x3e, 0x40, 0xd5, 0xd8, 0xbc, 0x34, 0x87,
    0xf3, 0x3e, 0x18, 0xa8, 0x6c, 0x3e, 0xf0, 0x67, 0xf3, 0xbe,
    0x5c, 0x3b, 0x9f, 0xbe, 0xf8, 0xf6, 0xc9, 0x3e, 0x20, 0x32,
    0xb8, 0xbd, 0x9c, 0xaf, 0xf8, 0xbe, 0xec, 0x64, 0xf2, 0x3e,
    0x50, 0x1c, 0x6d, 0xbe, 0xd8, 0xa5, 0x4b, 0xbe, 0xfc, 0x7c,
    0xb2, 0x3e, 0x30, 0xce, 0x28, 0xbe, 0x3c, 0x30, 0xa0, 0xbe,
    0xf0, 0x8e, 0xc3, 0xbe, 0xe8, 0xac, 0x16, 0x3e, 0x60, 0xe6,
    0x8e, 0xbd, 0x68, 0xc0, 0xa1, 0xbe, 0xa0, 0x4a, 0xeb, 0x3d,
    0x4c, 0x28, 0xaf, 0xbe, 0xf8, 0xa6, 0x54, 0xbe, 0x7c, 0xee,
    0x94, 0xbe, 0x00, 0xc6, 0x59, 0xbc, 0x00, 0xd1, 0x94, 0xbc,
    0xc0, 0xd6, 0xb4, 0xbc, 0x08, 0x8c, 0xd7, 0xbe, 0x70, 0xbd,
    0xa4, 0x3d, 0xe0, 0x67, 0x00, 0x3d, 0x04, 0x87, 0xa3, 0x3e,
    0xc0, 0xd7, 0xf3, 0x3c, 0x8c, 0xb1, 0x9e, 0xbe, 0x00, 0x40,
    0x4d, 0x39, 0x50, 0xe1, 0xb1, 0x3d, 0x00, 0x55, 0x94, 0xbe,
    0x78, 0xbd, 0xeb, 0x3e, 0x7c, 0xdd, 0xe5, 0x3e, 0xac, 0x94,
    0x94, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x6a,
    0x15, 0xbe, 0x14, 0xab, 0xdd, 0xbe, 0x6c, 0x37, 0xc3, 0xbe,
    0xf4, 0x8e, 0x8b, 0x3e, 0x30, 0xf8, 0x39, 0xbe, 0x00, 0x71,
    0x41, 0xbc, 0xfc, 0x9c, 0xc7, 0x3e, 0xe0, 0xea, 0x08, 0x3d,
    0xc4, 0x2a, 0xcc, 0xbe, 0xe0, 0x63, 0xe7, 0x3d, 0x58, 0x50,
    0xe3, 0xbe, 0xb8, 0x24, 0x54, 0x3e, 0xa8, 0x40, 0xe9, 0xbe,
    0x88, 0xdd, 0xda, 0xbe, 0x84, 0xfa, 0xc6, 0x3e, 0xf0, 0x3f,
    0xc7, 0x3e, 0x88, 0x17, 0xd8, 0x3e, 0x30, 0x52, 0x94, 0xbe,
    0xb0, 0x53, 0x9f, 0xbe, 0x18, 0x12, 0xc2, 0x3e, 0x60, 0x8f,
    0x1e, 0x3e, 0xc4, 0xdc, 0xb8, 0xbe, 0x00, 0xc6, 0x15, 0xbe,
    0xd0, 0xfc, 0xc7, 0xbe, 0x50, 0xf4, 0x4f, 0x3e, 0x38, 0xba,
    0x24, 0xbe, 0x30, 0x9d, 0xbb, 0x3e, 0xd8, 0xe9, 0xad, 0xbe,
    0xc4, 0x03, 0xf8, 0xbe, 0x80, 0x3a, 0xaf, 0xbd, 0x20, 0x78,
    0xb3, 0x3e, 0x40, 0x04, 0x89, 0xbd, 0x54, 0x29, 0xa1, 0x3e,
    0xf8, 0x9c, 0x14, 0xbe, 0x70, 0x1f, 0xb5, 0x3e, 0xec, 0x9f,
    0x9c, 0x3e, 0x40, 0xff, 0xe3, 0x3d, 0x28, 0x55, 0x5f, 0xbe,
    0x18, 0x0f, 0x5a, 0x3e, 0xc4, 0x60, 0xc2, 0x3e, 0x80, 0xf4,
    0x75, 0x3c, 0xb0, 0x20, 0x7b, 0xbe, 0xa4, 0xcf, 0xcc, 0x3e,
    0x30, 0x5b, 0xe1, 0xbe, 0x80, 0x4f, 0x62, 0x3e, 0xd0, 0x3d,
    0xf4, 0xbe, 0x30, 0x19, 0x7b, 0x3e, 0xc0, 0x5b, 0x35, 0x3d,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xca, 0x75, 0xbe,
    0x54, 0x1e, 0x81, 0x3e, 0x58, 0x2e, 0x30, 0xbe, 0x00, 0x2d,
    0x90, 0x3e, 0xc8, 0xa2, 0xcf, 0xbe, 0x80, 0xac, 0x97, 0xbc,
    0x70, 0x09, 0xa0, 0x3e, 0xf4, 0x55, 0xca, 0xbe, 0xf0, 0x86,
    0x92, 0xbe, 0xfc, 0x54, 0x88, 0xbe, 0x28, 0xb6, 0xb2, 0x3e,
    0x88, 0xd7, 0x4a, 0xbe, 0xf0, 0xcc, 0x79, 0xbe, 0xe0, 0xb9,
    0xdc, 0x3d, 0x80, 0x6e, 0x79, 0x3c, 0x44, 0xb6, 0xe8, 0xbe,
    0x00, 0x53, 0x65, 0x3d, 0x70, 0x48, 0xdc, 0xbd, 0xe8, 0x27,
    0x47, 0x3e, 0x68, 0x0f, 0x52, 0x3e, 0x18, 0x6f, 0x34, 0x3e,
    0x40, 0x1e, 0xa9, 0xbe, 0xe0, 0xc7, 0x48, 0x3d, 0xb8, 0xcf,
    0x45, 0xbe, 0x00, 0xac, 0x99, 0xba, 0x88, 0xe1, 0xd3, 0xbe,
    0x4c, 0xec, 0xbe, 0xbe, 0xa8, 0xd6, 0x82, 0xbe, 0xc0, 0x43,
    0xe3, 0xbe, 0xd0, 0x99, 0x8b, 0x3e, 0x10, 0xb0, 0xa8, 0xbd,
    0xb0, 0x02, 0x9d, 0xbe, 0x60, 0x7f, 0x8a, 0xbe, 0x58, 0xf5,
    0x99, 0xbe, 0x90, 0xa5, 0xb7, 0xbd, 0x00, 0x8a, 0xb2, 0xbc,
    0xd8, 0xe8, 0x1f, 0x3e, 0x34, 0x8b, 0xe2, 0x3e, 0x88, 0x57,
    0xc1, 0x3e, 0x60, 0xf5, 0x3a, 0xbe, 0x30, 0x5c, 0x1d, 0x3e,
    0xb8, 0x43, 0xcd, 0x3e, 0xb0, 0x1f, 0x0d, 0xbe, 0xa4, 0x99,
    0xab, 0x3e, 0xa0, 0xb4, 0x78, 0x3e, 0x04, 0xf5, 0xb8, 0xbe,
    0xb8, 0x88, 0x98, 0xbe, 0xbc, 0x62, 0xa0, 0x3e, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xfc, 0x02, 0x9f, 0x3e, 0xdc, 0x9a,
    0xd7, 0x3e, 0x28, 0x41, 0x2a, 0x3e, 0x10, 0x51, 0xf8, 0x3e,
    0xc8, 0xd4, 0x2e, 0x3e, 0xb4, 0xe7, 0xf1, 0x3e, 0x08, 0x7e,
    0x60, 0xbe, 0x4c, 0x4b, 0xb8, 0xbe, 0xc0, 0xc7, 0xd1, 0x3e,
    0xc8, 0x60, 0x2a, 0xbe, 0x20, 0x9c, 0xf6, 0xbd, 0x70, 0x88,
    0xb2, 0x3d, 0x00, 0x9e, 0x97, 0x3c, 0xa0, 0x54, 0xf9, 0xbd,
    0x20, 0x1d, 0x4a, 0x3d, 0x98, 0x5d, 0xd3, 0x3e, 0x38, 0x65,
    0x92, 0x3e, 0x40, 0xc6, 0x16, 0xbd, 0x28, 0x0a, 0x85, 0xbe,
    0x9c, 0x91, 0x92, 0xbe, 0x70, 0x34, 0x8d, 0xbd, 0x60, 0x69,
    0x12, 0x3d, 0x68, 0xcd, 0x82, 0x3e, 0x50, 0x83, 0x08, 0xbe,
    0xe0, 0xfe, 0xb4, 0xbe, 0x40, 0x56, 0x71, 0xbd, 0x80, 0x1e,
    0xba, 0xbe, 0xd0, 0x26, 0x03, 0xbe, 0x00, 0x12, 0x12, 0xbb,
    0x00, 0xc0, 0x9d, 0xba, 0x78, 0x6d, 0x4a, 0x3e, 0x6c, 0xd7,
    0x9a, 0x3e, 0xd0, 0x1b, 0x93, 0xbd, 0xe0, 0x8a, 0x7b, 0xbd,
    0x0c, 0x9c, 0xa6, 0xbe, 0xb0, 0xf3, 0xac, 0x3d, 0x98, 0x4b,
    0x02, 0xbe, 0xe0, 0x60, 0xc5, 0x3d, 0x58, 0x27, 0x9c, 0xbe,
    0x80, 0xcf, 0xa9, 0x3e, 0x4c, 0xa7, 0xa9, 0xbe, 0x14, 0xc5,
    0x97, 0xbe, 0x34, 0x40, 0x9c, 0x3e, 0xc0, 0x9e, 0x5e, 0xbe,
    0x40, 0xca, 0xe4, 0x3e, 0x68, 0x9b, 0xe5, 0xbe, 0x48, 0x39,
    0x41, 0x3e, 0x80, 0xd4, 0x97, 0x3d, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0xf9, 0x72, 0xbe, 0x00, 0x30, 0x80, 0xba,
    0xe8, 0xdf, 0x9e, 0x3e, 0xb8, 0xe1, 0xb9, 0x3e, 0xd8, 0x21,
    0x37, 0x3e, 0x08, 0xa7, 0x54, 0xbe, 0x50, 0x1b, 0x2b, 0x3e,
    0x20, 0xe5, 0xed, 0x3e, 0xcc, 0x82, 0x9d, 0x3e, 0x70, 0x59,
    0x54, 0x3e, 0x10, 0xf8, 0x90, 0x3d, 0x8c, 0x85, 0x8b, 0xbe,
    0x94, 0x44, 0x8c, 0xbe, 0x90, 0x9c, 0x8a, 0x3e, 0x80, 0xdb,
    0x1c, 0x3c, 0x00, 0x20, 0xd8, 0xbc, 0x90, 0xae, 0xf3, 0xbe,
    0x7c, 0xb1, 0xaf, 0x3e, 0x80, 0x64, 0xff, 0x3e, 0xa0, 0xe0,
    0x76, 0xbe, 0x90, 0xcd, 0xb2, 0x3d, 0x7c, 0x89, 0xcc, 0xbe,
    0x80, 0x51, 0x06, 0x3e, 0x44, 0xcb, 0xea, 0xbe, 0xb0, 0xde,
    0x2f, 0x3e, 0x60, 0xd5, 0x48, 0xbd, 0xb0, 0x8b, 0x76, 0xbe,
    0xec, 0xc2, 0xd0, 0x3e, 0x70, 0xc9, 0xc3, 0x3d, 0x04, 0x57,
    0xc2, 0x3e, 0xb4, 0x08, 0xe4, 0x3e, 0x24, 0x1c, 0xa9, 0x3e,
    0x5c, 0x87, 0xd2, 0xbe, 0xe0, 0x5f, 0x3d, 0xbe, 0x00, 0xa3,
    0xca, 0xbc, 0xd8, 0xa7, 0x47, 0xbe, 0xf8, 0x10, 0xe1, 0x3e,
    0xf8, 0x4a, 0x00, 0x3e, 0x38, 0x88, 0x1e, 0x3e, 0xa4, 0xaa,
    0xa4, 0xbe, 0xb0, 0x46, 0x28, 0x3e, 0x68, 0xe1, 0x74, 0xbe,
    0x94, 0x87, 0xd4, 0x3e, 0xf0, 0xc6, 0xd8, 0xbd, 0x74, 0x93,
    0xdb, 0xbe, 0x70, 0x20, 0x9b, 0x3d, 0xc0, 0x5b, 0x8f, 0x3d,
    0xc0, 0x81, 0x86, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x78, 0x56, 0x05, 0xbe, 0x80, 0xff, 0xd7, 0x3e, 0xf0, 0x45,
    0xca, 0x3d, 0xa0, 0xed, 0xc9, 0x3e, 0xc0, 0x84, 0x22, 0x3e,
    0xf0, 0x2c, 0x5e, 0xbe, 0x88, 0xa4, 0x32, 0xbe, 0xf0, 0x0b,
    0x54, 0xbe, 0xe0, 0x5e, 0xe2, 0x3d, 0x30, 0x5f, 0xc2, 0x3e,
    0x10, 0x9c, 0xfa, 0xbe, 0xec, 0x9f, 0xca, 0x3e, 0xd0, 0x5a,
    0xf0, 0x3e, 0x50, 0x43, 0xe3, 0xbe, 0xc8, 0x11, 0x79, 0xbe,
    0x08, 0x8e, 0xc4, 0xbe, 0x28, 0x73, 0xd5, 0x3e, 0xe0, 0xd7,
    0x26, 0xbd, 0x40, 0x56, 0x87, 0xbd, 0xc8, 0x30, 0x1a, 0xbe,
    0x84, 0x1c, 0xac, 0x3e, 0x60, 0x1e, 0xb0, 0xbd, 0x4c, 0x41,
    0xb6, 0x3e, 0x90, 0x6b, 0x2f, 0xbe, 0x68, 0xd1, 0x28, 0xbe,
    0x50, 0xdc, 0xaa, 0xbd, 0xa0, 0x9a, 0x8a, 0xbd, 0x68, 0x6a,
    0xcf, 0x3e, 0x50, 0x56, 0x87, 0xbd, 0xd0, 0x3a, 0xe3, 0xbd,
    0x00, 0x14, 0x75, 0xbc, 0x40, 0x51, 0xfb, 0x3c, 0x40, 0x13,
    0x6e, 0xbd, 0x34, 0x43, 0xc3, 0x3e, 0x24, 0x09, 0xa4, 0x3e,
    0xe4, 0xea, 0xcd, 0xbe, 0xb0, 0xb3, 0x85, 0x3e, 0x30, 0x6c,
    0xb6, 0xbe, 0x00, 0x46, 0x4e, 0x3b, 0xb8, 0x5e, 0x9f, 0x3e,
    0xe0, 0xda, 0x58, 0xbe, 0xbc, 0xc4, 0xa4, 0x3e, 0x4c, 0x33,
    0xfd, 0xbe, 0x0c, 0xdf, 0xfa, 0x3e, 0x40, 0x7a, 0x8f, 0xbe,
    0xa0, 0xc0, 0x65, 0xbe, 0x00, 0x56, 0xbe, 0x3e, 0xa8, 0x41,
    0x7a, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x46,
    0x92, 0xbe, 0x9c, 0x20, 0xd4, 0x3e, 0x18, 0xf3, 0xec, 0x3e,
    0x8c, 0x78, 0xd5, 0xbe, 0xf4, 0xc5, 0x81, 0xbe, 0x34, 0x2d,
    0xcf, 0xbe, 0xb8, 0x67, 0xcc, 0x3e, 0x64, 0x43, 0xd0, 0xbe,
    0x00, 0xec, 0xd4, 0xba, 0xc8, 0x87, 0xb6, 0xbe, 0x4c, 0x5a,
    0xc2, 0xbe, 0x68, 0x28, 0x33, 0xbe, 0xa0, 0x07, 0xd9, 0x3e,
    0x90, 0x16, 0x6c, 0xbe, 0xc4, 0x02, 0xa7, 0xbe, 0xcc, 0x68,
    0xc1, 0x3e, 0x00, 0x13, 0xb6, 0x3c, 0x88, 0x98, 0x8d, 0x3e,
    0x80, 0x8a, 0xd5, 0x3e, 0x80, 0xc1, 0x94, 0x3d, 0xa8, 0x04,
    0xa6, 0x3e, 0xf8, 0xcd, 0xf8, 0xbe, 0xcc, 0x83, 0xd0, 0x3e,
    0xa8, 0x31, 0x6d, 0x3e, 0xa8, 0x68, 0xc6, 0x3e, 0xf8, 0x48,
    0xb5, 0xbe, 0x84, 0xc5, 0xe2, 0xbe, 0x20, 0x47, 0x2e, 0xbe,
    0x1c, 0x22, 0xb5, 0x3e, 0x18, 0x55, 0x89, 0xbe, 0xa8, 0x6e,
    0xaf, 0xbe, 0xe8, 0x71, 0x38, 0x3e, 0x40, 0x4a, 0x81, 0xbd,
    0xac, 0x7a, 0xb3, 0x3e, 0xe0, 0xbd, 0x80, 0xbe, 0x7c, 0xe9,
    0xa9, 0xbe, 0xd0, 0x7e, 0x99, 0xbe, 0x84, 0x9a, 0xee, 0xbe,
    0x1c, 0xfa, 0xe8, 0xbe, 0xb8, 0x03, 0xcd, 0x3e, 0xb8, 0x07,
    0x33, 0xbe, 0x5c, 0x8d, 0xda, 0xbe, 0xb0, 0xac, 0x83, 0xbe,
    0x34, 0x32, 0xba, 0xbe, 0x74, 0x8c, 0xe4, 0xbe, 0xcc, 0x4a,
    0xbe, 0xbe, 0xa4, 0x87, 0x9a, 0x3e, 0x00, 0xab, 0x76, 0x3c,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0xe1, 0x7f, 0xbe,
    0x58, 0xe6, 0xcf, 0xbe, 0x20, 0x73, 0x25, 0xbd, 0x00, 0x3a,
    0x59, 0xbc, 0x80, 0x71, 0x97, 0x3e, 0xf0, 0x8a, 0xe7, 0x3d,
    0x3c, 0x31, 0x9d, 0x3e, 0xf0, 0xb4, 0xd5, 0xbe, 0x40, 0x75,
    0xec, 0x3c, 0xe8, 0xaf, 0x7b, 0x3e, 0x28, 0x00, 0x96, 0x3e,
    0x80, 0xbc, 0x19, 0xbc, 0x68, 0xb8, 0x08, 0x3e, 0xa4, 0x0a,
    0xa7, 0x3e, 0x18, 0x14, 0xc9, 0xbe, 0x80, 0xf3, 0x84, 0x3c,
    0x90, 0xf3, 0xbb, 0x3d, 0xb0, 0x9f, 0xe3, 0xbd, 0x20, 0x90,
    0x59, 0x3e, 0x10, 0x89, 0xca, 0xbe, 0x30, 0x2b, 0x7a, 0x3e,
    0xa8, 0x3c, 0x83, 0x3e, 0x00, 0xec, 0x63, 0x3b, 0x94, 0xcc,
    0x93, 0xbe, 0x50, 0x01, 0x8a, 0x3e, 0x48, 0x6e, 0x94, 0x3e,
    0x8c, 0x55, 0x9d, 0xbe, 0x88, 0x36, 0x50, 0x3e, 0x08, 0xec,
    0x24, 0x3e, 0x04, 0x7c, 0x91, 0x3e, 0x00, 0x2d, 0xac, 0x3e,
    0x50, 0xb0, 0x15, 0xbe, 0x90, 0x68, 0xc0, 0x3e, 0xd8, 0xe1,
    0xe7, 0x3e, 0x24, 0x3a, 0x90, 0xbe, 0x88, 0xef, 0x72, 0xbe,
    0x68, 0x8d, 0xb8, 0x3e, 0x98, 0xfa, 0x35, 0xbe, 0xb0, 0xd6,
    0xd4, 0x3d, 0x50, 0x21, 0xf2, 0xbe, 0xbc, 0xb3, 0x93, 0xbe,
    0xdc, 0x4e, 0xce, 0x3e, 0xf8, 0x79, 0xd9, 0xbe, 0xfc, 0x79,
    0xd5, 0xbe, 0x74, 0x78, 0xa4, 0xbe, 0x6c, 0xee, 0xbd, 0xbe,
    0x24, 0x48, 0x97, 0x3e, 0x20, 0x1c, 0x13, 0xbe, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xd0, 0xef, 0xb8, 0xbd, 0xb4, 0x09,
    0x50, 0x3e, 0x20, 0x2d, 0xb1, 0x3e, 0x6e, 0xe6, 0x07, 0xbe,
    0x20, 0x0e, 0x80, 0xbc, 0xda, 0xf7, 0x92, 0x3e, 0x5e,
    0x7d, 0x98, 0x3e, 0x2e, 0x90, 0x14, 0xbf, 0x16, 0x18,
    0xf8, 0x3e, 0xe3, 0x7d, 0x8f, 0xbe, 0x2f, 0x59, 0xb9,
    0xbe, 0x93, 0xe7, 0xc4, 0xbe, 0x00, 0x00, 0x00, 0x00
  };

  return AI_HANDLE_PTR(s_nod_weights);

}

