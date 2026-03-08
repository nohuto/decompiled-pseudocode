/*
 * XREFs of KeInitializeGuardedMutex @ 0x140204750
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14068C2D0 (PiUEventNotifyUserMode.c)
 *     PiUEventInitClientRegistrationContext @ 0x14068E428 (PiUEventInitClientRegistrationContext.c)
 *     CmpInitializeDelayedCloseTable @ 0x140812D20 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitSIDToHiveMapping @ 0x14081356C (CmpInitSIDToHiveMapping.c)
 *     PiDqObjectManagerInit @ 0x14081D390 (PiDqObjectManagerInit.c)
 *     PfTInitialize @ 0x140845B5C (PfTInitialize.c)
 *     EtwpInitializeProviderTraits @ 0x140860654 (EtwpInitializeProviderTraits.c)
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
