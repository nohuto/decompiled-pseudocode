/*
 * XREFs of ?FreeTargetPool@CFrameStats@CConnection@DirectComposition@@IEAAXXZ @ 0x1C00BFC88
 * Callers:
 *     ??1CFrameStats@CConnection@DirectComposition@@QEAA@XZ @ 0x1C00BFC70 (--1CFrameStats@CConnection@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
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
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
      *((_QWORD *)this + 5) = 0LL;
    }
  }
}
