/*
 * XREFs of PopCheckSkipTick @ 0x140864E10
 * Callers:
 *     PopNewProcessorCallback @ 0x1409804D0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222070 (KeQueryActiveProcessorCountEx.c)
 */

bool PopCheckSkipTick()
{
  return PopApicMode == 2
      || (HvlEnlightenments & 0x4000) != 0 && (HvlpFlags & 2) == 0
      || PopApicMode == 3 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 0x20;
}
