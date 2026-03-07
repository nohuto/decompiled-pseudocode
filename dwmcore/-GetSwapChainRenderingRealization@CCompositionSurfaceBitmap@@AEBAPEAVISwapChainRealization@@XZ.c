struct ISwapChainRealization *__fastcall CCompositionSurfaceBitmap::GetSwapChainRenderingRealization(
        CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rbx
  struct IBitmapRealization *RenderingRealization; // rax
  struct IBitmapRealization *v3; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  RenderingRealization = CCompositionSurfaceBitmap::TryGetRenderingRealization(this);
  if ( RenderingRealization )
  {
    v3 = (struct IBitmapRealization *)((char *)RenderingRealization
                                     + *(int *)(*((_QWORD *)RenderingRealization + 1) + 4LL)
                                     + 8);
    v5 = 0LL;
    (**(void (__fastcall ***)(struct IBitmapRealization *, GUID *, __int64 *))v3)(
      v3,
      &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c,
      &v5);
    v1 = v5;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v5);
  }
  return (struct ISwapChainRealization *)v1;
}
