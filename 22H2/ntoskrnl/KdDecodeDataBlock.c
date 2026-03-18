/*
 * XREFs of KdDecodeDataBlock @ 0x140567240
 * Callers:
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x140A9C5F8 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     KdCopyDataBlock @ 0x140567170 (KdCopyDataBlock.c)
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
