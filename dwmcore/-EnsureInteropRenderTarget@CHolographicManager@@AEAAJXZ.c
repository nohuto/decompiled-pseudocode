__int64 __fastcall CHolographicManager::EnsureInteropRenderTarget(struct CComposition **this)
{
  struct _LUID *v1; // rsi
  unsigned int v2; // edi
  struct CHolographicInteropTarget **v4; // r14
  int v5; // eax
  __int64 v6; // rcx
  CHolographicInteropTaskQueue *v7; // rcx
  __int64 v8; // rcx
  CompositorTracing *v9; // rcx

  v1 = (struct _LUID *)((char *)this + 68);
  v2 = 0;
  if ( *((_DWORD *)this + 17) == g_luidZero.LowPart && *((_DWORD *)this + 18) == g_luidZero.HighPart
    || !*((_BYTE *)this + 240) )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467259, 0x3DCu, 0LL);
  }
  else
  {
    v4 = this + 4;
    if ( !this[4] )
    {
      v5 = CHolographicInteropTarget::Create(this[3], v1, v4);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x3E1u, 0LL);
      }
      else
      {
        CRenderTargetManager::AddRenderTarget(*((CRenderTargetManager **)this[3] + 27), *v4);
        v7 = this[6];
        if ( v7 && *((_BYTE *)this + 240) )
          CHolographicInteropTaskQueue::PostMessageW(v7, 0x14u, (struct IUnknown *)*v4, 0LL, 0LL, 0LL, 0LL);
        if ( CompositorTracing::IsEnabled((__int64)v7) )
        {
          wil::details::static_lazy<CompositorTracing>::get(
            v8,
            (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
          CompositorTracing::HolographicInteropTargetCreated_(v9, v1);
        }
      }
    }
  }
  return v2;
}
