/*
 * XREFs of ViIrpSynchronousCompletionRoutine @ 0x1409D1910
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

__int64 __fastcall ViIrpSynchronousCompletionRoutine(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
