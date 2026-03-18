/*
 * XREFs of UserSleep @ 0x1C014E100
 * Callers:
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x1C01F3B08 (-Reconnect@CIVChannel@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall UserSleep(int a1)
{
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -10000LL * a1;
  return KeDelayExecutionThread(1, 0, &Interval);
}
