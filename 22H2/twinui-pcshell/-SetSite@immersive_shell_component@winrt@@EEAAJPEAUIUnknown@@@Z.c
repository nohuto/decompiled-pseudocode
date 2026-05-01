/*
 * XREFs of ?SetSite@immersive_shell_component@winrt@@EEAAJPEAUIUnknown@@@Z @ 0x1804D4380
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$com_agile_query_failfast@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUIUnknown@@W4AgileReferenceOptions@@@Z @ 0x1804D0900 (--$com_agile_query_failfast@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_t@UIAgileReference@@Uerr_failf.c)
 */

__int64 __fastcall winrt::immersive_shell_component::SetSite(
        winrt::immersive_shell_component *this,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  struct IUnknown *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v4 = (RTL_SRWLOCK *)((char *)this + 80);
  AcquireSRWLockExclusive((PSRWLOCK)this + 10);
  if ( a2 )
  {
    v5 = wil::com_agile_query_failfast<IUnknown * &>(&v9, (__int64 *)&v10);
    v6 = *v5;
    *v5 = 0LL;
    v7 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 9);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
