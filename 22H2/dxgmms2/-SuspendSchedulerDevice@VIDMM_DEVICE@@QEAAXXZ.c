/*
 * XREFs of ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0089A04
 * Callers:
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0089554 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00ABE50 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B4D1C (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E7CC8 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00EC158 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00EC34C (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x1C0002D30 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VIDMM_DEVICE::SuspendSchedulerDevice(VIDMM_DEVICE *this)
{
  struct _VIDSCH_DEVICE *v1; // rcx

  v1 = (struct _VIDSCH_DEVICE *)*((_QWORD *)this + 4);
  if ( v1 )
    VidSchSuspendResumeDevice(v1, 1, 0, 0);
}
