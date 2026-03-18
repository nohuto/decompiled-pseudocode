/*
 * XREFs of KeAbCrossThreadDeleteDpcRoutine @ 0x140579C40
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1403CC3D0 (KeAbMarkCrossThreadReleasable.c)
 */

LONG __fastcall KeAbCrossThreadDeleteDpcRoutine(__int64 a1, __int64 a2)
{
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a2 + 40) )
    KeAbMarkCrossThreadReleasable(a1, *(__int64 **)(a2 + 32));
  else
    **(_BYTE **)(a2 + 32) |= 1u;
  return KeSetEvent((PRKEVENT)a2, 0, 0);
}
