__int64 __fastcall sub_14004F5C0(__int64 a1, unsigned int a2)
{
  if ( a2 >= 0x20 )
    return a1 + 1320;
  _mm_lfence();
  return a1 + 40 * (a2 + 1LL);
}
