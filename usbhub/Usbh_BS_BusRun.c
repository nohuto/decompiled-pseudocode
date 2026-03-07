__int64 __fastcall Usbh_BS_BusRun(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  _DWORD *DeviceExtension; // rdx
  unsigned int v7; // ebp
  void *v8; // rdx
  __int64 v9; // rcx
  unsigned int *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax

  v3 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_27;
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, DeviceExtension);
  FdoExt(*(_QWORD *)(a2 + 8));
  v7 = *(_DWORD *)(a2 + 80);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v8 = a1->DeviceExtension;
    if ( v8 )
    {
      v9 = *((_QWORD *)v8 + 111)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v8 + 220) & *((_DWORD *)v8 + 221));
      *(_DWORD *)v9 = 1314026338;
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
      12,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v3);
  if ( (_DWORD)v3 != 7 )
  {
    *(_DWORD *)(a2 + 128) = 1;
    if ( (_DWORD)v3 == 3 )
    {
      UsbhBusPause_Action(a1, a2);
      UsbhBusPnpStop_Action(a1, a2);
      return (unsigned int)UsbhReleaseBusStateLock(a1, a2, 2LL);
    }
    else if ( (_DWORD)v3 == 6 )
    {
      UsbhBusPause_Action(a1, a2);
      UsbhSshBusBusy(a1, a2);
      return (unsigned int)UsbhReleaseBusStateLock(a1, a2, 5LL);
    }
    else
    {
      return (unsigned int)UsbhReleaseBusStateLock(a1, a2, v7);
    }
  }
  if ( (UsbhBusPause_Action(a1, a2) & 0xC0000000) == 0xC0000000 )
    return (unsigned int)UsbhReleaseBusStateLock(a1, a2, 3LL);
  v10 = (unsigned int *)a1->DeviceExtension;
  if ( !v10 )
LABEL_27:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  v11 = 4;
  if ( v10[610] != 4 )
  {
    v10[610] = 4;
    *(_DWORD *)(a2 + 80) = 4;
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v12 = v10[208];
  *((_QWORD *)v10 + 167) = 0LL;
  v10[8 * v12 + 137] = 4;
  KeReleaseSemaphore((PRKSEMAPHORE)(v10 + 612), 16, 1, 0);
  return v11;
}
