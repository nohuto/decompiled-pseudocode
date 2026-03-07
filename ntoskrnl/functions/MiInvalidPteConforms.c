_BOOL8 __fastcall MiInvalidPteConforms(__int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 0LL;
  if ( a1 && qword_140C657C0 )
    return (qword_140C657C0 & a1) != 0;
  return 1LL;
}
