/*
 * XREFs of ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x1C0084A30
 * Callers:
 *     UserKSTInitialize @ 0x1C0084060 (UserKSTInitialize.c)
 *     UserSetMITInputCallbacks @ 0x1C00B0BF0 (UserSetMITInputCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1C0084AD0 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 *     ?Init@InputThreadState@CInputThreadBase@@QEAAXXZ @ 0x1C0084B28 (-Init@InputThreadState@CInputThreadBase@@QEAAXXZ.c)
 *     SetThreadBasePriority @ 0x1C0084B80 (SetThreadBasePriority.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputThreadBase::DeclareThreadAsInput(CInputThreadBase *this)
{
  char v2; // si

  RIMLockExclusive((__int64)this + 8);
  if ( *((_QWORD *)this + 4) )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( !CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase *)((char *)this + 24)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 101LL);
    CInputThreadBase::InputThreadState::Init((CInputThreadBase *)((char *)this + 24));
    SetThreadBasePriority(KeGetCurrentThread());
  }
  *((_QWORD *)this + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
