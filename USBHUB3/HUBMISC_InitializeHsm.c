__int64 __fastcall HUBMISC_InitializeHsm(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  unsigned __int16 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  bool v10; // zf
  __int64 Timer; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int128 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h]
  __int64 v17; // [rsp+48h] [rbp-28h]
  __int128 v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+60h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 2224) = a1;
  v16 = 0LL;
  v19 = 0LL;
  v15 = 0LL;
  LODWORD(v15) = 56;
  v17 = 0x100000001LL;
  v18 = v1;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         &v15,
         v3,
         a1 + 800);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 800));
    v8 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 816) = v7;
    v16 = 0LL;
    v19 = 0LL;
    v15 = 0LL;
    LODWORD(v15) = 56;
    v17 = 0x100000001LL;
    v18 = v8;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
           WdfDriverGlobals,
           &v15,
           v9,
           a1 + 968);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v5;
      v6 = 11;
      goto LABEL_4;
    }
    KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 2104));
    KeInitializeEvent((PRKEVENT)(a1 + 1152), NotificationEvent, 0);
    *(_DWORD *)(a1 + 2144) = 0;
    v10 = *(_BYTE *)(a1 + 240) == 0;
    *(_DWORD *)(a1 + 2116) = 2000;
    if ( v10 )
    {
      *(_DWORD *)(a1 + 2216) = 4;
    }
    else if ( *(_DWORD *)(a1 + 256) == 1 || *(_DWORD *)(a1 + 256) == 2 )
    {
      *(_DWORD *)(a1 + 2216) = 1;
    }
    else if ( *(_DWORD *)(a1 + 256) == 3 )
    {
      *(_DWORD *)(a1 + 2216) = 2;
    }
    *(_DWORD *)(a1 + 2248) = 2000;
    *(_QWORD *)(a1 + 2240) = &HSMStateTable;
    *(_QWORD *)(a1 + 2296) = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 2264) = a1;
    Timer = ExAllocateTimer(HUBMISC_HubEventTimer, a1, 4LL);
    *(_QWORD *)(a1 + 2304) = Timer;
    if ( Timer )
    {
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
              WdfDriverGlobals,
              *(_QWORD *)(a1 + 16));
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 496))(*(_QWORD *)(a1 + 248), v12, 1LL);
      *(_QWORD *)(a1 + 2256) = v13;
      if ( !v13 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 2520),
            2u,
            3u,
            0xDu,
            (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
        return (unsigned int)-1073741670;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0xCu, (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 10;
LABEL_4:
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 2520), 2u, 3u, v6, (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids, v4);
  }
  return v5;
}
