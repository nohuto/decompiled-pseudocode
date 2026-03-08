/*
 * XREFs of FWUPDATE_EvtIoInternalDeviceControl @ 0x1C003FFE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x1C0014388 (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0044CC0 (memmove.c)
 */

NTSTATUS __fastcall FWUPDATE_EvtIoInternalDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  NTSTATUS result; // eax
  unsigned int v14; // eax
  __int64 v15; // rcx
  const EVENT_DESCRIPTOR *v16; // rdx
  int v17; // edx
  __int64 v18; // rcx
  PVOID v19; // r15
  unsigned __int16 v20; // r9
  unsigned __int16 v21; // r9
  unsigned int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 Priority; // [rsp+28h] [rbp-58h]
  ULONG Prioritya; // [rsp+28h] [rbp-58h]
  __int64 v28; // [rsp+30h] [rbp-50h]
  int v29; // [rsp+30h] [rbp-50h]
  __int128 v30; // [rsp+40h] [rbp-40h] BYREF
  __int128 v31; // [rsp+50h] [rbp-30h]
  __int64 v32; // [rsp+60h] [rbp-20h]
  __int128 v33; // [rsp+68h] [rbp-18h] BYREF

  v32 = 0LL;
  v30 = 0LL;
  LOWORD(v30) = 40;
  v7 = 0;
  v33 = 0LL;
  v8 = 0LL;
  v31 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C006A170);
  v11 = *(_QWORD *)v10;
  if ( *(_BYTE *)(v10 + 24) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(v11 + 2520),
        2u,
        3u,
        0x17u,
        (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
    v7 = -1073741810;
    goto LABEL_81;
  }
  v33 = 0x800000010uLL;
  if ( a5 != 2228227 )
  {
    if ( a5 == 2228243 )
    {
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
              WdfDriverGlobals,
              *(_QWORD *)(v11 + 16));
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015 + 2024))(
                 WdfDriverGlobals,
                 a2,
                 v12,
                 &v33);
      if ( (_BYTE)result )
        return result;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Prioritya = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
                      WdfDriverGlobals,
                      a2);
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v11 + 2520),
          2u,
          3u,
          0x21u,
          (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
          Prioritya);
      }
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, a2);
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v14);
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v11 + 2520),
        2u,
        3u,
        0x22u,
        (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
        a5);
    goto LABEL_80;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    &v30);
  v8 = *((_QWORD *)&v30 + 1);
  v17 = *(unsigned __int16 *)(*((_QWORD *)&v30 + 1) + 2LL);
  *(_DWORD *)(*((_QWORD *)&v30 + 1) + 4LL) = 0;
  switch ( v17 )
  {
    case 0:
      if ( *(_WORD *)v8 != 64 )
        goto LABEL_79;
      v25 = *(_QWORD *)(v8 + 24);
      if ( *(_BYTE *)(v25 + 4) != 1 || *(_BYTE *)(v25 + 5) != 1 )
        goto LABEL_79;
      if ( v25 )
      {
        if ( *(_BYTE *)(v8 + 42) || *(_BYTE *)(v8 + 43) || *(_DWORD *)(v8 + 56) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v20 = 28;
            goto LABEL_78;
          }
          goto LABEL_79;
        }
        *(_QWORD *)(v8 + 48) = v10 + 16;
        *(_QWORD *)(v8 + 32) = v10 + 8;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(v11 + 2520),
          4u,
          3u,
          0x1Bu,
          (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
      }
      goto LABEL_63;
    case 1:
      if ( *(_WORD *)v8 != 56
        || *(_QWORD *)(v8 + 24) != (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(
                                     WdfDriverGlobals,
                                     a1)
        || *(_BYTE *)(v8 + 34)
        || *(_BYTE *)(v8 + 35)
        || *(_DWORD *)(v8 + 48) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = 29;
          goto LABEL_78;
        }
LABEL_79:
        *(_DWORD *)(v8 + 4) = -2147482880;
LABEL_80:
        v7 = -1073741811;
        goto LABEL_81;
      }
      *(_QWORD *)(v8 + 40) = v10 + 16;
LABEL_63:
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 0LL);
      goto LABEL_82;
    case 8:
      goto LABEL_50;
    case 11:
      v18 = *(_QWORD *)(v8 + 48);
      if ( v18 )
      {
        if ( (*(_BYTE *)(v18 + 10) & 5) != 0 )
          v19 = *(PVOID *)(v18 + 24);
        else
          v19 = MmMapLockedPagesSpecifyCache((PMDL)v18, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010u);
      }
      else
      {
        v19 = *(PVOID *)(v8 + 40);
      }
      if ( !v19 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = 24;
LABEL_78:
          WPP_RECORDER_SF_(
            *(_QWORD *)(v11 + 2520),
            2u,
            3u,
            v20,
            (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
          goto LABEL_79;
        }
        goto LABEL_79;
      }
      if ( *(_BYTE *)(v8 + 131) == 1 )
      {
        v22 = *(_DWORD *)(v8 + 36);
        if ( v22 > 0x12 )
          v22 = 18;
        memmove(v19, FwUpdateDeviceDescriptor, v22);
        *((_WORD *)v19 + 4) = *(_WORD *)(v11 + 2464);
        *((_WORD *)v19 + 5) = *(_WORD *)(v11 + 2466);
        *((_WORD *)v19 + 6) = *(_WORD *)(v11 + 2468);
        *((_WORD *)v19 + 1) = *(_WORD *)(v11 + 2458);
        *((_BYTE *)v19 + 7) = *(_BYTE *)(v11 + 2463);
      }
      else
      {
        if ( *(_BYTE *)(v8 + 131) != 2 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_79;
          v21 = 26;
          LODWORD(Priority) = *(unsigned __int8 *)(v8 + 131);
LABEL_37:
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v11 + 2520),
            2u,
            3u,
            v21,
            (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
            Priority);
          goto LABEL_79;
        }
        if ( *(_BYTE *)(v8 + 130) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_79;
          v21 = 25;
          LODWORD(Priority) = *(unsigned __int8 *)(v8 + 130);
          goto LABEL_37;
        }
        v22 = *(_DWORD *)(v8 + 36);
        if ( v22 > 0x12 )
          v22 = 18;
        memmove(v19, &FwUpdateConfigurationDescriptor, v22);
      }
      *(_DWORD *)(v8 + 32) |= 1u;
      if ( (*(_DWORD *)(v8 + 32) & 8) != 0 )
        *(_WORD *)(v8 + 2) = 8;
      *(_DWORD *)(v8 + 36) = v22;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
                 WdfDriverGlobals,
                 a2,
                 0LL,
                 v22);
      goto LABEL_82;
    case 19:
LABEL_53:
      *(_QWORD *)(v8 + 8) = *(_QWORD *)(v11 + 248);
      v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
              WdfDriverGlobals,
              *(_QWORD *)(v11 + 16));
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015 + 2024))(
                 WdfDriverGlobals,
                 a2,
                 v23,
                 &v33);
      if ( (_BYTE)result )
        return result;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
                WdfDriverGlobals,
                a2);
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(v11 + 2520),
          2u,
          3u,
          0x1Fu,
          (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
          *(unsigned __int16 *)(v8 + 2),
          v29);
      }
      v24 = (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
              WdfDriverGlobals,
              a2);
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v24);
      goto LABEL_82;
  }
  if ( v17 != 50 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v11 + 2520),
        2u,
        3u,
        0x20u,
        (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
        v17);
    goto LABEL_79;
  }
LABEL_50:
  if ( (*(_BYTE *)(v8 + 128) & 0x60) == 0x40 )
    goto LABEL_53;
  v7 = -1073741811;
  *(_DWORD *)(v8 + 4) = -2147482880;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(v11 + 2520), 2u, 3u, 0x1Eu, (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
LABEL_81:
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v7);
  if ( a5 != 2228227 )
  {
LABEL_13:
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return result;
    v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_FIRMWARE_UPDATE_INTERNAL_IOCTL_COMPLETE;
    LODWORD(v28) = v7;
    LODWORD(Priority) = DWORD2(v31);
    return McTemplateK0ppqq_EtwWriteTransfer(
             v15,
             v16,
             (const GUID *)(v11 + 2276),
             *(_QWORD *)(v11 + 248),
             *(_QWORD *)(v11 + 2656),
             Priority,
             v28);
  }
LABEL_82:
  if ( !v8 )
    goto LABEL_13;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v15 = *(unsigned __int16 *)(v8 + 2);
    v16 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_FIRMWARE_UPDATE_URB_COMPLETE;
    LODWORD(v28) = *(_DWORD *)(v8 + 4);
    LODWORD(Priority) = *(unsigned __int16 *)(v8 + 2);
    return McTemplateK0ppqq_EtwWriteTransfer(
             v15,
             v16,
             (const GUID *)(v11 + 2276),
             *(_QWORD *)(v11 + 248),
             *(_QWORD *)(v11 + 2656),
             Priority,
             v28);
  }
  return result;
}
