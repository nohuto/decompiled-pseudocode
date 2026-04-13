/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180048598
 * Callers:
 *     ?GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA?AW4SubscriptionState@12@PEBG_N@Z @ 0x180043DFC (-GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA-AW4SubscriptionState@12@PEBG_.c)
 *     ?GetSubscriptionAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@78@@Z @ 0x18007EEA0 (-GetSubscriptionAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRIN.c)
 *     ?GetContentByIdAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@@Z @ 0x18007EF40 (-GetContentByIdAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING.c)
 *     ?GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z @ 0x1800A563C (-GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18000C8D8 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18000C9A8 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800186EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QE.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FrameworkScalability@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003AFC0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FrameworkScalability@@@d.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentAPI>::GetCachedFeatureEnabledState(
        wil::details *a1,
        signed __int32 *a2)
{
  signed __int32 v2; // eax
  int v5; // ebp
  __int64 (__fastcall *v6)(__int64, _QWORD, int *); // rax
  int v7; // edx
  unsigned int v8; // r8d
  int v9; // edi
  int v10; // edi
  int v11; // eax
  int v12; // esi
  int v13; // edi
  signed __int32 v14; // eax
  int v15; // ecx
  signed __int32 v16; // r9d
  signed __int32 v17; // edx
  int v18; // r8d
  int i; // [rsp+50h] [rbp+8h] BYREF
  int v21; // [rsp+58h] [rbp+10h]
  char v22; // [rsp+5Ch] [rbp+14h]
  signed __int32 v23; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = *(_DWORD *)a1;
  if ( (v2 & 6) == 6 )
    return a2;
  v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
  v6 = (__int64 (__fastcall *)(__int64, _QWORD, int *))g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v6 = (__int64 (__fastcall *)(__int64, _QWORD, int *))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v7 = v6(8299381LL, 0LL, &i);
  }
  else
  {
    v7 = 0;
  }
  v8 = v7 & 0xFFFFFF3F;
  v9 = 8 * (v7 & 0x80 | (4 * (v7 & 0x40 | (4 * (v7 & 3)))));
  if ( (v7 & 0xFFFFFF3F) == 0 )
  {
    v10 = v9 | 0x40;
LABEL_11:
    if ( (`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetImpl'::`2'::impl[0] & 4) == 0 )
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_FrameworkScalability>::GetCachedFeatureEnabledState(
        (wil::details *)`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetImpl'::`2'::impl,
        &v23);
    v21 = 0;
    v22 = 3;
    v12 = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
      1u,
      0);
    goto LABEL_15;
  }
  v11 = 0;
  if ( v8 == 2 )
    v11 = 64;
  v10 = v11 | v9;
  if ( v8 == 2 )
    goto LABEL_11;
  v12 = 0;
LABEL_15:
  v13 = v12 | v10;
  v14 = *a2;
  v15 = v5 != 0 ? i : 0;
  for ( i = v15; ; v15 = i )
  {
    *a2 = v14;
    v16 = v14;
    v17 = v14;
    if ( v15 && (v14 & 2) == 0 )
    {
      v17 = v14 ^ (v14 ^ v13) & 0x9C1 | 2;
      *a2 = v17;
    }
    v18 = v14 & 4;
    if ( (v14 & 4) == 0 )
    {
      v17 = ((unsigned __int16)v13 ^ (unsigned __int16)v17) & 0x400 ^ v17 | 4;
      *a2 = v17;
    }
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v17, v14);
    if ( v16 == v14 )
      break;
  }
  if ( !v18 )
    wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 0, v5);
  if ( (*(_BYTE *)a2 & 2) == 0 )
    *a2 ^= (v13 ^ *a2) & 0x9C1;
  return a2;
}
