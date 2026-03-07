char __fastcall DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  char *v7; // rcx
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned __int8)DirectComposition::CCompositionLightMarshaler::EmitClearTargets<tagMILCMD_COMPOSITIONLIGHT_CLEARTARGETS>() )
    return 0;
  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    v8 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v8) )
      return 0;
    v7 = (char *)v8;
    *(_DWORD *)v8 = 12;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 1) = 85;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  if ( !(unsigned __int8)DirectComposition::CCompositionLightMarshaler::EmitAddTargets(this, a2, 0LL) )
    return 0;
  v4 = 1;
  if ( !(unsigned __int8)DirectComposition::CCompositionLightMarshaler::EmitAddTargets(this, a2, 1LL) )
    return 0;
  v5 = *((_DWORD *)this + 4);
  v8 = this;
  if ( (v5 & 0x80u) != 0 )
  {
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_48c6d4f09838988d70deae7b70419805___(
                            this,
                            a2,
                            &v8) )
    {
      *((_DWORD *)this + 4) &= ~0x80u;
      return v4;
    }
    return 0;
  }
  return v4;
}
