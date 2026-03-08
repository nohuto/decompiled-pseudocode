/*
 * XREFs of TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x1C008D8F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000C4DC (RtlUnicodeStringPrintf.c)
 *     McTemplateK0pqhhh_EtwWriteTransfer @ 0x1C0014418 (McTemplateK0pqhhh_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0040CF8 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0040E00 (WPP_RECORDER_SF_qqq.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 *     TUNNEL_UpdateUsb4HostPowerRelations @ 0x1C008ECD8 (TUNNEL_UpdateUsb4HostPowerRelations.c)
 */

__int64 __fastcall TUNNEL_EvtWorkitemPnpInterfaceNotification(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // [rsp+20h] [rbp-E0h]
  __int64 v20; // [rsp+28h] [rbp-D8h]
  __int64 v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+38h] [rbp-C8h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v24[9]; // [rsp+50h] [rbp-B0h] BYREF
  char v25; // [rsp+E0h] [rbp-20h] BYREF

  memset(v24, 0, 0x88uLL);
  DestinationString.Buffer = (wchar_t *)&v25;
  *(_QWORD *)&DestinationString.Length = 0x2000000LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3048))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v2,
         off_1C006A198);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A2B8);
  v5 = *(_QWORD *)(v4 + 512);
  v6 = RtlUnicodeStringPrintf(&DestinationString, L"%sUSB-%p", v4, *(_QWORD *)(v3 + 24));
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2520),
        2u,
        3u,
        0x10u,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        v6);
LABEL_11:
    *(_DWORD *)(v5 + 24) = 0;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  }
  v9 = (__int64 *)(v5 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = v5;
    v21 = *(_QWORD *)(v5 + 32);
    v20 = *v9;
    WPP_RECORDER_SF_qqq(*(_QWORD *)(v3 + 2520), v7, v8, 0x11u, v19);
  }
  *(_QWORD *)&v24[1] = TUNNEL_EvtIoTargetRemoveCanceled;
  *(_QWORD *)&v24[0] = 0x200000088LL;
  *((_QWORD *)&v24[0] + 1) = TUNNEL_EvtIoTargetQueryRemove;
  *((_QWORD *)&v24[1] + 1) = TUNNEL_EvtIoTargetRemoveComplete;
  v24[3] = DestinationString;
  LODWORD(v24[4]) = 1;
  LODWORD(v24[5]) = 64;
  HIDWORD(v24[4]) = 1;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 1344))(
          WdfDriverGlobals,
          *v9,
          v24);
  v12 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2520),
        2u,
        3u,
        0x12u,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        v20);
    }
    if ( SBYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    {
      LOWORD(v22) = *(_WORD *)(v3 + 2468);
      LOWORD(v21) = *(_WORD *)(v3 + 2466);
      LOWORD(v20) = *(_WORD *)(v3 + 2464);
      LODWORD(v19) = v12;
      McTemplateK0pqhhh_EtwWriteTransfer(
        v11,
        &USBHUB3_ETW_EVENT_USB4_POWER_RELATIONS_FAILURE,
        0LL,
        *(_QWORD *)(v3 + 248),
        v19,
        v20,
        v21,
        v22);
    }
    goto LABEL_11;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 2744),
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 16),
    0LL);
  if ( *(_DWORD *)(v5 + 24) == 1 )
    *(_DWORD *)(v5 + 24) = 2;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1432))(WdfDriverGlobals, *v9);
  v14 = *v9;
  *(_QWORD *)(v5 + 32) = v13;
  *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v14,
                off_1C006A0A8)
            + 8) = v5;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 16));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 2744));
  TUNNEL_UpdateUsb4HostPowerRelations(v3, v5);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(v16, v15, v17, *(_QWORD *)(v3 + 248), *v9, *(_QWORD *)(v5 + 32));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(*(_QWORD *)(v3 + 2520), v15, v17, 0x13u, v19);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
