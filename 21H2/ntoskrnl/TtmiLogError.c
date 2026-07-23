/*
 * XREFs of TtmiLogError @ 0x140902C24
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408FBD60 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408FC060 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1408FC120 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x1408FC2AC (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1408FC470 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSetInputWakeCapability @ 0x1408FC70C (TtmiSetInputWakeCapability.c)
 *     TtmpCallAssignedToTerminal @ 0x1408FC7D0 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x1408FC8EC (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1408FC99C (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1408FCCD0 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x1408FD2B0 (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x1408FD380 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmiCreateTerminal @ 0x1408FD68C (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x1408FD978 (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x1408FDD3C (TtmiTerminalMonitorControl.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x1408FE75C (TtmGetSessionDisplayRequiredCount.c)
 *     TtmInitCurrentSession @ 0x1408FE7BC (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x1408FEA44 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408FEAD8 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408FEB4C (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408FEBE8 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1408FED34 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408FEF50 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1408FEFDC (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1408FF074 (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1408FF124 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x1408FF2D8 (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x1408FF398 (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1408FF63C (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1408FF6D8 (TtmiWriteEventToAllQueues.c)
 *     TtmpAcquireSessionById @ 0x1408FF750 (TtmpAcquireSessionById.c)
 *     TtmpFindPowerRequestEntryById @ 0x1408FFACC (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x1408FFCA8 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionWorker @ 0x140900190 (TtmpSessionWorker.c)
 *     TtmpSetDisplayRequestEnded @ 0x1409003C0 (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1409005B0 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x140900680 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x140900748 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmDispatchApi @ 0x1409007F4 (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140900A94 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x140900BF4 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x140900C9C (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x140900DD4 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x140900EC4 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x140900F70 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x140901038 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1409010D4 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x140901190 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14090123C (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1409012F0 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1409013AC (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiCreateEventQueue @ 0x140905598 (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409056EC (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x14090585C (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14023A7B0 (PsGetProcessSessionIdEx.c)
 *     _tlgCreate1Sz_char @ 0x140270A0C (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
    && (!dword_140D2D234 || dword_140D2D234 == a2)
    && (!dword_140D2D238 || dword_140D2D238 == a3)
    && (!dword_140D2D23C || dword_140D2D23C == a4) )
  {
    __debugbreak();
  }
  if ( (unsigned int)dword_140D2D8C8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D2D8C8, 2LL) )
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
        (__int64)&dword_140D2D8C8,
        (unsigned __int8 *)byte_14002B93B,
        0LL,
        0LL,
        7u,
        &v14);
    }
  }
}
