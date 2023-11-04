int Screen__decompressTony(byte *src, int compSize, byte *dest, int destsz);
int Screen__decompressRLE7(byte *src, int compSize, byte *dest, int destsz);
int Screen__decompressRLE0(byte *src, int compSize, byte *dest, int destsz);
int Screen__decompressHIF(uint8 *src, uint8 *dest);
uint32 decompressSPCN(byte *src, byte *dst, uint32 dstsize);
int32 RncDecoder__unpackM1(const void *input, /*uint16*/ uint32 packLen, void *output, uint32 unpackLen);
int32 RncDecoder__unpackM2(const void *input, uint32 packLen, void *output, uint32 unpackLen);
int CineUnpacker__unpack(const byte *src, uint srcLen, byte *dst, uint dstLen);
int delphineUnpack(byte *dst, int datasize, byte *src, int len);
int DataIO__unpackChunk(byte *src, byte *dest, uint32 size);
int DecompressorHuffman__unpack(byte *src, byte *dest, uint32 nPacked, uint32 nUnpacked);
int DecompressorLZW__unpackLZW(byte *src, byte *dest, uint32 nPacked, uint32 nUnpacked);
int DecompressorLZW__unpackLZW1(byte *src, byte *dest, uint32 nPacked, uint32 nUnpacked);
int DecompressorLZW__reorderPic(byte *src, byte *dest, int dsize);
int DecompressorLZW__reorderView(byte *src, byte *dest);
int DecompressorLZS__unpack(byte *src, byte *dest, uint32 nPacked, uint32 nUnpacked);
int decodeSRLE(uint8 *dst, byte *dataStream, int unpackedSize);
int Screen__unpackRle(byte *source, byte *dest, int32 size);
uint16 PS2Icon__decompressData(byte *in, int insz, byte *out, int outsz);
int LZWDecoder__lzwExpand(uint8 *in, uint8 *out, int32 len);
int uncompressPlane(const byte *plane, byte *outptr, int length);
int unbarchive(byte *data, int datasz, byte *dst);
int32 Screen__decompressRLE256(byte *dst, byte *src, int32 decompSize);
uint32 Screen__decompressHIF_other(byte *src, byte *dst/*, uint32 *skipData*/);
int FileExpander__process(uint8 *dst, uint8 *src, uint32 outsize, uint32 compressedSize);
int SoundTownsPC98_v2__voicePlay(byte *src, byte *dst, int outsize);
int VQAMovie__decodeSND1(byte *inbuf, uint32 insize, byte *outbuf, uint32 outsize);
int Background__decodeComponent(byte *in, uint32 inSize, byte *out, uint32 outSize);
int AnimFrame__decomp34(byte *in, byte *p, uint32 size, byte mask, byte shift); /* decomp34(in, f, 0x7, 3) | decomp34(in, f, 0xf, 4) */
int AnimFrame__decomp5(byte *in, byte *p, uint32 size);
int AnimFrame__decomp7(byte *in, byte *p, uint32 size);
int AnimFrame__decompFF(byte *in, byte *p, uint32 size);
uint32 SavegameStream__readCompressed(byte *in, void *dataPtr, uint32 dataSize);
int32 dimuse_compDecode(byte *src, byte *dst);
int32 decompressADPCM(byte *compInput, byte *compOutput, int channels);
int MohawkBitmap__unpackRiven(byte *data, int datasz, byte *dst);
int MohawkBitmap__drawRLE8(byte *in, byte *out, int remaining);
int LzhDecompressor__decompress(byte *source, byte *dest, uint32 sourceLen, uint32 destLen);
uint32 AnimationDecoder__decode_data(byte *src, int srcsz, byte *dest);
int MusicPlayerMac_t7g__decompressMidi(byte *stream, int streamsz, byte *output, int size);
int StuffItArchive__decompress14(byte *src, int srcsz, byte *dst, uint32 uncompressedSize);
int decompressIconPlanar(byte *icon_pln, int outsz, byte *src);
int DrasculaEngine__decodeRLE(byte* srcPtr, byte* dstPtr/*, uint16 pitch*/);
int bompDecodeLine(byte *dst, const byte *src, int len);
int bompDecodeLineReverse(byte *dst, const byte *src, int len);
int ToucheEngine__res_decodeScanLineImageRLE(uint8 *_fData, uint8 *dst, int lineWidth);
int AnimationPlayer__rleDecode(const byte *pSrc, byte *pDest, int size);
int Graphics__decodeRLE(uint8 *dst, int size, const uint8 *src);
int MSRLEDecoder__decode8(byte *stream, int streamsz, byte *data, int size);
int unarj(byte *_compressed, int _compressed_size, byte *_outstream, int _outstream_size, int method4);
int FabDecompressor__decompress(const byte *srcData, int srcSize, byte *destData, int destSize);