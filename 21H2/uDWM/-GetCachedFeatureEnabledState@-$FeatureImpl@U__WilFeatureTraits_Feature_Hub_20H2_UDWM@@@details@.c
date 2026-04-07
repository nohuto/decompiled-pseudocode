/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180057A08
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180057BD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@QEAA_NXZ @ 0x180057C68 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@QEAA.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002D754 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002D788 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18002F078 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180057B24 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18007E578 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_20H2_UDWM>::GetCachedFeatureEnabledState(
        wil::details *a1,
        signed __int32 *a2)
{
  signed __int32 v2; // eax
  unsigned int v5; // esi
  __int64 v6; // rcx
  signed __int32 v7; // eax
  int v8; // r8d
  signed __int32 v9; // r9d
  signed __int32 v10; // edx
  int v11; // r8d
  int v13; // [rsp+20h] [rbp-10h] BYREF
  wil::details *v14; // [rsp+28h] [rbp-8h]
  int i; // [rsp+50h] [rbp+20h] BYREF
  int v16; // [rsp+58h] [rbp+28h] BYREF
  RTL_SRWLOCK *v17; // [rsp+60h] [rbp+30h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = *(_DWORD *)a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_20H2_UDWM>::GetCurrentFeatureEnabledState(v6, &v16, &i);
    v7 = *a2;
    v8 = v5 != 0 ? i : 0;
    for ( i = v8; ; v8 = i )
    {
      *a2 = v7;
      v9 = v7;
      v10 = v7;
      if ( v8 && (v7 & 2) == 0 )
      {
        v10 = v7 ^ ((unsigned __int16)v16 ^ (unsigned __int16)v7) & 0x9C1 | 2;
        *a2 = v10;
      }
      v11 = v7 & 4;
      if ( (v7 & 4) == 0 )
      {
        v10 = ((unsigned __int16)v16 ^ (unsigned __int16)v10) & 0x400 ^ v10 | 4;
        *a2 = v10;
      }
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v10, v7);
      if ( v9 == v7 )
        break;
    }
    if ( !v11 && wil::details::g_enabledStateManager )
    {
      wil::srwlock::lock_exclusive(&SRWLock, &v17);
      if ( !v5
        || v5 != dword_1800E3F74
        || (v13 = 0, v14 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_1800E3FA8, &v13, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFF7C1);
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v17);
    }
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v16 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
