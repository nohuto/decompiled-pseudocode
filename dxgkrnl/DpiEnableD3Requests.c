void __fastcall DpiEnableD3Requests(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 64);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4104), 0xFFFFFFFF) == 1 )
    DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v1);
}
