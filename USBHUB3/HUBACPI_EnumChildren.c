__int64 __fastcall HUBACPI_EnumChildren(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  int v5; // eax
  int v6; // ebx
  unsigned __int16 v7; // r9
  __int64 v8; // rdi
  _DWORD *v9; // rax
  unsigned __int16 v10; // r9
  __int64 v11; // rax
  __int64 v13; // [rsp+28h] [rbp-61h]
  __int64 v14; // [rsp+50h] [rbp-39h] BYREF
  __int64 v15; // [rsp+58h] [rbp-31h] BYREF
  __int64 v16; // [rsp+60h] [rbp-29h] BYREF
  __int64 v17; // [rsp+68h] [rbp-21h] BYREF
  __int128 v18; // [rsp+70h] [rbp-19h] BYREF
  __int64 v19; // [rsp+80h] [rbp-9h]
  __int64 v20; // [rsp+88h] [rbp-1h]
  __int128 v21; // [rsp+90h] [rbp+7h]
  __int64 v22; // [rsp+A0h] [rbp+17h]
  __int128 v23; // [rsp+A8h] [rbp+1Fh] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v22 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v19 = 0LL;
  v20 = 0x100000001LL;
  v21 = v4;
  v18 = 0LL;
  v23 = 0LL;
  LODWORD(v18) = 56;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v18,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         16LL,
         &v17,
         &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_36;
    v7 = 33;
    goto LABEL_4;
  }
  *(_OWORD *)v15 = 0LL;
  *(_DWORD *)v15 = 1214866753;
  *(_DWORD *)(v15 + 4) = 1;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         0LL,
         v8,
         &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 34;
LABEL_4:
      LODWORD(v13) = v5;
LABEL_5:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        v7,
        (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
        v13);
      goto LABEL_36;
    }
    goto LABEL_36;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
         WdfDriverGlobals,
         v8,
         v14,
         3325984LL,
         v17,
         0LL,
         a2,
         0LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v23 = 0x200000010uLL;
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015
                                                                                               + 2024))(
            WdfDriverGlobals,
            v14,
            v8,
            &v23)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x24u, (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids);
    }
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v14);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147483643 )
    {
      if ( v6 != -1073741637 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = 37;
        LODWORD(v13) = v6;
        goto LABEL_5;
      }
      goto LABEL_36;
    }
    v9 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1552))(
                     WdfDriverGlobals,
                     a2,
                     &v16);
    if ( v16 == 20 )
    {
      if ( v6 != -2147483643 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v13) = v6;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2520),
            2u,
            3u,
            0x26u,
            (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
            v13);
        }
        goto LABEL_35;
      }
      if ( *v9 == 1198089537 && v9[1] >= 0x14u )
        goto LABEL_36;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 39;
LABEL_34:
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, v10, (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids);
      }
    }
    else
    {
      if ( v6 < 0 )
        goto LABEL_36;
      if ( *v9 == 1198089537 )
      {
        if ( v9[1] )
        {
          v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2208))(
                  WdfDriverGlobals,
                  v14);
          if ( v11 == v16 )
            goto LABEL_36;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 40;
        goto LABEL_34;
      }
    }
LABEL_35:
    v6 = -1072431089;
    goto LABEL_36;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 35;
    goto LABEL_4;
  }
LABEL_36:
  if ( v14 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v17 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (unsigned int)v6;
}
