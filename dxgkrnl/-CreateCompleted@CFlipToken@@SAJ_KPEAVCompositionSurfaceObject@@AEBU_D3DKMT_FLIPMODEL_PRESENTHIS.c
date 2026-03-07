__int64 __fastcall CFlipToken::CreateCompleted(
        unsigned __int64 a1,
        struct CompositionSurfaceObject *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CFlipToken **a4)
{
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // eax
  bool v5; // di
  CFlipToken *v10; // rax
  CFlipToken *v11; // rax
  __int64 v12; // r8
  struct CFlipToken *v13; // rbx
  int v14; // edi
  bool v16; // [rsp+50h] [rbp+18h] BYREF

  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a3->Flags.Value;
  v5 = 1;
  *a4 = 0LL;
  v16 = 1;
  if ( (*(_DWORD *)&Value & 0x42000) == 0x2000 )
  {
    CompositionSurfaceObject::GetIndependentFlipNotifyDwm(this, a1, &v16);
    v5 = v16;
  }
  v10 = (CFlipToken *)operator new[](0x250uLL, 0x6F744D54u, 256LL);
  if ( v10 && (v11 = CFlipToken::CFlipToken(v10, a1, this), (v13 = v11) != 0LL) )
  {
    LOBYTE(v12) = v5;
    v14 = CFlipToken::InitializeCompleted(v11, a3, v12);
    if ( v14 < 0 )
      (**(void (__fastcall ***)(struct CFlipToken *, __int64))v13)(v13, 1LL);
    else
      *a4 = v13;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v14;
}
