/*
 * XREFs of ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18001B498
 * Callers:
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18000C5F0 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x18001BC58 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001A3E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18001A420 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterFlyoutHeight@@@details@wil@@QEAA_NXZ @ 0x18009A6A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterFlyoutHeight@@@detail.c)
 *     ?ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z @ 0x1801A7884 (-ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABF38 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::GetViewPosition(
        CActionCenterExperienceManager *this,
        struct tagRECT *a2)
{
  HMONITOR v4; // rsi
  const char *v5; // r9
  __int64 v6; // rdx
  HMONITOR v8; // rdx
  __int64 v9; // r8
  int PerMonitorDpi; // eax
  int v11; // r8d
  double v12; // xmm0_8
  int v13; // esi
  int v14; // r8d
  double v15; // xmm0_8
  unsigned __int64 v16; // rcx
  int v17; // edi
  LANGID ThreadUILanguage; // ax
  struct tagMONITORINFO mi; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  SetRectEmpty(a2);
  if ( *((_QWORD *)this + 18) )
  {
    v4 = MonitorFromPoint(0LL, 1u);
    if ( v4 == (HMONITOR)-1LL )
    {
      v6 = 1036LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
               v5);
    }
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( !GetMonitorInfoW(v4, &mi) )
    {
      v6 = 1039LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
               v5);
    }
    *a2 = mi.rcMonitor;
    if ( *((_BYTE *)this + 440) )
      *a2 = mi.rcWork;
    PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v4, v8, v9);
    v12 = *((double *)this + 68);
    v13 = PerMonitorDpi;
    if ( v12 > 0.0 )
      a2->bottom -= ExperienceManagerUtils::ScaleByDPI(
                      (ExperienceManagerUtils *)(unsigned int)(int)v12,
                      PerMonitorDpi,
                      v11);
    if ( *((_BYTE *)this + 441) )
    {
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActionCenterFlyoutHeight>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ActionCenterFlyoutHeight>::GetImpl'::`2'::impl)
        || (v15 = *((double *)this + 69), v16 = (unsigned int)(int)v15, v15 <= 0.0) )
      {
        v16 = (unsigned int)(int)*((float *)this + 42);
      }
      a2->top = a2->bottom - ExperienceManagerUtils::ScaleByDPI((ExperienceManagerUtils *)v16, v13, v14);
    }
    v17 = ExperienceManagerUtils::ScaleByDPI(
            (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 41),
            v13,
            v11);
    ThreadUILanguage = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
      a2->right = v17 + a2->left;
    else
      a2->left = a2->right - v17;
  }
  return 0LL;
}
