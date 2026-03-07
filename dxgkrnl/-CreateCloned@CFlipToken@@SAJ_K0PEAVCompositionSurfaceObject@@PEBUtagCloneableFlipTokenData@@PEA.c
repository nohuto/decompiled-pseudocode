__int64 __fastcall CFlipToken::CreateCloned(
        __int64 a1,
        unsigned __int64 a2,
        struct CompositionSurfaceObject *a3,
        const struct tagCloneableFlipTokenData *a4,
        struct CFlipToken **a5)
{
  CFlipToken *v9; // rax
  CFlipToken *v10; // rax
  struct CFlipToken *v11; // rbx
  int v12; // edi

  *a5 = 0LL;
  v9 = (CFlipToken *)operator new[](0x250uLL, 0x6F744D54u, 256LL);
  if ( v9 && (v10 = CFlipToken::CFlipToken(v9, a1, a3), (v11 = v10) != 0LL) )
  {
    v12 = CFlipToken::InitializeCloned(v10, a2, a4);
    if ( v12 < 0 )
      (**(void (__fastcall ***)(struct CFlipToken *, __int64))v11)(v11, 1LL);
    else
      *a5 = v11;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v12;
}
