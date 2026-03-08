/*
 * XREFs of KdDecodeDataBlock @ 0x140564DA0
 * Callers:
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x140A994B8 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     KdCopyDataBlock @ 0x140564CD0 (KdCopyDataBlock.c)
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
