/*
 * XREFs of PopInvokeWin32Callout @ 0x14067B7C8
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140281CF4 (PopGetConsoleDisplayRequestCount.c)
 *     PopEventCalloutDispatch @ 0x1403A777C (PopEventCalloutDispatch.c)
 *     PoSessionBuiltinPanelState @ 0x14057C010 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x14057C0A0 (PoSessionEngagementUpdate.c)
 *     PopDispatchStateCallout @ 0x14067E9C8 (PopDispatchStateCallout.c)
 *     PopNotifyConsoleUserPresent @ 0x140773100 (PopNotifyConsoleUserPresent.c)
 *     PopNotifySessionDisplayRequired @ 0x140773350 (PopNotifySessionDisplayRequired.c)
 *     PopControlMonitor @ 0x140779FA0 (PopControlMonitor.c)
 *     PopBroadcastSessionInfo @ 0x1407967A4 (PopBroadcastSessionInfo.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1408EE5F0 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PoSessionPowerControl @ 0x1408F53EC (PoSessionPowerControl.c)
 *     PopSendSessionInfo @ 0x1408F5490 (PopSendSessionInfo.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140252E40 (HalSystemVectorDispatchEntry.c)
 *     MmGetSessionId @ 0x140253550 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x1402D5F90 (MmGetNextSession.c)
 *     ZwPowerInformation @ 0x1403FAF80 (ZwPowerInformation.c)
 *     memset @ 0x140414200 (memset.c)
 *     PsInvokeWin32Callout @ 0x14061B140 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PopInvokeWin32Callout(int a1, __int64 a2, int a3, int *a4)
{
  char v6; // si
  unsigned int v7; // r14d
  struct _DMA_ADAPTER *NextSession; // rdi
  int v9; // r14d
  int *p_SessionId; // r15
  int v12; // [rsp+38h] [rbp-49h]
  int SessionId; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 OutputBuffer; // [rsp+40h] [rbp-41h] BYREF
  _QWORD InputBuffer[18]; // [rsp+48h] [rbp-39h] BYREF

  SessionId = 0;
  v12 = 0;
  OutputBuffer = 0LL;
  v6 = 0;
  v7 = 0;
  memset((char *)InputBuffer + 4, 0, 0x5CuLL);
  LODWORD(InputBuffer[0]) = 21;
  if ( ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, &OutputBuffer, 8u) < 0 )
    return v7;
  NextSession = (struct _DMA_ADAPTER *)MmGetNextSession(0LL);
  do
  {
    if ( NextSession
      && NextSession[85].DmaOperations[3].BuildScatterGatherList != (int (__fastcall *)(_DMA_ADAPTER *, _DEVICE_OBJECT *, _MDL *, void *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, unsigned __int8, void *, unsigned int))HalSystemVectorDispatchEntry() )
    {
      if ( a3 == 2 )
      {
        NextSession = (struct _DMA_ADAPTER *)MmGetNextSession(NextSession);
        if ( NextSession )
          continue;
      }
      else
      {
        v7 = -1073741811;
      }
      v6 = 1;
    }
    else
    {
      if ( a3 == 2 && NextSession )
      {
        v9 = 1;
        SessionId = MmGetSessionId((__int64)NextSession);
        p_SessionId = &SessionId;
        NextSession = (struct _DMA_ADAPTER *)MmGetNextSession(NextSession);
        if ( !NextSession )
          v6 = 1;
      }
      else
      {
        v6 = 1;
        v9 = a3;
        p_SessionId = a4;
        if ( a4 )
          v12 = *a4;
        else
          v12 = -1;
      }
      if ( OutputBuffer )
      {
        memset(InputBuffer, 0, 0x60uLL);
        LODWORD(InputBuffer[0]) = 21;
        InputBuffer[1] = OutputBuffer;
        LODWORD(InputBuffer[3]) = 417;
        LODWORD(InputBuffer[2]) = 1000 * PopWin32kCalloutWatchdogTimeoutSeconds;
        HIDWORD(InputBuffer[2]) = v12;
        InputBuffer[4] = KeGetCurrentThread();
        InputBuffer[10] = InputBuffer;
        InputBuffer[9] = PopWin32CalloutWatchdogCallbackLiveDump;
        ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
      }
      v7 = PsInvokeWin32Callout(a1, a2, v9, (__int64)p_SessionId);
      if ( OutputBuffer )
      {
        memset(InputBuffer, 0, 0x60uLL);
        LODWORD(InputBuffer[0]) = 21;
        InputBuffer[1] = OutputBuffer;
        ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
      }
    }
  }
  while ( !v6 );
  if ( OutputBuffer )
  {
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = OutputBuffer;
    LOBYTE(InputBuffer[11]) = 1;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
  }
  return v7;
}
