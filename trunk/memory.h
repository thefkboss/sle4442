/*
 * Dump from card with 10 Euro credit
 */

unsigned char memoryMain[256] = {
		0xA2, 0x13, 0x10, 0x91, 0x46, 0x0B, 0x81, 0x15, 0x42, 0x45, 0x00, 0x30, 0x03, 0x09, 0xED, 0xEA, 0x40, 0x12, 0xFF, 0xFF, 0xFF, 0xD2, 0x76,
		0x00, 0x00, 0x63, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x30, 0x30, 0x32, 0x37, 0x33, 0x38, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00, 0x0A,
		0x00, 0xBC, 0x64, 0x64, 0x00, 0x01, 0x00, 0x35, 0xF8, 0xD6, 0x19, 0x00, 0x00, 0x02, 0xFF, 0xFF, 0xFF, 0xFF, 0x11, 0x1A, 0x7C, 0x02, 0x05,
		0x10, 0x08, 0x34, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x02, 0x66, 0x09, 0x01, 0x14, 0x10, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x10, 0xDA,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF };

bool memoryProtected[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1 };

unsigned char memorySecurity[] = { 0b00000111, 0xCD, 0x95, 0xE4 }; // Last 3 bytes = PSC
