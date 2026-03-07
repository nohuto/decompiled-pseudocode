__int64 __fastcall Interrupter_FilterAllMSIResources(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r13
  char v4; // r12
  unsigned int v5; // esi
  int v7; // edx
  int v8; // r14d
  unsigned int v9; // edi
  __int64 v10; // r15
  __int64 v11; // rax
  int v12; // edx
  __int128 v13; // xmm1
  int v14; // edx
  int v15; // edx
  __int128 v18; // [rsp+48h] [rbp-60h] BYREF
  __int128 v19; // [rsp+58h] [rbp-50h]

  v2 = 0;
  v3 = a2;
  v18 = 0LL;
  v4 = 0;
  v5 = 0;
  v19 = 0LL;
  while ( v5 < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2320))(
                 WdfDriverGlobals,
                 v3) )
  {
    v8 = 0;
    v9 = 0;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2328))(
            WdfDriverGlobals,
            v3,
            v5);
    while ( v9 < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2384))(
                   WdfDriverGlobals,
                   v10) )
    {
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2392))(
              WdfDriverGlobals,
              v10,
              v9);
      if ( *(_BYTE *)(v11 + 1) != 2 )
        goto LABEL_6;
      if ( (*(_BYTE *)(v11 + 4) & 3) == 3 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2400))(
          WdfDriverGlobals,
          v10,
          v9);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v12,
            9,
            56,
            (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
            v5,
            v9);
        }
      }
      else
      {
        v18 = *(_OWORD *)v11;
        v13 = *(_OWORD *)(v11 + 16);
        LOBYTE(v18) = 0;
        v19 = v13;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, _QWORD))(WdfFunctions_01023 + 2376))(
          WdfDriverGlobals,
          v10,
          &v18,
          v9);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 4;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v14,
            9,
            57,
            (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
            v5,
            v9);
        }
        v4 = 1;
        ++v8;
LABEL_6:
        ++v9;
      }
    }
    v3 = a2;
    if ( v8 )
    {
      ++v5;
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2336))(
        WdfDriverGlobals,
        a2,
        v5);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v15,
          9,
          58,
          (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
          v5);
      }
    }
  }
  if ( !v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v7,
        9,
        59,
        (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids);
    }
    return (unsigned int)-1073741823;
  }
  return v2;
}
