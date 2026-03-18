/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionPointLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5E30
 * Callers:
 *     <none>
 * Callees:
 *     Feature_1349830969__private_IsEnabledDeviceUsage @ 0x1C00D5C3C (Feature_1349830969__private_IsEnabledDeviceUsage.c)
 *     ?SetFloatProperty@CCompositionPointLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C022B540 (-SetFloatProperty@CCompositionPointLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionPointLightMarshaler,2>::SetFloatProperty(
        DirectComposition::CCompositionPointLightMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  Feature_1349830969__private_IsEnabledDeviceUsage();
  return DirectComposition::CCompositionPointLightMarshaler::SetFloatProperty(this, a2, a3, a4);
}
