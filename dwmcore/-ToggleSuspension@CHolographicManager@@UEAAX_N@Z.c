void __fastcall CHolographicManager::ToggleSuspension(CHolographicManager *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rcx
  CompositorTracing *v5; // rcx
  CHolographicInteropTaskQueue *v6; // rcx

  v2 = (unsigned __int8)a2;
  if ( (_BYTE)a2 != *((_BYTE *)this + 241) )
  {
    if ( CompositorTracing::IsEnabled((unsigned __int8)this, a2) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v4,
        _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicSuspendRequest_(v5, v2);
    }
    v6 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
    *((_BYTE *)this + 241) = v2;
    if ( v6 )
      CHolographicInteropTaskQueue::PostMessageW(v6, 0x1Bu, 0LL, (void *)v2, 0LL, 0LL, 0LL);
  }
}
