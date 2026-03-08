/*
 * XREFs of KeSuspendDynamicTracing @ 0x14057C7E8
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     <none>
 */

void KeSuspendDynamicTracing()
{
  _InterlockedOr(&KiDynamicTraceMask, 4u);
}
