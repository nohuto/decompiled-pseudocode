/*
 * XREFs of UsbhModuleDispatch @ 0x1C0044710
 * Callers:
 *     DriverEntry @ 0x1C00422D8 (DriverEntry.c)
 *     UsbhAddDevice @ 0x1C0042800 (UsbhAddDevice.c)
 *     UsbhDriverUnload @ 0x1C00433D0 (UsbhDriverUnload.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x1C0044DE0 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C0044F00 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C00450A0 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0045290 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0045400 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_PnpRemove @ 0x1C0045544 (Usbh_PnpRemove.c)
 * Callees:
 *     UsbhCallModule @ 0x1C00430EC (UsbhCallModule.c)
 */

__int64 __fastcall UsbhModuleDispatch(
        __int64 a1,
        __int64 a2,
        struct _DRIVER_OBJECT *a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // edi
  unsigned int v7; // ebp
  char v10; // r14
  unsigned int v11; // ebx
  int v12; // eax

  v6 = 0;
  v7 = 0;
  v10 = a1;
  v11 = (_BYTE)a1 == 0 ? 9 : 0;
  do
  {
    v12 = UsbhCallModule(a1, (__int64)&HubModule + 56 * v11, (__int64)a3, a3, a4, a5, a6);
    if ( a4 == 1 )
    {
      if ( v12 < 0 )
        v6 = v12;
    }
    else if ( v12 < 0 )
    {
      break;
    }
    ++v7;
    a1 = v11++ - 1;
    if ( !v10 )
      v11 = a1;
  }
  while ( v7 < 0xA );
  if ( a4 != 1 )
    return (unsigned int)v12;
  return v6;
}
