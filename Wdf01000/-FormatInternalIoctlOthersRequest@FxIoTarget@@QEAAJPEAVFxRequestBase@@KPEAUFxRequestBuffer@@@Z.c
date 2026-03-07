__int64 __fastcall FxIoTarget::FormatInternalIoctlOthersRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        FxRequestBuffer *Buffers)
{
  __int64 result; // rax
  FxRequestContext *m_RequestContext; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v11; // rax
  FX_POOL **v12; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  void ***v14; // r14
  unsigned int _a1; // edi
  _IO_STACK_LOCATION *v16; // rcx
  int _a2; // eax
  unsigned int v18; // ebx
  void **bufs[3]; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  result = FxRequestBase::ValidateTarget(Request, this);
  if ( (int)result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 2 )
    {
      m_Globals = this->m_Globals;
      bufs[0] = 0LL;
      bufs[1] = (void **)64;
      if ( m_Globals->FxPoolTrackingOn )
        v11 = retaddr;
      else
        v11 = 0LL;
      v12 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (__m128i *)bufs, 0x70uLL, m_Globals->Tag, v11);
      m_RequestContext = (FxRequestContext *)v12;
      if ( !v12 )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x35u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids);
        return 3221225626LL;
      }
      v12[10] = 0LL;
      *((_BYTE *)v12 + 88) = 2;
      memset(v12 + 1, 0, 0x48uLL);
      m_RequestContext->m_CompletionParams.Size = 72;
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeNoFormat;
      m_RequestContext->__vftable = (FxRequestContext_vtbl *)FxInternalIoctlOthersContext::`vftable';
      *(_OWORD *)&m_RequestContext[1].__vftable = 0LL;
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
    v14 = bufs;
    _a1 = 0;
    v16 = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    bufs[0] = &v16[-1].Parameters.Others.Argument1;
    bufs[1] = &v16[-1].Parameters.QueryEa.EaList;
    bufs[2] = &v16[-1].Parameters.SetFile.DeleteHandle;
    while ( 1 )
    {
      _a2 = FxRequestBuffer::GetBuffer(&Buffers[_a1++], (IFxMemory **)*v14);
      v18 = _a2;
      if ( _a2 < 0 )
        break;
      ++v14;
      if ( _a1 >= 3 )
      {
        FxRequestBase::VerifierSetFormatted(Request);
        return v18;
      }
    }
    WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x36u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
    FxRequestBase::ContextReleaseAndRestore(Request);
    return v18;
  }
  return result;
}
