/*
 * XREFs of HUBFDO_IoctlGetPortConnectorProperties @ 0x1C007B17C
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C007C520 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000CE90 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C0033758 (HUBMISC_GetActivityIdIrp.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x1C0033784 (HUBMISC_StripSymbolicNamePrefix.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0044CC0 (memmove.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C00796AC (HUBFDO_IoctlValidateParameters.c)
 *     HUBCONNECTOR_GetCompanionPort @ 0x1C0082380 (HUBCONNECTOR_GetCompanionPort.c)
 */

__int64 __fastcall HUBFDO_IoctlGetPortConnectorProperties(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // r12d
  __int64 v8; // rax
  _QWORD *v9; // r15
  int v10; // esi
  __int16 v11; // bx
  _QWORD *i; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rax
  PWDF_DRIVER_GLOBALS v15; // rcx
  int ActivityIdIrp; // eax
  __int64 v17; // rcx
  size_t *v18; // r8
  __int64 v20; // rax
  __int64 CompanionPort; // rax
  unsigned __int16 *v22; // rcx
  __int16 *v23; // rax
  __int16 v24; // r11
  size_t v25; // r8
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-38h]
  __int64 v29; // [rsp+28h] [rbp-30h]
  int v30; // [rsp+28h] [rbp-30h]
  void *v31; // [rsp+30h] [rbp-28h] BYREF
  size_t Size[2]; // [rsp+38h] [rbp-20h] BYREF

  v31 = 0LL;
  Size[0] = 0LL;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_1C006A198);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v31,
          0LL);
  if ( v10 >= 0 )
  {
    v10 = HUBFDO_IoctlValidateParameters((__int64)v9, 0x12uLL, a4, v31, 0x12uLL, a3);
    if ( v10 < 0 )
      goto LABEL_11;
    v7 = *(unsigned __int16 *)v31;
    v11 = *((_WORD *)v31 + 6);
    memset(v31, 0, a3);
    *(_DWORD *)v31 = v7;
    *((_WORD *)v31 + 6) = v11;
    *((_DWORD *)v31 + 1) = 18;
    for ( i = (_QWORD *)v9[295]; ; i = (_QWORD *)*i )
    {
      v13 = i - 31;
      if ( v9 + 295 == i )
        goto LABEL_9;
      if ( *((_WORD *)v13 + 100) == (_WORD)v7 )
        break;
    }
    if ( i == (_QWORD *)248 )
    {
LABEL_9:
      v14 = WdfFunctions_01015;
      v10 = -1073741811;
      v15 = WdfDriverGlobals;
    }
    else
    {
      if ( (*((_DWORD *)v13 + 51) & 8) != 0 )
        *((_DWORD *)v31 + 2) |= 2u;
      if ( (*((_DWORD *)v13 + 51) & 1) != 0 )
        *((_DWORD *)v31 + 2) |= 1u;
      if ( (*((_DWORD *)v13 + 51) & 0x200) != 0 )
        *((_DWORD *)v31 + 2) |= 4u;
      if ( (unsigned __int8)(*((_BYTE *)v13 + 1341) - 8) <= 2u )
        *((_DWORD *)v31 + 2) |= 8u;
      v14 = WdfFunctions_01015;
      v15 = WdfDriverGlobals;
      if ( *((_WORD *)v31 + 6) <= 1u )
      {
        v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                WdfDriverGlobals->Driver,
                off_1C006A1E8);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(v20 + 56),
          0LL);
        CompanionPort = HUBCONNECTOR_GetCompanionPort(v13, *((unsigned __int16 *)v31 + 6));
        if ( CompanionPort )
        {
          v22 = (unsigned __int16 *)(*(_QWORD *)CompanionPort + 2544LL);
          *((_WORD *)v31 + 7) = *(_WORD *)(CompanionPort + 200);
          v23 = HUBMISC_StripSymbolicNamePrefix(v22, Size);
          if ( v23 )
          {
            v25 = Size[0];
            *((_DWORD *)v31 + 1) = LODWORD(Size[0]) + 18;
            if ( a3 - 18 >= v25 )
            {
              memmove((char *)v31 + 16, v23, v25);
              v26 = a3;
LABEL_33:
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
                WdfDriverGlobals,
                a2,
                v26);
              v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C006A1E8);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                WdfDriverGlobals,
                *(_QWORD *)(v27 + 56));
              goto LABEL_11;
            }
          }
          *((_WORD *)v31 + 8) = v24;
        }
        v26 = 18LL;
        goto LABEL_33;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v14 + 2200))(v15, a2, 18LL);
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = v10;
    WPP_RECORDER_SF_d(v9[315], 2u, 3u, 0x43u, (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids, v30);
  }
LABEL_11:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    *(_OWORD *)Size = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v18 = Size;
      LODWORD(v29) = v10;
      LODWORD(v28) = v7;
      if ( ActivityIdIrp < 0 )
        v18 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v17,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_PORT_CONNECTOR_PROPERTIES_COMPLETE,
        (const GUID *)v18,
        v9[31],
        v28,
        v29);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10);
}
