/*
 * XREFs of StorResetCompletion @ 0x1C003A700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall StorResetCompletion(int a1, struct _KEVENT *a2)
{
  a2[2].Header.LockNV = a1;
  return KeSetEvent(a2 + 1, 0, 0);
}
