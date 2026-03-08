/*
 * XREFs of ?RtlStringCbVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x1C006570C
 * Callers:
 *     RESOURCE_HUB_STRING_PRINTF @ 0x1C0065860 (RESOURCE_HUB_STRING_PRINTF.c)
 *     RESOURCE_HUB_UNICODE_STRING_PRINTF @ 0x1C0065890 (RESOURCE_HUB_UNICODE_STRING_PRINTF.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_0 @ 0x1C0065784 (RtlStringVPrintfWorkerW_0.c)
 */

NTSTATUS __fastcall RtlStringCbVPrintfExW(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned __int16 **a3,
        unsigned __int64 *a4,
        unsigned int a5,
        NTSTRSAFE_PCWSTR pszFormat,
        va_list argList)
{
  size_t v7; // rdx
  NTSTATUS result; // eax
  size_t pcchNewDestLength; // [rsp+58h] [rbp+20h] BYREF

  pcchNewDestLength = (size_t)a4;
  v7 = a2 >> 1;
  if ( v7 - 1 > 0x7FFFFFFE )
    return -1073741811;
  pcchNewDestLength = 0LL;
  result = RtlStringVPrintfWorkerW_0(a1, v7, &pcchNewDestLength, pszFormat, argList);
  if ( result >= 0 || result == -2147483643 )
  {
    if ( a3 )
      *a3 = &a1[pcchNewDestLength];
  }
  return result;
}
