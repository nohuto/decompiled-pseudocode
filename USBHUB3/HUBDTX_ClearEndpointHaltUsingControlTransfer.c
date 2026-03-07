__int64 __fastcall HUBDTX_ClearEndpointHaltUsingControlTransfer(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rdx
  __int16 v6; // cx
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // [rsp+28h] [rbp-60h]
  char v10; // [rsp+40h] [rbp-48h]
  _OWORD v11[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v12; // [rsp+70h] [rbp-18h]

  v1 = a1[57];
  v12 = 0LL;
  memset(v11, 0, sizeof(v11));
  LOWORD(v11[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    v11);
  v3 = a1[207];
  if ( v3 )
  {
    v5 = a1[3];
    v6 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 32) + 2LL);
    v7 = a1[50] & 0x1C;
    *((_WORD *)a1 + 202) = v6;
    v8 = *a1;
    *((_BYTE *)a1 + 400) = v7 | 2;
    v10 = *((_BYTE *)a1 + 1512);
    *((_BYTE *)a1 + 401) = 1;
    *((_WORD *)a1 + 201) = 0;
    *((_WORD *)a1 + 203) = 0;
    result = HUBMISC_ControlTransfer(
               v8,
               v5,
               (_DWORD)a1,
               (int)a1 + 248,
               (__int64)HUBDTX_ControlTransferComplete,
               0LL,
               0,
               0,
               v10);
    if ( (int)result >= 0 )
      return result;
  }
  else
  {
    LODWORD(result) = -1073741811;
    *((_DWORD *)a1 + 391) = -2147482112;
    *((_DWORD *)a1 + 390) = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432),
      2u,
      5u,
      0x54u,
      (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
      v9);
  }
  return HUBSM_AddEvent((__int64)(a1 + 63), 4004);
}
