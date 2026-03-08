/*
 * XREFs of Controller_HighResTimerCompletion @ 0x1C0033750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall Controller_HighResTimerCompletion(__int64 a1, struct _KEVENT *a2)
{
  return KeSetEvent(a2, 0, 0);
}
