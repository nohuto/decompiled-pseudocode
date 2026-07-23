/*
 * XREFs of MiFreeRotateVadEvent @ 0x1406A4400
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x14063AAB0 (MiReleaseVadEventBlocks.c)
 *     MiFreeRotateView @ 0x1408C85CC (MiFreeRotateView.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14027CF5C (MiFreeInPageSupportBlock.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140298A60 (PsReturnProcessNonPagedPoolQuota.c)
 */

__int64 __fastcall MiFreeRotateVadEvent(__int64 a1)
{
  _SLIST_ENTRY *v1; // rcx

  v1 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( v1 )
    MiFreeInPageSupportBlock(v1);
  return PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 520LL);
}
