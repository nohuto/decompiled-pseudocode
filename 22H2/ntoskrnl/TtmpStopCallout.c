/*
 * XREFs of TtmpStopCallout @ 0x1409A3E1C
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1409A2DC0 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x1409A308C (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1409A3128 (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1409A31A8 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1409A3258 (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1409A3EAC (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1409A33FC (TtmpCalloutDestroyWatchdog.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x1409A37A4 (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmiLogCalloutStop @ 0x1409A6DD8 (TtmiLogCalloutStop.c)
 */

BOOLEAN __fastcall TtmpStopCallout(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int CalloutTagFromCalloutType; // eax
  __int64 v6; // r10
  struct _KTHREAD *CurrentThread; // rax

  v4 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) )
    TtmpCalloutDestroyWatchdog(a1);
  CalloutTagFromCalloutType = TtmpGetCalloutTagFromCalloutType(*(_DWORD *)(a1 + 16));
  TtmiLogCalloutStop(
    *(_DWORD *)(v6 + 16),
    *(_DWORD *)(v6 + 72),
    *(_QWORD *)(v6 + 24),
    CalloutTagFromCalloutType,
    a2,
    v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
}
