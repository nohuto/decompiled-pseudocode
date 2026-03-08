/*
 * XREFs of ?EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0268DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A5668 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBoundTrackerMarshalerUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0268BF8 (-EmitBoundTrackerMarshalerUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectCompos.c)
 *     ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0268C98 (-EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NP.c)
 */

char __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2)
    && DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitBoundTrackerMarshalerUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2) )
  {
    return DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitSetTrackerBindingMode(this, a2) != 0;
  }
  return v4;
}
