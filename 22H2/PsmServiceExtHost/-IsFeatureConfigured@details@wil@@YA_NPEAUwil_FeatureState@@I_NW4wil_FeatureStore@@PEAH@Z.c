/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180038D94
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800389D0 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 *     ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x1800674A0 (-WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180038ED4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18003A118 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     wil_QueryFeatureState @ 0x180046064 (wil_QueryFeatureState.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(int a1, int a2, unsigned __int8 a3, int a4, __int64 a5)
{
  int v5; // ebp
  volatile __int32 *v7; // rbx
  unsigned int v10; // edi
  bool v11; // si
  char v12; // cl
  int v14; // [rsp+30h] [rbp-28h] BYREF
  volatile __int32 *v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v5 = a3;
  v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( a4 )
    v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  if ( (*v7 & 2) != 0 && (*v7 & 1) == 0 )
    return 0;
  if ( (*v7 & 2) != 0 )
    return (unsigned int)wil_QueryFeatureState(a1, a2, a3, a4, 0LL, a5) != 0;
  v10 = dword_1800B4044;
  v16 = 1;
  if ( !dword_1800B4044 )
    v10 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
  v11 = (unsigned int)wil_QueryFeatureState(a1, a2, v5, a4, (__int64)&v16, a5) != 0;
  v12 = _InterlockedExchange(v7, (v16 != 0) + 6);
  if ( !v16 && (v12 & 4) == 0 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( !v10
      || v10 != dword_1800B4044
      || (v14 = 0,
          v15 = v7,
          !wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&xmmword_1800B4078, &v14, 0x10uLL)) )
    {
      _InterlockedAnd(v7, 0xFFFFF7C1);
    }
    ReleaseSRWLockExclusive(&SRWLock);
  }
  return v11;
}
