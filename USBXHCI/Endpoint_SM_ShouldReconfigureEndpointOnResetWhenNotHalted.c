__int64 __fastcall Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rdi
  int v7; // edx
  _OWORD v9[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+70h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 280);
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  LOWORD(v9[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(WdfDriverGlobals, v1, v9);
  v6 = *((_QWORD *)&v9[0] + 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddqqD(*(_QWORD *)(a1 + 80), v3, v4, v5);
  if ( (*(_DWORD *)(v6 + 32) & 1) != 0 || (*(_BYTE *)(a1 + 99) & 3u) < 2 )
    goto LABEL_10;
  if ( Endpoint_AreTransfersPending(a1) )
  {
    if ( *(_BYTE *)(a1 + 37) )
    {
      *(_DWORD *)(a1 + 288) = -1073741823;
      return 21LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(a1 + 80),
        v7,
        13,
        118,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL),
        *(_DWORD *)(a1 + 144),
        *(_QWORD *)(a1 + 88));
    }
LABEL_10:
    *(_DWORD *)(a1 + 288) = 0;
    return 21LL;
  }
  return 33LL;
}
