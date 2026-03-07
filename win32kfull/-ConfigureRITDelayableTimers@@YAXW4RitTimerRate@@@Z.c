void **__fastcall ConfigureRITDelayableTimers(unsigned int a1)
{
  __int64 v2; // rax
  void **v3; // rbx
  void **result; // rax

  if ( !a1 )
    goto LABEL_4;
  if ( gnRITdaemonTimerId )
  {
    if ( a1 != 1 )
    {
      v2 = InternalSetTimer(
             0LL,
             gnRITdaemonTimerId,
             gdwRITdaemonTimerPowerSaveElapse,
             (__int64)lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_,
             gdwRITdaemonTimerPowerSaveCoalescing,
             4);
      goto LABEL_5;
    }
LABEL_4:
    v2 = SetRITTimer(gnRITdaemonTimerId, 1000LL, lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_, 0LL);
LABEL_5:
    gnRITdaemonTimerId = v2;
  }
  v3 = (void **)&off_1C030A230;
  do
  {
    ((void (__fastcall *)(_QWORD))*v3)(a1);
    result = &CHwndTargetProp::`vftable';
    ++v3;
  }
  while ( v3 != &CHwndTargetProp::`vftable' );
  return result;
}
