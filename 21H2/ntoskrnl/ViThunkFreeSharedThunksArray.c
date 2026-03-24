/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x1409C2448
 * Callers:
 *     VfThunkAddTargetNotify @ 0x1409C20F0 (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x1409C21C8 (ViThunkCreateSharedExportInformation.c)
 *     VfThunkRemoveTargetNotify @ 0x1409C24E4 (VfThunkRemoveTargetNotify.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
