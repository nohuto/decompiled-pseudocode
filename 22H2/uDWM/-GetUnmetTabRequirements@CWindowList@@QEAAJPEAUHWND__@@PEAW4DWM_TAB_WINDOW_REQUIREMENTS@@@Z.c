/*
 * XREFs of ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x18000FC60
 * Callers:
 *     ?IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z @ 0x18000FC14 (-IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180031850 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z @ 0x18000F960 (-IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000FEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabCategoryBC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000FF48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabCategoryBC@@@details@wil@@QEAAX_NW4Rep.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18001544C (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowList::GetUnmetTabRequirements(
        CWindowList *this,
        HWND a2,
        enum DWM_TAB_WINDOW_REQUIREMENTS *a3)
{
  LONG WindowLongW; // edi
  char v6; // si
  const struct CWindowData *WindowDataByHwnd; // rax
  unsigned int PropW; // eax
  unsigned int v9; // eax
  char v11; // [rsp+20h] [rbp-49h] BYREF
  enum DWM_TAB_WINDOW_REQUIREMENTS *v12; // [rsp+28h] [rbp-41h] BYREF
  int v13; // [rsp+30h] [rbp-39h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+38h] [rbp-31h] BYREF
  int v15; // [rsp+40h] [rbp-29h] BYREF
  int *v16; // [rsp+48h] [rbp-21h]
  int v17; // [rsp+50h] [rbp-19h]
  enum DWM_TAB_WINDOW_REQUIREMENTS **v18; // [rsp+58h] [rbp-11h]
  char *v19; // [rsp+60h] [rbp-9h]
  void *v20; // [rsp+68h] [rbp-1h]
  const char *v21; // [rsp+70h] [rbp+7h]
  __int64 v22; // [rsp+78h] [rbp+Fh]
  __int16 v23; // [rsp+80h] [rbp+17h]
  struct tagRECT rc; // [rsp+88h] [rbp+1Fh] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  v12 = a3;
  *(_DWORD *)a3 = 0;
  LOBYTE(a3) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0LL,
    a3);
  *(_DWORD *)v12 |= 1u;
  if ( a2 )
  {
    WindowLongW = GetWindowLongW(a2, -16);
    v6 = GetWindowLongW(a2, -20);
    if ( (WindowLongW & 0x20000000) == 0 )
    {
      v14 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, a2);
      if ( WindowDataByHwnd && !IsWindowSetToDefaultMargins(WindowDataByHwnd) )
        *(_DWORD *)v12 |= 0x20u;
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
    }
    if ( (WindowLongW & 0xCF0000) != 0xCF0000 || (WindowLongW & 0xC0000000) != 0 || (v6 & 0x88) != 0 )
      *(_DWORD *)v12 |= 4u;
    if ( GetParent(a2) || GetWindow(a2, 4u) )
      *(_DWORD *)v12 |= 2u;
    if ( GetWindowRgnBox(a2, &rc) )
      *(_DWORD *)v12 |= 8u;
    v13 = 0;
    v16 = &v13;
    v15 = 1;
    v17 = 4;
    if ( (unsigned int)GetWindowCompositionAttribute(a2, &v15) && !v13 )
      *(_DWORD *)v12 |= 0x10u;
    v11 = 0;
    v18 = &v12;
    v19 = &v11;
    v22 = 0LL;
    v20 = retaddr;
    v21 = "clientcore\\windows\\dwm\\udwm\\windowlist.cpp";
    v23 = 1472;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabCategoryBC>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetImpl'::`2'::impl,
      0LL);
    PropW = (unsigned int)GetPropW(a2, L"TabbingAppCompatPolicy");
    if ( PropW )
    {
      if ( PropW == 1 )
      {
        *(_DWORD *)v12 &= 0xFFFFFFC7;
        v11 = 1;
      }
      else if ( PropW == 2 )
      {
        *(_DWORD *)v12 |= 0x200u;
      }
    }
    v9 = (unsigned int)GetPropW(a2, L"TabbingDisabled");
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        *(_DWORD *)v12 &= ~0x200u;
      }
      else if ( v9 == 2 )
      {
        *(_DWORD *)v12 |= 0x40u;
      }
    }
  }
  return 0LL;
}
