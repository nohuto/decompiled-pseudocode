__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_140C6697C);
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( a1 <= qword_140C66CF0 && a1 >= qword_140C6A1D8 )
    return HIBYTE(word_140C6697C);
  return (unsigned __int8)word_140C6697C;
}
