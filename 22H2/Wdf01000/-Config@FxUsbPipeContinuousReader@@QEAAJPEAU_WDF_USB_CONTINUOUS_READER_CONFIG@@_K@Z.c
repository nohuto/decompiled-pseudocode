/*
 * XREFs of ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C006BDCC
 * Callers:
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C006D8EC (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C000B22C (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0014B18 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ??0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z @ 0x1C00561C8 (--0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006CEC4 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 */

int __fastcall FxUsbPipeContinuousReader::Config(
        FxUsbPipeContinuousReader *this,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config,
        unsigned __int64 TotalBufferLength)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  FxLookasideList *v7; // rax
  FxLookasideList *v8; // rsi
  void (__fastcall *const *v9)(); // rax
  FxLookasideList *v10; // rax
  int result; // eax
  _WDF_OBJECT_ATTRIBUTES *BufferAttributes; // rax
  __int64 v13; // r9
  int v14; // eax
  int v15; // esi
  unsigned __int64 HeaderLength; // rax
  int v17; // r15d
  FxUsbPipeContinuousReader **i; // rsi
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+40h] [rbp-40h] BYREF

  m_Globals = this->m_Pipe->m_Globals;
  if ( TotalBufferLength >= 0x1000 )
  {
    v10 = (FxLookasideList *)FxObjectHandleAlloc(
                               m_Globals,
                               ExDefaultNonPagedPoolType,
                               0x1C0uLL,
                               0,
                               0LL,
                               0,
                               FxObjectTypeExternal);
    v8 = v10;
    if ( v10 )
    {
      FxLookasideList::FxLookasideList(v10, m_Globals, 0x1C0u, m_Globals->Tag);
      v9 = FxNPagedLookasideListFromPool::`vftable';
      goto LABEL_6;
    }
  }
  else
  {
    v7 = (FxLookasideList *)FxObjectHandleAlloc(
                              m_Globals,
                              ExDefaultNonPagedPoolType,
                              0x140uLL,
                              0,
                              0LL,
                              0,
                              FxObjectTypeExternal);
    v8 = v7;
    if ( v7 )
    {
      FxLookasideList::FxLookasideList(v7, m_Globals, 0x140u, m_Globals->Tag);
      v9 = FxNPagedLookasideList::`vftable';
LABEL_6:
      v8->__vftable = (FxLookasideList_vtbl *)v9;
      goto LABEL_8;
    }
  }
  v8 = 0LL;
LABEL_8:
  this->m_Lookaside = v8;
  if ( !v8 )
    return -1073741670;
  BufferAttributes = Config->BufferAttributes;
  if ( BufferAttributes )
  {
    attributes = *BufferAttributes;
  }
  else
  {
    attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
    memset(&attributes, 0, 24);
    attributes.Size = 56;
    attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
    memset(&attributes.ParentObject, 0, 24);
  }
  attributes.ParentObject = (void *)FxObject::GetObjectHandleUnchecked(this->m_Lookaside);
  result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _WDF_OBJECT_ATTRIBUTES *))(*(_QWORD *)v13 + 64LL))(
             v13,
             TotalBufferLength,
             &attributes);
  if ( result >= 0 )
  {
    v14 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_Pipe->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_WorkItem);
    v15 = v14;
    if ( v14 >= 0 )
    {
      this->m_Offsets.BufferLength = Config->TransferLength;
      HeaderLength = Config->HeaderLength;
      v17 = 0;
      this->m_Offsets.BufferOffset = HeaderLength;
      if ( this->m_NumReaders )
      {
        for ( i = &this->m_Readers[0].Parent; ; i += 15 )
        {
          *i = this;
          KeInitializeDpc((PRKDPC)(i + 1), FxUsbPipeContinuousReader::_FxUsbPipeContinuousReadDpc, 0LL);
          result = FxRequest::_Create(
                     m_Globals,
                     0LL,
                     0LL,
                     this->m_Pipe,
                     FxRequestOwnsIrp,
                     FxRequestConstructorCallerIsFx,
                     (FxRequest **)i - 2);
          if ( result < 0 )
            break;
          *(i - 1) = (FxUsbPipeContinuousReader *)(*(i - 2))->m_Readers[0].Dpc.DeferredContext;
          KeInitializeEvent((PRKEVENT)i + 3, NotificationEvent, 1u);
          *((_BYTE *)i + 96) = 1;
          result = FxUsbPipeContinuousReader::FormatRepeater(this, (FxUsbPipeRepeatReader *)(i - 2));
          if ( result < 0 )
            break;
          if ( ++v17 >= this->m_NumReaders )
            return 0;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0xAu, WPP_FxUsbPipeKm_cpp_Traceguids, v14);
      return v15;
    }
  }
  return result;
}
