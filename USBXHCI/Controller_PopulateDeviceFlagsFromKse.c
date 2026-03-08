/*
 * XREFs of Controller_PopulateDeviceFlagsFromKse @ 0x1C001AB68
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C00738B4 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     RtlStringCchPrintfW @ 0x1C000CF50 (RtlStringCchPrintfW.c)
 *     WPP_RECORDER_SF_S @ 0x1C001A234 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_diS @ 0x1C001B1C8 (WPP_RECORDER_SF_diS.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlagsFromKse(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  char v5; // r14
  unsigned int v6; // esi
  char *v7; // r15
  _QWORD *v8; // rdi
  __int64 v9; // r15
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // r15
  int v19; // edx
  int v20; // r8d
  int v21; // [rsp+28h] [rbp-E0h]
  int v22; // [rsp+28h] [rbp-E0h]
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h]
  __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  __int64 v30; // [rsp+80h] [rbp-88h] BYREF
  char *v31; // [rsp+88h] [rbp-80h]
  _QWORD v32[3]; // [rsp+90h] [rbp-78h] BYREF
  wchar_t pszDest[64]; // [rsp+A8h] [rbp-60h] BYREF

  v32[0] = L"USBXHCI";
  result = (__int64)L"USBXHCI2";
  v23 = 0LL;
  v32[1] = L"USBXHCI2";
  v5 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
  {
    v6 = 0;
    v7 = (char *)v32 - a1;
    v8 = (_QWORD *)(a1 + 336);
    v31 = (char *)v32 - a1;
    do
    {
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ALL");
      v9 = *(_QWORD *)((char *)v8 + (_QWORD)v7 - 336);
      v28 = v9;
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v23) >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v10, v11, 155, v21, v6, v23, (__int64)pszDest);
        *v8 |= v23;
      }
      if ( *(_DWORD *)(a1 + 244) == 1 )
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X", *(unsigned __int16 *)(a1 + 248));
      else
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S", a1 + 304);
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v24) >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v12, v13, 156, v21, v6, v24, (__int64)pszDest);
        v5 = 1;
        *v8 |= v24;
      }
      if ( *(_DWORD *)(a1 + 244) == 1 )
      {
        v22 = *(unsigned __int16 *)(a1 + 252);
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X", *(unsigned __int16 *)(a1 + 248));
      }
      else
      {
        v22 = a1 + 309;
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S", a1 + 304);
      }
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v25) >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v14, v15, 157, v22, v6, v25, (__int64)pszDest);
        v5 = 1;
        *v8 |= v25;
      }
      if ( *(_DWORD *)(a1 + 244) == 1 )
      {
        v21 = *(unsigned __int16 *)(a1 + 252);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X",
          *(unsigned __int16 *)(a1 + 248));
      }
      else
      {
        v21 = a1 + 309;
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S", a1 + 304);
      }
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v28, &v26) >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v16, a3, 158, v21, v6, v26, (__int64)pszDest);
        v5 = 1;
        *v8 |= v26;
      }
      v17 = *(_QWORD *)(a1 + 328);
      if ( v17 == -1 )
      {
        v18 = v28;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 244) == 1 )
        {
          v21 = *(unsigned __int16 *)(a1 + 252);
          RtlStringCchPrintfW(
            pszDest,
            0x3CuLL,
            L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X&%I64X",
            *(unsigned __int16 *)(a1 + 248));
        }
        else
        {
          v21 = a1 + 309;
          RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S&%I64X", a1 + 304);
        }
        v18 = v28;
        if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v28, &v27) >= 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v17, a3, 159, v21, v6, v27, (__int64)pszDest);
          v5 = 1;
          *v8 |= v27;
        }
      }
      if ( *(_DWORD *)(a1 + 244) == 1 )
      {
        v21 = *(unsigned __int16 *)(a1 + 252);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X",
          *(unsigned __int16 *)(a1 + 248));
        if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v18, &v29) >= 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v17, a3, 160, v21, v6, v29, (__int64)pszDest);
          v5 = 1;
          *v8 |= v29;
        }
        if ( *(_DWORD *)(a1 + 244) == 1 )
        {
          v21 = *(unsigned __int16 *)(a1 + 252);
          RtlStringCchPrintfW(
            pszDest,
            0x3CuLL,
            L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X",
            *(unsigned __int16 *)(a1 + 248));
          if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v18, &v30) >= 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v17, a3, 161, v21, v6, v30, (__int64)pszDest);
            v5 = 1;
            *v8 |= v30;
          }
        }
      }
      v7 = v31;
      ++v6;
      ++v8;
    }
    while ( v6 < 2 );
    result = *(_QWORD *)(a1 + 336);
    if ( (result & 0x10) != 0 )
    {
      v19 = 4;
      v20 = 4108;
    }
    else
    {
      if ( (result & 0x1000000) == 0 )
        goto LABEL_55;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v17, 4, 162, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
      }
      Controller_HwVerifierBreakIfEnabled(
        a1,
        0,
        0,
        1,
        (__int64)"Controller Firmware has known issues, and newer firmware is available",
        0LL,
        0LL);
      v19 = 0;
      v20 = 4111;
    }
    result = Controller_ReportFatalErrorEx(a1, v19, v20, 0, 0LL, 0LL, 0LL, 0LL);
LABEL_55:
    if ( v5 )
      return result;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_S(*(_QWORD *)(a1 + 72), 3, a3, 163, v21, (__int64)pszDest);
  return result;
}
