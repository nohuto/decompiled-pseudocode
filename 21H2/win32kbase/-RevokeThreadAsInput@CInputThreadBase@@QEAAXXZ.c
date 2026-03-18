/*
 * XREFs of ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x1C00C4FD8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1C0037D24 (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputThreadBase::RevokeThreadAsInput(CInputThreadBase *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  RIMLockExclusive((__int64)this + 8);
  if ( *((_DWORD *)this + 6) != 3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( !CInputThreadBase::_CalledOnInputThread(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  KeLeaveCriticalRegion();
}
