/*
 * XREFs of KeSuspendDynamicTracing @ 0x14057ECF8
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     <none>
 */

void KeSuspendDynamicTracing()
{
  _InterlockedOr(&KiDynamicTraceMask, 4u);
}
