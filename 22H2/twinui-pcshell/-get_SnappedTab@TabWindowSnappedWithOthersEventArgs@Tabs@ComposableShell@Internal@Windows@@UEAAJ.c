/*
 * XREFs of ?get_SnappedTab@TabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAPEAUIShellTab@2345@@Z @ 0x18030D040
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802D7E10 (--$copy_to@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@-$com_ptr_t@UIShellTab@Tabs@Compos.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs::get_SnappedTab(
        Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab **a2)
{
  __int64 *v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (__int64 *)((char *)this + 64);
  try
  {
    wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::copy_to<Windows::Internal::ComposableShell::Tabs::IShellTab>(
      v2,
      a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14,
                           (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\WindowSnappedEventArgs.h",
                           v3);
  }
  return result;
}
