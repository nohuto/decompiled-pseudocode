/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0065830 (-SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     Feature_1349830969__private_IsEnabledDeviceUsage @ 0x1C00D5C3C (Feature_1349830969__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::SetFloatProperty(
        DirectComposition::CVisualMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  Feature_1349830969__private_IsEnabledDeviceUsage();
  return DirectComposition::CVisualMarshaler::SetFloatProperty(this, a2, a3, a4);
}
