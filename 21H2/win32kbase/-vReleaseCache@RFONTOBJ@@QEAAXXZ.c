/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0169AB0
 * Callers:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0087050 (--1RFONTOBJ@@QEAA@XZ.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall RFONTOBJ::vReleaseCache(RFONTOBJ *this, __int64 a2, int a3)
{
  __int64 v3; // rdx
  char *v5; // rax
  struct _ERESOURCE *v6; // rcx
  __int64 v7; // rcx

  v3 = *(_QWORD *)this;
  v5 = *(char **)(*(_QWORD *)this + 616LL);
  if ( v5 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v5);
    *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 616LL) = 0LL;
    v3 = *(_QWORD *)this;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"prfnt->hsemCache", *(_QWORD *)(v3 + 504), a3);
  v6 = *(struct _ERESOURCE **)(*(_QWORD *)this + 504LL);
  if ( v6 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v6);
    PsLeavePriorityRegion(v7);
  }
}
