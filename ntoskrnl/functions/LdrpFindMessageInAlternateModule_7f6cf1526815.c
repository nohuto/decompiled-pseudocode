__int64 __fastcall LdrpFindMessageInAlternateModule(
        __int64 a1,
        unsigned int *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5)
{
  unsigned int *v7; // rax
  __int64 result; // rax
  unsigned int *v9; // r8
  __int64 v10; // rdx
  unsigned int *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v7 = a2;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !a5 )
  {
    result = LdrpAccessResourceDataNoMultipleLanguage(a1, a2, &v11, 0LL);
    if ( (int)result < 0 )
      return result;
    v7 = v11;
  }
  v9 = v7 + 1;
  v10 = *v7;
  if ( a5 && 12 * v10 + 4 > a3 )
    return 3221225595LL;
  while ( 1 )
  {
    if ( !(_DWORD)v10 )
      return 3221225737LL;
    LODWORD(v10) = v10 - 1;
    if ( a4 >= *v9 && a4 <= v9[1] )
      break;
    v9 += 3;
  }
  return 0LL;
}
