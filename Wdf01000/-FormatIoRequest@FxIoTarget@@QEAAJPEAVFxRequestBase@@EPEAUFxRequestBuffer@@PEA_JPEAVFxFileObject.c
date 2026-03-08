/*
 * XREFs of ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0055B14
 * Callers:
 *     FxIoTargetSendIo @ 0x1C000E794 (FxIoTargetSendIo.c)
 *     FxIoTargetFormatIo @ 0x1C00503FC (FxIoTargetFormatIo.c)
 * Callees:
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0001EB0 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0001EF0 (-CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0001F54 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00021A8 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0002238 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C000228C (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C0002648 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C0002A08 (--0FxIoContext@@QEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0089D58 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 */

__int64 __fastcall FxIoTarget::FormatIoRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 MajorCode,
        FxRequestBuffer *IoBuffer,
        _LARGE_INTEGER *DeviceOffset)
{
  _LARGE_INTEGER v7; // rbx
  __int64 result; // rax
  unsigned int v11; // esi
  FxRequestContext *m_RequestContext; // r14
  _FX_DRIVER_GLOBALS *v13; // rcx
  void *v14; // rax
  FX_POOL **v15; // rax
  FxRequestContext *v16; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int BufferLength; // eax
  signed int Buffer; // eax
  unsigned __int16 v20; // r9
  _IRP::<unnamed_type_AssociatedIrp> v21; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v23; // rax
  signed int v24; // eax
  FX_POOL_TRACKER *v25; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v26; // rdx
  const void *ObjectHandleUnchecked; // rax
  unsigned int Size; // [rsp+40h] [rbp-20h]
  void *pBuffer; // [rsp+48h] [rbp-18h] BYREF
  __m128i v30; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  char Request_0a[88]; // [rsp+B8h] [rbp+58h]

  v7.QuadPart = 0LL;
  Request_0a[0] = 0;
  pBuffer = 0LL;
  result = FxRequestBase::ValidateTarget(Request, this);
  v11 = result;
  if ( (int)result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( m_RequestContext && m_RequestContext->m_RequestType == 1 )
    {
LABEL_9:
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
      Size = BufferLength;
      *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
      m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
      m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
      *((_DWORD *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
      if ( this->m_TargetIoType )
      {
        switch ( this->m_TargetIoType )
        {
          case 1u:
            Buffer = FxRequestBuffer::GetBuffer(IoBuffer, (IFxMemory **)&pBuffer);
            v11 = Buffer;
            if ( Buffer < 0 )
            {
              v20 = 14;
              goto LABEL_15;
            }
            Request->m_Irp.m_Irp->UserBuffer = pBuffer;
LABEL_39:
            Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = Size;
            if ( DeviceOffset )
              v7 = *DeviceOffset;
            Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset = v7;
            FxRequestBase::VerifierSetFormatted(Request);
            return v11;
          case 2u:
            Request->m_Irp.m_Irp->UserBuffer = 0LL;
            if ( BufferLength )
            {
              if ( m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset >= BufferLength
                && (v21.MasterIrp = (_IRP *)m_RequestContext[1].__vftable) != 0LL )
              {
                Request->m_Irp.m_Irp->AssociatedIrp = v21;
              }
              else
              {
                m_Globals = this->m_Globals;
                v23 = retaddr;
                v30.m128i_i64[0] = 0LL;
                v30.m128i_i64[1] = 64LL;
                if ( !m_Globals->FxPoolTrackingOn )
                  v23 = 0LL;
                Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                          m_Globals,
                                                                          &m_Globals->FxPoolFrameworks,
                                                                          &v30,
                                                                          Size,
                                                                          m_Globals->Tag,
                                                                          v23);
                if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
                {
                  WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xBu, WPP_FxIoTargetKm_cpp_Traceguids);
                  v11 = -1073741670;
                  goto LABEL_44;
                }
                Request_0a[0] = 1;
              }
              v24 = FxRequestBuffer::GetBuffer(IoBuffer, (IFxMemory **)&pBuffer);
              v11 = v24;
              if ( v24 < 0 )
              {
                WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxIoTargetKm_cpp_Traceguids, v24);
                if ( Request_0a[0] )
                {
                  FxPoolFree((FX_POOL_TRACKER *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
                  Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
                }
                goto LABEL_44;
              }
              if ( MajorCode == 4 )
              {
                if ( pBuffer )
                  memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, pBuffer, Size);
              }
              else
              {
                Request->m_Irp.m_Irp->UserBuffer = pBuffer;
              }
              if ( Request_0a[0] )
              {
                v25 = (FX_POOL_TRACKER *)m_RequestContext[1].__vftable;
                v26.MasterIrp = (_IRP *)Request->m_Irp.m_Irp->AssociatedIrp;
                *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
                m_RequestContext[1].__vftable = (FxRequestContext_vtbl *)v26.MasterIrp;
                m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset = Size;
                if ( v25 )
                  FxPoolFree(v25);
              }
              else
              {
                *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
              }
            }
            else
            {
              Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
            }
            goto LABEL_39;
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
            v11 = Buffer;
            if ( Buffer < 0 )
            {
              v20 = 13;
LABEL_15:
              WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, v20, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
LABEL_44:
              FxRequestBase::ContextReleaseAndRestore(Request);
              return v11;
            }
            goto LABEL_39;
        }
      }
      v11 = -1073741436;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qd(
        this->m_Globals,
        2u,
        0xEu,
        0xFu,
        WPP_FxIoTargetKm_cpp_Traceguids,
        ObjectHandleUnchecked,
        -1073741436);
      goto LABEL_44;
    }
    v13 = this->m_Globals;
    v14 = retaddr;
    v30.m128i_i64[0] = 0LL;
    v30.m128i_i64[1] = 64LL;
    if ( !v13->FxPoolTrackingOn )
      v14 = 0LL;
    v15 = FxPoolAllocator(v13, &v13->FxPoolFrameworks, &v30, 0xB0uLL, v13->Tag, v14);
    if ( v15 )
    {
      FxIoContext::FxIoContext((FxIoContext *)v15);
      m_RequestContext = v16;
      if ( v16 )
      {
        FxRequestBase::SetContext(Request, v16);
        goto LABEL_9;
      }
    }
    WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetKm_cpp_Traceguids);
    return 3221225626LL;
  }
  return result;
}
