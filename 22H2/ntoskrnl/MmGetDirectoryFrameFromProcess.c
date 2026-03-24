/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x140630F68
 * Callers:
 *     PfpLogApplicationEvent @ 0x14026E010 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
