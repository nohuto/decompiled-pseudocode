void *__fastcall FastWriteProfileStringW(const UNICODE_STRING *a1, __int64 a2, const WCHAR *a3, _WORD *a4)
{
  void *result; // rax
  unsigned int v7; // edi
  void *v8; // rbp
  __int64 v9; // rax
  NTSTATUS v10; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = OpenCacheKeyEx(a1, a2, 131078LL, 0LL);
  v7 = 0;
  v8 = result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = ZwSetValueKey(v8, &DestinationString, 0, 1u, a4, 2 * v9 + 2);
    ZwClose(v8);
    LOBYTE(v7) = v10 >= 0;
    return (void *)v7;
  }
  return result;
}
