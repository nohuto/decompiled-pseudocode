char __fastcall CBitmapRenderStrategy::HasRevealBorder(
        CBitmapRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct _D3DCOLORVALUE *a3)
{
  struct ISwapChainRealization *v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h] BYREF

  if ( *((_DWORD *)a2 + 24) == 1 )
    return 0;
  v5 = 0LL;
  if ( (int)CBitmapRenderStrategy::GetSwapChain(a2, &v5) < 0
    || !(*(unsigned int (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v5 + 16LL))(v5)
    || ((*(void (__fastcall **)(struct ISwapChainRealization *, __int128 *))(*(_QWORD *)v5 + 24LL))(v5, &v6),
        COERCE_FLOAT(HIDWORD(v6) & _xmm) < 0.0000011920929) )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v5);
    return 0;
  }
  if ( a3 )
    *(_OWORD *)&a3->r = v6;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v5);
  return 1;
}
