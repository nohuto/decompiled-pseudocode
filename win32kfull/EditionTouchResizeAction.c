/*
 * XREFs of EditionTouchResizeAction @ 0x1C01F33B0
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncNotifyIsInMoveSizeChange @ 0x1C026FC5C (DwmAsyncNotifyIsInMoveSizeChange.c)
 */

__int64 __fastcall EditionTouchResizeAction(__int64 a1, int a2)
{
  void *v3; // rax

  v3 = (void *)ReferenceDwmApiPort(a1);
  return DwmAsyncNotifyIsInMoveSizeChange(v3, a2);
}
