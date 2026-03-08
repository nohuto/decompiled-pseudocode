/*
 * XREFs of HUBFDO_IoctlGetHubCapsEx @ 0x1C007A2F0
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

__int64 __fastcall HUBFDO_IoctlGetHubCapsEx(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // edi
  _DWORD *v10; // rdx
  int v11; // ecx
  int v12; // ecx
  int ActivityIdIrp; // eax
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // [rsp+20h] [rbp-30h]
  __int64 v18; // [rsp+28h] [rbp-28h]
  int v19; // [rsp+28h] [rbp-28h]
  void *v20; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF

  v20 = 0LL;
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
         &v20,
         0LL);
  if ( v9 >= 0 )
  {
    v9 = HUBFDO_IoctlValidateParameters(v8, 0LL, a4, 0LL, 4uLL, a3);
    if ( v9 >= 0 )
    {
      memset(v20, 0, a3);
      if ( (*(_DWORD *)(v8 + 2496) & 2) != 0 )
        *(_DWORD *)v20 |= 1u;
      else
        *(_DWORD *)v20 &= ~1u;
      v10 = v20;
      v11 = *(_DWORD *)v20;
      if ( (*(_DWORD *)(v8 + 40) & 2) != 0 )
      {
        v12 = v11 | 8;
        *(_DWORD *)v20 = v12;
        v11 = v12 | 4;
        *(_DWORD *)v20 = v11;
        v10 = v20;
      }
      if ( !*(_BYTE *)(v8 + 240) || *(_DWORD *)(v8 + 256) == 2 )
      {
        v11 |= 2u;
        *v10 = v11;
        v10 = v20;
      }
      if ( !*(_BYTE *)(v8 + 240) )
      {
        v11 |= 0x10u;
        *v10 = v11;
        v10 = v20;
      }
      if ( (*(_DWORD *)(v8 + 40) & 0x100) != 0 )
        *v10 = v11 | 0x20;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 2520),
      2u,
      3u,
      0x3Du,
      (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
      v19);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v15 = (const GUID *)&v21;
      LODWORD(v18) = v9;
      LODWORD(v17) = 0;
      if ( ActivityIdIrp < 0 )
        v15 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v14,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_HUB_CAPABILITIES_EX_COMPLETE,
        v15,
        *(_QWORD *)(v8 + 248),
        v17,
        v18);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v9,
           4LL);
}
