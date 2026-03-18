/*
 * XREFs of Usbh_BS_BusPause @ 0x1C0003070
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C0002AF0 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhReleaseBusStateLock @ 0x1C0003300 (UsbhReleaseBusStateLock.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     UsbhBusDisconnect_Action @ 0x1C0031E38 (UsbhBusDisconnect_Action.c)
 *     UsbhBusPnpStop_Action @ 0x1C0031EC0 (UsbhBusPnpStop_Action.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C003B5CC (Usbh_BusRemove_PdoEvent.c)
 */

__int64 __fastcall Usbh_BS_BusPause(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  _DWORD *v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  FdoExt(*(_QWORD *)(a2 + 8));
  v7 = *(_DWORD *)(a2 + 80);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v9 = 1397781346;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = a2;
      *(_QWORD *)(v9 + 24) = v3;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v3);
  if ( (_DWORD)v3 == 6 )
  {
    v7 = 5;
  }
  else if ( (_DWORD)v3 == 8 )
  {
LABEL_12:
    v7 = 3;
  }
  else
  {
    switch ( (int)v3 )
    {
      case 3:
        UsbhBusPnpStop_Action(a1, a2);
        v7 = 2;
        return UsbhReleaseBusStateLock(a1, a2, v7);
      case 5:
        goto LABEL_12;
      case 7:
      case 10:
        goto LABEL_20;
      case 11:
        UsbhBusDisconnect_Action(a1, a2);
LABEL_20:
        v7 = 4;
        break;
      case 12:
        Usbh_BusRemove_PdoEvent(*(_QWORD *)(a2 + 8), a2);
        v7 = 2;
        break;
      default:
        return UsbhReleaseBusStateLock(a1, a2, v7);
    }
  }
  return UsbhReleaseBusStateLock(a1, a2, v7);
}
