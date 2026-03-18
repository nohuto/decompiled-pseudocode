/*
 * XREFs of ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0017B54
 * Callers:
 *     FxIoTargetSendIoctl @ 0x1C0017974 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C0062804 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0063A60 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C006BA90 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C006E4F0 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C000CDB0 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_D @ 0x1C0039220 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxRequestBuffer::ValidateMemoryDescriptor(
        FxRequestBuffer *this,
        IFxMemory *FxDriverGlobals,
        _WDF_MEMORY_DESCRIPTOR *Descriptor,
        char Flags)
{
  unsigned int v4; // ebx
  _FX_DRIVER_GLOBALS *v6; // rbp
  unsigned int Length; // ecx
  unsigned __int16 v10; // r9
  void *Buffer; // rdx
  _WDFMEMORY_OFFSET *Offsets; // rax
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v14; // r14
  IFxMemory *v15; // rcx
  unsigned int globals; // eax
  unsigned __int16 v17; // r9
  unsigned int v18; // eax
  IFxMemory *pMemory; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v6 = (_FX_DRIVER_GLOBALS *)FxDriverGlobals;
  if ( !Descriptor )
  {
    if ( (Flags & 1) != 0 )
      return 0LL;
    v10 = 10;
    goto LABEL_10;
  }
  if ( Descriptor->Type == WdfMemoryDescriptorTypeBuffer )
  {
    FxDriverGlobals = (IFxMemory *)Descriptor->u.BufferType.Buffer;
    if ( FxDriverGlobals )
    {
LABEL_4:
      Length = Descriptor->u.BufferType.Length;
      this->DataType = FxRequestBufferBuffer;
      this->u.Memory.Memory = FxDriverGlobals;
      this->u.Mdl.Length = Length;
      return v4;
    }
    if ( (Flags & 2) == 0 )
    {
      v10 = 11;
      goto LABEL_10;
    }
    globals = Descriptor->u.BufferType.Length;
    if ( !globals )
      goto LABEL_4;
    v17 = 12;
LABEL_11:
    WPP_IFR_SF_D(v6, (unsigned __int8)FxDriverGlobals, 6u, v17, WPP_FxRequestBuffer_cpp_Traceguids, globals);
    return 3221225485LL;
  }
  if ( Descriptor->Type != WdfMemoryDescriptorTypeMdl )
  {
    if ( Descriptor->Type == WdfMemoryDescriptorTypeHandle )
    {
      Buffer = Descriptor->u.BufferType.Buffer;
      pMemory = 0LL;
      if ( Buffer )
      {
        FxObjectHandleGetPtr(v6, (unsigned __int64)Buffer, 0x100Au, (void **)&pMemory);
        Offsets = Descriptor->u.HandleType.Offsets;
        if ( Offsets
          && ((BufferLength = Offsets->BufferLength, v14 = BufferLength + Offsets->BufferOffset, v14 < BufferLength)
           || v14 > pMemory->GetBufferSize(pMemory)) )
        {
          v4 = -1073741675;
          WPP_IFR_SF_d(v6, 2u, 6u, 0x10u, WPP_FxRequestBuffer_cpp_Traceguids, -1073741675);
        }
        else if ( pMemory )
        {
          FxRequestBuffer::SetMemory(this, pMemory, Descriptor->u.HandleType.Offsets);
        }
        return v4;
      }
      if ( (Flags & 2) != 0 )
        return v4;
      WPP_IFR_SF_(v6, 2u, 6u, 0xFu, WPP_FxRequestBuffer_cpp_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  v15 = (IFxMemory *)Descriptor->u.BufferType.Buffer;
  if ( v15 )
  {
LABEL_29:
    v18 = Descriptor->u.BufferType.Length;
    this->DataType = FxRequestBufferMdl;
    this->u.Memory.Memory = v15;
    this->u.Mdl.Length = v18;
    return v4;
  }
  if ( (Flags & 2) != 0 )
  {
    globals = Descriptor->u.BufferType.Length;
    if ( globals )
    {
      v17 = 14;
      goto LABEL_11;
    }
    goto LABEL_29;
  }
  v10 = 13;
LABEL_10:
  WPP_IFR_SF_(v6, 2u, 6u, v10, WPP_FxRequestBuffer_cpp_Traceguids);
  return 3221225485LL;
}
