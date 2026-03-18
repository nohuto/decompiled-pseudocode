/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0007DD0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     Feature_1349830969__private_IsEnabledDeviceUsage @ 0x1C00D5C3C (Feature_1349830969__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>::SetFloatProperty(
        DirectComposition::CResourceMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  if ( (unsigned int)Feature_1349830969__private_IsEnabledDeviceUsage() )
    return 3221225485LL;
  else
    return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
}
