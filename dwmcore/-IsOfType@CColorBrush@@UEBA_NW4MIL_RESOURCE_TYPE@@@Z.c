bool __fastcall CColorBrush::IsOfType(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( (unsigned int)a2 <= 0x2F )
  {
    v2 = 0x800000420000LL;
    if ( _bittest64(&v2, a2) )
      return 1;
  }
  return result;
}
