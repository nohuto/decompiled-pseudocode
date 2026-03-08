/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x140AB9EAC
 * Callers:
 *     VfThunkRemoveTargetNotify @ 0x140AB9E74 (VfThunkRemoveTargetNotify.c)
 *     VfThunkAddTargetNotify @ 0x140AB9F4C (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x140AB9FE0 (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
