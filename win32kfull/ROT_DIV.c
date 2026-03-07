__int64 __fastcall ROT_DIV(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = a2 / a3;
  *a1 = a2 / a3;
  result = a2 / a3;
  v5 = a2 % a3;
  a1[1] = v5;
  if ( v5 < 0 )
  {
    *a1 = v3 - 1;
    result = v5 + a3;
    a1[1] = v5 + a3;
  }
  return result;
}
