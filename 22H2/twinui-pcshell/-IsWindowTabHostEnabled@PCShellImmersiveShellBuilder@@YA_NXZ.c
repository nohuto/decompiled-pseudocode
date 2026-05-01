/*
 * XREFs of ?IsWindowTabHostEnabled@PCShellImmersiveShellBuilder@@YA_NXZ @ 0x1800C6FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NXZ @ 0x1800C7194 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA.c)
 */

bool __fastcall PCShellImmersiveShellBuilder::IsWindowTabHostEnabled(PCShellImmersiveShellBuilder *this)
{
  char v1; // bl

  v1 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl) )
    return !IsPPIEdition();
  return v1;
}
