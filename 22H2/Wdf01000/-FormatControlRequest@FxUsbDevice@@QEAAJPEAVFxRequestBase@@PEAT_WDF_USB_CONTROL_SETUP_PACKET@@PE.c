/*
 * XREFs of ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C0072A70
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C006ADF0 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C006BA90 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 * Callees:
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0001A90 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C000B08C (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000B79C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C002FD7C (WPP_IFR_SF_qid.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C00324F8 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_i @ 0x1C0058FE0 (WPP_IFR_SF_i.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C006EBCC (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C006F41C (--0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C0070790 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C0073D0C (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 *     USBD_UrbAllocate @ 0x1C008FFDC (USBD_UrbAllocate.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0091830 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 */

int __fastcall FxUsbDevice::FormatControlRequest(
        FxUsbDevice *this,
        FxRequestBase *Request,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket,
        FxRequestBuffer *RequestBuffer)
{
  unsigned int BufferLength; // eax
  unsigned __int8 v9; // dl
  int result; // eax
  int _a3; // ebx
  const void *ObjectHandleUnchecked; // rax
  FxRequestContext *m_RequestContext; // rbx
  _FX_URB_TYPE FxUrbTypeForRequest; // bp
  FX_POOL **v15; // rax
  FxRequestContext *v16; // rax
  USBD_HANDLE__ *m_USBDHandle; // rbp
  int v18; // r15d
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _MDL *pMdl; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  BufferLength = FxRequestBuffer::GetBufferLength(RequestBuffer);
  if ( BufferLength > 0xFFFFuLL )
  {
    WPP_IFR_SF_i(this->m_Globals, v9, 0xEu, 0x16u, WPP_FxusbDeviceKm_cpp_Traceguids, BufferLength);
    return -1073741811;
  }
  _a3 = FxRequestBase::ValidateTarget(Request, this);
  if ( _a3 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qid(
      this->m_Globals,
      2u,
      0xEu,
      0x17u,
      WPP_FxusbDeviceKm_cpp_Traceguids,
      ObjectHandleUnchecked,
      (__int64)Request,
      _a3);
    return _a3;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 19 )
  {
    FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this, Request);
    v15 = FxPoolAllocator(
            this->m_Globals,
            &this->m_Globals->FxPoolFrameworks,
            ExDefaultNonPagedPoolType,
            0x128uLL,
            this->m_Globals->Tag,
            retaddr);
    if ( v15 )
    {
      FxUsbDeviceControlContext::FxUsbDeviceControlContext((FxUsbDeviceControlContext *)v15, FxUrbTypeForRequest);
      m_RequestContext = v16;
    }
    else
    {
      m_RequestContext = 0LL;
    }
    if ( !m_RequestContext )
      return -1073741670;
    if ( FxUrbTypeForRequest == FxUrbTypeUsbdAllocated )
    {
      m_USBDHandle = this->m_USBDHandle;
      v18 = USBD_UrbAllocate(m_USBDHandle, (_URB **)&m_RequestContext[2].m_RequestMemory);
      if ( v18 < 0 )
      {
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x18u, WPP_FxusbDeviceKm_cpp_Traceguids, v18);
        ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
        return v18;
      }
      m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
      FxObject::MarkDisposeOverride(Request, ObjectLock);
    }
    FxRequestBase::SetContext(Request, m_RequestContext);
  }
  if ( ((RequestBuffer->DataType - 2) & 0xFFFFFFFD) != 0
    || (m_Globals = this->m_Globals,
        pMdl = 0LL,
        result = FxRequestBuffer::GetOrAllocateMdl(
                   RequestBuffer,
                   m_Globals,
                   &pMdl,
                   (_MDL **)&m_RequestContext[2].m_RequestType,
                   (unsigned __int8 *)&m_RequestContext[3],
                   IoModifyAccess,
                   0,
                   0LL),
        result >= 0) )
  {
    FxUsbDeviceControlContext::StoreAndReferenceMemory(
      (FxUsbDeviceControlContext *)m_RequestContext,
      this,
      RequestBuffer,
      SetupPacket);
    FxFormatUsbRequest(
      Request,
      (_FILE_OBJECT *)m_RequestContext[2].m_RequestMemory,
      m_RequestContext[2].m_RequestMemory != (IFxMemory *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 1,
      this->m_USBDHandle);
    return 0;
  }
  return result;
}
