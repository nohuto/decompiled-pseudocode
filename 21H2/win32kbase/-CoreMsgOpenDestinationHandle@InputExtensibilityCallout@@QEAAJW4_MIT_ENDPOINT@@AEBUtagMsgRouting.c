/*
 * XREFs of ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C0071FF8
 * Callers:
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C00A72E0 (NtMITCoreMsgKOpenConnectionTo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     CoreMsgOpenConnection @ 0x1C007229C (CoreMsgOpenConnection.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgOpenDestinationHandle(__int64 a1, __int64 a2, __int64 a3)
{
  InputExtensibilityCallout *v3; // rsi
  __int64 v4; // rdi
  PVOID CurrentProcess; // rax
  __int64 v7; // r14
  __int64 v8; // rbp
  int v9; // edi
  __int128 v11; // [rsp+20h] [rbp-48h]

  v3 = gpInputExtensibilityCallout;
  v4 = (int)a2;
  if ( (unsigned int)a2 >= 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 235LL);
  CurrentProcess = (PVOID)PsGetCurrentProcess(a1, a2);
  if ( !CurrentProcess || CurrentProcess != g_pepDwm )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 237LL);
  v11 = 0LL;
  v7 = 0LL;
  RIMLockExclusive((__int64)v3 + 8);
  v8 = 5 * v4;
  if ( *((_QWORD *)v3 + 5 * v4 + 4) )
  {
    v9 = -2147020579;
  }
  else
  {
    v9 = CoreMsgOpenConnection(0LL, a3);
    if ( v9 >= 0 )
    {
      v7 = *((_QWORD *)v3 + v8 + 8);
      v11 = *(_OWORD *)((char *)v3 + 8 * v8 + 48);
    }
  }
  *((_QWORD *)v3 + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v3 + 8, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)&v11 + 1) && (v11 & 1) != 0 )
    (*((void (__fastcall **)(__int64, __int64))&v11 + 1))(1LL, v7);
  return (unsigned int)v9;
}
