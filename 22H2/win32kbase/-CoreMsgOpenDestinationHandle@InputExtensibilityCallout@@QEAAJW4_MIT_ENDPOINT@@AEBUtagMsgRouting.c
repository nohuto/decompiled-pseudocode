/*
 * XREFs of ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C0068E5C
 * Callers:
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C0068C80 (NtMITCoreMsgKOpenConnectionTo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     CoreMsgOpenConnection @ 0x1C0068F78 (CoreMsgOpenConnection.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgOpenDestinationHandle(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 CurrentProcess; // rax
  __int64 v7; // r14
  __int64 v8; // rbp
  int v9; // edi
  __int128 v11; // [rsp+20h] [rbp-48h]

  v3 = (int)a2;
  if ( (unsigned __int64)(int)a2 >= 0x15 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 206LL);
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  if ( !CurrentProcess || CurrentProcess != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 208LL);
  v11 = 0LL;
  v7 = 0LL;
  RIMLockExclusive(a1 + 8);
  v8 = 5 * v3;
  if ( *(_QWORD *)(a1 + 32 + 40 * v3) )
  {
    v9 = -2147020579;
  }
  else
  {
    v9 = CoreMsgOpenConnection(0LL, a3);
    if ( v9 >= 0 )
    {
      v7 = *(_QWORD *)(a1 + 8 * v8 + 64);
      v11 = *(_OWORD *)(a1 + 8 * v8 + 48);
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 8, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)&v11 + 1) && (v11 & 1) != 0 )
    (*((void (__fastcall **)(__int64, __int64))&v11 + 1))(1LL, v7);
  return (unsigned int)v9;
}
