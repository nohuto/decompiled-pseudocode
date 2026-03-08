/*
 * XREFs of MI_PROTO_FORMAT_COMBINED @ 0x1402B0EB0
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     MiCountSystemImageCommitment @ 0x1402B0C2C (MiCountSystemImageCommitment.c)
 *     MiWalkVaRange @ 0x1402CECEC (MiWalkVaRange.c)
 *     MiSharedVaToPartition @ 0x1402E21A4 (MiSharedVaToPartition.c)
 *     MiGetPageProtection @ 0x14031C310 (MiGetPageProtection.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiComputePageCommitment @ 0x140345CE0 (MiComputePageCommitment.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406157F0 (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x140327240 (MiIsPrototypePteVadLookup.c)
 */

bool __fastcall MI_PROTO_FORMAT_COMBINED(__int64 a1)
{
  __int16 v1; // r8

  return !(unsigned int)MiIsPrototypePteVadLookup(a1) && (v1 & 0x800) != 0LL;
}
