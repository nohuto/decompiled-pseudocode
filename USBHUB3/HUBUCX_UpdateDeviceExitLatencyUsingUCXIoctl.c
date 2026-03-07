_UNKNOWN **__fastcall HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl(__int64 a1)
{
  unsigned int v1; // edx
  _UNKNOWN **result; // rax
  _DWORD *v4; // rbx
  int v5; // edx
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v1 = *(_DWORD *)(a1 + 2584);
  if ( v1 && *(unsigned __int16 *)(a1 + 2210) > v1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(_DWORD *)(a1 + 2584);
      v6 = *(unsigned __int16 *)(a1 + 2210);
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x22u,
        (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
        v6,
        v8);
    }
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 504, 4024);
  }
  else
  {
    v4 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                     WdfDriverGlobals,
                     *(_QWORD *)(a1 + 432),
                     0LL);
    memset(v4, 0, 0x48uLL);
    v4[6] |= 4u;
    *v4 = 72;
    *((_QWORD *)v4 + 1) = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
    *((_QWORD *)v4 + 2) = *(_QWORD *)(a1 + 24);
    v4[12] = *(unsigned __int16 *)(a1 + 2210);
    result = (_UNKNOWN **)HUBUCX_SubmitUcxIoctl((__int64 *)a1, 0x491023u);
    v5 = (int)result;
    if ( (int)result < 0 )
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = v5;
        return (_UNKNOWN **)WPP_RECORDER_SF_d(
                              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                              2u,
                              5u,
                              0x23u,
                              (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
                              v7);
      }
    }
  }
  return result;
}
