/*
 * XREFs of ?ClearCache@CExpression@@UEAAXXZ @ 0x1801C0B30
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2929769787@@@details@wil@@QEAA_NXZ @ 0x1800EFDB8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2929769787@@@details@wil@@QEAA_NX.c)
 */

void __fastcall CExpression::ClearCache(CExpression *this)
{
  char IsEnabled; // al
  void *v3; // rcx

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_2929769787>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_2929769787>::GetImpl'::`2'::impl);
  v3 = (void *)*((_QWORD *)this + 42);
  if ( !IsEnabled || v3 )
    memset_0(v3, 0, *((unsigned int *)this + 86));
}
