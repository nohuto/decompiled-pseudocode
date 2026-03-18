/*
 * XREFs of ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00C5E70
 * Callers:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C009E8D0 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C01C8E60 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall CTouchProcessor::CleanupCoalesceInfo(CTouchProcessor *this)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)this + 17);
  if ( v1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v1);
    *((_QWORD *)this + 17) = 0LL;
    *((_DWORD *)this + 32) = 0;
  }
}
