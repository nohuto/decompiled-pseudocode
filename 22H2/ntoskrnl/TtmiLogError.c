/*
 * XREFs of TtmiLogError @ 0x1409A83F4
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1409A2610 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1409A2910 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1409A29D0 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x1409A2B5C (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1409A2D2C (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSetInputWakeCapability @ 0x1409A2FC8 (TtmiSetInputWakeCapability.c)
 *     TtmpCallAssignedToTerminal @ 0x1409A308C (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x1409A31A8 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1409A3258 (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1409A3590 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x1409A3B74 (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x1409A3C44 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmInitCurrentSession @ 0x1409A4050 (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409A42C4 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A4358 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409A43D4 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1409A4470 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1409A4608 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x1409A4808 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1409A4898 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1409A4930 (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1409A49E0 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x1409A4B8C (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x1409A4C4C (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1409A4ECC (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1409A4F68 (TtmiWriteEventToAllQueues.c)
 *     TtmpAcquireSessionById @ 0x1409A4FE0 (TtmpAcquireSessionById.c)
 *     TtmpFindPowerRequestEntryById @ 0x1409A5348 (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x1409A5518 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionWorker @ 0x1409A59E0 (TtmpSessionWorker.c)
 *     TtmpSetDisplayRequestEnded @ 0x1409A5C10 (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1409A5DFC (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1409A5ECC (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1409A5F90 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmDispatchApi @ 0x1409A603C (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1409A62E8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x1409A6438 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1409A64E0 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1409A661C (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1409A670C (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x1409A67B8 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x1409A687C (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1409A6918 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1409A69D4 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1409A6A80 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1409A6B34 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1409A6BF0 (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiCreateTerminal @ 0x1409AAE58 (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x1409AB14C (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x1409AB5FC (TtmiTerminalMonitorControl.c)
 *     TtmiCreateEventQueue @ 0x1409AC09C (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409AC1F0 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1409AC358 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetProcessSessionIdEx @ 0x14036F3B0 (PsGetProcessSessionIdEx.c)
 *     _tlgCreate1Sz_char @ 0x1403C3CBC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
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
    && (!dword_140D531EC || dword_140D531EC == a2)
    && (!dword_140D531F0 || dword_140D531F0 == a3)
    && (!dword_140D531F4 || dword_140D531F4 == a4) )
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
        (unsigned __int8 *)byte_140032BAB,
        0LL,
        0LL,
        7u,
        &v14);
    }
  }
}
