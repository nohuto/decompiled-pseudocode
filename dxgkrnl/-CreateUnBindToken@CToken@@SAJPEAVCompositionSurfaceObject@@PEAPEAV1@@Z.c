__int64 __fastcall CToken::CreateUnBindToken(struct CompositionSurfaceObject *a1, struct CToken **a2)
{
  CToken *v4; // rax
  CToken *v5; // rax
  struct CToken *v6; // rbx
  int v7; // edi

  *a2 = 0LL;
  v4 = (CToken *)operator new[](0x58uLL, 0x6F744D54u, 256LL);
  if ( v4 && (v5 = CToken::CToken(v4, 0LL, a1), (v6 = v5) != 0LL) )
  {
    v7 = (*(__int64 (__fastcall **)(CToken *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 2LL);
    if ( v7 < 0 )
      (**(void (__fastcall ***)(struct CToken *, __int64))v6)(v6, 1LL);
    else
      *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
