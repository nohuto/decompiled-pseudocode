/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SimulationDriver@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004D920
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SimulationDriver@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D47C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SimulationDriver@@@details@wil@@QEAAX_NW4.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18002E838 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SimulationDriver@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18004DE40 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SimulationDriver@@@deta.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180051ED4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SimulationDriver>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  unsigned int v6; // esi
  signed __int32 v7; // eax
  bool v8; // zf
  signed __int32 v9; // r9d
  signed __int32 v10; // edx
  int v11; // r8d
  int v12; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v6 = dword_1800E3F74;
    if ( !dword_1800E3F74 )
      v6 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SimulationDriver>::GetCurrentFeatureEnabledState(
      a1,
      &v15,
      &v14);
    v7 = *a2;
    do
    {
      v8 = v14 == 0;
      v9 = v7;
      *a2 = v7;
      v10 = v7;
      if ( !v8 && (v7 & 2) == 0 )
      {
        v10 = v7 ^ ((unsigned __int16)v15 ^ (unsigned __int16)v7) & 0x9C1 | 2;
        *a2 = v10;
      }
      v11 = v7 & 4;
      if ( (v7 & 4) == 0 )
      {
        v10 = ((unsigned __int16)v15 ^ (unsigned __int16)v10) & 0x400 ^ v10 | 4;
        *a2 = v10;
      }
      v7 = _InterlockedCompareExchange(a1, v10, v7);
    }
    while ( v9 != v7 );
    if ( !v11 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v6
        || v6 != dword_1800E3F74
        || (v12 = 1, v13 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_1800E3FA8, &v12, 0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFFFFB);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v15 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
