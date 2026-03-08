/*
 * XREFs of ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x1C00D2FD4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1C007CD2C (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputThreadBase::RevokeThreadAsInput(CInputThreadBase *this)
{
  RIMLockExclusive((__int64)this + 8);
  if ( *((_DWORD *)this + 6) != 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 118LL);
  if ( !CInputThreadBase::_CalledOnInputThread(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 120LL);
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  KeLeaveCriticalRegion();
}
