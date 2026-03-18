/*
 * XREFs of ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C000B08C
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C000AD0C (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0067B60 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C006AFB0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C006C04C (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C006E078 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C0072A70 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C0072CD0 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0091830 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall FxRequestBuffer::GetBufferLength(FxRequestBuffer *this)
{
  __int64 v2; // rdx
  _WDFMEMORY_OFFSET *Offsets; // rcx

  v2 = (unsigned int)(this->DataType - 1);
  if ( this->DataType != FxRequestBufferMemory )
  {
    if ( this->DataType == FxRequestBufferMdl )
      return this->u.Mdl.Length;
    v2 = (unsigned int)(this->DataType - 3);
    if ( this->DataType == FxRequestBufferBuffer )
      return this->u.Mdl.Length;
    if ( this->DataType != FxRequestBufferReferencedMdl )
      return 0LL;
  }
  Offsets = this->u.Memory.Offsets;
  if ( !Offsets || !Offsets->BufferOffset && !Offsets->BufferLength )
    return ((__int64 (__fastcall *)(IFxMemory *, __int64))this->u.Memory.Memory->GetBufferSize)(
             this->u.Memory.Memory,
             v2);
  if ( Offsets->BufferLength )
    return LODWORD(Offsets->BufferLength);
  return ((unsigned int (__fastcall *)(IFxMemory *, __int64))this->u.Memory.Memory->GetBufferSize)(
           this->u.Memory.Memory,
           v2)
       - this->u.Memory.Offsets->BufferOffset;
}
