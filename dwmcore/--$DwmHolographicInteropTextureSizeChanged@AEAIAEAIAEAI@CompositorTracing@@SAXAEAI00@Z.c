void __fastcall CompositorTracing::DwmHolographicInteropTextureSizeChanged<unsigned int &,unsigned int &,unsigned int &>(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 v6; // rcx
  CompositorTracing *v7; // rcx

  if ( CompositorTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<CompositorTracing>::get(
      v6,
      (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    CompositorTracing::DwmHolographicInteropTextureSizeChanged_(v7, *a1, *a2, *a3);
  }
}
