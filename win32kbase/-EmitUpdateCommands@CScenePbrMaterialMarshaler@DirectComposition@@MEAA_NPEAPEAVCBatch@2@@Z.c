/*
 * XREFs of ?EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025ADF8
 * Callers:
 *     ?EmitUpdateCommands@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025ACA0 (-EmitUpdateCommands@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBa.c)
 * Callees:
 *     ?EmitSetAlphaCutoffCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0254CA8 (-EmitSetAlphaCutoffCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetAlphaModeCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0254D18 (-EmitSetAlphaModeCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetEmissiveFactorCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0255F80 (-EmitSetEmissiveFactorCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetEmissiveInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0256000 (-EmitSetEmissiveInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetIsDoubleSidedCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02568CC (-EmitSetIsDoubleSidedCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetNormalInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02577D0 (-EmitSetNormalInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetNormalScaleCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02578C8 (-EmitSetNormalScaleCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetOcclusionInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0257938 (-EmitSetOcclusionInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetOcclusionStrengthCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02579BC (-EmitSetOcclusionStrengthCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 */

char __fastcall DirectComposition::CScenePbrMaterialMarshaler::EmitUpdateCommands(
        DirectComposition::CScenePbrMaterialMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CScenePbrMaterialMarshaler::EmitSetAlphaCutoffCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetAlphaModeCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetEmissiveInputCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetEmissiveFactorCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetIsDoubleSidedCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetNormalInputCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetNormalScaleCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetOcclusionInputCommand(this, a2) )
  {
    return DirectComposition::CScenePbrMaterialMarshaler::EmitSetOcclusionStrengthCommand(this, a2) != 0;
  }
  return v4;
}
