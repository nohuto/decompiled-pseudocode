/*
 * XREFs of ObpSetSiloDeviceMap @ 0x140855394
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x140855150 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140294DF0 (PsGetEffectiveServerSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     ObpSetDeviceMap @ 0x14078990C (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObpSetSiloDeviceMap(__int64 a1, void *a2, __int64 *a3)
{
  void *EffectiveServerSilo; // rax
  PEPROCESS v7; // rdx
  char v8; // di

  EffectiveServerSilo = (void *)PdcCreateWatchdogAroundClientCall();
  if ( (void *)a1 == EffectiveServerSilo )
  {
    v7 = PsInitialSystemProcess;
    v8 = 3;
  }
  else
  {
    v8 = 4;
    EffectiveServerSilo = (void *)PsGetEffectiveServerSilo(a1);
    v7 = 0LL;
  }
  return ObpSetDeviceMap(EffectiveServerSilo, (__int64)v7, a2, 0, v8, a3);
}
