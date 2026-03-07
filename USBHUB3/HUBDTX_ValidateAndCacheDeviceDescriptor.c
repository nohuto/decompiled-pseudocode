__int64 __fastcall HUBDTX_ValidateAndCacheDeviceDescriptor(__int64 a1)
{
  unsigned __int16 *v1; // rsi
  __int64 v3; // rcx
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rax
  int v7; // edx
  bool v8; // cf
  int v9; // edx
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v13; // [rsp+28h] [rbp-31h]
  __int64 v14; // [rsp+30h] [rbp-29h]
  _WORD v15[2]; // [rsp+50h] [rbp-9h] BYREF
  int v16; // [rsp+54h] [rbp-5h]
  __int64 v17; // [rsp+58h] [rbp-1h]
  int v18; // [rsp+60h] [rbp+7h]
  int v19; // [rsp+64h] [rbp+Bh]
  __int64 (__fastcall *v20)(_QWORD, _QWORD); // [rsp+68h] [rbp+Fh]
  void *v21; // [rsp+70h] [rbp+17h]
  __int64 v22; // [rsp+78h] [rbp+1Fh]
  _BOOL8 v23; // [rsp+80h] [rbp+27h]
  char v24; // [rsp+C0h] [rbp+67h] BYREF

  v1 = (unsigned __int16 *)(a1 + 1732);
  v24 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 4077;
  if ( *(_BYTE *)(v3 + 1472) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(v3 + 1432),
        2u,
        5u,
        0x4Du,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v1[4],
        v1[5],
        *(_DWORD *)(*(_QWORD *)a1 + 96LL),
        *(unsigned __int16 *)(v3 + 200));
    *(_DWORD *)(a1 + 256) = 0;
    memset(v1, 0, 0x100uLL);
  }
  v5 = *(_DWORD *)(a1 + 256);
  if ( v5 != 18 )
  {
    if ( v5 )
    {
      *(_DWORD *)(a1 + 2432) = 1073807365;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v14) = 18;
        LODWORD(v13) = v5;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x4Eu,
          (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
          v13,
          v14);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 2432) = 1073807360;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x4Fu,
          (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids);
    }
LABEL_14:
    v4 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        v3,
        &USBHUB3_ETW_EVENT_INVALID_DEVICE_DESCRIPTOR,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    return v4;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  v17 = 0LL;
  v23 = 0LL;
  v15[1] = 0;
  v7 = *(_DWORD *)(v6 + 4);
  v15[0] = *(_WORD *)(a1 + 1990);
  v16 = *(_DWORD *)(a1 + 172);
  v19 = 0;
  *(_WORD *)((char *)&v17 + 5) = (v7 & 0x20) != 0;
  v22 = a1;
  HIBYTE(v17) = (v7 & 0x2000) != 0;
  v8 = (v7 & 0x4000) != 0;
  v9 = *(_DWORD *)(a1 + 256);
  v10 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v17) = v8;
  v11 = *(_QWORD *)(a1 + 8);
  v23 = !v10;
  v18 = *(_DWORD *)(v11 + 220);
  v20 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v21 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateDeviceDescriptor(
                           (_DWORD)v1,
                           v9,
                           (unsigned int)v15,
                           (unsigned int)&v24,
                           *(_QWORD *)(v11 + 1432)) )
  {
    *(_DWORD *)(a1 + 2432) = 1073807365;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = *(_DWORD *)(a1 + 256);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x50u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v13);
    }
    goto LABEL_14;
  }
  *(_OWORD *)(a1 + 1988) = *(_OWORD *)v1;
  *(_WORD *)(a1 + 2004) = v1[8];
  if ( v24 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x20000u);
  return v4;
}
