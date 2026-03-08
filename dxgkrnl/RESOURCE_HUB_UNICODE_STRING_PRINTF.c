/*
 * XREFs of RESOURCE_HUB_UNICODE_STRING_PRINTF @ 0x1C0065890
 * Callers:
 *     DpOpenSpbResource @ 0x1C03A2E10 (DpOpenSpbResource.c)
 * Callees:
 *     ?RtlStringCbVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x1C006570C (-RtlStringCbVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z.c)
 */

NTSTATUS RESOURCE_HUB_UNICODE_STRING_PRINTF(__int64 a1, const wchar_t *a2, ...)
{
  NTSTATUS result; // eax
  unsigned int v4; // [rsp+20h] [rbp-38h]
  unsigned __int16 *v5; // [rsp+40h] [rbp-18h] BYREF
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+70h] [rbp+18h]
  unsigned __int64 *v8; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v6 = va_arg(va1, _QWORD);
  v8 = va_arg(va1, unsigned __int64 *);
  v5 = 0LL;
  result = RtlStringCbVPrintfExW(*(unsigned __int16 **)(a1 + 8), *(unsigned __int16 *)(a1 + 2), &v5, v8, v4, a2, va);
  if ( result >= 0 )
    *(_WORD *)a1 = 2 * ((__int64)(unsigned int)((_DWORD)v5 - *(_DWORD *)(a1 + 8)) >> 1);
  return result;
}
