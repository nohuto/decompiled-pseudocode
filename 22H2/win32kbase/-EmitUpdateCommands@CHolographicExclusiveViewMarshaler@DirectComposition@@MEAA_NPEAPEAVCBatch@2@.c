/*
 * XREFs of ?EmitUpdateCommands@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0226820
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02266A4 (-EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSwapChain@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0226798 (-EmitSwapChain@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022687C (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CHolographicExclusiveViewMarshaler::EmitCreate(this, (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CHolographicExclusiveViewMarshaler::EmitSwapChain(
         this,
         (struct DirectComposition::CBatch ***)a2) )
  {
    return DirectComposition::CHolographicExclusiveViewMarshaler::EmitViewData(this, a2);
  }
  return v4;
}
