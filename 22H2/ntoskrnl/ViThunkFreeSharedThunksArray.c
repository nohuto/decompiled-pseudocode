/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x1409C2458
 * Callers:
 *     VfThunkAddTargetNotify @ 0x1409C2100 (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x1409C21D8 (ViThunkCreateSharedExportInformation.c)
 *     VfThunkRemoveTargetNotify @ 0x1409C24F4 (VfThunkRemoveTargetNotify.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
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
