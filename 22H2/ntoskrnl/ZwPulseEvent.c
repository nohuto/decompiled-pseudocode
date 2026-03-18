/*
 * XREFs of ZwPulseEvent @ 0x14041CF60
 * Callers:
 *     DifZwPulseEventWrapper @ 0x1405F3620 (DifZwPulseEventWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPulseEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
