/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCMatrixTransform3DMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5F20
 * Callers:
 *     <none>
 * Callees:
 *     Feature_1349830969__private_IsEnabledDeviceUsage @ 0x1C00D5C3C (Feature_1349830969__private_IsEnabledDeviceUsage.c)
 *     ?SetFloatProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0212B30 (-SetFloatProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransform3DMarshaler,2>::SetFloatProperty(
        DirectComposition::CMatrixTransform3DMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  Feature_1349830969__private_IsEnabledDeviceUsage();
  return DirectComposition::CMatrixTransform3DMarshaler::SetFloatProperty(this, a2, a3, a4);
}
