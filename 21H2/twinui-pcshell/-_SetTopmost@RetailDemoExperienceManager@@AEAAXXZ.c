/*
 * XREFs of ?_SetTopmost@RetailDemoExperienceManager@@AEAAXXZ @ 0x18025D9C0
 * Callers:
 *     ?SetTopmost@RetailDemoExperienceManager@@UEAAJH@Z @ 0x18025C8A0 (-SetTopmost@RetailDemoExperienceManager@@UEAAJH@Z.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x18025DB20 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall RetailDemoExperienceManager::_SetTopmost(RetailDemoExperienceManager *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+58h] [rbp+10h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 25);
  if ( !v2 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      347LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v7 = 0LL;
  v3 = *v2;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 32))(v2, &v7);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      350LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  hWnd = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v7 + 24LL))(v7, &hWnd);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      352LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  if ( hWnd )
    SetWindowPos(hWnd, (HWND)((*((_BYTE *)this + 348) != 0) - 2LL), 0, 0, 0, 0, 0x13u);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
}
