/*
 * XREFs of PfSnAllocateEnablePrefetcherTimer @ 0x140A8EC40
 * Callers:
 *     PfSnQueueEnablePrefetcherTimer @ 0x14085F238 (PfSnQueueEnablePrefetcherTimer.c)
 *     PfSnBeginBootPhase @ 0x140A859AC (PfSnBeginBootPhase.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140237DB0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

struct _KDPC *__fastcall PfSnAllocateEnablePrefetcherTimer(ULONG a1)
{
  struct _KTIMER *Pool2; // rax
  struct _KDPC *v3; // rbx

  Pool2 = (struct _KTIMER *)ExAllocatePool2(64LL, 136LL, 2001756995LL);
  v3 = (struct _KDPC *)Pool2;
  if ( Pool2 )
  {
    KeInitializeTimerEx(Pool2, NotificationTimer);
    KeInitializeDpc(v3 + 1, (PKDEFERRED_ROUTINE)PfSnEnablePrefetcherTimerRoutine, v3);
    v3[2].TargetInfoAsUlong = a1;
  }
  return v3;
}
