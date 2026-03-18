/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D6010
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z @ 0x1C000F610 (-SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z.c)
 *     Feature_1349830969__private_IsEnabledDeviceUsage @ 0x1C00D5C3C (Feature_1349830969__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CRegionGeometryMarshaler,2>::SetFloatProperty(
        DirectComposition::CGeometryMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  Feature_1349830969__private_IsEnabledDeviceUsage();
  return DirectComposition::CGeometryMarshaler::SetFloatProperty(this, a2, a3, a4);
}
