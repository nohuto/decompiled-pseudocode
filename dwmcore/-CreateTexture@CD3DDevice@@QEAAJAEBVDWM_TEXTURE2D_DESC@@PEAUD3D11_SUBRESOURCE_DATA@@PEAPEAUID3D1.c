__int64 __fastcall CD3DDevice::CreateTexture(
        CD3DDevice *this,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        struct ID3D11Texture2D **a4)
{
  int v6; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  struct ID3D11Texture2D *v10; // rax
  unsigned int v11; // ebx
  struct ID3D11Texture2D *v13; // [rsp+50h] [rbp+18h] BYREF

  *a4 = 0LL;
  v13 = 0LL;
  v6 = *((_DWORD *)this + 272);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_180355880, 0xAu, v6, 0x6C4u, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct DWM_TEXTURE2D_DESC *, _QWORD, struct ID3D11Texture2D **))(**((_QWORD **)this + 69) + 40LL))(
           *((_QWORD *)this + 69),
           a2,
           0LL,
           &v13);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_180355880, 0xAu, v8, 0x6C8u, 0LL);
    }
    else
    {
      ((void (__fastcall *)(struct ID3D11Texture2D *, const GUID *, _QWORD, _QWORD))v13->lpVtbl->SetPrivateData)(
        v13,
        &WKPDID_D3DDebugObjectName,
        *((unsigned int *)a2 + 14),
        *((_QWORD *)a2 + 6));
      v10 = v13;
      v13 = 0LL;
      *a4 = v10;
    }
  }
  v11 = CD3DDevice::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v6, 5LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  return v11;
}
