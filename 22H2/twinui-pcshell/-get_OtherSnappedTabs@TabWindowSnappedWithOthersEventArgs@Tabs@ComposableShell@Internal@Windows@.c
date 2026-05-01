/*
 * XREFs of ?get_OtherSnappedTabs@TabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@5@@Z @ 0x18030CFD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs::get_OtherSnappedTabs(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    *a2 = 0LL;
    v4 = *(_QWORD *)(a1 + 72);
    if ( v4 )
    {
      *a2 = v4;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1C,
                           (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\WindowSnappedEventArgs.h",
                           a4);
  }
  return result;
}
