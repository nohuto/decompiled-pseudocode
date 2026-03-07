__int64 __fastcall Controller_ReferenceTrustletProcess(_QWORD *a1)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // r9d
  __int64 v5; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( !a1[78] )
  {
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01023 + 3584))(
           WdfDriverGlobals,
           *a1,
           &v7);
    if ( (v2 & 0x80000000) == 0 )
    {
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3600))(WdfDriverGlobals, v7);
      a1[78] = v5;
      if ( v5 )
        return v2;
      v2 = -1073741436;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v2;
      v4 = 272;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v2;
      v4 = 271;
    }
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_d(a1[9], v3, 4, v4, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v2);
    return v2;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1[9], 2, 4, 270, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
  return (unsigned int)-1073741436;
}
