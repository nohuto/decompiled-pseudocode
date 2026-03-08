/*
 * XREFs of ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C005DC2C
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0058FF0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C005E36C (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C006078C (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0060A78 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00021A8 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C000DE6E (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C000F45A (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_dqdd @ 0x1C004C094 (WPP_IFR_SF_dqdd.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C005364C (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0053CA8 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C005969C (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C005C7E4 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z @ 0x1C005D5C4 (-GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C005EE30 (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C005F678 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0089A70 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0089B74 (--1FxSyncRequest@@UEAA@XZ.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfig(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _FILE_OBJECT *Urb,
        _FX_URB_TYPE NumConfiguredInterfaces,
        unsigned __int8 *PipesAttributes_0)
{
  _FILE_OBJECT *v5; // r13
  unsigned __int16 v7; // r14
  signed int v8; // edi
  __int64 m_NumInterfaces; // rax
  unsigned __int64 v10; // r9
  _FX_DRIVER_GLOBALS *v11; // rdi
  void *v12; // rax
  unsigned __int8 v13; // dl
  FX_POOL **v14; // r12
  const void *_a1; // rax
  int _a2; // edx
  _SECTION_OBJECT_POINTERS **p_SectionObjectPointer; // rsi
  _SECTION_OBJECT_POINTERS **v18; // r15
  unsigned int _a4; // eax
  int v20; // edx
  void *v21; // r11
  unsigned __int16 v22; // dx
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // cx
  bool v25; // zf
  ULONG v26; // edx
  void *v27; // rax
  FX_POOL **v28; // r13
  __int64 v29; // rax
  _FX_DRIVER_GLOBALS *v30; // rcx
  FxUsbPipe *v31; // rax
  FxIoTarget *v32; // rax
  signed int v33; // eax
  _FX_DRIVER_GLOBALS *v34; // rcx
  void *v35; // rax
  ULONG Tag; // r8d
  unsigned __int16 v37; // r14
  unsigned __int16 v38; // r9
  USBD_HANDLE__ *m_USBDHandle; // r9
  signed int v40; // eax
  FxUsbInterface *InterfaceFromNumber; // rax
  FX_POOL *v42; // r11
  unsigned __int8 v43; // r15
  unsigned __int16 *v44; // r14
  unsigned __int16 *v45; // rsi
  FxUsbInterface *v46; // r13
  __int64 v47; // rcx
  __int64 v48; // r14
  FX_POOL **v49; // rbx
  FX_POOL_TRACKER *v50; // rcx
  unsigned int i; // esi
  __int64 v52; // r9
  unsigned __int8 v54; // [rsp+58h] [rbp-B0h]
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+70h] [rbp-98h]
  int v57; // [rsp+78h] [rbp-90h]
  FxObject *v58[2]; // [rsp+88h] [rbp-80h] BYREF
  _URB *v59; // [rsp+98h] [rbp-70h]
  _FX_DRIVER_GLOBALS *m_Globals; // [rsp+A0h] [rbp-68h]
  FxObject *Parent; // [rsp+A8h] [rbp-60h]
  FxSyncRequest request; // [rsp+B0h] [rbp-58h] BYREF
  void *retaddr; // [rsp+230h] [rbp+128h]
  unsigned __int8 v64; // [rsp+238h] [rbp+130h]
  unsigned __int8 v67; // [rsp+250h] [rbp+148h]

  v5 = Urb;
  m_Globals = this->m_Globals;
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, m_Globals, 0LL, 0LL);
  v59 = 0LL;
  v7 = 0;
  if ( PipesAttributes_0 )
    *PipesAttributes_0 = 0;
  v8 = FxRequestBase::ValidateTarget(*(FxRequestBase **)&request.m_ClearContextOnDestroy, this);
  if ( v8 >= 0 )
  {
    m_NumInterfaces = this->m_NumInterfaces;
    v54 = m_NumInterfaces;
    if ( (_BYTE)m_NumInterfaces )
    {
      v10 = 16 * m_NumInterfaces;
    }
    else
    {
      v54 = 1;
      v10 = 16LL;
    }
    v11 = m_Globals;
    v12 = retaddr;
    options.Timeout = 0LL;
    v56 = 64LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v12 = 0LL;
    v14 = FxPoolAllocator(
            m_Globals,
            &m_Globals->FxPoolFrameworks,
            (__m128i *)&options.Timeout,
            v10,
            m_Globals->Tag,
            v12);
    if ( !v14 )
    {
      v8 = -1073741670;
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbDevice_cpp_Traceguids, _a1, _a2);
      goto LABEL_72;
    }
    p_SectionObjectPointer = &v5->SectionObjectPointer;
    v67 = 0;
    options.Timeout = (__int64)v5 + (unsigned __int16)v5->Type;
    v18 = &v5->SectionObjectPointer;
    if ( (unsigned __int64)&v5->SectionObjectPointer >= options.Timeout )
    {
LABEL_32:
      if ( this->m_NumInterfaces <= 1u || !v7 )
        goto LABEL_48;
      v34 = this->m_Globals;
      v35 = retaddr;
      Tag = v34->Tag;
      v37 = 24 * v7 + 56;
      options.Timeout = 0LL;
      v56 = 64LL;
      if ( !v34->FxPoolTrackingOn )
        v35 = 0LL;
      v59 = (_URB *)FxPoolAllocator(v34, &v34->FxPoolFrameworks, (__m128i *)&options.Timeout, v37, Tag, v35);
      if ( v59 )
      {
LABEL_48:
        m_USBDHandle = this->m_USBDHandle;
        options.Timeout = 0x500000010LL;
        v56 = -20000000LL;
        FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, v5, FxUrbTypeLegacy, m_USBDHandle);
        v40 = FxIoTarget::SubmitSync(
                this,
                *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
                0LL);
        v8 = v40;
        if ( v40 < 0 )
        {
          WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxUsbDevice_cpp_Traceguids, v40);
        }
        else
        {
          this->m_ConfigHandle = v5->FsContext2;
          InterfaceFromNumber = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)p_SectionObjectPointer + 2));
          InterfaceFromNumber->m_NumberOfConfiguredPipes = *((_BYTE *)p_SectionObjectPointer + 16);
          InterfaceFromNumber->m_ConfiguredPipes = (FxUsbPipe **)*v14;
          *v14 = v42;
          *((_DWORD *)v14 + 2) = (_DWORD)v42;
          FxUsbInterface::SetInfo(InterfaceFromNumber, (_USBD_INTERFACE_INFORMATION *)p_SectionObjectPointer);
          v43 = 1;
          if ( this->m_NumInterfaces > 1u )
          {
            v44 = (unsigned __int16 *)((char *)v5 + (unsigned __int16)v5->Type);
            v45 = (unsigned __int16 *)((char *)p_SectionObjectPointer + *(unsigned __int16 *)p_SectionObjectPointer);
            while ( v45 < v44 )
            {
              v46 = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v45 + 2));
              if ( *((_DWORD *)v45 + 4) )
              {
                FxUsbInterface::FormatSelectSettingUrb(v46, v59, v45[8], *((_BYTE *)v45 + 3));
                IoReuseIrp(*(PIRP *)(*(_QWORD *)&request.m_ClearContextOnDestroy + 152LL), 0);
                FxRequestBase::ClearFieldsForReuse(*(FxRequestBase **)&request.m_ClearContextOnDestroy);
                FxFormatUsbRequest(
                  *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                  (_FILE_OBJECT *)v59,
                  FxUrbTypeLegacy,
                  0LL);
                v8 = FxIoTarget::SubmitSync(
                       this,
                       *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                       (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
                       0LL);
                if ( v8 < 0 )
                {
                  WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x1Du, WPP_FxUsbDevice_cpp_Traceguids, v8);
                  goto $Done_52;
                }
                memmove(
                  v45,
                  &v59->UrbGetIsochPipeTransferPathDelays.MaximumSendPathDelayInMilliSeconds,
                  v59->UrbSelectInterface.Interface.Length);
              }
              v46->m_NumberOfConfiguredPipes = *((_BYTE *)v45 + 16);
              v47 = 2LL * v43;
              v46->m_ConfiguredPipes = (FxUsbPipe **)v14[2 * v43];
              v14[v47] = 0LL;
              LODWORD(v14[v47 + 1]) = 0;
              FxUsbInterface::SetInfo(v46, (_USBD_INTERFACE_INFORMATION *)v45);
              v45 = (unsigned __int16 *)((char *)v45 + *v45);
              ++v43;
            }
          }
          if ( PipesAttributes_0 )
            *PipesAttributes_0 = v43;
        }
$Done_52:
        if ( v59 )
          FxPoolFree((FX_POOL_TRACKER *)v59);
        goto LABEL_62;
      }
      v8 = -1073741670;
      v38 = 28;
    }
    else
    {
      while ( 1 )
      {
        _a4 = *((_DWORD *)v18 + 4);
        if ( _a4 > 0xFF )
        {
          v8 = -1073741808;
          WPP_IFR_SF_dqdd(this->m_Globals, v13, 0xEu, 0x16u, WPP_FxUsbDevice_cpp_Traceguids, 255, v18, _a4, -1073741808);
          goto LABEL_62;
        }
        Parent = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v18 + 2));
        if ( !Parent )
        {
          v8 = -1073741808;
          WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x17u, WPP_FxUsbDevice_cpp_Traceguids, v20, -1073741808);
          goto LABEL_62;
        }
        v22 = *((unsigned __int8 *)v18 + 16);
        v64 = *((_BYTE *)v18 + 16);
        v23 = v22;
        if ( v22 <= v7 )
          v23 = v7;
        v24 = 8 * *((unsigned __int8 *)v18 + 16);
        v25 = (_BYTE)v22 == 0;
        v7 = v23;
        v26 = v11->Tag;
        v27 = retaddr;
        if ( v25 )
          v24 = 8;
        v58[0] = 0LL;
        v58[1] = (FxObject *)64;
        if ( v11->FxPoolTrackingOn == (_BYTE)v21 )
          v27 = v21;
        v28 = FxPoolAllocator(v11, &v11->FxPoolFrameworks, (__m128i *)v58, v24, v26, v27);
        if ( !v28 )
        {
          v8 = -1073741670;
          WPP_IFR_SF_dd(
            this->m_Globals,
            2u,
            0xEu,
            0x18u,
            WPP_FxUsbDevice_cpp_Traceguids,
            *((unsigned __int8 *)v18 + 2),
            -1073741670);
          goto LABEL_62;
        }
        v29 = 2LL * v67;
        v57 = 0;
        v14[v29] = (FX_POOL *)v28;
        LODWORD(v14[v29 + 1]) = v64;
        if ( v64 )
          break;
LABEL_28:
        if ( *(_QWORD *)&Parent[1].m_ObjectFlags )
          FxUsbDevice::CleanupInterfacePipesAndDelete(this, (_FX_DRIVER_GLOBALS *)Parent);
        ++v67;
        v18 = (_SECTION_OBJECT_POINTERS **)((char *)v18 + *(unsigned __int16 *)v18);
        if ( (unsigned __int64)v18 >= options.Timeout )
        {
          v5 = Urb;
          goto LABEL_32;
        }
      }
      while ( 1 )
      {
        v30 = this->m_Globals;
        v58[0] = 0LL;
        v58[1] = (FxObject *)64;
        v31 = (FxUsbPipe *)FxObjectHandleAllocCommon(
                             v30,
                             (FxPoolTypeOrPoolFlags *)v58,
                             0x1B0uLL,
                             0,
                             PipesAttributes,
                             0,
                             FxObjectTypeExternal);
        if ( !v31 )
          break;
        FxUsbPipe::FxUsbPipe(v31, this->m_Globals, this);
        v58[0] = v32;
        *v28 = (FX_POOL *)v32;
        if ( !v32 )
          goto LABEL_41;
        v8 = FxIoTarget::Init(v32, this->m_DeviceBase);
        if ( v8 < 0 )
        {
          WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x1Au, WPP_FxUsbDevice_cpp_Traceguids, v8);
          goto LABEL_62;
        }
        v33 = FxObject::Commit(v58[0], PipesAttributes, 0LL, (_FX_DRIVER_GLOBALS *)Parent, 1u);
        v8 = v33;
        if ( v33 < 0 )
        {
          WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x1Bu, WPP_FxUsbDevice_cpp_Traceguids, v33);
          goto LABEL_62;
        }
        ++v28;
        v13 = v64;
        if ( ++v57 >= (unsigned int)v64 )
        {
          v11 = m_Globals;
          goto LABEL_28;
        }
      }
      *v28 = 0LL;
LABEL_41:
      v8 = -1073741670;
      v38 = 25;
    }
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, v38, WPP_FxUsbDevice_cpp_Traceguids, 0xC000009A);
LABEL_62:
    if ( v54 )
    {
      v48 = v54;
      v49 = v14;
      do
      {
        v50 = (FX_POOL_TRACKER *)*v49;
        if ( *v49 )
        {
          for ( i = 0; i < *((_DWORD *)v49 + 2); ++i )
          {
            if ( *((_QWORD *)&v50->Link.Flink + i) )
            {
              FxObject::ClearEvtCallbacks(*((FxObject **)&v50->Link.Flink + i));
              (*(void (**)(void))(*(_QWORD *)v52 + 48LL))();
              *((_QWORD *)&(*v49)->NonPagedLock.m_DbgFlagIsInitialized + i) = 0LL;
              v50 = (FX_POOL_TRACKER *)*v49;
            }
          }
          FxPoolFree(v50);
          *v49 = 0LL;
          *((_DWORD *)v49 + 2) = 0;
        }
        v49 += 2;
        --v48;
      }
      while ( v48 );
    }
    FxPoolFree((FX_POOL_TRACKER *)v14);
  }
LABEL_72:
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return (unsigned int)v8;
}
