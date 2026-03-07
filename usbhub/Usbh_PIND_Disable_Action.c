LONG __fastcall Usbh_PIND_Disable_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d
  int v8; // r11d
  int v9; // r11d
  int v10; // r11d
  __int64 v11; // rcx

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 4);
  Log(a1, 0x8000, 1718383410, v6, *(unsigned __int16 *)(a2 + 4));
  v8 = v7 - 1;
  if ( !v8 || (v9 = v8 - 1) == 0 )
  {
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 0);
    UsbhDisableTimerObject(*(_QWORD *)(a3 + 8), a2 + 2744);
    goto LABEL_8;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 0);
LABEL_8:
    v11 = a3;
LABEL_9:
    UsbhSetPindicatorState(v11, a2, 4);
    v11 = a3;
    return UsbhUnlockPindicator(v11);
  }
  v11 = a3;
  if ( v10 == 1 )
    goto LABEL_9;
  return UsbhUnlockPindicator(v11);
}
