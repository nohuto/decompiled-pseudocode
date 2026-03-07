__int64 CmCheckNoTxContext()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  result = TmCurrentTransaction(&v1);
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  if ( (int)result >= 0 )
    return v1 != 0 ? 0xC0190001 : 0;
  return result;
}
