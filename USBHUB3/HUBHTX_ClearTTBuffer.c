__int64 __fastcall HUBHTX_ClearTTBuffer(__int64 a1, __int64 a2, __int64 a3, char a4, __int16 a5)
{
  int v5; // r15d
  __int16 v8; // r14
  __int64 v11; // rdi
  int v12; // r15d
  __int64 v13; // rax
  int ClearTtBufferInfoForEndpoint; // ebx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  int v19; // ebx
  __int64 result; // rax
  char v21; // al
  __int128 v22; // [rsp+50h] [rbp-21h] BYREF
  __int128 v23; // [rsp+60h] [rbp-11h]
  __int128 v24; // [rsp+70h] [rbp-1h]
  __int64 v25; // [rsp+80h] [rbp+Fh]
  __int16 v26; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v27; // [rsp+D8h] [rbp+67h] BYREF

  v5 = *(_DWORD *)(a1 + 40);
  LODWORD(v25) = 0;
  v26 = 0;
  v27 = 0LL;
  v8 = 1;
  v11 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( (v5 & 1) == 0 || !a2 || (v5 & 0x1000) != 0 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 528))(*(_QWORD *)(a1 + 376), a3);
  v12 = v5 & 0x800;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v13,
    "ClearTTBuffer Tag",
    5368LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
  ClearTtBufferInfoForEndpoint = HUBHTX_GetClearTtBufferInfoForEndpoint(a2, a3, a4, &v26);
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v15,
    "ClearTTBuffer Tag",
    5376LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
  if ( ClearTtBufferInfoForEndpoint < 0 )
  {
LABEL_17:
    if ( v27 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    if ( v11 )
      ExFreePoolWithTag((PVOID)v11, 0x68334855u);
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 528))(*(_QWORD *)(a1 + 376), a3);
  }
  v16 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v23 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  LODWORD(v22) = 56;
  *((_QWORD *)&v23 + 1) = 0x100000001LL;
  v24 = v16;
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          &v22,
          v17,
          &v27);
  v19 = v18;
  if ( v18 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x76u,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        v18);
    goto LABEL_17;
  }
  result = ExAllocatePool2(64LL, 184LL, 1748191317LL);
  v11 = result;
  if ( result )
  {
    *(_QWORD *)(result + 176) = a3;
    *(_QWORD *)(result + 168) = a1;
    *(_QWORD *)result = v27;
    *(_BYTE *)(result + 152) = *(_BYTE *)(result + 152) & 0x1C | 0x23;
    if ( v12 )
    {
      *(_WORD *)(result + 154) = 0;
      v21 = 9;
    }
    else
    {
      *(_WORD *)(result + 154) = v26;
      v21 = 8;
    }
    *(_BYTE *)(v11 + 153) = v21;
    if ( (*(_DWORD *)(a1 + 40) & 2) != 0 )
      v8 = a5;
    *(_WORD *)(v11 + 156) = v8;
    *(_WORD *)(v11 + 158) = 0;
    result = HUBMISC_ControlTransfer(
               a1,
               *(_QWORD *)(a1 + 248),
               v11,
               v11,
               (__int64)HUBHTX_ClearTtBufferControlTransferComplete,
               0LL,
               0,
               0,
               *(_BYTE *)(a1 + 2272));
    if ( (int)result < 0 )
      goto LABEL_17;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1 + 2520),
             2u,
             3u,
             0x77u,
             (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
             v19);
  }
  return result;
}
