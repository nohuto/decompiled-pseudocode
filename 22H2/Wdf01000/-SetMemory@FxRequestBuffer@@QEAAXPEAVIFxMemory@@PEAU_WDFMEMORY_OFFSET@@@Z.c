/*
 * XREFs of ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C000CDB0
 * Callers:
 *     FxIoTargetFormatIoctl @ 0x1C000BCC0 (FxIoTargetFormatIoctl.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C000D080 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0017B54 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     FxIoTargetFormatIo @ 0x1C0062624 (FxIoTargetFormatIo.c)
 *     imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C0068DA0 (imp_WdfUsbTargetPipeFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1C0069A30 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C006ADF0 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C006AFB0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006CEC4 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C006E078 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
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
