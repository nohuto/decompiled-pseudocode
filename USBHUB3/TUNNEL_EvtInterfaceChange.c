/*
 * XREFs of TUNNEL_EvtInterfaceChange @ 0x1C008DCF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015204 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C00344CC (WPP_RECORDER_SF_S.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C0041C84 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     TUNNEL_GetUsb4Host @ 0x1C008D2F4 (TUNNEL_GetUsb4Host.c)
 */

__int64 __fastcall TUNNEL_EvtInterfaceChange(char *NotificationStructure, PVOID Context)
{
  char v3; // r13
  __int64 v4; // rax
  bool v5; // r12
  __int64 v6; // rax
  __int64 v7; // rsi
  int DeviceInterfacePropertyData; // eax
  unsigned int v9; // r14d
  unsigned __int16 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  wchar_t *v13; // rax
  wchar_t *v14; // rdi
  __int64 v15; // rcx
  unsigned __int16 v16; // r9
  wchar_t *v17; // rax
  _QWORD *Usb4Host; // r14
  const WCHAR *v19; // rbx
  wchar_t *v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int16 *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int16 v27; // cx
  unsigned __int64 v28; // r10
  __int64 v29; // rdx
  _WORD *v30; // rcx
  _WORD *v31; // rax
  unsigned int v32; // eax
  __int64 v34; // [rsp+28h] [rbp-D8h]
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+58h] [rbp-A8h] BYREF
  int v39; // [rsp+5Ch] [rbp-A4h]
  __int64 (__fastcall *v40)(__int64); // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h]
  PVOID v42; // [rsp+70h] [rbp-90h]
  struct _UNICODE_STRING v43; // [rsp+78h] [rbp-88h] BYREF
  int v44; // [rsp+88h] [rbp-78h] BYREF
  __int128 v45; // [rsp+8Ch] [rbp-74h]
  int v46; // [rsp+9Ch] [rbp-64h]
  int v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A4h] [rbp-5Ch]
  PVOID v49; // [rsp+A8h] [rbp-58h]
  __int64 v50; // [rsp+B0h] [rbp-50h]
  void *v51; // [rsp+B8h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING v53; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t Str1[20]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[236]; // [rsp+108h] [rbp+8h] BYREF

  v42 = Context;
  v46 = 0;
  v39 = 0;
  v50 = 0LL;
  v36 = 0LL;
  v35 = 0;
  v45 = 0LL;
  v3 = 0;
  v4 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  DestinationString = 0LL;
  v37 = 0;
  v43 = 0LL;
  v53 = 0LL;
  if ( !v4 )
    v4 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  v5 = v4 == 0;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, PVOID, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         Context,
         off_1C006A198);
  v7 = v6;
  if ( *(_OWORD *)(NotificationStructure + 20) != *(_OWORD *)&GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(v6 + 2520);
    v16 = 20;
    goto LABEL_59;
  }
  DeviceInterfacePropertyData = IoGetDeviceInterfacePropertyData(
                                  *((_QWORD *)NotificationStructure + 5),
                                  &DEVPKEY_DeviceInterface_ReferenceString,
                                  0LL,
                                  0LL,
                                  512,
                                  Str1,
                                  &v37,
                                  &v35);
  v9 = DeviceInterfacePropertyData;
  if ( DeviceInterfacePropertyData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 21;
      LODWORD(v34) = DeviceInterfacePropertyData;
LABEL_7:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v7 + 2520),
        2u,
        3u,
        v10,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        v34);
      return 0LL;
    }
    return 0LL;
  }
  if ( v35 != 18 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v10 = 22;
    LODWORD(v34) = v35;
    goto LABEL_7;
  }
  if ( _wcsnicmp(Str1, L"Usb4-Host-Interface-", 0x14uLL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *(_QWORD *)(v7 + 2520),
        v11,
        3u,
        0x17u,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        Str1);
    MicrosoftTelemetryAssertTriggeredArgsMsgKM(
      v12,
      v9,
      0,
      "USB4 virtual power PDO interface arrival with invalid reference string");
    return 0LL;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v13 = wcsstr(DestinationString.Buffer, L"^");
  v14 = v13;
  if ( !v13 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(v7 + 2520);
    v16 = 24;
LABEL_59:
    WPP_RECORDER_SF_(v15, 2u, 3u, v16, (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids);
    return 0LL;
  }
  v17 = wcsstr(v13 + 1, L"^");
  Usb4Host = 0LL;
  v19 = v17;
  if ( v17 )
  {
    v19 = v17 + 1;
    *v17 = 0;
    v20 = wcsstr(v17 + 1, L"^");
    if ( v20 )
      *v20 = 0;
  }
  RtlInitUnicodeString(&v43, v14 + 1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v7 + 2744),
    0LL);
  if ( !v43.Length || (Usb4Host = TUNNEL_GetUsb4Host(v7, &v43)) == 0LL )
  {
    if ( v19 )
    {
      RtlInitUnicodeString(&v53, v19);
      Usb4Host = TUNNEL_GetUsb4Host(v7, &v53);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v7 + 2744));
  if ( Usb4Host )
  {
    if ( v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *(_QWORD *)(v7 + 2520),
          4u,
          3u,
          0x1Au,
          (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
          Usb4Host);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        Usb4Host[2],
        0LL);
      if ( (Usb4Host[3] & 0xFFFFFFFB) == 0 )
      {
        v3 = 1;
        *((_DWORD *)Usb4Host + 6) = 1;
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, Usb4Host[2]);
      if ( v3 )
      {
        v46 = 0;
        v41 = 1LL;
        v39 = 0;
        v38 = 24;
        v40 = TUNNEL_EvtWorkitemPnpInterfaceNotification;
        v51 = off_1C006A2B8;
        v49 = v42;
        v45 = 0LL;
        v50 = 0LL;
        v44 = 56;
        v47 = 1;
        v48 = 1;
        v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, int *, __int64 *))(WdfFunctions_01015 + 3032))(
                WdfDriverGlobals,
                &v38,
                &v44,
                &v36);
        if ( v22 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v10 = 28;
          LODWORD(v34) = v22;
          goto LABEL_7;
        }
        v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v36,
                off_1C006A2B8);
        v25 = (unsigned __int16 *)*((_QWORD *)NotificationStructure + 5);
        v26 = *v25;
        if ( (v26 & 1) != 0
          || (v27 = v25[1], (v27 & 1) != 0)
          || (unsigned __int16)v26 > v27
          || (v24 = 65534LL, v27 == 0xFFFF)
          || !*((_QWORD *)v25 + 1) && ((_WORD)v26 || v27) )
        {
          v32 = -1073741811;
          *(_WORD *)v23 = 0;
        }
        else
        {
          v28 = v26 >> 1;
          v29 = 256LL;
          v24 = *((_QWORD *)v25 + 1) - v23;
          v30 = (_WORD *)v23;
          do
          {
            if ( !(v29 + v28 - 256) )
              break;
            *v30 = *(_WORD *)((char *)v30 + v24);
            ++v30;
            --v29;
          }
          while ( v29 );
          v31 = v30 - 1;
          if ( v29 )
            v31 = v30;
          *v31 = 0;
          v32 = v29 == 0 ? 0x80000005 : 0;
          if ( v29 )
          {
            *(_QWORD *)(v23 + 512) = Usb4Host;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 3040))(
              WdfDriverGlobals,
              v36,
              v23,
              v24);
            return 0LL;
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v34) = v32;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v7 + 2520),
            2u,
            3u,
            0x1Du,
            (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
            v34);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 1664))(
          WdfDriverGlobals,
          v36,
          v23,
          v24);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v7 + 2520),
        4u,
        3u,
        0x1Bu,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        Usb4Host);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_S(
      *(_QWORD *)(v7 + 2520),
      v21,
      3u,
      0x19u,
      (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
      Str1);
  }
  return 0LL;
}
