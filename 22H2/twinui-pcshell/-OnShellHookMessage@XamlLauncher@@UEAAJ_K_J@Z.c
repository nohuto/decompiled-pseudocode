/*
 * XREFs of ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x18000C930
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18000E9B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18039B600 (-Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18039B744 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 */

__int64 __fastcall XamlLauncher::OnShellHookMessage(XamlLauncher *this)
{
  __int64 v2; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 29);
  if ( !v2 )
    return 2147943568LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2) )
  {
    if ( *((_BYTE *)this + 217) )
    {
      *((_BYTE *)this + 217) = 0;
      XamlLauncher::HandleInitialHShellEvent((XamlLauncher *)((char *)this - 40));
    }
    else
    {
      XamlLauncher::ShowStartView((char *)this - 16, 1LL);
    }
    return 0LL;
  }
  v4 = XamlLauncher::Dismiss((char *)this - 16, 1LL);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x142,
    (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v4,
    v6);
  return v5;
}
