/*
 * XREFs of KdDecodeDataBlock @ 0x140510744
 * Callers:
 *     KeBugCheck2 @ 0x140516A10 (KeBugCheck2.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1409AD698 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     KdCopyDataBlock @ 0x140510688 (KdCopyDataBlock.c)
 */

__int64 KdDecodeDataBlock()
{
  __int64 result; // rax

  if ( KdpDataBlockEncoded )
  {
    result = KdCopyDataBlock(&KdDebuggerDataBlock);
    KdpDataBlockEncoded = 0;
  }
  return result;
}
