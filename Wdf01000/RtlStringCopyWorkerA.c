__int64 __fastcall RtlStringCopyWorkerA(
        char *pszDest,
        unsigned __int64 pszSrc,
        unsigned __int64 *a3,
        const char *cchDest)
{
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // al
  char *v8; // rcx
  __int64 result; // rax

  v4 = pszDest;
  v5 = 32LL;
  v6 = cchDest - pszDest;
  do
  {
    if ( v5 == -2147483614 )
      break;
    v7 = v4[v6];
    if ( !v7 )
      break;
    *v4++ = v7;
    --v5;
  }
  while ( v5 );
  v8 = v4 - 1;
  result = v5 == 0 ? 0x80000005 : 0;
  if ( v5 )
    v8 = v4;
  *v8 = 0;
  return result;
}
