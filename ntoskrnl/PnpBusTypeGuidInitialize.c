/*
 * XREFs of PnpBusTypeGuidInitialize @ 0x140B5B2B8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 PnpBusTypeGuidInitialize()
{
  __int64 result; // rax

  PnpBusTypeGuidCountMax = 16;
  PnpBusTypeGuidArray = (PVOID)ExAllocatePool2(256LL, 0x100uLL, 0x75737050u);
  if ( PnpBusTypeGuidArray )
  {
    PnpBusTypeGuidCount = 0;
    PnpBusTypeGuidLock.Event.Header.WaitListHead.Blink = &PnpBusTypeGuidLock.Event.Header.WaitListHead;
    PnpBusTypeGuidLock.Event.Header.WaitListHead.Flink = &PnpBusTypeGuidLock.Event.Header.WaitListHead;
    result = 0LL;
    PnpBusTypeGuidLock.Count = 1;
    PnpBusTypeGuidLock.Owner = 0LL;
    PnpBusTypeGuidLock.Contention = 0;
    LOWORD(PnpBusTypeGuidLock.Event.Header.Lock) = 1;
    PnpBusTypeGuidLock.Event.Header.Size = 6;
    PnpBusTypeGuidLock.Event.Header.SignalState = 0;
  }
  else
  {
    PnpBusTypeGuidCountMax = 0;
    return 3221225626LL;
  }
  return result;
}
