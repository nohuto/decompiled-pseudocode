/*
 * XREFs of ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x1C0054720
 * Callers:
 *     ?DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ @ 0x1C0054070 (-DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1C0037D24 (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1C0054A68 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputThreadBase::DeactivateInputProcessing(CInputThreadBase *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  RIMLockExclusive((__int64)this + 8);
  if ( !CInputThreadBase::_CalledOnInputThread(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  v5 = 1;
  if ( (unsigned int)(*((_DWORD *)this + 6) - 1) > 1 )
  {
    v5 = 0;
  }
  else
  {
    if ( CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase *)((char *)this + 24)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    *((_DWORD *)this + 6) = 3;
  }
  *((_QWORD *)this + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
