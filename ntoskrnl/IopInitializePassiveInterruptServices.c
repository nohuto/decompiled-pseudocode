/*
 * XREFs of IopInitializePassiveInterruptServices @ 0x140B67854
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeInitializeQueue @ 0x1402A8580 (KeInitializeQueue.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x140853088 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x1408531AC (IopQueryPassiveInterruptRegistryOptions.c)
 */

__int64 IopInitializePassiveInterruptServices()
{
  void *v0; // rcx

  IopQueryPassiveInterruptRegistryOptions();
  PassiveInterruptListLock = 0LL;
  qword_140C5CF88 = (__int64)&PassiveInterruptList;
  PassiveInterruptList = (__int64)&PassiveInterruptList;
  KeInitializeQueue(&PassiveInterruptRealtimeWorkQueue, (unsigned __int8)PassiveInterruptRealtimeWorkerCount);
  return IopCreatePassiveInterruptRealtimeThreads(v0);
}
