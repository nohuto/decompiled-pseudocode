/*
 * XREFs of RtlWideCharArrayVPrintfWorker @ 0x1C0017B24
 * Callers:
 *     RtlUnicodeStringPrintf @ 0x1C00178B4 (RtlUnicodeStringPrintf.c)
 * Callees:
 *     _vsnwprintf @ 0x1C0009B74 (_vsnwprintf.c)
 */

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
