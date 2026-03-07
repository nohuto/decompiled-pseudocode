__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 << 16) | 0x400;
  if ( qword_140C657C0 )
  {
    if ( (qword_140C657C0 & v1) == 0 )
      return v1 | qword_140C657C0;
    return v1 | 0x10;
  }
  return v1;
}
