__int64 __fastcall RtlCompressBufferProgress(
        __int16 a1,
        _BYTE *a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 a5,
        unsigned int *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int16 v9; // r11
  __int16 v10; // cx

  v9 = (unsigned __int8)a1;
  v10 = a1 & 0xFF00;
  if ( v9 == 3 )
  {
    if ( !v10 )
      return RtlCompressBufferXpressLzStandard(
               a2,
               a3,
               a4,
               0x10000u,
               a6,
               (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL,
               a8,
               a9,
               0x1000u);
    if ( v10 == 256 )
      return RtlCompressBufferXpressLzMax(
               (int)a2,
               a3,
               (int)a4,
               0x10000,
               (__int64)a6,
               (void *)((a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL),
               a8,
               a9,
               4096);
  }
  else if ( v9 == 4 )
  {
    if ( !v10 )
      return RtlCompressBufferXpressHuffStandard(
               (unsigned __int64)a2,
               a3,
               (__int64)a4,
               0x10000u,
               a6,
               (unsigned __int8 *)((a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL),
               a8,
               a9,
               0x1000u);
    if ( v10 == 256 )
      return RtlCompressBufferXpressHuffMax(
               (int)a2,
               a3,
               (int)a4,
               0x10000,
               (__int64)a6,
               (void *)((a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL),
               a8,
               a9,
               4096);
  }
  return 3221226079LL;
}
