char __fastcall DirectComposition::CTurbulenceEffectMarshaler::EmitData(
        DirectComposition::CTurbulenceEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 52;
  *(_OWORD *)(v3 + 4) = 0LL;
  *(_OWORD *)(v3 + 20) = 0LL;
  *(_OWORD *)(v3 + 36) = 0LL;
  *((_DWORD *)v3 + 1) = 475;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
  *((_DWORD *)v3 + 3) = *((_DWORD *)this + 28);
  *((_DWORD *)v3 + 4) = *((_DWORD *)this + 29);
  *((_DWORD *)v3 + 5) = *((_DWORD *)this + 30);
  *((_DWORD *)v3 + 6) = *((_DWORD *)this + 31);
  *((_DWORD *)v3 + 7) = *((_DWORD *)this + 32);
  *((_DWORD *)v3 + 8) = *((_DWORD *)this + 33);
  *((_DWORD *)v3 + 9) = *((_DWORD *)this + 34);
  *((_DWORD *)v3 + 10) = *((_DWORD *)this + 35);
  *((_DWORD *)v3 + 11) = *((_DWORD *)this + 36);
  *((_DWORD *)v3 + 12) = *((_DWORD *)this + 37);
  return 1;
}
