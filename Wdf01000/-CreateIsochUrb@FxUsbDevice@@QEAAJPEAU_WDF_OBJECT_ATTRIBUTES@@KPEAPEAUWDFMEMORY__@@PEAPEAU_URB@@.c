__int64 __fastcall FxUsbDevice::CreateIsochUrb(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned int NumberOfIsochPackets,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int v10; // eax
  int v11; // ebx
  _FX_DRIVER_GLOBALS *v12; // rsi
  signed int _a1; // eax
  FxUsbUrb *v14; // rax
  FxObject *v15; // rax
  FxObject *v16; // rsi
  _URB **v17; // rdi
  FxObject *pParent; // [rsp+40h] [rbp-20h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+48h] [rbp-18h] BYREF
  FxPoolTypeOrPoolFlags v21; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+88h] [rbp+28h]
  _URB *urbLocal; // [rsp+90h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  urbLocal = 0LL;
  hMemory = 0LL;
  pParent = 0LL;
  v10 = FxValidateObjectAttributesForParentHandle(m_Globals, Attributes, 0);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( v10 != -1071644142 )
      goto LABEL_18;
    v12 = this->m_Globals;
    pParent = this;
  }
  else
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    v12 = pParent->m_Globals;
    if ( !FxUsbDevice::IsObjectDisposedOnRemove(this, pParent) )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x23u, WPP_FxUsbDevice_cpp_Traceguids);
      v11 = -1073741811;
      goto LABEL_18;
    }
  }
  v11 = FxValidateObjectAttributes(v12, Attributes, 0);
  if ( v11 < 0 )
  {
LABEL_18:
    if ( urbLocal )
      USBD_UrbFree(this->m_USBDHandle, urbLocal);
    return (unsigned int)v11;
  }
  if ( !UrbMemory )
    FxVerifierNullBugCheck(v12, retaddr);
  *UrbMemory = 0LL;
  _a1 = USBD_IsochUrbAllocate(this->m_USBDHandle, NumberOfIsochPackets, &urbLocal);
  v11 = _a1;
  if ( _a1 < 0 )
  {
    urbLocal = 0LL;
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x24u, WPP_FxUsbDevice_cpp_Traceguids, _a1);
    goto LABEL_18;
  }
  *(_QWORD *)&v21.UsePoolType = 0LL;
  v21.u.PoolFlags = 64LL;
  v14 = (FxUsbUrb *)FxObjectHandleAllocCommon(v12, &v21, 0x88uLL, 0, Attributes, 0, FxObjectTypeExternal);
  if ( !v14
    || (FxUsbUrb::FxUsbUrb(v14, v12, this->m_USBDHandle, urbLocal, 12 * NumberOfIsochPackets + 152), (v16 = v15) == 0LL) )
  {
    v11 = -1073741670;
    goto LABEL_18;
  }
  urbLocal = 0LL;
  v11 = FxObject::Commit(v15, Attributes, (void **)&hMemory, (_FX_DRIVER_GLOBALS *)pParent, 1u);
  if ( v11 < 0 )
  {
    FxObject::ClearEvtCallbacks(v16);
    v16->DeleteObject(v16);
    goto LABEL_18;
  }
  v17 = Urb;
  *UrbMemory = hMemory;
  if ( v17 )
    *v17 = (_URB *)((__int64 (__fastcall *)(FxObject *))v16[1].SelfDestruct)(&v16[1]);
  return (unsigned int)v11;
}
