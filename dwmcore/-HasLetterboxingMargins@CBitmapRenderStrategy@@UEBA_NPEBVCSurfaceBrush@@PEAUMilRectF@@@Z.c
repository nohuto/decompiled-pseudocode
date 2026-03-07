char __fastcall CBitmapRenderStrategy::HasLetterboxingMargins(
        CBitmapRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct MilRectF *a3)
{
  char v5; // bl
  char *v6; // rcx
  struct ISwapChainRealization *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( (int)CBitmapRenderStrategy::GetSwapChain(a2, &v7) >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *, struct MilRectF *))(*(_QWORD *)v7 + 160LL))(v7, a3);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v7);
    return v5;
  }
  else
  {
    if ( v7 )
    {
      v6 = (char *)v7 + *(int *)(*((_QWORD *)v7 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return 0;
  }
}
