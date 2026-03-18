/*
 * XREFs of VidSchResumeAdapter @ 0x1C0088380
 * Callers:
 *     VidSchiDeferredVisibilityThread @ 0x1C00012D0 (VidSchiDeferredVisibilityThread.c)
 *     VidSchFlushAdapter @ 0x1C01070F0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0002864 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 */

__int64 __fastcall VidSchResumeAdapter(__int64 a1, char a2)
{
  PsIsSystemThread(KeGetCurrentThread());
  if ( !a2 )
    VidSchiSuspendResumeDevicesForPowerTransition(a1, 0);
  return 0LL;
}
