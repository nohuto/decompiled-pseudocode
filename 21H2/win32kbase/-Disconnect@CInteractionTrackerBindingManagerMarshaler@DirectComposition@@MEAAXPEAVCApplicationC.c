/*
 * XREFs of ?Disconnect@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C02311A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0231098 (-CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@A.c)
 */

void __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::Disconnect(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(this, a2);
}
