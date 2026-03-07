__int64 __fastcall VfUtilAddressRangeRemoveCheckEmpty(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 *v4; // r8

  result = *a1;
  v3 = a2 + 208;
  v4 = a1 + 1;
  if ( a2 == *a1 )
  {
    if ( v3 == *v4 )
    {
      *a1 = 0LL;
      *v4 = 0LL;
      return result;
    }
    *a1 = result + 208;
  }
  result = *v4;
  if ( v3 == *v4 )
  {
    result -= 208LL;
    *v4 = result;
  }
  return result;
}
