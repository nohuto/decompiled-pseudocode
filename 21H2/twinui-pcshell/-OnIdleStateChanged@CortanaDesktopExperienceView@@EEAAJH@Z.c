/*
 * XREFs of ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x18027D530
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18020FB94 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x180277BD0 (CortanaHelpers--SetIsAssignedAccess.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18027AFFC (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18027D454 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x180280ABC (CortanaHelpers--SetWindowsHelloActive.c)
 *     IsUserAssignedAccessSingleApp @ 0x1804E8004 (IsUserAssignedAccessSingleApp.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnIdleStateChanged(CortanaDesktopExperienceView *this, int a2)
{
  int v3; // edi
  __int64 v4; // rdx
  char v6; // al
  int v7; // eax
  bool v8; // sf
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+58h] [rbp+10h] BYREF

  *((_BYTE *)this + 190) = a2 != 0;
  if ( a2 )
  {
    v3 = CortanaDesktopExperienceView::NotifyView(
           (CortanaDesktopExperienceView *)((char *)this - 64),
           L"NotifyLockStatusChanged",
           0LL);
    if ( v3 < 0 )
    {
      v4 = 1052LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
  }
  else if ( *((_BYTE *)this + 194) )
  {
    v3 = CortanaDesktopExperienceView::NotifyView(
           (CortanaDesktopExperienceView *)((char *)this - 64),
           L"NotifyLockStatusChanged",
           0LL);
    if ( v3 < 0 )
    {
      v4 = 1059LL;
      goto LABEL_4;
    }
  }
  *((_BYTE *)this + 194) = 0;
  v6 = *((_BYTE *)this + 190);
  if ( v6 && *((_DWORD *)this + 19) != 3 && *((_DWORD *)this + 19) != 4 )
  {
    v3 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)((char *)this - 64));
    if ( v3 < 0 )
    {
      v4 = 1072LL;
      goto LABEL_4;
    }
    v6 = *((_BYTE *)this + 190);
  }
  if ( !v6 && !*((_BYTE *)this + 191) )
  {
    v11 = 0;
    v7 = _RegSetKeyValueWithSDDL(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
           L"AnyAboveLockAppsActive",
           4u,
           (BYTE *)&v11,
           4u);
    v8 = v7 < 0;
    if ( v7 > 0 )
    {
      v7 = (unsigned __int16)v7 | 0x80070000;
      v8 = v7 < 0;
    }
    if ( v8 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8D,
        (__int64)"internal\\shell\\private\\inc\\CortanaHelpers.h",
        (const char *)(unsigned int)v7);
    CortanaHelpers::SetWindowsHelloActive();
    v9 = IsUserAssignedAccessSingleApp(-4LL);
    CortanaHelpers::SetIsAssignedAccess(v9 != 0);
    if ( *((_BYTE *)this + 192) )
    {
      *((_BYTE *)this + 192) = 0;
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
    }
  }
  return 0LL;
}
