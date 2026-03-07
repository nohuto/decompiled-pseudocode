_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140C657C0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C657C0;
  }
  return HIDWORD(a1) == 1;
}
