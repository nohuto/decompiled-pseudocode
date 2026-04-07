/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18008C358
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18008D410 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wi.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18002F078 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180051F84 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18008C4A0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJ.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // esi
  signed __int32 v6; // eax
  int v7; // r8d
  signed __int32 v8; // r9d
  signed __int32 v9; // edx
  int v10; // r8d
  int v12; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-10h]
  int i; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = dword_1800E3F74;
    if ( !dword_1800E3F74 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::GetCurrentFeatureEnabledState(
      a1,
      &v15,
      &i);
    v6 = *a2;
    v7 = v5 != 0 ? i : 0;
    for ( i = v7; ; v7 = i )
    {
      *a2 = v6;
      v8 = v6;
      v9 = v6;
      if ( v7 && (v6 & 2) == 0 )
      {
        v9 = v6 ^ ((unsigned __int16)v15 ^ (unsigned __int16)v6) & 0x9C1 | 2;
        *a2 = v9;
      }
      v10 = v6 & 4;
      if ( (v6 & 4) == 0 )
      {
        v9 = ((unsigned __int16)v15 ^ (unsigned __int16)v9) & 0x400 ^ v9 | 4;
        *a2 = v9;
      }
      v6 = _InterlockedCompareExchange(a1, v9, v6);
      if ( v8 == v6 )
        break;
    }
    if ( !v10 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v5
        || v5 != dword_1800E3F74
        || (v12 = 0, v13 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_1800E3FA8, &v12, 0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFF7C1);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v15 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
