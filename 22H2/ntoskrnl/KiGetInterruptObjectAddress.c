/*
 * XREFs of KiGetInterruptObjectAddress @ 0x140378EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall KiGetInterruptObjectAddress(int a1)
{
  return &KeGetCurrentPrcb()->InterruptObject[a1];
}
