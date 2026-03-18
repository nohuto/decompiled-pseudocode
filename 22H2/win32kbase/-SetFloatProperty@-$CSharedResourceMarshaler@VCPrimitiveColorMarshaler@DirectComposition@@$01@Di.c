/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCPrimitiveColorMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5FC0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_1349830969__private_IsEnabledDeviceUsage @ 0x1C00D5C3C (Feature_1349830969__private_IsEnabledDeviceUsage.c)
 *     ?SetFloatProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C02238D0 (-SetFloatProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CPrimitiveColorMarshaler,2>::SetFloatProperty(
        DirectComposition::CPrimitiveColorMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  Feature_1349830969__private_IsEnabledDeviceUsage();
  return DirectComposition::CPrimitiveColorMarshaler::SetFloatProperty(this, a2, a3, a4);
}
