/*
 * XREFs of ?EmitUpdateCommands@CInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024FDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitBasicStateUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024FA70 (-EmitBasicStateUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentCountUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024FB04 (-EmitSegmentCountUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024FB78 (-EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitStartPointUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024FD3C (-EmitStartPointUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CInkMarshaler::EmitUpdateCommands(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CInkMarshaler::EmitBasicStateUpdate(this, a2)
    && DirectComposition::CInkMarshaler::EmitStartPointUpdate(this, a2)
    && DirectComposition::CInkMarshaler::EmitSegmentCountUpdate(this, a2) )
  {
    return DirectComposition::CInkMarshaler::EmitSegmentUpdate(this, a2);
  }
  return v4;
}
