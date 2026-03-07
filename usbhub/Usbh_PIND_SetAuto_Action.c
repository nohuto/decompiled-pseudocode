LONG __fastcall Usbh_PIND_SetAuto_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d
  int v8; // r11d
  int v9; // r11d
  __int64 v10; // rcx
  int v11; // r11d

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 3);
  Log(a1, 0x8000, 1718383412, v6, *(unsigned __int16 *)(a2 + 4));
  v8 = v7 - 1;
  if ( !v8 || (v9 = v8 - 1) == 0 )
  {
    UsbhDisableTimerObject(*(_QWORD *)(a3 + 8), a2 + 2744);
    v10 = a3;
    goto LABEL_7;
  }
  v10 = a3;
  v11 = v9 - 1;
  if ( !v11 )
  {
LABEL_7:
    UsbhSetPindicatorState(v10, a2, 3);
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 0);
    goto LABEL_8;
  }
  if ( v11 == 1 )
  {
    UsbhSetPindicatorState(a3, a2, 4);
LABEL_8:
    v10 = a3;
  }
  return UsbhUnlockPindicator(v10);
}
