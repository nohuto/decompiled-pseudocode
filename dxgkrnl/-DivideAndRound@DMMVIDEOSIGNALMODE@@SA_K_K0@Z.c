unsigned __int64 __fastcall DMMVIDEOSIGNALMODE::DivideAndRound(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax

  if ( !a2 )
    return -1LL;
  v3 = a1 / a2;
  result = v3 + 1;
  if ( a1 % a2 < a2 - a1 % a2 )
    return v3;
  return result;
}
