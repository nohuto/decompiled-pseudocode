__int64 __fastcall MiHonorRangeStraddleRequirement(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r8
  __int64 result; // rax

  v4 = ~(a3 - 1);
  result = v4 & (a1 + a2 - 1);
  if ( result == (a1 & v4) )
    return a1;
  if ( a4 )
    result -= a2;
  return result;
}
