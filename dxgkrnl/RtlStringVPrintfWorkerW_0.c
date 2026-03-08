/*
 * XREFs of RtlStringVPrintfWorkerW_0 @ 0x1C0065784
 * Callers:
 *     ?RtlStringCbVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x1C006570C (-RtlStringCbVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringVPrintfWorkerW_0(
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
  v9 = _vsnwprintf(pszDest, cchDest - 1, pszFormat, argList);
  if ( v9 < 0 || v9 > v5 )
  {
    v8 = -2147483643;
  }
  else if ( v9 != v5 )
  {
    v5 = v9;
    goto LABEL_7;
  }
  pszDest[v5] = 0;
LABEL_7:
  if ( pcchNewDestLength )
    *pcchNewDestLength = v5;
  return v8;
}
