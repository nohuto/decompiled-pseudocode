/*
 * XREFs of ?Consolidate@ViewWrapperBase@@UEAAJW4ConsolidatedState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18033E300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::Consolidate(__int64 a1, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 280LL);
  AcquireSRWLockExclusive(v4);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 8) + 160LL))(a1 - 8, a2);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
