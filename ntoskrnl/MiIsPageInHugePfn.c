bool __fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  bool result; // al

  result = 0;
  if ( qword_140C67A68 )
    return _bittest64((const signed __int64 *)qword_140C67A68, (a1 >> 18) & 0x3FFFFF) != 0;
  return result;
}
