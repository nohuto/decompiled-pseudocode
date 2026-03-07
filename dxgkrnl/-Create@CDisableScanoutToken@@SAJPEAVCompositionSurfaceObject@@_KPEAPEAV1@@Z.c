__int64 __fastcall CDisableScanoutToken::Create(
        struct CompositionSurfaceObject *a1,
        __int64 a2,
        struct CDisableScanoutToken **a3)
{
  CToken *v6; // rax
  struct CDisableScanoutToken *v7; // rbx
  int v8; // edi

  *a3 = 0LL;
  v6 = (CToken *)operator new[](0x58uLL, 0x6F744D54u, 256LL);
  v7 = v6;
  if ( v6 )
  {
    CToken::CToken(v6, a2, a1);
    *(_QWORD *)v7 = &CDisableScanoutToken::`vftable';
    v8 = ((__int64 (__fastcall *)(struct CDisableScanoutToken *, __int64))*(&CDisableScanoutToken::`vftable' + 1))(
           v7,
           2LL);
    if ( v8 < 0 )
      (**(void (__fastcall ***)(struct CDisableScanoutToken *, __int64))v7)(v7, 1LL);
    else
      *a3 = v7;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
