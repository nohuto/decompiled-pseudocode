/*
 * XREFs of KiFreeLocalSharedReadyQueue @ 0x14037F864
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     KiConfigureSchedulingInformation @ 0x140A8B1B4 (KiConfigureSchedulingInformation.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall KiFreeLocalSharedReadyQueue(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 35968);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 35968) = 0LL;
  }
}
