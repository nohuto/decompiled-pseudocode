/*
 * XREFs of ?EmitUpdateCommands@CSceneMeshMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025AB70
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetColorDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0255B38 (-EmitSetColorDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetColorLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0255C2C (-EmitSetColorLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetIndexDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02566FC (-EmitSetIndexDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetIndexLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025677C (-EmitSetIndexLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetNormalDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025774C (-EmitSetNormalDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetNormalLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0257854 (-EmitSetNormalLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPositionDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0258470 (-EmitSetPositionDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPositionLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02584F0 (-EmitSetPositionLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPrimitiveTopologyCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0258560 (-EmitSetPrimitiveTopologyCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTangentDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0258FB8 (-EmitSetTangentDataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTangentLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025903C (-EmitSetTangentLayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTexCoord0DataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025913C (-EmitSetTexCoord0DataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTexCoord0LayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02591C0 (-EmitSetTexCoord0LayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTexCoord1DataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0259234 (-EmitSetTexCoord1DataCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTexCoord1LayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02592B8 (-EmitSetTexCoord1LayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSceneMeshMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneMeshMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CSceneMeshMarshaler::EmitSetPrimitiveTopologyCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetIndexDataCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetPositionDataCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetNormalDataCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetTexCoord0DataCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetTexCoord1DataCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetColorDataCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetTangentDataCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetIndexLayoutCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetPositionLayoutCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetNormalLayoutCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetTexCoord0LayoutCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetTexCoord1LayoutCommand(this, a2)
    && DirectComposition::CSceneMeshMarshaler::EmitSetColorLayoutCommand(this, a2) )
  {
    return DirectComposition::CSceneMeshMarshaler::EmitSetTangentLayoutCommand(this, a2) != 0;
  }
  return v4;
}
