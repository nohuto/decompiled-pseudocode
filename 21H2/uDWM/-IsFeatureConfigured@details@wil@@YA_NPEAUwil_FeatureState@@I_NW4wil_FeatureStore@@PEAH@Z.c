/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18004DDAC
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18004DD30 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 *     ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18007FE40 (-WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18002F078 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180051F84 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     wil_QueryFeatureState @ 0x180054F10 (wil_QueryFeatureState.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(int a1, int a2, unsigned __int8 a3, int a4, __int64 a5)
{
  int v5; // ebp
  volatile __int32 *v7; // rbx
  unsigned int v11; // edi
  bool v12; // si
  char v13; // cl
  int v14; // [rsp+30h] [rbp-28h] BYREF
  volatile __int32 *v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v5 = a3;
  v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( a4 )
    v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  if ( (*v7 & 3) == 2 )
    return 0;
  if ( (*v7 & 2) != 0 )
    return (unsigned int)wil_QueryFeatureState(a1, a2, a3, a4, 0LL, a5) != 0;
  v11 = dword_1800E3F74;
  v16 = 1;
  if ( !dword_1800E3F74 )
    v11 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
  v12 = (unsigned int)wil_QueryFeatureState(a1, a2, v5, a4, (__int64)&v16, a5) != 0;
  v13 = _InterlockedExchange(v7, (v16 != 0) + 6);
  if ( !v16 && (v13 & 4) == 0 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( !v11
      || v11 != dword_1800E3F74
      || (v14 = 0, v15 = v7, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_1800E3FA8, &v14, 0x10uLL)) )
    {
      _InterlockedAnd(v7, 0xFFFFF7C1);
    }
    ReleaseSRWLockExclusive(&SRWLock);
  }
  return v12;
}
