/*
 * XREFs of ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C00075C4
 * Callers:
 *     FxIoTargetFormatIoctl @ 0x1C0005C48 (FxIoTargetFormatIoctl.c)
 *     imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C000EDB0 (imp_WdfUsbTargetPipeFormatRequestForUrb.c)
 *     FxIoTargetFormatIo @ 0x1C00503FC (FxIoTargetFormatIo.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C0051260 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1C0057530 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C0058810 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C00589D0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0059F5C (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C005B090 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C008A19C (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxRequestBuffer::SetMemory(FxRequestBuffer *this, IFxMemory *Memory, _WDFMEMORY_OFFSET *Offsets)
{
  _MDL *v6; // rax
  FxRequestBufferType v7; // eax

  v6 = Memory->GetMdl(Memory);
  if ( v6 )
  {
    this->u.RefMdl.Mdl = v6;
    v7 = FxRequestBufferReferencedMdl;
  }
  else
  {
    v7 = FxRequestBufferMemory;
  }
  this->DataType = v7;
  this->u.Memory.Memory = Memory;
  this->u.Memory.Offsets = Offsets;
}
