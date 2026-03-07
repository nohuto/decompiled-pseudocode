__int64 __fastcall RtlStringCopyWorkerW(
        wchar_t *pszDest,
        unsigned __int64 cchDest,
        unsigned __int64 *a3,
        const wchar_t *a4)
{
  wchar_t *v4; // r8
  __int64 v5; // rax
  signed __int64 v6; // rcx
  wchar_t v7; // r9
  wchar_t *v8; // rcx
  __int64 result; // rax

  v4 = pszDest;
  if ( cchDest )
  {
    v5 = 2147483646LL;
    v6 = (char *)L"\\Parameters" - (char *)pszDest;
    do
    {
      if ( !v5 )
        break;
      v7 = *(wchar_t *)((char *)v4 + v6);
      if ( !v7 )
        break;
      *v4 = v7;
      --v5;
      ++v4;
      --cchDest;
    }
    while ( cchDest );
  }
  v8 = v4 - 1;
  result = cchDest == 0 ? 0x80000005 : 0;
  if ( cchDest )
    v8 = v4;
  *v8 = 0;
  return result;
}
