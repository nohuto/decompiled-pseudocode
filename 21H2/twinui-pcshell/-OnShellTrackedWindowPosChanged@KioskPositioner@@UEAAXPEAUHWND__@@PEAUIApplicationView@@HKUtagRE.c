/*
 * XREFs of ?OnShellTrackedWindowPosChanged@KioskPositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x18044C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsWin32ApplicationView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800D67BC (-IsWin32ApplicationView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z @ 0x18044BB58 (-IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?IsViewManaged@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18044BE58 (-IsViewManaged@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

void __fastcall KioskPositioner::OnShellTrackedWindowPosChanged(
        KioskPositioner *this,
        HWND a2,
        struct IApplicationView *a3,
        __int64 a4,
        unsigned int a5)
{
  bool IsViewManaged; // al
  KioskPositioner *v9; // rcx
  const char *v10; // r9
  KioskPositioner *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (a5 & 0xFFFFFFFD) == 0 && a3 )
  {
    try
    {
      IsViewManaged = KioskPositioner::IsViewManaged((KioskPositioner *)((char *)this - 152), a3);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x3BA,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        v10);
      return;
    }
    if ( IsViewManaged && KioskPositioner::IsWin32ApplicationView(v9, a3) && !KioskPositioner::IsOwnedAppWindow(v11, a2) )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10), a2);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3B8,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v12);
    }
  }
}
