/*
 * XREFs of ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x1C00547BC
 * Callers:
 *     UserKSTInitialize @ 0x1C0054360 (UserKSTInitialize.c)
 *     UserSetMITInputCallbacks @ 0x1C00A9568 (UserSetMITInputCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     SetThreadBasePriority @ 0x1C0054860 (SetThreadBasePriority.c)
 *     ?Init@InputThreadState@CInputThreadBase@@QEAAXXZ @ 0x1C00548D8 (-Init@InputThreadState@CInputThreadBase@@QEAAXXZ.c)
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1C0054A68 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputThreadBase::DeclareThreadAsInput(CInputThreadBase *this)
{
  char v2; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  RIMLockExclusive((__int64)this + 8);
  if ( *((_QWORD *)this + 4) )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( !CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase *)((char *)this + 24)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
    CInputThreadBase::InputThreadState::Init((CInputThreadBase *)((char *)this + 24));
    SetThreadBasePriority(KeGetCurrentThread());
  }
  *((_QWORD *)this + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
