/*
 * XREFs of KeResumeDynamicTracing @ 0x14057C7D8
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     <none>
 */

void KeResumeDynamicTracing()
{
  _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFB);
}
