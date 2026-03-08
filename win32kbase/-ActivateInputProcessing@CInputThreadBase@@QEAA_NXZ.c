/*
 * XREFs of ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x1C009ABBC
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C00942B4 (UserActivateMITInputProcessing.c)
 *     UserKSTInitialize @ 0x1C009A090 (UserKSTInitialize.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1C009AD00 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputThreadBase::ActivateInputProcessing(CInputThreadBase *this)
{
  char v2; // si

  RIMLockExclusive((__int64)this + 8);
  if ( *((_DWORD *)this + 6) == 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 131LL);
  if ( *((_DWORD *)this + 6) == 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 134LL);
  if ( !*((_DWORD *)this + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 137LL);
  v2 = 1;
  if ( *((_DWORD *)this + 6) == 1 )
  {
    if ( CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase *)((char *)this + 24)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 142LL);
    *((_DWORD *)this + 6) = 2;
  }
  else
  {
    v2 = 0;
  }
  *((_QWORD *)this + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
