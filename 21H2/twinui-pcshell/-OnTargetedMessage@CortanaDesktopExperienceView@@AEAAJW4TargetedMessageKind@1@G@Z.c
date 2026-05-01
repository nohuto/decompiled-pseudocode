/*
 * XREFs of ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18027D988
 * Callers:
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x18027D6C0 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18000C568 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18020FB94 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x180277BD0 (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::AllowCortanaAttractModeAboveLock @ 0x1802796B0 (CortanaHelpers--AllowCortanaAttractModeAboveLock.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18027AFFC (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18027C6C8 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     CortanaHelpers::IsCortanaInAmbientMode @ 0x18027C9E8 (CortanaHelpers--IsCortanaInAmbientMode.c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18027D0D8 (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18027D454 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x180280ABC (CortanaHelpers--SetWindowsHelloActive.c)
 *     ?IsRegisteredWithLightDismiss@SingleViewLightDismissHelper@@QEAA_NXZ @ 0x1804E6248 (-IsRegisteredWithLightDismiss@SingleViewLightDismissHelper@@QEAA_NXZ.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804E6260 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 *     ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x1804E7C78 (-LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x1804E8004 (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::OnTargetedMessage(__int64 a1, int a2, __int16 a3)
{
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  int v13; // edi
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  void (*v19)(void); // rax
  __int64 v20; // rdi
  SingleViewLightDismissHelper *v21; // rcx
  __int64 *ViewWrapper; // rax
  int v23; // eax
  bool v24; // sf
  int v25; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v27; // [rsp+58h] [rbp+10h] BYREF
  __int64 v28; // [rsp+68h] [rbp+20h] BYREF

  if ( !a2 )
  {
    *(_BYTE *)(a1 + 253) = a3 != 0;
    CortanaDesktopExperienceView::NotifyShellModeChanged((CortanaDesktopExperienceView *)a1);
    return 0LL;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v27 = 0;
    v23 = _RegSetKeyValueWithSDDL(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
            L"AnyAboveLockAppsActive",
            4u,
            (BYTE *)&v27,
            4u);
    v24 = v23 < 0;
    if ( v23 > 0 )
    {
      v23 = (unsigned __int16)v23 | 0x80070000;
      v24 = v23 < 0;
    }
    if ( v24 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8D,
        (__int64)"internal\\shell\\private\\inc\\CortanaHelpers.h",
        (const char *)(unsigned int)v23);
    CortanaHelpers::SetWindowsHelloActive();
    v25 = IsUserAssignedAccessSingleApp(-4LL);
    CortanaHelpers::SetIsAssignedAccess(v25 != 0);
    return 0LL;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v20 = a1 + 304;
    v21 = (SingleViewLightDismissHelper *)(a1 + 304);
    if ( a3 )
    {
      if ( !SingleViewLightDismissHelper::IsRegisteredWithLightDismiss(v21) )
      {
        ViewWrapper = CortanaDesktopExperienceView::GetViewWrapper(a1, &v28);
        SingleViewLightDismissHelper::RegisterWithLightDismiss(
          v20,
          1795LL,
          (a1 + 32) & -(__int64)(a1 != 0),
          *ViewWrapper);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v28);
      }
    }
    else
    {
      SingleViewLightDismissHelper::UnregisterWithLightDismiss(v21);
    }
    return 0LL;
  }
  v6 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v6 )
  {
    *(_BYTE *)(a1 + 255) = a3 != 0;
    if ( !a3 )
      goto LABEL_70;
    *(_BYTE *)(a1 + 243) = 0;
    if ( *(_BYTE *)(a1 + 254) )
      *(_BYTE *)(a1 + 258) = 1;
    if ( CortanaHelpers::AllowCortanaAttractModeAboveLock(a1, v6) )
    {
      if ( !*(_BYTE *)(a1 + 237) )
      {
        v13 = LaunchCortanaApp();
        if ( v13 < 0 )
        {
          v14 = 1547LL;
LABEL_34:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v13);
          return (unsigned int)v13;
        }
      }
    }
    else
    {
LABEL_70:
      if ( *(_BYTE *)(a1 + 255) )
      {
        if ( *(_BYTE *)(a1 + 237) )
          goto LABEL_41;
      }
      else if ( *(_DWORD *)(a1 + 140) != 4 )
      {
        goto LABEL_41;
      }
      v15 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x616,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v15);
    }
LABEL_41:
    if ( *(_BYTE *)(a1 + 254) )
    {
      if ( !*(_BYTE *)(a1 + 255) )
      {
        CortanaHelpers::SetWindowsHelloActive();
        goto LABEL_56;
      }
    }
    else if ( !*(_BYTE *)(a1 + 255) )
    {
      v27 = 0;
      v16 = _RegSetKeyValueWithSDDL(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
              L"AnyAboveLockAppsActive",
              4u,
              (BYTE *)&v27,
              4u);
      v17 = v16 < 0;
      if ( v16 > 0 )
      {
        v16 = (unsigned __int16)v16 | 0x80070000;
        v17 = v16 < 0;
      }
      if ( v17 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8D,
          (__int64)"internal\\shell\\private\\inc\\CortanaHelpers.h",
          (const char *)(unsigned int)v16);
      CortanaHelpers::SetWindowsHelloActive();
      v18 = IsUserAssignedAccessSingleApp(-4LL);
      CortanaHelpers::SetIsAssignedAccess(v18 != 0);
      v13 = CortanaDesktopExperienceView::NotifyView(
              (CortanaDesktopExperienceView *)a1,
              L"NotifyLockStatusChanged",
              0LL);
      if ( v13 < 0 )
      {
        v14 = 1569LL;
        goto LABEL_34;
      }
      if ( *(_BYTE *)(a1 + 256) )
      {
        *(_BYTE *)(a1 + 256) = 0;
        v19 = *(void (**)(void))(**(_QWORD **)(a1 + 96) + 64LL);
LABEL_55:
        v19();
        goto LABEL_56;
      }
      goto LABEL_56;
    }
    if ( !*(_BYTE *)(a1 + 256) )
    {
      *(_BYTE *)(a1 + 256) = 1;
      v19 = *(void (**)(void))(**(_QWORD **)(a1 + 96) + 56LL);
      goto LABEL_55;
    }
LABEL_56:
    *(_BYTE *)(a1 + 237) = 0;
    return 0LL;
  }
  v7 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      v8 = -2147418113;
      v9 = 1654LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    if ( !a3 )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 255) )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 242) )
      return 0LL;
    if ( CortanaHelpers::IsCortanaInAmbientMode(a1, v7) )
      return 0LL;
    v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
    if ( v10 >= 0 )
      return 0LL;
    v11 = 1648LL;
    goto LABEL_14;
  }
  if ( !a3 )
  {
    if ( CortanaHelpers::AllowCortanaAttractModeAboveLock(a1, v7) )
    {
      if ( *(_BYTE *)(a1 + 255) )
      {
        if ( !*(_BYTE *)(a1 + 242) )
        {
          v8 = LaunchCortanaApp();
          if ( v8 < 0 )
          {
            v9 = 1632LL;
            goto LABEL_26;
          }
        }
      }
    }
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 255) )
  {
    if ( *(_BYTE *)(a1 + 242) )
    {
      if ( !CortanaHelpers::IsCortanaInAmbientMode(a1, v7) )
      {
        v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
        if ( v10 < 0 )
        {
          v11 = 1618LL;
LABEL_14:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v11,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v10);
        }
      }
    }
  }
  return 0LL;
}
