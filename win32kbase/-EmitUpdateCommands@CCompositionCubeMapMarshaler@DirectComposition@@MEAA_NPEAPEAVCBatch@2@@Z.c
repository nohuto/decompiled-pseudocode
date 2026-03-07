char __fastcall DirectComposition::CCompositionCubeMapMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionCubeMapMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CCompositionCubeMapMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0d1723b41587c3d40875eb2502b1a7b6___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CCompositionCubeMapMarshaler::EmitSurfaces(this, a2) )
    return 1;
  return v3;
}
