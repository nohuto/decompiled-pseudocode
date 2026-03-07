NTSTATUS __stdcall RtlWideCharArrayVPrintfWorker(
        wchar_t *pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszFormat,
        va_list argList)
{
  NTSTATUS v7; // ebx
  size_t v8; // rax

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
