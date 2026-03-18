/*
 * XREFs of KeInitializeGuardedMutex @ 0x14031D690
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x1407821E4 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x140783EFC (PiUEventNotifyUserMode.c)
 *     PiDqObjectManagerInit @ 0x140814CC0 (PiDqObjectManagerInit.c)
 *     PfTInitialize @ 0x140848CBC (PfTInitialize.c)
 *     CmpInitializeDelayedCloseTable @ 0x1408637C8 (CmpInitializeDelayedCloseTable.c)
 *     EtwpInitializeProviderTraits @ 0x140864C94 (EtwpInitializeProviderTraits.c)
 *     CmpInitSIDToHiveMapping @ 0x1408663A4 (CmpInitSIDToHiveMapping.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  Mutex->Count = 1;
  Mutex->Owner = 0LL;
  Mutex->Contention = 0;
  Mutex->Event.Header.SignalState = 0;
  Mutex->Event.Header.WaitListHead.Blink = &Mutex->Event.Header.WaitListHead;
  Mutex->Event.Header.WaitListHead.Flink = &Mutex->Event.Header.WaitListHead;
  LOWORD(Mutex->Event.Header.Lock) = 1;
  Mutex->Event.Header.Size = 6;
}
