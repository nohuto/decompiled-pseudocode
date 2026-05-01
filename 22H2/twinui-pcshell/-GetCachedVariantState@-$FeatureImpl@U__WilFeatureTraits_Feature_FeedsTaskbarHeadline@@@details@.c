/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B4168
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAAX_NW4Variant_FeedsTaskbarHeadline@@W4VariantReportingKind@3@_K@Z @ 0x1800B7730 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAA?AW4Variant_FeedsTaskbarHeadline@@W4VariantReportingKind@3@_N@Z @ 0x1800B9E88 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@w.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E864 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020684 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180020BF4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800B51EC (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1801A9C44 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetCachedVariantState(
        wil::details *a1,
        __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // esi
  __int64 v6; // rcx
  signed __int64 v7; // rax
  int v8; // ecx
  int v9; // r10d
  unsigned int v10; // r8d
  signed __int64 v11; // rtt
  int v13; // [rsp+20h] [rbp-28h] BYREF
  wil::details *v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+58h] [rbp+10h] BYREF
  int v17; // [rsp+5Ch] [rbp+14h]
  RTL_SRWLOCK *v18; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_QWORD *)a1;
  *(_QWORD *)a2 = *(_QWORD *)a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v15 = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetCurrentVariantState(v6, &v16, &v15);
    v7 = *(_QWORD *)a2;
    do
    {
      v8 = v16;
      v9 = v7;
      *(_QWORD *)a2 = v7;
      if ( (v7 & 8) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v17;
        v9 = ((v15 != 0 ? 8 : 0) | (v7 ^ (v8 ^ v7) & 0x3F000) & 0xFFFFFFF7) ^ ((unsigned __int16)v8 ^ ((v15 != 0 ? 8 : 0) | (unsigned __int16)(v7 ^ (v8 ^ v7) & 0xF000))) & 0x800;
        *(_DWORD *)a2 = v9;
      }
      v10 = ((unsigned int)v7 >> 2) & 1;
      if ( !v10 )
        *(_DWORD *)a2 = v9 ^ ((unsigned __int16)v8 ^ (unsigned __int16)v9) & 0x400 | 4;
      v11 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, *(_QWORD *)a2, v7);
    }
    while ( v11 != v7 );
    if ( !v10 && wil::details::g_enabledStateManager )
    {
      wil::srwlock::lock_exclusive(&SRWLock, &v18);
      if ( !v5
        || v5 != dword_18065016C
        || (v13 = 3, v14 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_1806501A0, &v13, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFFB);
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v18);
    }
  }
  return a2;
}
