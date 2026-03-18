/*
 * XREFs of SetTouchInputStatus @ 0x1C00D8840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SetTouchInputStatus(int a1)
{
  RawInputManagerObject::bTouchInputAllowed = a1;
}
