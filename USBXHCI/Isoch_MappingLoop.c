__int64 __fastcall Isoch_MappingLoop(_QWORD *a1)
{
  char i; // di
  __int64 result; // rax
  int v4; // edx
  _QWORD *v5; // rcx

  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v4 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v4) = 5;
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(a1[7] + 80LL),
        v4,
        14,
        66,
        (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        i);
    }
    a1[43] = 0LL;
    if ( !(unsigned __int8)Isoch_RetrieveNextStage(a1) )
      return TR_AttemptStateChange(a1, 3LL, 2LL);
    result = Isoch_PrepareStage(a1);
    if ( (_DWORD)result == 1 )
      continue;
    if ( (_DWORD)result == 3 )
      return result;
    if ( (_DWORD)result == 2 )
      break;
    if ( (_DWORD)result == 4 )
      return TR_AttemptStateChange(a1, 3LL, 2LL);
    result = Isoch_MapStage(a1);
    if ( (_DWORD)result == 2 )
      return result;
    v5 = a1;
    if ( (_DWORD)result == 4 )
      goto LABEL_17;
    result = TR_AttemptStateChange(a1, 3LL, 3LL);
    if ( (_DWORD)result != 3 )
      return result;
  }
  v5 = a1;
LABEL_17:
  result = TR_AttemptStateChange(v5, 3LL, 4LL);
  if ( (_DWORD)result == 3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
             WdfDriverGlobals,
             a1[40],
             -100000000LL);
  return result;
}
