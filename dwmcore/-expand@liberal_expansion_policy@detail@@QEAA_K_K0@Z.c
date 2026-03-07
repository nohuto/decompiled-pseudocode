unsigned __int64 __fastcall detail::liberal_expansion_policy::expand(
        detail::liberal_expansion_policy *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax

  v3 = a2 >> 1;
  if ( a2 > ~(a2 >> 1) )
    return a3;
  result = v3 + a2;
  if ( v3 + a2 < a3 )
    return a3;
  return result;
}
