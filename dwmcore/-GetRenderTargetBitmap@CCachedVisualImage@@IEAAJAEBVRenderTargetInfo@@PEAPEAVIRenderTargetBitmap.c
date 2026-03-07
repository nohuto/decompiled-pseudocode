__int64 __fastcall CCachedVisualImage::GetRenderTargetBitmap(
        struct D2D_SIZE_U *this,
        const struct RenderTargetInfo *a2,
        struct IRenderTargetBitmap **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct IRenderTargetBitmap *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IRenderTargetBitmap *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v11);
  v6 = CCachedVisualImage::EnsureRenderTargetBitmap(this, a2, &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = v11;
    v11 = 0LL;
    v7 = 0;
    *a3 = v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FB,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
      (const char *)(unsigned int)v6);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v11);
  return v7;
}
