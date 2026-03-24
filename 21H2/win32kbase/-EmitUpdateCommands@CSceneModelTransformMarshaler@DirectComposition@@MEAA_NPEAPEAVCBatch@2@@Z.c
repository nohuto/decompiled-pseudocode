/*
 * XREFs of ?EmitUpdateCommands@CSceneModelTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DB680
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetTransformCommand@CSceneModelTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DA990 (-EmitSetTransformCommand@CSceneModelTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 */

bool __fastcall DirectComposition::CSceneModelTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneModelTransformMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  return DirectComposition::CSceneModelTransformMarshaler::EmitSetTransformCommand(this, a2) != 0;
}
