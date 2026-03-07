__int64 __fastcall CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(CSurfaceShaderComposer *this, float a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  const void *v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF

  v6[0] = (const void *)16;
  v7 = 0LL;
  *(float *)&v7 = a2;
  v6[1] = &v7;
  v2 = CSurfaceShaderComposer::SetScratchConstantBuffer((__int64)this, v6, D3D11_USAGE_DYNAMIC);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x196u, 0LL);
  return v4;
}
