__int64 __fastcall GreDeleteClientObj(__int64 a1)
{
  __int64 result; // rax
  char v2; // [rsp+20h] [rbp-18h]

  v2 = 6;
  result = HmgRemoveObject(a1, 0LL, 0LL, 1LL, v2, 0LL);
  if ( result )
  {
    FreeObject(result, 6LL);
    return 1LL;
  }
  return result;
}
