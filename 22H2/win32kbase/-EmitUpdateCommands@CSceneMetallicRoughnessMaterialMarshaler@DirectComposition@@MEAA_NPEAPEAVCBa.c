/*
 * XREFs of ?EmitUpdateCommands@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DB520
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetBaseColorFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D66A8 (-EmitSetBaseColorFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_.c)
 *     ?EmitSetBaseColorInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D6724 (-EmitSetBaseColorInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_N.c)
 *     ?EmitSetMetallicFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D8548 (-EmitSetMetallicFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_N.c)
 *     ?EmitSetMetallicRoughnessInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D85BC (-EmitSetMetallicRoughnessInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition.c)
 *     ?EmitSetRoughnessFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D9A6C (-EmitSetRoughnessFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_.c)
 *     ?EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DB62C (-EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CScenePbrMaterialMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetBaseColorInputCommand(this, a2)
    && DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetBaseColorFactorCommand(this, a2)
    && DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetMetallicFactorCommand(this, a2)
    && DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetMetallicRoughnessInputCommand(this, a2) )
  {
    return DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetRoughnessFactorCommand(this, a2) != 0;
  }
  return v4;
}
