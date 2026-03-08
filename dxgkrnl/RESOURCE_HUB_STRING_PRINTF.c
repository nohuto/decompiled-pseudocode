/*
 * XREFs of RESOURCE_HUB_STRING_PRINTF @ 0x1C0065860
 * Callers:
 *     DpOpenSpbResource @ 0x1C03A2E10 (DpOpenSpbResource.c)
 * Callees:
 *     ?RtlStringCbVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x1C006570C (-RtlStringCbVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z.c)
 */

NTSTATUS RESOURCE_HUB_STRING_PRINTF(unsigned __int16 *a1, unsigned __int64 a2, const wchar_t *a3, ...)
{
  unsigned int v4; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v5 = va_arg(va1, unsigned __int64 *);
  return RtlStringCbVPrintfExW(a1, a2, 0LL, v5, v4, a3, va);
}
