__int64 __fastcall KiAbThreadRemoveBoosts(ULONG_PTR a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
    return KiAbThreadRemoveBoostsSlow(a1);
  return result;
}
