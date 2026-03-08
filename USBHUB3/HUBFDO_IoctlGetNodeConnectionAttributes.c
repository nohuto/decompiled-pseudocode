/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0079ED4
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

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionAttributes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // esi
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // ebx
  _QWORD *i; // rax
  _QWORD *v12; // rcx
  int ActivityIdIrp; // eax
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+28h] [rbp-60h]
  void *v20; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+38h] [rbp-50h] BYREF

  v20 = 0LL;
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
          &v20,
          0LL);
  if ( v10 >= 0 )
  {
    v10 = HUBFDO_IoctlValidateParameters((__int64)v9, 4uLL, a4, v20, 0xCuLL, a3);
    if ( v10 >= 0 )
    {
      v7 = *(unsigned __int16 *)v20;
      memset(v20, 0, a3);
      *(_DWORD *)v20 = v7;
      *((_DWORD *)v20 + 2) = 0;
      for ( i = (_QWORD *)v9[295]; ; i = (_QWORD *)*i )
      {
        v12 = i - 31;
        if ( v9 + 295 == i )
          goto LABEL_9;
        if ( *((unsigned __int16 *)v12 + 100) == v7 )
          break;
      }
      if ( i == (_QWORD *)248 )
      {
LABEL_9:
        *((_DWORD *)v20 + 1) = 3;
        goto LABEL_10;
      }
      *((_DWORD *)v20 + 1) = *((_DWORD *)v12 + 356);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = v10;
    WPP_RECORDER_SF_d(v9[315], 2u, 3u, 0x3Bu, (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids, v19);
  }
LABEL_10:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v15 = (const GUID *)&v21;
      LODWORD(v18) = v10;
      LODWORD(v17) = v7;
      if ( ActivityIdIrp < 0 )
        v15 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v14,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_ATTRIBUTES_COMPLETE,
        v15,
        v9[31],
        v17,
        v18);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10,
           12LL);
}
