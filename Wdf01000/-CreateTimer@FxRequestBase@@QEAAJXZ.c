__int64 __fastcall FxRequestBase::CreateTimer(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  ULONG Tag; // ecx
  void *v4; // rax
  FX_POOL **v5; // rax
  FxRequestTimer *v6; // rsi
  int v7; // ebp
  __m128i v9; // [rsp+30h] [rbp-28h]
  __m128i v10; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  m_Globals = this->m_Globals;
  if ( this->m_Timer )
    return 0LL;
  Tag = m_Globals->Tag;
  v9.m128i_i64[0] = 0LL;
  v9.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v4 = retaddr;
  else
    v4 = 0LL;
  v10 = v9;
  v5 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v10, 0x98uLL, Tag, v4);
  v6 = (FxRequestTimer *)v5;
  if ( v5 )
  {
    memset(v5, 0, 0x98uLL);
    v7 = MxTimer::Initialize(&v6->Timer, this, FxRequestBase::_TimerDPC, 0);
    if ( v7 < 0 )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x13u, WPP_FxRequestBase_cpp_Traceguids, this);
      FxRequestTimer::`scalar deleting destructor'(v6);
      return (unsigned int)v7;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Timer, (signed __int64)v6, 0LL) )
      FxRequestTimer::`scalar deleting destructor'(v6);
    return 0LL;
  }
  return 3221225626LL;
}
