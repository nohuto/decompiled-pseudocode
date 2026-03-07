bool __fastcall CLinearGradientBrush::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 17);
  result = (unsigned int)v2 <= 0x38 && (v3 = 0x100000040000001LL, _bittest64(&v3, v2)) || a2 == 99;
  return result;
}
