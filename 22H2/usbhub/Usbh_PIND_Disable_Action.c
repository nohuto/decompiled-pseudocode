/*
 * XREFs of Usbh_PIND_Disable_Action @ 0x1C00300BC
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x1C002FAA8 (UsbhDispatch_PindicatorEvent.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhDisableTimerObject @ 0x1C0011260 (UsbhDisableTimerObject.c)
 *     UsbhLockPindicator @ 0x1C002FD6C (UsbhLockPindicator.c)
 *     UsbhSetPindicatorState @ 0x1C002FEA4 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x1C002FEE8 (UsbhSetPortIndicator.c)
 *     UsbhUnlockPindicator @ 0x1C0030078 (UsbhUnlockPindicator.c)
 */

LONG __fastcall Usbh_PIND_Disable_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 4);
  Log(a1, 0x8000, 1718383410, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v7 <= 0 )
    return UsbhUnlockPindicator(a3);
  if ( v7 <= 2 )
  {
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 0);
    UsbhDisableTimerObject(*(_QWORD *)(a3 + 8), a2 + 2744);
    goto LABEL_8;
  }
  if ( v7 == 3 )
  {
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 0);
LABEL_8:
    UsbhSetPindicatorState(a3, a2, 4);
    return UsbhUnlockPindicator(a3);
  }
  if ( v7 == 4 )
    goto LABEL_8;
  return UsbhUnlockPindicator(a3);
}
