/*
 * XREFs of HvlDeleteProcessor @ 0x14093E28C
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     HvlpGetRegister64 @ 0x1405468E0 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x140546A30 (HvlpSetRegister64.c)
 *     HvlpFreeOverlayPages @ 0x140547440 (HvlpFreeOverlayPages.c)
 *     MmFreeIndependentPages @ 0x14087B250 (MmFreeIndependentPages.c)
 */

void __fastcall HvlDeleteProcessor(struct _KPRCB *a1)
{
  void *VirtualApicAssist; // rcx
  void *SchedulerAssist; // rcx
  unsigned __int64 HypercallCachedPages; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( a1->VirtualApicAssist )
  {
    if ( a1 == KeGetCurrentPrcb() )
    {
      HvlpGetRegister64(589843LL, &v5);
      HvlpSetRegister64(589843LL, v5 & 0xFFFFFFFFFFFFFFFEuLL);
    }
    VirtualApicAssist = a1->VirtualApicAssist;
    if ( (HvlpFlags & 2) != 0 )
      MmUnmapIoSpace(VirtualApicAssist, 1uLL);
    else
      HvlpFreeOverlayPages(VirtualApicAssist);
    a1->VirtualApicAssist = 0LL;
  }
  SchedulerAssist = a1->SchedulerAssist;
  if ( SchedulerAssist )
    HvlpFreeOverlayPages(SchedulerAssist);
  HypercallCachedPages = (unsigned __int64)a1->HypercallCachedPages;
  if ( HypercallCachedPages )
    MmFreeIndependentPages(HypercallCachedPages, 0x5000uLL);
}
