/*
 * XREFs of PopCheckSkipTick @ 0x140860800
 * Callers:
 *     PopNewProcessorCallback @ 0x14097D420 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 */

bool PopCheckSkipTick()
{
  return PopApicMode == 2
      || (HvlEnlightenments & 0x4000) != 0 && (HvlpFlags & 2) == 0
      || PopApicMode == 3 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 0x20;
}
