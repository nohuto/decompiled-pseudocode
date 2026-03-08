/*
 * XREFs of ImSessionStart @ 0x1C008BE98
 * Callers:
 *     _RegisterLogonProcess @ 0x1C008CF70 (_RegisterLogonProcess.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ImpInitializeWork @ 0x1C0089C08 (ImpInitializeWork.c)
 *     ImpRpcConnect @ 0x1C008CAE8 (ImpRpcConnect.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ImpCleanupWork @ 0x1C008D2F0 (ImpCleanupWork.c)
 *     ImpWaitForWorkerShutdown @ 0x1C008D694 (ImpWaitForWorkerShutdown.c)
 *     ImpShutdownWorker @ 0x1C008D758 (ImpShutdownWorker.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage @ 0x1C00E1674 (Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C03017E0 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 ImSessionStart()
{
  PVOID v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  int CurrentProcessSessionId; // ebx
  __int64 v4; // r8
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  REGHANDLE v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+38h] [rbp-29h] BYREF
  int v25; // [rsp+3Ch] [rbp-25h] BYREF
  PRKEVENT Event; // [rsp+40h] [rbp-21h] BYREF
  __int64 v27; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+58h] [rbp-9h] BYREF
  int *v29; // [rsp+78h] [rbp+17h]
  int v30; // [rsp+80h] [rbp+1Fh]
  int v31; // [rsp+84h] [rbp+23h]
  int *v32; // [rsp+88h] [rbp+27h]
  int v33; // [rsp+90h] [rbp+2Fh]
  int v34; // [rsp+94h] [rbp+33h]
  PRKEVENT *p_Event; // [rsp+98h] [rbp+37h]
  int v36; // [rsp+A0h] [rbp+3Fh]
  int v37; // [rsp+A4h] [rbp+43h]

  v0 = gpepCSRSS;
  Event = 0LL;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( !CurrentProcessSessionId )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v4);
  ImpSessionId = CurrentProcessSessionId;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C02C9780);
  v6 = ImpInitializeWork(v0, &Event, v5);
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_1C02C9780 > 2 && tlgKeywordOn((__int64)&dword_1C02C9780, 0x400000000000LL) )
    {
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v25 = ImpSessionId;
      v29 = &v25;
      v32 = &v24;
      p_Event = &Event;
      v30 = 4;
      v24 = v6;
      v33 = 4;
      Event = (PRKEVENT)0x1000000;
      v36 = 8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C02C9780,
        (unsigned __int8 *)dword_1C02A000F,
        0LL,
        0LL,
        5u,
        &v28);
    }
    ImpSessionStatus = v6;
LABEL_17:
    v16 = RegHandle;
    RegHandle = 0LL;
    dword_1C02C9780 = 0;
    EtwUnregister(v16);
    ImpSessionId = -1;
    return (unsigned int)v6;
  }
  v6 = ImpRpcConnect();
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_1C02C9780 > 2 && tlgKeywordOn((__int64)&dword_1C02C9780, 0x400000000000LL) )
    {
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v24 = ImpSessionId;
      v29 = &v24;
      v32 = &v25;
      p_Event = (PRKEVENT *)&v27;
      v30 = 4;
      v25 = v6;
      v33 = 4;
      v27 = 0x1000000LL;
      v36 = 8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C02C9780,
        (unsigned __int8 *)dword_1C02A0117,
        0LL,
        0LL,
        5u,
        &v28);
    }
    ImpSessionStatus = v6;
    if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage(v8, v7, v9) )
      KeSetEvent(Event, 0, 0);
    ImpShutdownWorker();
    if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage(v11, v10, v12) )
      ImpWaitForWorkerShutdown();
    ImpCleanupWork(v14, v13, v15);
    goto LABEL_17;
  }
  if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage(v8, v7, v9) )
  {
    if ( !Event )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
    if ( KeSetEvent(Event, 0, 0) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
  }
  if ( (unsigned int)dword_1C02C9780 > 5 )
  {
    v31 = 0;
    v24 = ImpSessionId;
    v30 = 4;
    v29 = &v24;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C9780, (unsigned __int8 *)dword_1C029FFE7, 0LL, 0LL, 3u, &v28);
  }
  ImpSessionStatus = v6;
  return (unsigned int)v6;
}
