_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140C657C0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C657C0;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}
