bool __fastcall MiPageCombiningActive(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return dword_140C66EC4 != 0;
  if ( *(_DWORD *)(a1 + 16584) )
    return 1;
  return result;
}
