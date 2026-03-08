/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AFF1C
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B33B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKi.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1800AFBC4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800B0044 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@AE.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800F94B4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v6; // esi
  signed __int32 i; // edx
  bool v8; // zf
  signed __int32 v9; // ecx
  signed __int32 v10; // eax
  int v11; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v6 = dword_1803E2DFC;
    if ( !dword_1803E2DFC )
      v6 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::GetCurrentFeatureEnabledState(a1, &v14, &v13);
    for ( i = *a2; ; i = v10 )
    {
      v8 = v13 == 0;
      v9 = i;
      *a2 = i;
      if ( !v8 && (i & 2) == 0 )
      {
        v9 = i ^ ((unsigned __int16)v14 ^ (unsigned __int16)i) & 0x9C1 | 2;
        *a2 = v9;
      }
      if ( (i & 4) == 0 )
      {
        v9 = ((unsigned __int16)v14 ^ (unsigned __int16)v9) & 0x400 ^ v9 | 4;
        *a2 = v9;
      }
      v10 = _InterlockedCompareExchange(a1, v9, i);
      if ( i == v10 )
        break;
    }
    if ( (i & 4) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&stru_1803E2DE8);
      if ( !v6
        || v6 != dword_1803E2DFC
        || (v11 = 3,
            v12 = a1,
            !wil::details_abi::heap_buffer::push_back(
               (wil::details_abi::heap_buffer *)&xmmword_1803E2E30,
               &v11,
               0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFFFFB);
      }
      ReleaseSRWLockExclusive(&stru_1803E2DE8);
    }
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v14 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
