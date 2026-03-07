__int64 __fastcall CLinkedShader::GetShadersNoRef(
        CLinkedShader *this,
        struct CD3DDevice *a2,
        unsigned int *a3,
        struct ID3D11PixelShader **a4)
{
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct CD3DPixelShader *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v7 = CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::FindOrCreateResourceNoRef((_QWORD *)this + 4, a2, &v11);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x11u, 0LL);
  }
  else
  {
    *a3 = *((_DWORD *)this + 6);
    *a4 = (struct ID3D11PixelShader *)*((_QWORD *)v11 + 12);
  }
  return v9;
}
