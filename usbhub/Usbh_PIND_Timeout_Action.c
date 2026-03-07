LONG __fastcall Usbh_PIND_Timeout_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d
  int v8; // r8d

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 1);
  Log(a1, 0x8000, 1718383413, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v7 == 1 )
  {
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), *(_WORD *)(a2 + 2836));
    UsbhEnableTimerObject(
      *(_QWORD *)(a3 + 8),
      a2 + 2744,
      *(_DWORD *)(a2 + 2832),
      *(unsigned __int16 *)(a2 + 4),
      a3,
      0x646E6950u);
    v8 = 2;
    goto LABEL_7;
  }
  if ( v7 == 2 )
  {
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 768);
    UsbhEnableTimerObject(
      *(_QWORD *)(a3 + 8),
      a2 + 2744,
      *(_DWORD *)(a2 + 2832),
      *(unsigned __int16 *)(a2 + 4),
      a3,
      0x646E6950u);
    v8 = 1;
    goto LABEL_7;
  }
  if ( (unsigned int)(v7 - 3) <= 1 )
  {
    v8 = v7;
LABEL_7:
    UsbhSetPindicatorState(a3, a2, v8);
  }
  return UsbhUnlockPindicator(a3);
}
