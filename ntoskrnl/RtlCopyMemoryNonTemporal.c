/*
 * XREFs of RtlCopyMemoryNonTemporal @ 0x140420E80
 * Callers:
 *     MmCopyToCachedPage @ 0x14021DBE0 (MmCopyToCachedPage.c)
 *     RtlWriteNonVolatileMemory @ 0x1405AD540 (RtlWriteNonVolatileMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1405B37C0 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlCopyMemoryNonTemporal(void *Destination, const void *Source, SIZE_T Length)
{
  signed __int64 v3; // rdx
  char *v4; // r8
  const char *v5; // rax
  __int64 v6; // r9
  signed __int64 v7; // rax
  __m128i v8; // xmm1
  __m128i v9; // xmm1
  bool v10; // cf
  SIZE_T v11; // r8
  bool v12; // cc

  v3 = (_BYTE *)Source - (_BYTE *)Destination;
  if ( Length >= 0x4F )
  {
    if ( ((unsigned __int8)Destination & 0xF) != 0 )
    {
      v4 = (char *)Destination + Length;
      _mm_stream_si32((int *)Destination, *(_QWORD *)((char *)Destination + v3));
      if ( ((unsigned __int8)Destination & 8) == 0 )
        _mm_stream_si32((int *)Destination + 2, *(_QWORD *)((char *)Destination + v3 + 8));
      Destination = (void *)(((unsigned __int64)Destination + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      Length = v4 - (_BYTE *)Destination;
    }
    do
    {
      v5 = (const char *)Destination;
      v6 = 16LL;
      v10 = Length < 0x400;
      Length -= 1024LL;
      if ( v10 )
      {
        v11 = Length + 1024;
        v6 = v11 >> 6;
        Length = v11 & 0x3F;
      }
      do
      {
        _mm_prefetch(&v5[v3], 0);
        v5 += 64;
        --v6;
      }
      while ( v6 );
      v7 = v5 - (_BYTE *)Destination;
      do
      {
        v8 = _mm_loadu_si128((const __m128i *)((char *)Destination + v3 + 16));
        _mm_stream_si128((__m128i *)Destination, _mm_loadu_si128((const __m128i *)((char *)Destination + v3)));
        _mm_stream_si128((__m128i *)Destination + 1, v8);
        Destination = (char *)Destination + 64;
        v9 = _mm_loadu_si128((const __m128i *)((char *)Destination + v3 - 16));
        _mm_stream_si128((__m128i *)Destination - 2, _mm_loadu_si128((const __m128i *)((char *)Destination + v3 - 32)));
        _mm_stream_si128((__m128i *)Destination - 1, v9);
        v7 -= 64LL;
      }
      while ( v7 );
    }
    while ( Length >= 0x40 );
  }
  else if ( Length < 8 )
  {
    for ( ; Length; --Length )
    {
      *(_BYTE *)Destination = *((_BYTE *)Destination + v3);
      Destination = (char *)Destination + 1;
    }
    return;
  }
  while ( 1 )
  {
    v12 = Length <= 8;
    Length -= 8LL;
    if ( v12 )
      break;
    _mm_stream_si32((int *)Destination, *(_QWORD *)((char *)Destination + v3));
    Destination = (char *)Destination + 8;
  }
  _mm_stream_si32((int *)((char *)Destination + Length), *(_QWORD *)((char *)Destination + Length + v3));
  _mm_sfence();
}
