/*
 * XREFs of ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00E1EFC
 * Callers:
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C0086780 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C0087620 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x1C0012E60 (VidSchSuspendResumeDevice.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::EndVirtualCopyExclusiveAccess(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v6; // rdi
  struct _LIST_ENTRY *v7; // rbx

  if ( byte_1C00769C1 < 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerExit, a3, 8018);
  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    v6 = Flink;
    v7 = Flink;
    Flink = Flink->Flink;
    VidSchSuspendResumeDevice((_KEVENT *)v6[-10].Flink, 0, 0, 2);
    v7->Flink = 0LL;
    v6->Blink = 0LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 11132);
  ExReleasePushLockSharedEx((char *)this + 44512, 0LL);
  KeLeaveCriticalRegion();
}
