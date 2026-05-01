/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18007FD00
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18007FC24 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details.c)
 * Callees:
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18007FD80 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 */

int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetCurrentVariantState(
        __int64 a1,
        int *a2,
        int *a3)
{
  unsigned int FeatureVariant; // r8d
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // r8d
  int v8; // r8d
  int *result; // rax
  int *v10; // [rsp+28h] [rbp-10h]
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v12 = HIDWORD(a1);
  v11 = 0;
  FeatureVariant = wil::details::WilApi_GetFeatureVariant(
                     (wil::details *)0x1126927,
                     3u,
                     (enum FEATURE_CHANGE_TIME)&v13,
                     &v11,
                     a3,
                     v10);
  v5 = FeatureVariant & 0x100;
  v6 = (v11 != 0 ? 0x400 : 0) | (16 * (FeatureVariant & 0x80));
  v7 = FeatureVariant & 0xFFFFFE7F;
  if ( v7 )
  {
    v8 = (v7 & 0x3F) << 12;
    if ( v5 )
    {
      a2[1] = v13;
      goto LABEL_4;
    }
  }
  else
  {
    v8 = 0x2000;
  }
  a2[1] = 0;
LABEL_4:
  result = a2;
  *a2 = v8 | v6;
  return result;
}
