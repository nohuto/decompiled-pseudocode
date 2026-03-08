/*
 * XREFs of MiFreeRotateVadEvent @ 0x140A2E600
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x1406ECE8C (MiReleaseVadEventBlocks.c)
 *     MiFreeRotateView @ 0x140A2E638 (MiFreeRotateView.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140287B5C (MiFreeInPageSupportBlock.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402955D0 (PsReturnProcessNonPagedPoolQuota.c)
 */

__int64 __fastcall MiFreeRotateVadEvent(__int64 a1)
{
  struct _SLIST_ENTRY *v1; // rcx

  v1 = *(struct _SLIST_ENTRY **)(a1 + 8);
  if ( v1 )
    MiFreeInPageSupportBlock(v1);
  return PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 520LL);
}
