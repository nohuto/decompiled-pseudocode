/*
 * XREFs of ?ShowFocus@CDragVisualAcc@@UEAAXXZ @ 0x18049E030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDragVisualAcc::ShowFocus(IRawElementProviderSimple *this)
{
  UiaRaiseAutomationEvent(this - 4, 30008);
  UiaRaiseAutomationEvent(this - 4, 20005);
  CDragVisualAcc::UpdateBoundingRect((CDragVisualAcc *)this);
}
