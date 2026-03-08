/*
 * XREFs of RtlStringVPrintfWorkerW @ 0x1402987DC
 * Callers:
 *     RtlStringCbPrintfExW @ 0x1402986C0 (RtlStringCbPrintfExW.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D2E30 (_vsnwprintf.c)
 */

NTSTATUS __stdcall RtlStringVPrintfWorkerW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszFormat,
        va_list argList)
{
  size_t v5; // rbx
  NTSTATUS v8; // ebp
  int v9; // eax

  v5 = cchDest - 1;
  v8 = 0;
  v9 = vsnwprintf(pszDest, cchDest - 1, pszFormat, argList);
  if ( v9 < 0 )
  {
LABEL_9:
    v8 = -2147483643;
    goto LABEL_8;
  }
  if ( v9 != v5 )
  {
    if ( v9 <= v5 )
    {
      v5 = v9;
      goto LABEL_5;
    }
    goto LABEL_9;
  }
LABEL_8:
  pszDest[v5] = 0;
LABEL_5:
  if ( pcchNewDestLength )
    *pcchNewDestLength = v5;
  return v8;
}
