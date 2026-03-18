/*
 * XREFs of ?FreeTargetPool@CFrameStats@CConnection@DirectComposition@@IEAAXXZ @ 0x1C0098328
 * Callers:
 *     ?SetCurrentStats@CFrameStats@CConnection@DirectComposition@@QEAA_NPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1C0081A9C (-SetCurrentStats@CFrameStats@CConnection@DirectComposition@@QEAA_NPEAUtagCOMPOSITION_CONFIRM_FRA.c)
 *     ??1CFrameStats@CConnection@DirectComposition@@QEAA@XZ @ 0x1C0098310 (--1CFrameStats@CConnection@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CConnection::CFrameStats::FreeTargetPool(
        DirectComposition::CConnection::CFrameStats *this)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)this + 5);
  if ( v1 )
  {
    if ( v1 != (char *)this + 48 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v1);
      *((_QWORD *)this + 5) = 0LL;
    }
  }
}
