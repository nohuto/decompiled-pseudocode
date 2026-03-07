bool __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 56);
  result = (unsigned int)v2 <= 0x3A && (v3 = 0x400000000000005LL, _bittest64(&v3, v2)) || a2 == 134;
  return result;
}
