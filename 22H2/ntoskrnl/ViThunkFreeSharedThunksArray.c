/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x140ABDF50
 * Callers:
 *     VfThunkRemoveTargetNotify @ 0x140ABDE78 (VfThunkRemoveTargetNotify.c)
 *     VfThunkAddTargetNotify @ 0x140ABDF7C (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x140ABE010 (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall ViThunkFreeSharedThunksArray(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x54496656u);
    *a1 = 0LL;
  }
}
