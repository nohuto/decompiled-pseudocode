/*
 * XREFs of ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C00AA084
 * Callers:
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C00B6650 (NtMITCoreMsgKOpenConnectionTo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     CoreMsgOpenConnection @ 0x1C00AA18C (CoreMsgOpenConnection.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgOpenDestinationHandle(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  InputExtensibilityCallout *v4; // rsi
  __int64 v6; // rdi
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rbp
  int v13; // edi
  __int128 v15; // [rsp+20h] [rbp-38h]

  v4 = gpInputExtensibilityCallout;
  v6 = (int)a2;
  if ( (unsigned int)a2 >= 0x16 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  CurrentProcess = (PVOID)PsGetCurrentProcess(a1, a2, a3, a4);
  if ( !CurrentProcess || CurrentProcess != g_pepDwm )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v15 = 0LL;
  v11 = 0LL;
  RIMLockExclusive((__int64)v4 + 8);
  v12 = 5 * v6;
  if ( *((_QWORD *)v4 + 5 * v6 + 4) )
  {
    v13 = -2147020579;
  }
  else
  {
    v13 = CoreMsgOpenConnection(0LL, a3);
    if ( v13 >= 0 )
    {
      v11 = *((_QWORD *)v4 + v12 + 8);
      v15 = *(_OWORD *)((char *)v4 + 8 * v12 + 48);
    }
  }
  *((_QWORD *)v4 + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v4 + 8, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)&v15 + 1) && (v15 & 1) != 0 )
    (*((void (__fastcall **)(__int64, __int64))&v15 + 1))(1LL, v11);
  return (unsigned int)v13;
}
