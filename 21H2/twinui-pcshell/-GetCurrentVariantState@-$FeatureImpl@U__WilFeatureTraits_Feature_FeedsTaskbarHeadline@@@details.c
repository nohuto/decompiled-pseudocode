/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800B520C
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B4188 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@.c)
 * Callees:
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18007FD80 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BA0E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NW4.c)
 */

int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetCurrentVariantState(
        __int64 a1,
        int *a2,
        int *a3)
{
  int FeatureVariant; // eax
  int v5; // esi
  unsigned int v6; // ebx
  char IsEnabled; // al
  int v8; // ecx
  unsigned int v9; // ecx
  int *result; // rax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v12 = HIDWORD(a1);
  v11 = 0;
  FeatureVariant = wil::details::WilApi_GetFeatureVariant((wil::details *)0x1A1A690, 3LL, (__int64)&v13, &v11, a3);
  *(_QWORD *)a2 = 0LL;
  v5 = FeatureVariant & 0x100;
  v6 = FeatureVariant & 0xFFFFFE7F;
  *a2 = (v11 != 0 ? 0x400 : 0) | (16 * (FeatureVariant & 0x80));
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsCore>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::GetImpl'::`2'::impl);
  v8 = *a2;
  if ( IsEnabled )
  {
    if ( v6 )
    {
      v9 = (v8 ^ (v6 << 12)) & 0x3F000 ^ v8;
      if ( v5 )
        a2[1] = v13;
      else
        a2[1] = 0;
    }
    else
    {
      a2[1] = 0;
      v9 = v8 & 0xFFFC0FFF | 0x6000;
    }
  }
  else
  {
    a2[1] = 0;
    v9 = v8 & 0xFFFC0FFF;
  }
  result = a2;
  *a2 = v9;
  return result;
}
