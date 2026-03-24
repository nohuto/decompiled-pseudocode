/*
 * XREFs of HUBHTX_ClearTTBuffer @ 0x1C0006480
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBHTX_GetClearTtBufferInfoForEndpoint @ 0x1C000625C (HUBHTX_GetClearTtBufferInfoForEndpoint.c)
 *     HUBMISC_ControlTransfer @ 0x1C002F36C (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

_UNKNOWN **__fastcall HUBHTX_ClearTTBuffer(__int64 a1, __int64 a2, __int64 a3, char a4, __int16 a5)
{
  int v5; // r15d
  __int16 v8; // r14
  _QWORD *v11; // rdi
  int v12; // r15d
  __int64 v13; // rax
  int ClearTtBufferInfoForEndpoint; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ebx
  _UNKNOWN **result; // rax
  unsigned __int16 v20; // r9
  _QWORD *PoolWithTag; // rax
  char v22; // al
  __int128 v23; // [rsp+50h] [rbp-21h] BYREF
  __int128 v24; // [rsp+60h] [rbp-11h]
  __int128 v25; // [rsp+70h] [rbp-1h]
  __int64 v26; // [rsp+80h] [rbp+Fh]
  __int16 v27; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v28; // [rsp+D8h] [rbp+67h] BYREF

  v5 = *(_DWORD *)(a1 + 40);
  v26 = 0LL;
  v27 = 0;
  v28 = 0LL;
  v8 = 1;
  v11 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( (v5 & 1) != 0 && a2 && (v5 & 0x1000) == 0 )
  {
    v12 = v5 & 0x800;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v13,
      "ClearTTBuffer Tag",
      5338LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    ClearTtBufferInfoForEndpoint = HUBHTX_GetClearTtBufferInfoForEndpoint(a2, a3, a4, &v27);
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v15,
      "ClearTTBuffer Tag",
      5346LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    if ( ClearTtBufferInfoForEndpoint < 0 )
    {
LABEL_19:
      if ( v28 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      if ( v11 )
        ExFreePoolWithTag(v11, 0x68334855u);
      return (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 528))(*(_QWORD *)(a1 + 376), a3);
    }
    v16 = *(_QWORD *)(a1 + 16);
    LODWORD(v23) = 56;
    *((_QWORD *)&v24 + 1) = 0x100000001LL;
    *(_QWORD *)&v25 = v16;
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
            WdfDriverGlobals,
            &v23,
            v17,
            &v28);
    if ( v18 < 0 )
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      v20 = 117;
      goto LABEL_8;
    }
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xB8uLL, 0x68334855u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xA8uLL);
      v11[22] = a3;
      v11[21] = a1;
      *v11 = v28;
      *((_BYTE *)v11 + 152) = v11[19] & 0x1C | 0x23;
      if ( v12 )
      {
        *((_WORD *)v11 + 77) = 0;
        v22 = 9;
      }
      else
      {
        *((_WORD *)v11 + 77) = v27;
        v22 = 8;
      }
      *((_BYTE *)v11 + 153) = v22;
      if ( (*(_DWORD *)(a1 + 40) & 2) != 0 )
        v8 = a5;
      *((_WORD *)v11 + 78) = v8;
      *((_WORD *)v11 + 79) = 0;
      result = (_UNKNOWN **)HUBMISC_ControlTransfer(
                              a1,
                              *(_QWORD *)(a1 + 248),
                              (_DWORD)v11,
                              (_DWORD)v11,
                              (__int64)HUBHTX_ClearTtBufferControlTransferComplete,
                              0LL,
                              0,
                              0,
                              *(_BYTE *)(a1 + 2272));
      v18 = (int)result;
    }
    else
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 118;
LABEL_8:
        result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                *(_QWORD *)(a1 + 2520),
                                2u,
                                3u,
                                v20,
                                (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids,
                                v18);
      }
    }
LABEL_18:
    if ( v18 >= 0 )
      return result;
    goto LABEL_19;
  }
  return (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 528))(*(_QWORD *)(a1 + 376), a3);
}
