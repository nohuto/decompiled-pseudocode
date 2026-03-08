/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2831068478@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180111948
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_2831068478@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180111AEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_2831068478@@@details@wil@@QEAAX_NW4Report.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2831068478@@@details@wil@@QEAA_NXZ @ 0x180111B70 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2831068478@@@details@wil@@QEAA_NX.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800AFAB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x1800AFBC4 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800AFE58 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800F94B4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2831068478@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180111A5C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_2831068478@@@details@wi.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_2831068478>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // esi
  signed __int32 i; // edx
  bool v7; // zf
  signed __int32 v8; // ecx
  signed __int32 v9; // eax
  int v11; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v15; // [rsp+60h] [rbp+18h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = dword_1803E2DFC;
    if ( !dword_1803E2DFC )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_2831068478>::GetCurrentFeatureEnabledState(a1, &v14, &v13);
    for ( i = *a2; ; i = v9 )
    {
      v7 = v13 == 0;
      v8 = i;
      *a2 = i;
      if ( !v7 && (i & 2) == 0 )
      {
        v8 = i ^ ((unsigned __int16)v14 ^ (unsigned __int16)i) & 0x9C1 | 2;
        *a2 = v8;
      }
      if ( (i & 4) == 0 )
      {
        v8 = ((unsigned __int16)v14 ^ (unsigned __int16)v8) & 0x400 ^ v8 | 4;
        *a2 = v8;
      }
      v9 = _InterlockedCompareExchange(a1, v8, i);
      if ( i == v9 )
        break;
    }
    if ( (i & 4) == 0 && wil::details::g_enabledStateManager )
    {
      wil::srwlock::lock_exclusive(&stru_1803E2DE8, &v15);
      if ( !v5
        || v5 != dword_1803E2DFC
        || (v11 = 3, v12 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_1803E2E30, &v11, 0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFFFFB);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v15);
    }
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v14 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
