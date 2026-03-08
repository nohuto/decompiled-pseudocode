/*
 * XREFs of TtmiLogError @ 0x1409A536C
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x14099F580 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x14099F880 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x14099F940 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x14099FACC (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x14099FC9C (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSetInputWakeCapability @ 0x14099FF38 (TtmiSetInputWakeCapability.c)
 *     TtmpCallAssignedToTerminal @ 0x14099FFFC (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x1409A0118 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1409A01C8 (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1409A0500 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x1409A0AE4 (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x1409A0BB4 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmInitCurrentSession @ 0x1409A0FC0 (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409A1234 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A12C8 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409A1344 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1409A13E0 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1409A1578 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x1409A1778 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1409A1808 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1409A18A0 (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1409A1950 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x1409A1AFC (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x1409A1BBC (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1409A1E3C (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1409A1ED8 (TtmiWriteEventToAllQueues.c)
 *     TtmpAcquireSessionById @ 0x1409A1F50 (TtmpAcquireSessionById.c)
 *     TtmpFindPowerRequestEntryById @ 0x1409A22B8 (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x1409A2488 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionWorker @ 0x1409A2950 (TtmpSessionWorker.c)
 *     TtmpSetDisplayRequestEnded @ 0x1409A2B80 (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1409A2D6C (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1409A2E3C (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1409A2F00 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmDispatchApi @ 0x1409A2FAC (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1409A3258 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x1409A33A8 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1409A3450 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1409A358C (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1409A367C (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x1409A3728 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x1409A37F4 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1409A3890 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1409A394C (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1409A39F8 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1409A3AAC (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1409A3B68 (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiCreateTerminal @ 0x1409A7DD8 (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x1409A80CC (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x1409A8578 (TtmiTerminalMonitorControl.c)
 *     TtmiCreateEventQueue @ 0x1409A901C (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409A9170 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1409A92D8 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetProcessSessionIdEx @ 0x1402BDFA0 (PsGetProcessSessionIdEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall TtmiLogError(const CHAR *a1, int a2, int a3, int a4)
{
  int ProcessSessionId; // eax
  int v9; // r8d
  int v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-39h] BYREF
  int *v15; // [rsp+60h] [rbp-19h]
  int v16; // [rsp+68h] [rbp-11h]
  int v17; // [rsp+6Ch] [rbp-Dh]
  _BYTE v18[16]; // [rsp+70h] [rbp-9h] BYREF
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  int *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]

  if ( TtmpBreakOnError
    && (!dword_140D531E4 || dword_140D531E4 == a2)
    && (!dword_140D531E8 || dword_140D531E8 == a3)
    && (!dword_140D531EC || dword_140D531EC == a4) )
  {
    __debugbreak();
  }
  if ( (unsigned int)dword_140D53948 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D53948, 2LL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v17 = 0;
      v10 = ProcessSessionId;
      v16 = 4;
      v15 = &v10;
      tlgCreate1Sz_char((__int64)v18, a1);
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v19 = &v11;
      v20 = v9;
      v22 = &v12;
      v25 = &v13;
      v23 = v9;
      v26 = v9;
      v11 = a2;
      v12 = a3;
      v13 = a4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140D53948,
        (unsigned __int8 *)byte_140032BCD,
        0LL,
        0LL,
        7u,
        &v14);
    }
  }
}
