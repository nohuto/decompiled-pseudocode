/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C017F900
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0059910 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C005A234 (--1RFONTOBJ@@QEAA@XZ.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall RFONTOBJ::vReleaseCache(RFONTOBJ *this)
{
  char *v2; // rdx
  struct _ERESOURCE *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = *(char **)(*(_QWORD *)this + 616LL);
  if ( v2 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
    *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 616LL) = 0LL;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 504LL));
  v3 = *(struct _ERESOURCE **)(*(_QWORD *)this + 504LL);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    PsLeavePriorityRegion(v5, v4);
  }
}
