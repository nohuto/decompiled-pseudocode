__int64 __fastcall CRenderingTechnique::CreateResource(
        CRenderingTechnique *this,
        struct CD3DDevice *a2,
        struct CD3DConstantBuffer **a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v4 = CD3DConstantBuffer::Create(a2, *((_DWORD *)this + 18) + *((_DWORD *)this + 66), (enum D3D11_USAGE)a3, 0LL, a3);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x2B2u, 0LL);
  }
  else
  {
    *((_BYTE *)this + 280) = 1;
    return 0;
  }
  return v6;
}
