void __fastcall TUNNEL_CloseRemoteTarget(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v5; // rdi
  char v6; // bp
  int v7; // eax
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]

  v3 = a1[1];
  if ( v3 )
  {
    v5 = (_QWORD *)(v3 + 32);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = *(_QWORD *)(v3 + 8);
      WPP_RECORDER_SF_qqq(*(_QWORD *)(*a1 + 2520LL), a2, a3, 0x21u, v9);
    }
    v6 = 0;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 16),
      0LL);
    if ( *(_BYTE *)(v3 + 44) == 1 )
    {
      v7 = PoFxRemoveComponentRelation(*(_QWORD *)(*a1 + 2608LL), 0LL, *v5, &GUID_NULL);
      if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v10) = v7;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*a1 + 2520LL),
          2u,
          3u,
          0x22u,
          (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
          v10);
      }
      *(_BYTE *)(v3 + 44) = 0;
    }
    *v5 = 0LL;
    if ( *(_DWORD *)(v3 + 24) != 3 )
    {
      v6 = 1;
      *(_DWORD *)(v3 + 24) = 3;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 16));
    if ( v6 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1360))(
        WdfDriverGlobals,
        *(_QWORD *)(v3 + 8));
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(v3 + 16),
        0LL);
      v8 = *(_QWORD *)(v3 + 16);
      *(_DWORD *)(v3 + 24) = 4;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, v8);
    }
  }
}
