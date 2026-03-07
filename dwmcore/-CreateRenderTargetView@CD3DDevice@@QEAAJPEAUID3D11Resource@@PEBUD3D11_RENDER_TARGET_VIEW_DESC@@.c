__int64 __fastcall CD3DDevice::CreateRenderTargetView(
        CD3DDevice *this,
        struct ID3D11Resource *a2,
        const struct D3D11_RENDER_TARGET_VIEW_DESC *a3,
        struct ID3D11RenderTargetView **a4)
{
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx

  *a4 = 0LL;
  v5 = *((_DWORD *)this + 272);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v5, 0x688u, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Resource *, const struct D3D11_RENDER_TARGET_VIEW_DESC *))(**((_QWORD **)this + 69) + 72LL))(
           *((_QWORD *)this + 69),
           a2,
           a3);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x68Cu, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v5, 0LL);
}
