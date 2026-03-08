/*
 * XREFs of ?EmitDeletionCommand@CVisualTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A5110
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A5160 (-EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRoot@CVisualTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A5228 (-EmitRoot@CVisualTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CVisualTargetMarshaler::EmitDeletionCommand(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualTargetMarshaler::EmitRoot(this, a2) )
    return DirectComposition::CResourceMarshaler::EmitDeletionCommand(this, a2);
  return v4;
}
