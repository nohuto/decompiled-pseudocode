/*
 * XREFs of ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803BDF48
 * Callers:
 *     wistd::__function::__func__lambda_96299ea0f3be98b719c4daa9236cbbcc__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1800CFEB0 (wistd--__function--__func__lambda_96299ea0f3be98b719c4daa9236cbbcc__void___cdecl(enum_wil--Regis.c)
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800D16D4 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18007AB94 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800D1D5C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletP.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnTabtipRegistryChanged(TouchKeyboardExperienceManager *this)
{
  bool v1; // bl
  unsigned int v3; // r9d
  __int64 v4; // rax
  int pvData; // [rsp+60h] [rbp+20h] BYREF
  DWORD pcbData; // [rsp+68h] [rbp+28h] BYREF
  int v8; // [rsp+70h] [rbp+30h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 86) )
  {
    pvData = 0;
    pcbData = 4;
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
           L"EnableDesktopModeAutoInvoke",
           0x10u,
           0LL,
           &pvData,
           &pcbData)
      && (pcbData = 4,
          RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
            L"EnableDesktopModeAutoInvoke",
            0x10u,
            0LL,
            &pvData,
            &pcbData)) )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture>::GetImpl'::`2'::impl) )
      {
        v8 = 0;
        if ( (int)SHRegGetBOOLWithREGSAM(
                    HKEY_CURRENT_USER,
                    L"SOFTWARE\\Microsoft\\TabletTip\\ConvertibleSlateModeChanged",
                    L"ConvertibleSlateModeChanged",
                    v3,
                    &v8) >= 0 )
          v1 = v8 != 0;
      }
    }
    else
    {
      v1 = pvData != 0;
    }
    v4 = *((_QWORD *)this + 86);
    *(_BYTE *)(v4 + 317) = v1;
    *(_BYTE *)(*(_QWORD *)(v4 + 104) + 510LL) = v1;
  }
  return 0LL;
}
