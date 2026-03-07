__int64 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > qword_140C65820 )
    return 0LL;
  else
    return (*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
}
