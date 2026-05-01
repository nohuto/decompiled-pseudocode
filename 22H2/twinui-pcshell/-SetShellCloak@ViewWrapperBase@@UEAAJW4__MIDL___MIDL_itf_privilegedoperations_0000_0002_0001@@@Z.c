/*
 * XREFs of ?SetShellCloak@ViewWrapperBase@@UEAAJW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1803413A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::SetShellCloak(__int64 a1, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx

  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 168) + 280LL);
  AcquireSRWLockShared(v4);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 448LL) + 24LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 168) + 448LL),
         *(_QWORD *)(a1 + 272),
         a2);
  v6 = 0;
  if ( v5 < 0 )
    v6 = v5;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v6;
}
