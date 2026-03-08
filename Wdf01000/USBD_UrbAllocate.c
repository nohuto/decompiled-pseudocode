/*
 * XREFs of USBD_UrbAllocate @ 0x1C008856C
 * Callers:
 *     ?AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x1C0059B8C (-AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z.c)
 *     ?AllocateUrb@FxUsbDeviceStringContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x1C005C6E0 (-AllocateUrb@FxUsbDeviceStringContext@@QEAAJPEAUUSBD_HANDLE__@@@Z.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C005D024 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C005F8A0 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0061078 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000AC00 (memset.c)
 */

__int64 __fastcall USBD_UrbAllocate(USBD_HANDLE__ *USBDHandle, _URB **Urb)
{
  int v4; // ebx
  __int64 (__fastcall *v5)(_QWORD); // rax
  _URB *PoolWithTag; // rax
  void (__fastcall *v7)(_QWORD); // rax

  if ( USBDHandle )
  {
    if ( !Urb )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Urb cant be NULL\n");
      return (unsigned int)-1073741811;
    }
    if ( *((_BYTE *)USBDHandle + 225) )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete is set, UsbdHandleInfo 0x%p\n", USBDHandle);
    }
    else
    {
      if ( *((int *)USBDHandle + 55) >= 1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)USBDHandle + 55);
        v5 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)USBDHandle + 15);
        if ( v5 )
        {
          v4 = v5(*((_QWORD *)USBDHandle + 6));
        }
        else
        {
          PoolWithTag = (_URB *)ExAllocatePoolWithTag(g_NonPagedPoolType, 0x98uLL, *((_DWORD *)USBDHandle + 16));
          *Urb = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, sizeof(_URB));
            v4 = 0;
          }
          else
          {
            if ( g_EnableDbgPrints )
              DbgPrintEx(0x4Du, 0, "Insufficient Memory to allocate URB\n");
            v4 = -1073741670;
          }
        }
        if ( v4 < 0 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)USBDHandle + 55, 0xFFFFFFFF) <= 1 )
          {
            if ( *((_BYTE *)USBDHandle + 225) )
            {
              v7 = (void (__fastcall *)(_QWORD))*((_QWORD *)USBDHandle + 14);
              if ( v7 )
                v7(*((_QWORD *)USBDHandle + 6));
              ExFreePoolWithTag(USBDHandle, *((_DWORD *)USBDHandle + 16));
            }
            else if ( g_EnableDbgPrints )
            {
              DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", USBDHandle);
            }
          }
          goto LABEL_33;
        }
        return (unsigned int)v4;
      }
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->ReferenceCount must be 1 or higher 0x%p\n", USBDHandle);
    }
    v4 = -1073741436;
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDInternal_ReferenceHandle failed %x\n", -1073741436);
    goto LABEL_33;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
  v4 = -1073741811;
  if ( Urb )
LABEL_33:
    *Urb = 0LL;
  return (unsigned int)v4;
}
