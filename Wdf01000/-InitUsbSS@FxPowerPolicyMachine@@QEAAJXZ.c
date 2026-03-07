__int64 __fastcall FxPowerPolicyMachine::InitUsbSS(FxPowerPolicyMachine *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  ULONG Tag; // r8d
  void *v4; // rax
  FxUsbIdleInfo *v5; // rax
  FxUsbIdleInfo *v6; // rbx
  FxPkgPnp *m_PkgPnp; // rcx
  int v8; // esi
  __m128i v10; // [rsp+30h] [rbp-28h]
  __m128i v11; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( this->m_Owner->m_UsbIdle )
    return 0LL;
  v10.m128i_i64[0] = 0LL;
  v10.m128i_i64[1] = 64LL;
  m_Globals = this->m_PkgPnp->m_Globals;
  Tag = m_Globals->Tag;
  if ( m_Globals->FxPoolTrackingOn )
    v4 = retaddr;
  else
    v4 = 0LL;
  v11 = v10;
  v5 = (FxUsbIdleInfo *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v11, 0x28uLL, Tag, v4);
  v6 = v5;
  if ( v5 )
  {
    m_PkgPnp = this->m_PkgPnp;
    v5->m_IdleCallbackEvent = 0LL;
    v5->m_IdleIrp.m_Irp = 0LL;
    v5->m_CallbackInfo.IdleContext = m_PkgPnp;
    v5->m_CallbackInfo.IdleCallback = FxUsbIdleInfo::_UsbIdleCallback;
    v5->m_EventDropped = 0;
    v8 = FxUsbIdleInfo::Initialize(v5);
    if ( v8 < 0 )
    {
      FxUsbIdleInfo::`scalar deleting destructor'(v6);
      return (unsigned int)v8;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Owner->m_UsbIdle, (signed __int64)v6, 0LL) )
      FxUsbIdleInfo::`scalar deleting destructor'(v6);
    return 0LL;
  }
  return 3221225626LL;
}
