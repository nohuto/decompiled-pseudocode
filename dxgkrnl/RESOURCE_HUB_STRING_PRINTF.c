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
