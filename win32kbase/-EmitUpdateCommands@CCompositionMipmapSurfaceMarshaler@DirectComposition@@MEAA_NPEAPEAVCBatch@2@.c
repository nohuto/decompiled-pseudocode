char __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CCompositionMipmapSurfaceMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4b33d776916e3f95ce38671429c7c8f2___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CCompositionMipmapSurfaceMarshaler::EmitSurfaces(this, a2) )
    return 1;
  return v3;
}
