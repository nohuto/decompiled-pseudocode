/*
 * XREFs of HUBFDO_IoctlGetHubCaps @ 0x1C007A114
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C007C520 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000CE90 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C0033758 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C00796AC (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetHubCaps(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebx
  int ActivityIdIrp; // eax
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+28h] [rbp-60h]
  int v16; // [rsp+28h] [rbp-60h]
  void *v17; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+38h] [rbp-50h] BYREF

  v17 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_1C006A198);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015
                                                                                                  + 2160))(
         WdfDriverGlobals,
         a2,
         a3,
         &v17,
         0LL);
  if ( v9 >= 0 )
  {
    v9 = HUBFDO_IoctlValidateParameters(v8, 0LL, a4, 0LL, 4uLL, a3);
    if ( v9 >= 0 )
    {
      memset(v17, 0, a3);
      if ( (*(_DWORD *)(v8 + 2496) & 2) != 0 )
        *(_DWORD *)v17 |= 1u;
      else
        *(_DWORD *)v17 &= ~1u;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 2520),
      2u,
      3u,
      0x3Cu,
      (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
      v16);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v12 = (const GUID *)&v18;
      LODWORD(v15) = v9;
      LODWORD(v14) = 0;
      if ( ActivityIdIrp < 0 )
        v12 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v11,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_HUB_CAPABILITIES_COMPLETE,
        v12,
        *(_QWORD *)(v8 + 248),
        v14,
        v15);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v9,
           4LL);
}
