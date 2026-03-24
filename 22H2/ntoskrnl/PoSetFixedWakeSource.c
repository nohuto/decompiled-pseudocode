/*
 * XREFs of PoSetFixedWakeSource @ 0x1409B13A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PoSetFixedWakeSource(int a1)
{
  PopFixedWakeSourceMask |= a1;
}
