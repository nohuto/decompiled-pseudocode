/*
 * XREFs of PnpDiagnosticTraceObject @ 0x140202BAC
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140202690 (PnpDeviceCompletionRoutine.c)
 *     PipEnumerateDevice @ 0x140688710 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1406F71A4 (PnpStartDeviceNode.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140799960 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     IopUnloadDriver @ 0x1408549C8 (IopUnloadDriver.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1408674A0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDevCfgProcessDevice @ 0x140873308 (PiDevCfgProcessDevice.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096B0E0 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpRebalance @ 0x14096B948 (PnpRebalance.c)
 *     PnpInitializeBootStartDriver @ 0x140B58AC4 (PnpInitializeBootStartDriver.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140B64140 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140B65630 (PnpEarlyLaunchImageNotificationPostProcess.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObject(PCEVENT_DESCRIPTOR EventDescriptor, unsigned __int16 *a2)
{
  REGHANDLE v2; // rbx
  int v5; // r8d
  __int16 v7; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v2 = PnpEtwHandle;
  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v5 = *a2;
  UserData.Reserved = 0;
  v11 = 0;
  v7 = (unsigned __int16)v5 >> 1;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = *((_QWORD *)a2 + 1);
  v10 = v5;
  UserData.Size = 2;
  return EtwWrite(v2, EventDescriptor, 0LL, 2u, &UserData);
}
