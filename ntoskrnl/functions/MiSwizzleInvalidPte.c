__int64 __fastcall MiSwizzleInvalidPte(__int64 a1)
{
  if ( qword_140C657C0 )
  {
    if ( (qword_140C657C0 & a1) == 0 )
      return a1 | qword_140C657C0;
    return a1 | 0x10;
  }
  return a1;
}
