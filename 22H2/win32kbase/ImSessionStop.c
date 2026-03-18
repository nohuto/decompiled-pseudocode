/*
 * XREFs of ImSessionStop @ 0x1C007B908
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B1AE4 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ImpRpcDisconnect @ 0x1C00BF044 (ImpRpcDisconnect.c)
 *     ImpCleanupWork @ 0x1C00C2E38 (ImpCleanupWork.c)
 *     ImpWaitForWorkerShutdown @ 0x1C00C4810 (ImpWaitForWorkerShutdown.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage @ 0x1C00D66E8 (Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage.c)
 */

NTSTATUS ImSessionStop()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  int v3; // eax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  REGHANDLE v12; // rcx
  NTSTATUS result; // eax
  int v14; // [rsp+38h] [rbp-19h] BYREF
  int v15; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 v16; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+48h] [rbp-9h] BYREF
  int *v18; // [rsp+68h] [rbp+17h]
  __int64 v19; // [rsp+70h] [rbp+1Fh]
  int *v20; // [rsp+78h] [rbp+27h]
  __int64 v21; // [rsp+80h] [rbp+2Fh]
  __int64 *v22; // [rsp+88h] [rbp+37h]
  __int64 v23; // [rsp+90h] [rbp+3Fh]

  if ( KeGetCurrentIrql() )
    ((void (*)(void))MicrosoftTelemetryAssertTriggeredNoArgsKM)();
  if ( ImpSessionStatus < 0 )
    ((void (*)(void))MicrosoftTelemetryAssertTriggeredNoArgsKM)();
  if ( ImpSessionId != (unsigned int)PsGetCurrentProcessSessionId() )
    ((void (*)(void))MicrosoftTelemetryAssertTriggeredNoArgsKM)();
  if ( (unsigned int)((__int64 (*)(void))Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage)() )
  {
    v3 = ImpWaitForWorkerShutdown();
    v2 = (unsigned int)v3;
    if ( v3 < 0 && (unsigned int)dword_1C0288780 > 2 && tlgKeywordOn((__int64)&dword_1C0288780, 0x400000000000LL) )
    {
      v15 = ImpSessionId;
      v14 = v2;
      v18 = &v15;
      v19 = 4LL;
      v20 = &v14;
      v21 = 4LL;
      v22 = &v16;
      v16 = 0x1000000LL;
      v23 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0288780,
        (unsigned __int8 *)dword_1C0261681,
        0LL,
        0LL,
        5u,
        &v17);
    }
  }
  v4 = ImpRpcDisconnect(v1, v0, v2);
  v7 = (unsigned int)v4;
  if ( v4 < 0 )
  {
    if ( (unsigned int)dword_1C0288780 > 2 && tlgKeywordOn((__int64)&dword_1C0288780, 0x400000000000LL) )
    {
      v14 = ImpSessionId;
      v15 = v7;
      v18 = &v14;
      v19 = 4LL;
      v20 = &v15;
      v21 = 4LL;
      v22 = &v16;
      v16 = 0x1000000LL;
      v23 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0288780,
        (unsigned __int8 *)dword_1C026173F,
        0LL,
        0LL,
        5u,
        &v17);
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  }
  v8 = ImpCleanupWork(v6, v5, v7);
  v11 = (unsigned int)v8;
  if ( v8 < 0 )
  {
    if ( (unsigned int)dword_1C0288780 > 2 && tlgKeywordOn((__int64)&dword_1C0288780, 0x400000000000LL) )
    {
      v14 = ImpSessionId;
      v15 = v11;
      v18 = &v14;
      v19 = 4LL;
      v20 = &v15;
      v21 = 4LL;
      v22 = &v16;
      v16 = 0x1000000LL;
      v23 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0288780,
        (unsigned __int8 *)dword_1C02617D0,
        0LL,
        0LL,
        5u,
        &v17);
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  }
  if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage(v10, v9, v11)
    && (unsigned int)dword_1C0288780 > 5 )
  {
    v14 = ImpSessionId;
    v19 = 4LL;
    v18 = &v14;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0288780, (unsigned __int8 *)dword_1C02616D3, 0LL, 0LL, 3u, &v17);
  }
  v12 = RegHandle;
  RegHandle = 0LL;
  dword_1C0288780 = 0;
  result = EtwUnregister(v12);
  if ( (unsigned int)dword_1C0288780 > 5 )
  {
    v14 = ImpSessionId;
    v19 = 4LL;
    v18 = &v14;
    result = tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_1C0288780,
               (unsigned __int8 *)dword_1C0261818,
               0LL,
               0LL,
               3u,
               &v17);
  }
  ImpSessionId = -1;
  return result;
}
