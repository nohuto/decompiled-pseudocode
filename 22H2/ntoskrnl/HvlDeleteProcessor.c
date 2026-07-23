/*
 * XREFs of HvlDeleteProcessor @ 0x14088E710
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BA6C8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x1402EA680 (MmUnmapIoSpace.c)
 *     HvlpFreeOverlayPages @ 0x14036C920 (HvlpFreeOverlayPages.c)
 *     HvlpGetRegister64 @ 0x1404F9E90 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1404F9F80 (HvlpSetRegister64.c)
 *     MmFreeIndependentPages @ 0x140763BF0 (MmFreeIndependentPages.c)
 */

void __fastcall HvlDeleteProcessor(struct _KPRCB *a1, SIZE_T a2, MEMORY_CACHING_TYPE a3)
{
  void *VirtualApicAssist; // rcx
  void *SchedulerAssist; // rcx
  unsigned __int64 HypercallCachedPages; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  VirtualApicAssist = a1->VirtualApicAssist;
  if ( VirtualApicAssist )
  {
    if ( a1 == KeGetCurrentPrcb() )
    {
      HvlpGetRegister64(589843, &v7);
      HvlpSetRegister64(589843, v7 & 0xFFFFFFFFFFFFFFFEuLL);
      VirtualApicAssist = a1->VirtualApicAssist;
    }
    if ( (HvlpFlags & 2) != 0 )
      MmUnmapIoSpace(VirtualApicAssist, 1uLL);
    else
      HvlpFreeOverlayPages(VirtualApicAssist, a2, a3);
    a1->VirtualApicAssist = 0LL;
  }
  SchedulerAssist = a1->SchedulerAssist;
  if ( SchedulerAssist )
    HvlpFreeOverlayPages(SchedulerAssist, a2, a3);
  HypercallCachedPages = (unsigned __int64)a1->HypercallCachedPages;
  if ( HypercallCachedPages )
    MmFreeIndependentPages(HypercallCachedPages, 0x5000uLL);
}
