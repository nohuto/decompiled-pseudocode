/*
 * XREFs of ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0067B60
 * Callers:
 *     FxIoTargetFormatIo @ 0x1C0062624 (FxIoTargetFormatIo.c)
 *     FxIoTargetSendIo @ 0x1C0062804 (FxIoTargetSendIo.c)
 * Callees:
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0001A90 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C00051F4 (--0FxIoContext@@QEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C000B08C (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C000B1B4 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000B79C (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C000BBE0 (-CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0019818 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001D640 (memmove.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0049DD0 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0091830 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 */

__int64 __fastcall FxIoTarget::FormatIoRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 MajorCode,
        FxRequestBuffer *IoBuffer,
        _LARGE_INTEGER *DeviceOffset)
{
  _LARGE_INTEGER v7; // rbx
  char v10; // r12
  __int64 result; // rax
  int v12; // esi
  FxRequestContext *m_RequestContext; // r14
  FX_POOL **v14; // rax
  FxRequestContext *v15; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int BufferLength; // eax
  unsigned __int8 v18; // r8
  __int64 Flags; // rdx
  const void *ObjectHandleUnchecked; // rax
  int Buffer; // eax
  unsigned __int16 v22; // r9
  size_t v23; // r15
  _IRP::<unnamed_type_AssociatedIrp> v24; // rcx
  FX_POOL_TRACKER *v25; // rcx
  void *pBuffer[2]; // [rsp+40h] [rbp-38h] BYREF
  void *Caller; // [rsp+78h] [rbp+0h]
  unsigned int Request_0a[28]; // [rsp+A8h] [rbp+30h]

  v7.QuadPart = 0LL;
  pBuffer[0] = 0LL;
  v10 = 0;
  result = FxRequestBase::ValidateTarget(Request, this);
  v12 = result;
  if ( (int)result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 1 )
    {
      v14 = FxPoolAllocator(
              this->m_Globals,
              &this->m_Globals->FxPoolFrameworks,
              ExDefaultNonPagedPoolType,
              0xB0uLL,
              this->m_Globals->Tag,
              Caller);
      if ( v14 )
      {
        FxIoContext::FxIoContext((FxIoContext *)v14);
        m_RequestContext = v15;
      }
      else
      {
        m_RequestContext = 0LL;
      }
      if ( !m_RequestContext )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetKm_cpp_Traceguids);
        return 3221225626LL;
      }
      FxRequestBase::SetContext(Request, m_RequestContext);
    }
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, IoBuffer);
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
    CurrentStackLocation[-1].FileObject = 0LL;
    FxIoTarget::CopyFileObjectAndFlags(this, Request);
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = MajorCode;
    *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 35) = MajorCode;
    BufferLength = FxRequestBuffer::GetBufferLength(IoBuffer);
    *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 34) = 1;
    v18 = BufferLength;
    Request_0a[0] = BufferLength;
    *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
    m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
    m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
    Flags = Request->m_Irp.m_Irp->Flags;
    *((_DWORD *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 2) = Flags;
    switch ( this->m_TargetIoType )
    {
      case 1u:
        Buffer = FxRequestBuffer::GetBuffer(IoBuffer, (IFxMemory **)pBuffer);
        v12 = Buffer;
        if ( Buffer >= 0 )
        {
          Request->m_Irp.m_Irp->UserBuffer = pBuffer[0];
          goto LABEL_39;
        }
        v22 = 14;
        break;
      case 2u:
        Request->m_Irp.m_Irp->UserBuffer = 0LL;
        if ( !BufferLength )
        {
          Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
          goto LABEL_39;
        }
        v23 = BufferLength;
        if ( m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset >= BufferLength
          && (v24.MasterIrp = (_IRP *)m_RequestContext[1].__vftable) != 0LL )
        {
          Request->m_Irp.m_Irp->AssociatedIrp = v24;
        }
        else
        {
          Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                    this->m_Globals,
                                                                    &this->m_Globals->FxPoolFrameworks,
                                                                    ExDefaultNonPagedPoolType,
                                                                    BufferLength,
                                                                    this->m_Globals->Tag,
                                                                    Caller);
          if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
          {
            WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xBu, WPP_FxIoTargetKm_cpp_Traceguids);
            v12 = -1073741670;
            goto LABEL_45;
          }
          v10 = 1;
        }
        Buffer = FxRequestBuffer::GetBuffer(IoBuffer, (IFxMemory **)pBuffer);
        v12 = Buffer;
        if ( Buffer >= 0 )
        {
          if ( MajorCode == 4 )
          {
            Flags = (__int64)pBuffer[0];
            if ( pBuffer[0] )
              memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, pBuffer[0], v23);
          }
          else
          {
            Request->m_Irp.m_Irp->UserBuffer = pBuffer[0];
          }
          if ( v10 )
          {
            v25 = (FX_POOL_TRACKER *)m_RequestContext[1].__vftable;
            Flags = (__int64)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
            *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
            m_RequestContext[1].__vftable = (FxRequestContext_vtbl *)Flags;
            m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset = v23;
            if ( v25 )
              FxPoolFree(v25);
            v10 = 0;
          }
          else
          {
            *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
          }
LABEL_39:
          if ( v12 < 0 )
          {
            if ( v10 )
            {
              FxPoolFree((FX_POOL_TRACKER *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
              Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
            }
            goto LABEL_45;
          }
          goto LABEL_40;
        }
        v22 = 12;
        break;
      case 3u:
        Buffer = FxRequestBuffer::GetOrAllocateMdl(
                   IoBuffer,
                   this->m_Globals,
                   &Request->m_Irp.m_Irp->MdlAddress,
                   (_MDL **)&m_RequestContext[1].m_CompletionParams.IoStatus.Information,
                   (unsigned __int8 *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 33,
                   (_LOCK_OPERATION)(MajorCode == 3),
                   m_RequestContext[1].m_CompletionParams.IoStatus.Information != 0,
                   &m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument4.Value);
        v12 = Buffer;
        if ( Buffer >= 0 )
        {
LABEL_40:
          Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = Request_0a[0];
          if ( DeviceOffset )
            v7 = *DeviceOffset;
          Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset = v7;
          FxRequestBase::VerifierSetFormatted(Request, Flags, v18);
          return (unsigned int)v12;
        }
        v22 = 13;
        break;
      default:
        v12 = -1073741436;
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qL(
          this->m_Globals,
          2u,
          0xEu,
          0xFu,
          WPP_FxIoTargetKm_cpp_Traceguids,
          ObjectHandleUnchecked,
          0xC0000184);
LABEL_45:
        FxRequestBase::ContextReleaseAndRestore(Request);
        return (unsigned int)v12;
    }
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v22, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
    goto LABEL_39;
  }
  return result;
}
