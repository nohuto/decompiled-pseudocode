__int64 __fastcall Endpoint_UcxEvtUsbDeviceEndpointAdd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6)
{
  __int64 v9; // rdx
  int v10; // esi
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  char v16; // r10
  _QWORD v17[10]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v18; // [rsp+98h] [rbp+27h]

  v17[0] = 96LL;
  v17[1] = Endpoint_UcxEvtEndpointPurge;
  v17[2] = Endpoint_UcxEvtEndpointStart;
  v17[3] = Endpoint_UcxEvtEndpointAbort;
  v17[4] = Endpoint_UcxEvtEndpointReset;
  v17[5] = Endpoint_UcxEvtEndpointOkToCancelTransfers;
  v17[6] = Endpoint_UcxEvtEndpointStaticStreamsAdd;
  v17[7] = Endpoint_UcxEvtEndpointStaticStreamsEnable;
  v17[8] = Endpoint_UcxEvtEndpointStaticStreamsDisable;
  v17[9] = Endpoint_UcxEvtEndpointEnableForwardProgress;
  v18 = 0LL;
  ((void (__fastcall *)(__int64, __int64, _QWORD *))qword_1C0064848)(UcxDriverGlobals, a6, v17);
  v9 = 0LL;
  if ( a5 && (*(_BYTE *)(a3 + 3) & 3) == 1 && (a5[3] & 0x80u) != 0 )
    v9 = (__int64)&a5[*a5];
  v10 = Endpoint_Create(a1, a2, a6, a3, (__int64)a5, v9);
  if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = *(unsigned __int8 *)(a3 + 2);
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00632C0);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a1,
            off_1C0063428);
    v15 = *(_BYTE *)(a3 + 2) & 0x7F;
    v16 = (v12 >> 7) + 2 * v15;
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v14 + 72),
      v15,
      13,
      13,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(v13 + 135),
      v16,
      v10);
  }
  return (unsigned int)v10;
}
