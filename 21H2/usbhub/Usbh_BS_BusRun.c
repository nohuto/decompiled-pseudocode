/*
 * XREFs of Usbh_BS_BusRun @ 0x1C0003180
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C0002AF0 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhReleaseBusStateLock @ 0x1C0003300 (UsbhReleaseBusStateLock.c)
 *     UsbhBusPause_Action @ 0x1C0006460 (UsbhBusPause_Action.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     UsbhBusPnpStop_Action @ 0x1C0031EC0 (UsbhBusPnpStop_Action.c)
 *     UsbhSshBusBusy @ 0x1C00320E0 (UsbhSshBusBusy.c)
 */

__int64 __fastcall Usbh_BS_BusRun(PDEVICE_OBJECT DeviceObject, __int64 a2, int a3)
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
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_27;
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
  FdoExt(*(_QWORD *)(a2 + 8));
  v7 = *(_DWORD *)(a2 + 80);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v8 = DeviceObject->DeviceExtension;
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
      UsbhBusPause_Action(DeviceObject);
      UsbhBusPnpStop_Action(DeviceObject, a2);
      return (unsigned int)UsbhReleaseBusStateLock(DeviceObject, a2, 2LL);
    }
    else if ( (_DWORD)v3 == 6 )
    {
      UsbhBusPause_Action(DeviceObject);
      UsbhSshBusBusy(DeviceObject, a2);
      return (unsigned int)UsbhReleaseBusStateLock(DeviceObject, a2, 5LL);
    }
    else
    {
      return (unsigned int)UsbhReleaseBusStateLock(DeviceObject, a2, v7);
    }
  }
  if ( (UsbhBusPause_Action(DeviceObject) & 0xC0000000) == 0xC0000000 )
    return (unsigned int)UsbhReleaseBusStateLock(DeviceObject, a2, 3LL);
  v10 = (unsigned int *)DeviceObject->DeviceExtension;
  if ( !v10 )
LABEL_27:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *v10 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
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
