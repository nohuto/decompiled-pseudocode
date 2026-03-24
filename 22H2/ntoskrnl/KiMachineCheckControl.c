/*
 * XREFs of KiMachineCheckControl @ 0x140409A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KiMachineCheckControl()
{
  return KiDecodeMcaFault();
}
