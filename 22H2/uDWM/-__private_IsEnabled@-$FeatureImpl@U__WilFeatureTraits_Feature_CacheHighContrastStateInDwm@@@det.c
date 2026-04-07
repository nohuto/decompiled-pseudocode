/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAA_NXZ @ 0x18001E720
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001DAE0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180036538 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x180049B08 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180086C4C (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18002E838 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18004E160 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateI.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180051ED4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180055D40 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180086914 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateIn.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  signed __int32 v1; // ebx
  unsigned int v3; // ebp
  signed __int32 v4; // esi
  signed __int32 v5; // eax
  volatile unsigned __int32 v6; // r8d
  unsigned __int8 v7; // bl
  _BYTE v9[8]; // [rsp+40h] [rbp-48h] BYREF
  int v10; // [rsp+48h] [rbp-40h] BYREF
  volatile signed __int32 *v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+90h] [rbp+8h] BYREF
  int v13; // [rsp+98h] [rbp+10h] BYREF
  __int16 v14; // [rsp+9Ch] [rbp+14h]
  int v15; // [rsp+A0h] [rbp+18h]
  __int64 v16; // [rsp+A8h] [rbp+20h] BYREF

  v1 = *a1;
  v15 = *a1;
  if ( (v15 & 6) != 6 )
  {
    v3 = dword_1800E3F74;
    if ( !dword_1800E3F74 )
      v3 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetCurrentFeatureEnabledState(
      a1,
      &v16,
      &v12);
    if ( !v3 )
      LODWORD(v12) = 0;
    while ( 1 )
    {
      v4 = v1;
      v15 = v1;
      if ( (_DWORD)v12 && (v1 & 2) == 0 )
      {
        v4 = v1 ^ ((unsigned __int16)v16 ^ (unsigned __int16)v1) & 0x9C1 | 2;
        v15 = v4;
      }
      if ( (v1 & 4) == 0 )
      {
        v4 = ((unsigned __int16)v4 ^ (unsigned __int16)v16) & 0x400 ^ v4 | 4;
        v15 = v4;
      }
      v5 = _InterlockedCompareExchange(a1, v4, v1);
      if ( v1 == v5 )
        break;
      v1 = v5;
    }
    if ( (v1 & 4) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v3
        || v3 != dword_1800E3F74
        || (v10 = 0,
            v11 = a1,
            !wil::details_abi::heap_buffer::push_back(
               (wil::details_abi::heap_buffer *)&xmmword_1800E3FA8,
               &v10,
               0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFF7C1);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
    if ( (v4 & 2) == 0 )
      v15 = ((unsigned __int16)v4 ^ (unsigned __int16)v16) & 0x9C1 ^ v4;
  }
  v6 = *a1;
  v7 = v15 & 1;
  if ( (*a1 & 4) == 0 )
  {
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetCachedFeatureEnabledState(
                       a1,
                       v9);
    v6 = v12;
  }
  v13 = 0;
  BYTE4(v12) = 2;
  v14 = WORD2(v12);
  LODWORD(v12) = 0;
  wil::details::ReportUsageToService(a1 + 2, 220937958LL, (v6 >> 10) & 1, (v6 >> 11) & 1, &v13, v7, 3);
  return v7;
}
