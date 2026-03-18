/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x140A7C18C
 * Callers:
 *     VfThunkAddTargetNotify @ 0x140A7C024 (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x140A7C0B8 (ViThunkCreateSharedExportInformation.c)
 *     VfThunkRemoveTargetNotify @ 0x140A7C2C4 (VfThunkRemoveTargetNotify.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
