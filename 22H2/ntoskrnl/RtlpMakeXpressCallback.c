/*
 * XREFs of RtlpMakeXpressCallback @ 0x1405B49C8
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x140372640 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzStandard @ 0x1403888E0 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x1405B2874 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x1405B2FC8 (RtlCompressBufferXpressLzMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x1405B36D4 (RtlDecompressBufferXpressHuffProgress.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x1405B4098 (RtlDecompressBufferXpressLzProgress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
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
