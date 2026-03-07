__int64 __fastcall FxUsbInterface::SelectSettingByIndex(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        unsigned __int8 SettingIndex)
{
  __int64 v4; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  ULONG Tag; // r8d
  unsigned __int16 bNumEndpoints; // bp
  void *v10; // rax
  FX_POOL **v11; // rax
  _URB *v12; // rsi
  unsigned int v13; // ebx
  __m128i v14; // [rsp+30h] [rbp-28h]
  __m128i v15; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v4 = SettingIndex;
  if ( this->m_ConfiguredPipes && this->m_CurAlternateSetting == SettingIndex )
    return 0LL;
  if ( SettingIndex >= this->m_NumSettings )
    return 3221225485LL;
  _mm_lfence();
  m_Globals = this->m_Globals;
  v14.m128i_i64[0] = 0LL;
  v14.m128i_i64[1] = 64LL;
  Tag = m_Globals->Tag;
  bNumEndpoints = this->m_Settings[v4].InterfaceDescriptor->bNumEndpoints;
  if ( m_Globals->FxPoolTrackingOn )
    v10 = retaddr;
  else
    v10 = 0LL;
  v15 = v14;
  v11 = FxPoolAllocator(
          m_Globals,
          &m_Globals->FxPoolFrameworks,
          &v15,
          (unsigned __int16)(24 * bNumEndpoints + 56),
          Tag,
          v10);
  v12 = (_URB *)v11;
  if ( v11 )
  {
    FxUsbInterface::FormatSelectSettingUrb(this, (_URB *)v11, bNumEndpoints, v4);
    v13 = FxUsbInterface::SelectSetting(this, PipesAttributes, v12);
    FxPoolFree((FX_POOL_TRACKER *)v12);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v13;
}
