/*
 * XREFs of KiInitSystem @ 0x140B5EFDC
 * Callers:
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 * Callees:
 *     KiInitializeIdleProcess @ 0x140B5F2B8 (KiInitializeIdleProcess.c)
 *     KiForceSymbolReferences @ 0x140B92408 (KiForceSymbolReferences.c)
 */

__int64 __fastcall KiInitSystem(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( KiForceSymbolReferencesTrigger )
    KiForceSymbolReferences();
  v2 = 1024LL;
  LODWORD(xmmword_140E018F0) = 0;
  qword_140C423E8 = (__int64)&KeBugCheckCallbackListHead;
  KeBugCheckCallbackListHead = (__int64)&KeBugCheckCallbackListHead;
  qword_140C41EA8 = (__int64)&KeBugCheckReasonCallbackListHead;
  KeBugCheckReasonCallbackListHead = &KeBugCheckReasonCallbackListHead;
  qword_140C41E98 = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  KeBugCheckAddRemovePagesCallbackListHead = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  qword_140C41EB8 = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  KeBugCheckTriageDumpDataArrayListHead = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  qword_140C42268 = (__int64)&KiProfileListHead;
  KiProfileListHead = (__int64)&KiProfileListHead;
  qword_140C42248 = (__int64)&KiProfileSourceListHead;
  KiProfileSourceListHead = (__int64)&KiProfileSourceListHead;
  KiSwapEvent.Header.WaitListHead.Blink = &KiSwapEvent.Header.WaitListHead;
  KiSwapEvent.Header.WaitListHead.Flink = &KiSwapEvent.Header.WaitListHead;
  *(_QWORD *)&KeServiceDescriptorTable = KiServiceTable;
  LODWORD(xmmword_140E018D0) = KiServiceLimit;
  *((_QWORD *)&xmmword_140E018D0 + 1) = &KiArgumentTable;
  qword_140C42398 = (__int64)KiBalanceSetManagerDeferredRoutine;
  qword_140C423A0 = (__int64)&KiBalanceSetManagerPeriodicEvent;
  qword_140C42290 = (__int64)&qword_140C42288;
  qword_140C42288 = (__int64)&qword_140C42288;
  KiStackProtectNotifyEvent.Header.WaitListHead.Blink = &KiStackProtectNotifyEvent.Header.WaitListHead;
  KiStackProtectNotifyEvent.Header.WaitListHead.Flink = &KiStackProtectNotifyEvent.Header.WaitListHead;
  v3 = &KiAbTreeArray;
  KeBugCheckCallbackLock = 0LL;
  LOWORD(KiSwapEvent.Header.Lock) = 1;
  KiSwapEvent.Header.Size = 6;
  KiSwapEvent.Header.SignalState = 0;
  KiProcessInSwapListHead = 0LL;
  KiProcessOutSwapListHead = 0LL;
  KiStackInSwapListHead = 0LL;
  KeServiceDescriptorTableShadow[0] = KeServiceDescriptorTable;
  xmmword_140D1F150 = xmmword_140E018D0;
  xmmword_140D1F160 = xmmword_140E018E0;
  xmmword_140D1F170 = xmmword_140E018F0;
  KeServiceDescriptorTableFilter[0] = KeServiceDescriptorTable;
  xmmword_140D1F2D0 = xmmword_140E018D0;
  xmmword_140D1F2E0 = xmmword_140E018E0;
  xmmword_140D1F2F0 = xmmword_140E018F0;
  LODWORD(KiBalanceSetManagerPeriodicDpc) = 275;
  qword_140C423B8 = 0LL;
  qword_140C42390 = 0LL;
  KiBalanceSetManagerPeriodicEvent = 1;
  byte_140C42282 = 6;
  dword_140C42284 = 0;
  LOWORD(KiStackProtectNotifyEvent.Header.Lock) = 0;
  KiStackProtectNotifyEvent.Header.Size = 6;
  KiStackProtectNotifyEvent.Header.SignalState = 0;
  do
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3 += 8;
    --v2;
  }
  while ( v2 );
  KiDynamicProcessorLock.Count = 1;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Blink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Flink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  qword_140C422D8 = (__int64)KiSetVirtualHeteroClockIntervalRequestDpcRoutine;
  qword_140C42308 = (__int64)&KiProcessListHead;
  KiProcessListHead = (__int64)&KiProcessListHead;
  KiDynamicProcessorLock.Owner = 0LL;
  KiDynamicProcessorLock.Contention = 0;
  LOWORD(KiDynamicProcessorLock.Event.Header.Lock) = 1;
  KiDynamicProcessorLock.Event.Header.Size = 6;
  KiDynamicProcessorLock.Event.Header.SignalState = 0;
  LODWORD(KiSetVirtualHeteroClockIntervalRequestDpc) = 531;
  qword_140C422E0 = 0LL;
  qword_140C422F8 = 0LL;
  qword_140C422D0 = 0LL;
  return KiInitializeIdleProcess(a1);
}
