/*
 * XREFs of ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x1C0054934
 * Callers:
 *     UserKSTInitialize @ 0x1C0054360 (UserKSTInitialize.c)
 *     UserActivateMITInputProcessing @ 0x1C00B5A44 (UserActivateMITInputProcessing.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1C0054A68 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputThreadBase::ActivateInputProcessing(CInputThreadBase *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  char v6; // si
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  RIMLockExclusive((__int64)this + 8);
  v5 = *((_DWORD *)this + 6);
  if ( v5 == 2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    v5 = *((_DWORD *)this + 6);
  }
  if ( v5 == 3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    v5 = *((_DWORD *)this + 6);
  }
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    v5 = *((_DWORD *)this + 6);
  }
  v6 = 1;
  if ( v5 == 1 )
  {
    if ( CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase *)((char *)this + 24)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    *((_DWORD *)this + 6) = 2;
  }
  else
  {
    v6 = 0;
  }
  *((_QWORD *)this + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
