/*
 * XREFs of RtlpMakeXpressCallback @ 0x1405B2518
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x14036E3C0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzStandard @ 0x140385A30 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x1405B03C4 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x1405B0B18 (RtlCompressBufferXpressLzMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x1405B1224 (RtlDecompressBufferXpressHuffProgress.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x1405B1BE8 (RtlDecompressBufferXpressLzProgress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall RtlpMakeXpressCallback(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  result = a3 + *(unsigned int *)(a1 + 16);
  if ( a2 < result )
    return a2;
  return result;
}
