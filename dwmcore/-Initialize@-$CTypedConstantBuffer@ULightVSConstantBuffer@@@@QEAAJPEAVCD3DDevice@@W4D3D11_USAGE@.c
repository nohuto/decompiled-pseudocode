__int64 __fastcall CTypedConstantBuffer<LightVSConstantBuffer>::Initialize(
        struct ID3D11Buffer **a1,
        struct CD3DDevice *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  struct D3D11_SUBRESOURCE_DATA v6; // [rsp+30h] [rbp-38h] BYREF
  struct D3D11_BUFFER_DESC v7; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  if ( !*a1 )
  {
    v7.Usage = D3D11_USAGE_DEFAULT;
    v7.CPUAccessFlags = 0;
    v7.MiscFlags = 0;
    v7.StructureByteStride = 0;
    *(_QWORD *)&v6.SysMemPitch = 0LL;
    v6.pSysMem = a1 + 2;
    v7.ByteWidth = 272;
    v7.BindFlags = 4;
    v3 = CTypedConstantBufferBase::Initialize(a1, a2, &v7, &v6);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x44u, 0LL);
  }
  return v2;
}
