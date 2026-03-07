__int64 *__fastcall PromoteNode(__int64 **a1)
{
  __int64 *result; // rax
  __int64 *v2; // rdx
  __int64 *v3; // r8
  __int64 *v4; // r8

  result = *a1;
  v2 = (__int64 *)**a1;
  if ( (__int64 **)(*a1)[1] == a1 )
  {
    v4 = a1[2];
    result[1] = (__int64)v4;
    if ( v4 )
      *v4 = (__int64)result;
    a1[2] = result;
  }
  else
  {
    v3 = a1[1];
    result[2] = (__int64)v3;
    if ( v3 )
      *v3 = (__int64)result;
    a1[1] = result;
  }
  *result = (__int64)a1;
  if ( (__int64 *)v2[1] == result )
    v2[1] = (__int64)a1;
  else
    v2[2] = (__int64)a1;
  *a1 = v2;
  return result;
}
