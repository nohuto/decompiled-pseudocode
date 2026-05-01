/*
 * XREFs of ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180248500
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x18000C270 (-IsHighContrast@@YAHXZ.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18000CCF0 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x18000FC9C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_18000FC9C.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180026FFC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004BD28 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x180076C00 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801C84DC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetBorderFlagFromStuckEdge@CJumpViewExperienceManager@@AEAA?AW4Border@CSingleViewShellExperience@@XZ @ 0x180247134 (-GetBorderFlagFromStuckEdge@CJumpViewExperienceManager@@AEAA-AW4Border@CSingleViewShellExperienc.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JumpListV3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802487EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JumpListV3@@@details@wil@@QEAAX_NW4Report.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnViewUncloaking(
        CJumpViewExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  HWND v3; // rbx
  HSTRING v4; // r8
  __int64 v5; // rdx
  const WCHAR *StringRawBuffer; // rax
  const char *v7; // r9
  int v8; // ecx
  int v9; // esi
  int v10; // ecx
  int v11; // ecx
  unsigned int BorderFlagFromStuckEdge; // eax
  __int64 v13; // r8
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               a2[3],
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       *((Microsoft::WRL::Wrappers::Details **)this + 45),
                       0LL,
                       v4) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 45), 0LL);
    if ( !SetWindowTextW(v3, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x1DA,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        v7);
  }
  if ( *((_QWORD *)this + 14) )
    CSingleViewShellExperience::SetWindowBand((__int64)this + 88);
  v8 = *((_DWORD *)this + 108);
  v9 = 92;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
          v9 = 90;
      }
      else
      {
        v9 = 88;
      }
    }
    else
    {
      v9 = 91;
    }
  }
  else
  {
    v9 = 89;
  }
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JumpListV3>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_JumpListV3>::GetImpl'::`2'::impl,
    v5,
    0LL);
  IsHighContrast();
  BorderFlagFromStuckEdge = CJumpViewExperienceManager::GetBorderFlagFromStuckEdge((__int64)this - 64);
  CSingleViewShellExperience::ShowBorder((__int64)this + 88, BorderFlagFromStuckEdge, v13, 0LL, 0);
  if ( *((_DWORD *)this + 109) == 3 )
  {
    if ( (int)DwmpBeginTransitionRequest(64LL) >= 0 )
      DwmpEndTransitionRequest(64LL);
    v14 = CExperienceManagerAnimationHelper::Begin(
            (__int64)this + 368,
            *((ExperienceManagerUtils **)this + 14),
            v9 | 0x200000u,
            0LL,
            0);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
  }
  return 0LL;
}
