/*
 * XREFs of Simulator_PauseInterpreterCallback @ 0x1C00495D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall Simulator_PauseInterpreterCallback(struct _KEVENT *a1)
{
  LONG result; // eax

  if ( a1 )
  {
    a1[1].Header.LockNV = 0;
    return KeSetEvent(a1, 0, 0);
  }
  return result;
}
