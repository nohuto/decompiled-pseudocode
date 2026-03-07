int __fastcall FxDevice::Initialize(
        FxDevice *this,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int result; // eax
  FxPackage *v7; // rax
  FxDefaultIrpHandler *v8; // r14
  _WDF_OBJECT_ATTRIBUTES *p_m_RequestAttributes; // rcx
  _LIST_ENTRY *Flink; // r15
  unsigned __int64 v11; // r12
  bool v12; // zf
  ULONG Tag; // ecx
  void *v14; // rax
  FX_POOL **v15; // r14
  _LIST_ENTRY *Blink; // rdx
  _WDF_OBJECT_ATTRIBUTES *v17; // rcx
  unsigned int v18; // r12d
  unsigned __int64 *p_m_RequestLookasideListElementSize; // r14
  FxPkgGeneral *v20; // rax
  FxPkgGeneral *v21; // rax
  FxWmiIrpHandler *v22; // rax
  unsigned __int16 v23; // r9
  FxWmiIrpHandler *v24; // rax
  FxPkgIo *v25; // rax
  FxPkgIo *v26; // rax
  FxPoolTypeOrPoolFlags v27; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+38h]
  char v29; // [rsp+90h] [rbp+40h]
  unsigned __int64 ContextSize; // [rsp+98h] [rbp+48h]

  m_Globals = this->m_Globals;
  this->m_Exclusive = DeviceInit->Exclusive;
  v29 = 0;
  this->m_ObjectFlags |= 0x800u;
  result = FxDeviceBase::ConfigureConstraints(this, DeviceAttributes);
  if ( result >= 0 )
  {
    *(_QWORD *)&v27.UsePoolType = 0LL;
    v27.u.PoolFlags = 64LL;
    v7 = (FxPackage *)FxObjectHandleAllocCommon(m_Globals, &v27, 0x78uLL, 0, 0LL, 0, FxObjectTypeInternal);
    v8 = (FxDefaultIrpHandler *)v7;
    if ( v7 )
    {
      FxPackage::FxPackage(v7, m_Globals, this, 0x1105u);
      v8->__vftable = (FxDefaultIrpHandler_vtbl *)FxDefaultIrpHandler::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    this->m_PkgDefault = v8;
    if ( v8 )
    {
      FxDevice::InstallPackage(this, v8);
      if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
        this->m_Legacy = 1;
      p_m_RequestAttributes = &this->m_RequestAttributes;
      if ( DeviceInit->RequestAttributes.Size )
      {
        *(_OWORD *)&p_m_RequestAttributes->Size = *(_OWORD *)&DeviceInit->RequestAttributes.Size;
        *(_OWORD *)&this->m_RequestAttributes.EvtDestroyCallback = *(_OWORD *)&DeviceInit->RequestAttributes.EvtDestroyCallback;
        *(_OWORD *)&this->m_RequestAttributes.ParentObject = *(_OWORD *)&DeviceInit->RequestAttributes.ParentObject;
        this->m_RequestAttributes.ContextTypeInfo = DeviceInit->RequestAttributes.ContextTypeInfo;
      }
      ContextSize = FxGetContextSize(p_m_RequestAttributes);
      Flink = DeviceInit->CxDeviceInitListHead.Flink;
      v11 = ContextSize;
      while ( Flink != &DeviceInit->CxDeviceInitListHead )
      {
        v12 = m_Globals->FxPoolTrackingOn == 0;
        Tag = m_Globals->Tag;
        *(_QWORD *)&v27.UsePoolType = 0LL;
        v27.u.PoolFlags = 64LL;
        if ( v12 )
          v14 = 0LL;
        else
          v14 = retaddr;
        v15 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (__m128i *)&v27, 0x108uLL, Tag, v14);
        if ( !v15 )
          return -1073741670;
        v15[2] = 0LL;
        v15[3] = 0LL;
        v15[1] = (FX_POOL *)v15;
        *v15 = (FX_POOL *)v15;
        *((_OWORD *)v15 + 2) = 0LL;
        *((_OWORD *)v15 + 3) = 0LL;
        *((_OWORD *)v15 + 4) = 0LL;
        v15[10] = 0LL;
        memset(v15 + 12, 0, 0xA8uLL);
        *((_BYTE *)v15 + 88) = ++v29;
        v15[2] = (FX_POOL *)Flink[1].Blink[5].Flink;
        v15[3] = (FX_POOL *)Flink[2].Blink;
        *((_LIST_ENTRY *)v15 + 2) = Flink[3];
        *((_LIST_ENTRY *)v15 + 3) = Flink[4];
        *((_LIST_ENTRY *)v15 + 4) = Flink[5];
        v15[10] = (FX_POOL *)Flink[6].Flink;
        Blink = this->m_CxDeviceInfoListHead.Blink;
        if ( Blink->Flink != &this->m_CxDeviceInfoListHead )
          __fastfail(3u);
        *v15 = (FX_POOL *)&this->m_CxDeviceInfoListHead;
        v15[1] = (FX_POOL *)Blink;
        Blink->Flink = (_LIST_ENTRY *)v15;
        this->m_CxDeviceInfoListHead.Blink = (_LIST_ENTRY *)v15;
        Flink[40].Blink = (_LIST_ENTRY *)v15;
        if ( FxGetContextSize((_WDF_OBJECT_ATTRIBUTES *)&Flink[3]) > v11 )
          ContextSize = FxGetContextSize(v17);
        if ( LOBYTE(Flink[40].Flink) == 1 )
        {
          v18 = 0;
          do
          {
            result = FxPrePostCallback::_InitializeContext(
                       this->m_Globals,
                       (WDFCXDEVICE_INIT *)Flink,
                       (FxCxPnpPowerCallbackContext **)&v15[v18 + 12],
                       (FxCxCallbackType)v18);
            if ( result < 0 )
              return result;
          }
          while ( ++v18 < 0x15 );
        }
        Flink = Flink->Flink;
        v11 = ContextSize;
      }
      p_m_RequestLookasideListElementSize = &this->m_RequestLookasideListElementSize;
      result = FxCalculateObjectTotalSize2(m_Globals, 0x168u, 0, v11, &this->m_RequestLookasideListElementSize);
      if ( result < 0 )
        return result;
      result = FxPoolAddHeaderSize(
                 m_Globals,
                 *p_m_RequestLookasideListElementSize,
                 &this->m_RequestLookasideListElementSize);
      if ( result < 0 )
        return result;
      ExInitializeNPagedLookasideList(
        &this->m_RequestLookasideList,
        0LL,
        0LL,
        ExDefaultNonPagedPoolType | 0x200,
        *p_m_RequestLookasideListElementSize,
        m_Globals->Tag,
        0);
      FxDevice::ConfigureAutoForwardCleanupClose(this, DeviceInit);
      *(_QWORD *)&v27.UsePoolType = 0LL;
      v27.u.PoolFlags = 64LL;
      v20 = (FxPkgGeneral *)FxObjectHandleAllocCommon(m_Globals, &v27, 0xC8uLL, 0, 0LL, 0, FxObjectTypeInternal);
      if ( v20 )
        FxPkgGeneral::FxPkgGeneral(v20, m_Globals, this);
      else
        v21 = 0LL;
      this->m_PkgGeneral = v21;
      if ( v21 )
      {
        FxDevice::InstallPackage(this, v21);
        *(_QWORD *)&v27.UsePoolType = 0LL;
        v27.u.PoolFlags = 64LL;
        v22 = (FxWmiIrpHandler *)FxObjectHandleAllocCommon(m_Globals, &v27, 0xD0uLL, 0, 0LL, 0, FxObjectTypeInternal);
        if ( v22 )
          FxWmiIrpHandler::FxWmiIrpHandler(v22, m_Globals, this, v23);
        else
          v24 = 0LL;
        this->m_PkgWmi = v24;
        if ( v24 )
        {
          FxDevice::InstallPackage(this, v24);
          *(_QWORD *)&v27.UsePoolType = 0LL;
          v27.u.PoolFlags = 64LL;
          v25 = (FxPkgIo *)FxObjectHandleAllocCommon(m_Globals, &v27, 0x190uLL, 0, 0LL, 0, FxObjectTypeInternal);
          if ( v25 )
            FxPkgIo::FxPkgIo(v25, m_Globals, this);
          else
            v26 = 0LL;
          this->m_PkgIo = v26;
          if ( v26 )
          {
            FxDevice::InstallPackage(this, v26);
            this->m_PkgIo->m_InCallerContextCallback.m_Method = DeviceInit->IoInCallerContextCallback;
            if ( DeviceInit->RequiresSelfIoTarget )
              this->m_SelfIoTargetNeeded = 1;
            return 0;
          }
        }
      }
    }
    return -1073741670;
  }
  return result;
}
