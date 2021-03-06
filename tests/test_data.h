#define HYCON_HASH_LENGTH 32

/* ------------------------------------------------------------------------- */
/* ---                           INPUTS                                  --- */
/* ------------------------------------------------------------------------- */

#define PUB_KEY_LENGTH 32
uint8_t PUB_KEYS[][PUB_KEY_LENGTH] =
	{{0x69, 0xd0, 0x1e, 0xe7, 0xfb, 0xc8, 0xe3, 0xa3,
	  0x36, 0xf5, 0x7b, 0xf1, 0xb9, 0xaa, 0x12, 0x11,
	  0xce, 0x2b, 0xac, 0xd1, 0xcb, 0x6d, 0xa9, 0xa4,
	  0x8b, 0x2a, 0xfc, 0x22, 0x6c, 0x76, 0x9d, 0xa2},
	 {0x02, 0x45, 0xc4, 0xd7, 0x49, 0x89, 0xf4, 0x2e,
	  0xbb, 0xa2, 0xfa, 0x8f, 0xfa, 0xf6, 0x17, 0x28,
	  0xae, 0xe2, 0x61, 0xea, 0x3e, 0x65, 0x67, 0xca,
	  0x05, 0x62, 0xe1, 0xd5, 0x47, 0xf1, 0x6f, 0x9d}};

/* ------------------------------------------------------------------------- */
/* ---                     OUTPUTS (expected values)                     --- */
/* ------------------------------------------------------------------------- */

uint8_t HASH_TXS[][HYCON_HASH_LENGTH] =
	{{0x12, 0x14, 0xdb, 0x66, 0x12, 0xb3, 0x09, 0xd2, 0x57, 0xa2,
	  0xae, 0xbd, 0x59, 0xb7, 0x44, 0x5a, 0x90, 0x0e, 0xd7, 0x75,
	  0xd9, 0x21, 0x18, 0x90, 0x4e, 0x20, 0x64, 0x28, 0xd2, 0x09},
	 {0x0a, 0x14, 0x62, 0x20, 0xef, 0xa7, 0xb2, 0xbd, 0x85, 0x50,
	  0xc3, 0x3d, 0xa0, 0x79, 0x6c, 0x77, 0x91, 0x70, 0xd3, 0xfb,
	  0x9d, 0xc2, 0x12, 0x14, 0xe1, 0x61, 0x12, 0x4d, 0x4a, 0xa4}};
