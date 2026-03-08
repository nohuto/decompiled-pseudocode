/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x140A40FBC
 * Callers:
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiFreePhysicalPageChain @ 0x140647BC4 (MiFreePhysicalPageChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), -a2);
}
