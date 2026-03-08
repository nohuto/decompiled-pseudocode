/*
 * XREFs of ?VidMmSuspendResumeDevice@@YAXPEAVVIDMM_DEVICE@@_N1@Z @ 0x1C00013D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SuspendResume@VIDMM_DEVICE@@QEAAX_N0@Z @ 0x1C0087C30 (-SuspendResume@VIDMM_DEVICE@@QEAAX_N0@Z.c)
 */

void __fastcall VidMmSuspendResumeDevice(struct VIDMM_DEVICE *a1, bool a2, bool a3)
{
  VIDMM_DEVICE::SuspendResume(a1, a2, a3);
}
