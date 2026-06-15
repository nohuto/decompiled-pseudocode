/*
 * XREFs of sub_180045BA0 @ 0x180045BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180045BA0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  _QWORD *v3; // rsi
  _QWORD *i; // rdi
  unsigned int Pid; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1);
  Pid = 0;
  I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( Pid == *(_DWORD *)(a1 + 276) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 736);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 736));
    v3 = *(_QWORD **)(a1 + 784);
    for ( i = *(_QWORD **)(a1 + 776); i != v3; ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 448LL))(*i);
    if ( v2 )
      LeaveCriticalSection(v2);
  }
  return 0LL;
}
