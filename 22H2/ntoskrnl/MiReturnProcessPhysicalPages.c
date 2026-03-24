/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x1408D7710
 * Callers:
 *     MiCommitExistingVad @ 0x140218D50 (MiCommitExistingVad.c)
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MiFreePhysicalPageChain @ 0x14054BB28 (MiFreePhysicalPageChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), -a2);
}
