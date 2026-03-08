/*
 * XREFs of TtmpStartCallout @ 0x1409A0CA0
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x14099FD30 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x14099FFFC (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1409A0098 (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1409A0118 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1409A01C8 (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1409A0E1C (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     TtmpCalloutArmWatchdog @ 0x1409A0268 (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x1409A030C (TtmpCalloutCreateWatchdog.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x1409A0714 (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmpInitializeWatchdogTimeouts @ 0x1409A088C (TtmpInitializeWatchdogTimeouts.c)
 *     TtmiLogCalloutStart @ 0x1409A3C14 (TtmiLogCalloutStart.c)
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
