/*
 * XREFs of DereferenceW32Thread @ 0x1C0070180
 * Callers:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C007012C (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 * Callees:
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C007026C (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     UserDeleteW32Thread @ 0x1C00702A0 (UserDeleteW32Thread.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DereferenceW32Thread(volatile signed __int32 *a1)
{
  void *v1; // rbp
  unsigned __int32 v3; // edi
  void *ThreadWin32Thread; // rbx

  v1 = *(void **)a1;
  v3 = _InterlockedDecrement(a1 + 2);
  if ( !v3 )
  {
    if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && qword_1C02D5FD0 && (unsigned int)qword_1C02D5FD0() )
    {
      ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
      PsSetThreadWin32Thread(*(_QWORD *)a1, 0LL, ThreadWin32Thread);
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)a1);
      ExFreePoolWithTag(ThreadWin32Thread, 0);
    }
    else
    {
      UserDeleteW32Thread((void *)a1);
    }
  }
  ObfDereferenceObject(v1);
  return v3;
}
