/*
 * XREFs of UsbhFlushPortChangeQueue @ 0x1C00041C0
 * Callers:
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C00040B8 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0005350 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000F290 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C0010600 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C00116B0 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_BusReset_Action @ 0x1C001B150 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C001C090 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C00357E8 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0035A14 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C0035DD8 (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0035FD8 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0036144 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     UsbhFreePortChangeQueueObject @ 0x1C00039F8 (UsbhFreePortChangeQueueObject.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

void __fastcall UsbhFlushPortChangeQueue(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  _QWORD **v5; // rbx
  _QWORD *v6; // r8
  _QWORD *v7; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      55,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_DWORD **)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v4);
  v5 = (_QWORD **)(a2 + 456);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = v7;
    v7[1] = v5;
    UsbhFreePortChangeQueueObject(a1, a2, (__int64)(v6 - 2), 1);
  }
  *(_DWORD *)(a2 + 2876) = 0;
  *(_BYTE *)(a2 + 2839) = 0;
}
