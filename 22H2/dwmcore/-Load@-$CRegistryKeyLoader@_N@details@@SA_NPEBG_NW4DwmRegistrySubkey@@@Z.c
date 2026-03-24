/*
 * XREFs of ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x1800B3324
 * Callers:
 *     _dynamic_initializer_for__CCommonRegistryData::ConfigureInput__ @ 0x180002B40 (_dynamic_initializer_for__CCommonRegistryData--ConfigureInput__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::DisableDrawListCaching__ @ 0x180002B70 (_dynamic_initializer_for__CCommonRegistryData--DisableDrawListCaching__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::DisableProjectedShadows__ @ 0x180002BA0 (_dynamic_initializer_for__CCommonRegistryData--DisableProjectedShadows__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::EnableBloom__ @ 0x180002BD0 (_dynamic_initializer_for__CCommonRegistryData--Scene--EnableBloom__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::EnableCommonSuperSets__ @ 0x180002C00 (_dynamic_initializer_for__CCommonRegistryData--EnableCommonSuperSets__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::EnableCpuClipping__ @ 0x180002C30 (_dynamic_initializer_for__CCommonRegistryData--EnableCpuClipping__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::EnableDrawToBackbuffer__ @ 0x180002C60 (_dynamic_initializer_for__CCommonRegistryData--Scene--EnableDrawToBackbuffer__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::EnableEffectCaching__ @ 0x180002C90 (_dynamic_initializer_for__CCommonRegistryData--EnableEffectCaching__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::EnableFrontBufferRenderChecks__ @ 0x180002CC0 (_dynamic_initializer_for__CCommonRegistryData--EnableFrontBufferRenderChecks__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::EnableImageProcessing__ @ 0x180002CF0 (_dynamic_initializer_for__CCommonRegistryData--Scene--EnableImageProcessing__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::EnableMegaRects__ @ 0x180002D20 (_dynamic_initializer_for__CCommonRegistryData--EnableMegaRects__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::EnablePrimitiveReordering__ @ 0x180002D50 (_dynamic_initializer_for__CCommonRegistryData--EnablePrimitiveReordering__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::EnableShadow__ @ 0x180002D80 (_dynamic_initializer_for__CCommonRegistryData--Scene--EnableShadow__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::GammaBlendPencil__ @ 0x180002DF0 (_dynamic_initializer_for__CCommonRegistryData--GammaBlendPencil__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::GammaBlendWithFP16__ @ 0x180002E20 (_dynamic_initializer_for__CCommonRegistryData--GammaBlendWithFP16__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessing8bit__ @ 0x180002E50 (_dynamic_initializer_for__CCommonRegistryData--Scene--ImageProcessing8bit__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::InkGPUAccelOverrideVendorWhitelist__ @ 0x180002F70 (_dynamic_initializer_for__CCommonRegistryData--InkGPUAccelOverrideVendorWhitelist__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::LogExpressionPerfStats__ @ 0x180002FA0 (_dynamic_initializer_for__CCommonRegistryData--LogExpressionPerfStats__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::OptimizeForDirtyExpressions__ @ 0x180003100 (_dynamic_initializer_for__CCommonRegistryData--OptimizeForDirtyExpressions__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetEnabled__ @ 0x180003390 (_dynamic_initializer_for__CCommonRegistryData--SuperWetEnabled__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::UniformSpaceDpiMode__ @ 0x180003480 (_dynamic_initializer_for__CCommonRegistryData--UniformSpaceDpiMode__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::UseHWDrawListEntriesOnWARP__ @ 0x1800034B0 (_dynamic_initializer_for__CCommonRegistryData--UseHWDrawListEntriesOnWARP__.c)
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1800B3354 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

bool __fastcall details::CRegistryKeyLoader<bool>::Load(__int64 a1, char a2, __int64 a3)
{
  int v5; // [rsp+48h] [rbp+20h] BYREF

  if ( (unsigned __int8)RegGetDwmDwordHelper(a1, &v5, a3) )
    return v5 != 0;
  else
    return a2;
}
