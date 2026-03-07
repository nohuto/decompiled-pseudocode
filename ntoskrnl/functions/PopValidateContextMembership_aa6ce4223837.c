__int64 __fastcall PopValidateContextMembership(void *a1)
{
  __int64 result; // rax
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  result = RtlCheckTokenMembership(0LL, a1, &v2);
  if ( (int)result < 0 || !v2 )
    return 3221225506LL;
  return result;
}
