/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x1407E5140
 * Callers:
 *     PfpLogApplicationEvent @ 0x14035B9B8 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
