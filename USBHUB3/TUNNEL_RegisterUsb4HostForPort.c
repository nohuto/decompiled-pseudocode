/*
 * XREFs of TUNNEL_RegisterUsb4HostForPort @ 0x1C008D404
 * Callers:
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x1C00783A4 (HUBFDO_MapDvsecUsb4Hosts.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C008ADA8 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00031FC (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     TUNNEL_GetUsb4Host @ 0x1C008D2F4 (TUNNEL_GetUsb4Host.c)
 */

__int64 __fastcall TUNNEL_RegisterUsb4HostForPort(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  wchar_t *i; // rax
  const wchar_t *j; // rcx
  wchar_t *v9; // rax
  const wchar_t *k; // rcx
  wchar_t *v11; // rax
  _QWORD *Usb4Host; // rax
  __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  unsigned __int16 v18; // r9
  __int64 v20; // [rsp+28h] [rbp-31h]
  __int64 v21; // [rsp+30h] [rbp-29h]
  __int64 *v22; // [rsp+40h] [rbp-19h] BYREF
  wchar_t *Str[2]; // [rsp+48h] [rbp-11h] BYREF
  __int128 v24; // [rsp+58h] [rbp-1h] BYREF
  __int128 v25; // [rsp+68h] [rbp+Fh]
  __int128 v26; // [rsp+78h] [rbp+1Fh]
  void *v27; // [rsp+88h] [rbp+2Fh]
  unsigned __int64 v28; // [rsp+C0h] [rbp+67h] BYREF
  _QWORD *v29; // [rsp+D8h] [rbp+7Fh] BYREF

  v28 = 0LL;
  v22 = 0LL;
  v5 = 0;
  LODWORD(v27) = 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  *(_OWORD *)Str = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x20u);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, wchar_t **))(WdfFunctions_01015 + 2472))(
    WdfDriverGlobals,
    a2,
    Str);
  for ( i = wcschr(Str[1], 0x5Cu); i; i = wcschr(i + 1, 0x5Cu) )
    *i = 35;
  for ( j = Str[1]; ; j = v9 + 1 )
  {
    v9 = wcschr(j, 0x2Fu);
    if ( !v9 )
      break;
    *v9 = 35;
  }
  for ( k = Str[1]; ; k = v11 + 1 )
  {
    v11 = wcschr(k, 0x5Eu);
    if ( !v11 )
      break;
    *v11 = 35;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 2744),
    0LL);
  Usb4Host = TUNNEL_GetUsb4Host(a1, (const UNICODE_STRING *)Str);
  v13 = *(_QWORD *)(a1 + 2744);
  v29 = Usb4Host;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, v13);
  if ( !v29 )
  {
    v27 = 0LL;
    v25 = 0LL;
    v26 = *(unsigned __int64 *)(a1 + 16);
    v24 = 0LL;
    LODWORD(v24) = 56;
    *((_QWORD *)&v25 + 1) = 0x100000001LL;
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, unsigned __int64 *, _QWORD **))(WdfFunctions_01015 + 1536))(
            WdfDriverGlobals,
            &v24,
            (unsigned int)ExDefaultNonPagedPoolType,
            1748191317LL,
            48LL,
            &v28,
            &v29);
    v5 = v14;
    if ( v14 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v20) = v14;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a3 + 1432),
          2u,
          4u,
          0xAu,
          (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
          v20);
      }
      return v5;
    }
    v15 = v29;
    *(_OWORD *)v29 = 0LL;
    *((_OWORD *)v15 + 1) = 0LL;
    *((_OWORD *)v15 + 2) = 0LL;
    v16 = *(_QWORD *)(a1 + 16);
    v27 = 0LL;
    *(_QWORD *)&v25 = 0LL;
    *((_QWORD *)&v25 + 1) = 0x100000001LL;
    v26 = v28;
    v24 = 0LL;
    LODWORD(v24) = 56;
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, _QWORD *))(WdfFunctions_01015 + 1336))(
            WdfDriverGlobals,
            v16,
            &v24,
            v29 + 1);
    v5 = v17;
    if ( v17 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_19:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 1664))(
          WdfDriverGlobals,
          v28);
        return v5;
      }
      v18 = 11;
      goto LABEL_17;
    }
    v27 = off_1C006A0A8;
    *(_QWORD *)&v25 = 0LL;
    *((_QWORD *)&v25 + 1) = 0x100000001LL;
    v24 = 0LL;
    LODWORD(v24) = 56;
    v26 = 0LL;
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int128 *, __int64 **))(WdfFunctions_01015 + 1624))(
            WdfDriverGlobals,
            v29[1],
            &v24,
            &v22);
    v5 = v17;
    if ( v17 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v18 = 12;
      goto LABEL_17;
    }
    *v22 = a1;
    v27 = 0LL;
    *(_QWORD *)&v25 = 0LL;
    *((_QWORD *)&v25 + 1) = 0x100000001LL;
    v26 = v28;
    v24 = 0LL;
    LODWORD(v24) = 56;
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD *))(WdfFunctions_01015 + 2496))(
            WdfDriverGlobals,
            &v24,
            v29 + 2);
    v5 = v17;
    if ( v17 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v18 = 13;
LABEL_17:
      LODWORD(v20) = v17;
LABEL_18:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a3 + 1432),
        2u,
        4u,
        v18,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        v20);
      goto LABEL_19;
    }
    *v29 = a2;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 2744),
      0LL);
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, unsigned __int64))(WdfFunctions_01015 + 120))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 2736),
           v28);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 2744));
    if ( (v5 & 0x80000000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v18 = 14;
      LODWORD(v20) = v5;
      goto LABEL_18;
    }
  }
  *(_QWORD *)(a3 + 1464) = a2;
  _InterlockedOr((volatile signed __int32 *)(a3 + 204), 0x800u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v21) = *(unsigned __int16 *)(a3 + 200);
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a3 + 1432),
      4u,
      4u,
      0xFu,
      (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
      v29,
      v21);
  }
  return v5;
}
