__int64 __fastcall FxUsbInterface::SelectSettingByDescriptor(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  const void *_a2; // rax
  int _a4; // edx
  int _a3; // r8d
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __int64 bNumEndpoints; // rax
  void *v12; // r8
  FX_POOL **v13; // rax
  _URB *v14; // rsi
  unsigned int v15; // ebx
  __m128i v16; // [rsp+50h] [rbp-18h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( this->m_ConfiguredPipes && this->m_CurAlternateSetting == InterfaceDescriptor->bAlternateSetting )
    return 0LL;
  if ( InterfaceDescriptor->bInterfaceNumber == this->m_InterfaceNumber )
  {
    m_Globals = this->m_Globals;
    bNumEndpoints = InterfaceDescriptor->bNumEndpoints;
    v16.m128i_i64[0] = 0LL;
    v16.m128i_i64[1] = 64LL;
    if ( m_Globals->FxPoolTrackingOn )
      v12 = retaddr;
    else
      v12 = 0LL;
    v13 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v16, 24 * bNumEndpoints + 56, m_Globals->Tag, v12);
    v14 = (_URB *)v13;
    if ( v13 )
    {
      FxUsbInterface::FormatSelectSettingUrb(
        this,
        (_URB *)v13,
        InterfaceDescriptor->bNumEndpoints,
        InterfaceDescriptor->bAlternateSetting);
      v15 = FxUsbInterface::SelectSetting(this, PipesAttributes, v14);
      FxPoolFree((FX_POOL_TRACKER *)v14);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return v15;
  }
  else
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qddd(this->m_Globals, _a3, 0xEu, 0xEu, WPP_FxUsbInterface_cpp_Traceguids, _a2, _a3, _a4, -1073741811);
    return 3221225485LL;
  }
}
