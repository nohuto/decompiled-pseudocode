__int64 __fastcall CD3DDevice::CreatePixelShader(
        CD3DDevice *this,
        const void *a2,
        __int64 a3,
        struct ID3D11ClassLinkage *a4,
        struct ID3D11PixelShader **a5)
{
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx

  *a5 = 0LL;
  v6 = *((_DWORD *)this + 272);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v6, 0x65Bu, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const void *, __int64, _QWORD, struct ID3D11PixelShader **))(**((_QWORD **)this + 69) + 120LL))(
           *((_QWORD *)this + 69),
           a2,
           a3,
           0LL,
           a5);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x660u, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v6, 0);
}
