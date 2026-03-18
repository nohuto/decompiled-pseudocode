/*
 * XREFs of TtmpStartCallout @ 0x1409A2D68
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1409A1E04 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x1409A20D0 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1409A216C (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1409A21EC (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1409A229C (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1409A2EE4 (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     TtmpCalloutArmWatchdog @ 0x1409A233C (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x1409A23E0 (TtmpCalloutCreateWatchdog.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x1409A27E4 (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmpInitializeWatchdogTimeouts @ 0x1409A295C (TtmpInitializeWatchdogTimeouts.c)
 *     TtmiLogCalloutStart @ 0x1409A6ED0 (TtmiLogCalloutStart.c)
 */

__int64 __fastcall TtmpStartCallout(__int64 a1, int *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  _DWORD *v10; // rax
  unsigned int v11; // ecx
  int v12; // edi
  unsigned int CalloutTagFromCalloutType; // eax
  __int64 result; // rax

  if ( !TtmpDeviceCalloutTimeoutsSet )
    TtmpDeviceCalloutTimeoutsSet = TtmpInitializeWatchdogTimeouts(a1);
  *(_QWORD *)a1 = a2;
  v10 = &TtmpDeviceWatchdogTimeouts;
  *(_QWORD *)(a1 + 8) = a3;
  v11 = 0;
  *(_DWORD *)(a1 + 16) = a4;
  while ( *v10 != a4 )
  {
    ++v11;
    v10 += 6;
    if ( v11 >= 6 )
    {
      v12 = 30000;
      goto LABEL_8;
    }
  }
  v12 = v10[4];
  if ( !v12 )
    goto LABEL_11;
LABEL_8:
  if ( TtmpCalloutCreateWatchdog(a1) >= 0 && *(_QWORD *)(a1 + 24) )
    TtmpCalloutArmWatchdog(a1, *a2, v12, a5);
LABEL_11:
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  CalloutTagFromCalloutType = TtmpGetCalloutTagFromCalloutType(a4);
  TtmiLogCalloutStart(*(unsigned int *)(a3 + 16), *(_QWORD *)(a3 + 24), CalloutTagFromCalloutType, a6);
  result = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 32) = MEMORY[0xFFFFF78000000008];
  return result;
}
