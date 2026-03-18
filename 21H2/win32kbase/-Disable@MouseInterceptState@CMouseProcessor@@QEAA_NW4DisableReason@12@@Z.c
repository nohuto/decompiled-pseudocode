/*
 * XREFs of ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C00C4848
 * Callers:
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C00C47C0 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 *     NtMITDisableMouseIntercept @ 0x1C0154800 (NtMITDisableMouseIntercept.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::MouseInterceptState::Disable(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  RIMLockExclusive(a1);
  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 20) = 0;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 16) = 0;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return 1;
}
