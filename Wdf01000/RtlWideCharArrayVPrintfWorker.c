__int64 __fastcall RtlWideCharArrayVPrintfWorker(
        wchar_t *pszDest,
        unsigned __int64 cchDest,
        unsigned __int64 *pcchNewDestLength,
        const wchar_t *pszFormat,
        char *argList)
{
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax

  v7 = 0;
  LODWORD(v8) = vsnwprintf(pszDest, cchDest, pszFormat, argList);
  if ( (v8 & 0x80000000) != 0LL || (v8 = (int)v8, (int)v8 > cchDest) )
  {
    v7 = -2147483643;
    v8 = cchDest;
  }
  *pcchNewDestLength = v8;
  return v7;
}
