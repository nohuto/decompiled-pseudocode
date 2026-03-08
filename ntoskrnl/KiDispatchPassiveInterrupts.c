/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x14045A370
 * Callers:
 *     KiScanInterruptObjectList @ 0x140417C90 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x14039E784 (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
