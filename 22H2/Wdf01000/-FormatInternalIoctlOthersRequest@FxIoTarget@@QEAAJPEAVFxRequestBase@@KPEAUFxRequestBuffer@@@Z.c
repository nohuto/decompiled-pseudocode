/*
 * XREFs of ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0064C18
 * Callers:
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0063A60 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C00707FC (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 * Callees:
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0001A90 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C00027EC (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C000B1B4 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000B79C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C000BBE0 (-CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0019818 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001D540 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C002E818 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0049DD0 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 */

__int64 __fastcall FxIoTarget::FormatInternalIoctlOthersRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        FxRequestBuffer *Buffers)
{
  __int64 result; // rax
  FxRequestContext *m_RequestContext; // rdi
  FX_POOL **v10; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  void ***v12; // r14
  unsigned int v13; // edi
  _IO_STACK_LOCATION *v14; // rcx
  int _a2; // eax
  __int64 v16; // rdx
  unsigned __int8 v17; // r8
  unsigned int v18; // ebx
  void **bufs[3]; // [rsp+40h] [rbp-48h] BYREF
  void *Caller; // [rsp+88h] [rbp+0h]

  result = FxRequestBase::ValidateTarget(Request, this);
  if ( (int)result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 2 )
    {
      v10 = FxPoolAllocator(
              this->m_Globals,
              &this->m_Globals->FxPoolFrameworks,
              ExDefaultNonPagedPoolType,
              0x70uLL,
              this->m_Globals->Tag,
              Caller);
      m_RequestContext = (FxRequestContext *)v10;
      if ( v10 )
      {
        v10[10] = 0LL;
        *((_BYTE *)v10 + 88) = 2;
        memset(v10 + 1, 0, 0x48uLL);
        m_RequestContext->m_CompletionParams.Size = 72;
        m_RequestContext->m_CompletionParams.Type = WdfRequestTypeNoFormat;
        m_RequestContext->__vftable = (FxRequestContext_vtbl *)FxInternalIoctlOthersContext::`vftable';
        *(_OWORD *)&m_RequestContext[1].__vftable = 0LL;
      }
      else
      {
        m_RequestContext = 0LL;
      }
      if ( !m_RequestContext )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x35u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids);
        return 3221225626LL;
      }
      FxRequestBase::SetContext(Request, m_RequestContext);
    }
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, Buffers);
    FxRequestContext::_StoreAndReferenceMemoryWorker(m_RequestContext, (IFxMemory **)&m_RequestContext[1], Buffers + 1);
    FxRequestContext::_StoreAndReferenceMemoryWorker(
      m_RequestContext,
      (IFxMemory **)&m_RequestContext[1].m_CompletionParams,
      Buffers + 2);
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
    CurrentStackLocation[-1].FileObject = 0LL;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
    FxIoTarget::CopyFileObjectAndFlags(this, Request);
    v12 = bufs;
    v13 = 0;
    v14 = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    bufs[0] = &v14[-1].Parameters.Others.Argument1;
    bufs[1] = &v14[-1].Parameters.QueryEa.EaList;
    bufs[2] = &v14[-1].Parameters.SetFile.DeleteHandle;
    while ( 1 )
    {
      _a2 = FxRequestBuffer::GetBuffer(&Buffers[v13++], (IFxMemory **)*v12);
      v18 = _a2;
      if ( _a2 < 0 )
        break;
      ++v12;
      if ( v13 >= 3 )
      {
        FxRequestBase::VerifierSetFormatted(Request, v16, v17);
        return v18;
      }
    }
    WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x36u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v13, _a2);
    FxRequestBase::ContextReleaseAndRestore(Request);
    return v18;
  }
  return result;
}
