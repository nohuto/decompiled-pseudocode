/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x1800FCCF0
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800FCC80 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800AFAB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1800AFBC4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800AFE58 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800F94B4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     wil_QueryFeatureState @ 0x1801108A0 (wil_QueryFeatureState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1801108C4 (wil_RtlStagingConfig_QueryFeatureState.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(__int64 a1, unsigned int a2, unsigned __int8 a3, int a4, _DWORD *a5)
{
  unsigned int v5; // esi
  volatile __int32 *v7; // rbx
  int v10; // edi
  bool v11; // si
  char v12; // cl
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+38h] [rbp-30h] BYREF
  volatile __int32 *v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v5 = a3;
  v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( a4 )
    v7 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  if ( (*v7 & 2) != 0 )
    return (*v7 & 1) != 0 && (unsigned int)wil_QueryFeatureState(a1, a2, a3, a4, 0LL, (__int64)a5) != 0;
  v10 = dword_1803E2DFC;
  if ( !dword_1803E2DFC )
    v10 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
  v16 = 0;
  *a5 = 1;
  v11 = (unsigned int)wil_RtlStagingConfig_QueryFeatureState(a1, a2, v5, &v16) != 0;
  v12 = _InterlockedExchange(v7, (v16 != 0) + 6);
  if ( !v16 && (v12 & 4) == 0 && wil::details::g_enabledStateManager )
  {
    wil::srwlock::lock_exclusive(&stru_1803E2DE8, &v13);
    if ( !v10
      || v10 != dword_1803E2DFC
      || (v14 = 0, v15 = v7, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_1803E2E30, &v14, 0x10uLL)) )
    {
      _InterlockedAnd(v7, 0xFFFFF7C1);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v13);
  }
  return v11;
}
