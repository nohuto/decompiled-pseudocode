/*
 * XREFs of SetTouchInputStatus @ 0x1C0127B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SetTouchInputStatus(int a1)
{
  RawInputManagerObject::bTouchInputAllowed = a1;
}
