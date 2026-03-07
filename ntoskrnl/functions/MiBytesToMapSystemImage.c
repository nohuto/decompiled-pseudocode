unsigned __int64 __fastcall MiBytesToMapSystemImage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 result; // rax

  v1 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v1 < a1 )
    return 0LL;
  v2 = (unsigned int)dword_140C694FC + v1;
  if ( v2 < a1 )
    return 0LL;
  result = (unsigned int)(dword_140C654C4 << 12) + v2;
  if ( result < a1 )
    return 0LL;
  return result;
}
