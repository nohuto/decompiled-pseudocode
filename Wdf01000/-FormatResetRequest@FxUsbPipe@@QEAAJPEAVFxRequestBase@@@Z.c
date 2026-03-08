/*
 * XREFs of ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C005A0EC
 * Callers:
 *     imp_WdfUsbTargetPipeFormatRequestForReset @ 0x1C0056BB0 (imp_WdfUsbTargetPipeFormatRequestForReset.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C0056EC0 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C005AC48 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 * Callees:
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0001E04 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0001EB0 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00021A8 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C000F45A (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C000F646 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ??0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C00597E0 (--0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x1C0059B8C (-AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z.c)
 */

__int64 __fastcall FxUsbPipe::FormatResetRequest(FxUsbPipe *this, FxRequestBase *Request)
{
  int _a3; // eax
  unsigned int v5; // ebx
  FxRequestContext *m_RequestContext; // rbx
  bool FxUrbTypeForRequest; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_URB_TYPE v10; // bp
  void *v11; // r8
  FX_POOL **v12; // rax
  FxUsbPipeRequestContext *v13; // rax
  int Urb; // ebp
  IFxMemory_vtbl *PipeHandle; // rcx
  IFxMemory *m_RequestMemory; // rax
  _FILE_OBJECT *v17; // rdx
  __m128i v18; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  _a3 = FxRequestBase::ValidateTarget(Request, this);
  v5 = _a3;
  if ( _a3 < 0 )
  {
    WPP_IFR_SF_qid(
      this->m_Globals,
      2u,
      0xEu,
      0x22u,
      (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
      this,
      (__int64)Request,
      _a3);
    return v5;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( m_RequestContext && m_RequestContext->m_RequestType == 18 )
  {
LABEL_15:
    PipeHandle = (IFxMemory_vtbl *)this->m_PipeInformation.PipeHandle;
    m_RequestMemory = m_RequestContext[1].m_RequestMemory;
    *(_OWORD *)&m_RequestMemory->__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[2].__vftable = 0LL;
    m_RequestMemory[4].__vftable = 0LL;
    LOWORD(m_RequestContext[1].m_RequestMemory->__vftable) = 40;
    WORD1(m_RequestContext[1].m_RequestMemory->__vftable) = 30;
    m_RequestContext[1].m_RequestMemory[3].__vftable = PipeHandle;
    v17 = (_FILE_OBJECT *)m_RequestContext[1].m_RequestMemory;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
    HIDWORD(m_RequestContext[1].__vftable) = 8;
    FxFormatUsbRequest(
      Request,
      v17,
      (_FX_URB_TYPE)(v17 != (_FILE_OBJECT *)(&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 1)),
      this->m_USBDHandle);
    return 0LL;
  }
  FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this->m_UsbDevice, Request);
  m_Globals = this->m_Globals;
  v10 = FxUrbTypeForRequest;
  v18.m128i_i64[0] = 0LL;
  v18.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v11 = retaddr;
  else
    v11 = 0LL;
  v12 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v18, 0xB8uLL, m_Globals->Tag, v11);
  if ( v12 )
  {
    FxUsbPipeRequestContext::FxUsbPipeRequestContext((FxUsbPipeRequestContext *)v12, v10);
    m_RequestContext = v13;
    if ( v13 )
    {
      if ( v10 == FxUrbTypeUsbdAllocated )
      {
        Urb = FxUsbPipeRequestContext::AllocateUrb(v13, this->m_USBDHandle);
        if ( Urb < 0 )
        {
          ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
          return (unsigned int)Urb;
        }
        FxObject::MarkDisposeOverride(Request, ObjectLock);
      }
      FxRequestBase::SetContext(Request, m_RequestContext);
      goto LABEL_15;
    }
  }
  return 3221225626LL;
}
