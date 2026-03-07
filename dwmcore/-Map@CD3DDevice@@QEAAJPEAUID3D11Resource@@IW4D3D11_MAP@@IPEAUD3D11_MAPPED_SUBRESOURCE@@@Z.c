__int64 __fastcall CD3DDevice::Map(
        CD3DDevice *this,
        struct ID3D11Resource *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct D3D11_MAPPED_SUBRESOURCE *a6)
{
  int v6; // ebx
  int v8; // eax
  unsigned int v9; // ecx

  v6 = *((_DWORD *)this + 272);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v6, 0x9F9u, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Resource *, _QWORD, __int64, _DWORD, struct D3D11_MAPPED_SUBRESOURCE *))(**((_QWORD **)this + 70) + 112LL))(
           *((_QWORD *)this + 70),
           a2,
           0LL,
           a4,
           0,
           a6);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x9FFu, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v6, 0LL);
}
