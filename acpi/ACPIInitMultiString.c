/*
 * XREFs of ACPIInitMultiString @ 0x1C0087990
 * Callers:
 *     ACPIDockIrpQueryID @ 0x1C007B410 (ACPIDockIrpQueryID.c)
 * Callees:
 *     <none>
 */

__int64 ACPIInitMultiString(struct _UNICODE_STRING *a1, const char *a2, ...)
{
  va_list v2; // rdi
  int v3; // ebx
  const char *v4; // rax
  unsigned int v5; // ebx
  wchar_t *Buffer; // rcx
  va_list v8; // rbx
  struct _UNICODE_STRING v9; // [rsp+28h] [rbp-30h] BYREF
  struct _STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF
  PUNICODE_STRING v11; // [rsp+80h] [rbp+28h]
  const char *v12; // [rsp+88h] [rbp+30h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a2);
  v11 = a1;
  v12 = a2;
  va_copy(v2, va);
  DestinationString = 0LL;
  v3 = 0;
  v9 = 0LL;
  v4 = a2;
  if ( a2 )
  {
    do
    {
      RtlInitAnsiString(&DestinationString, v4);
      v3 += RtlxAnsiStringToUnicodeSize(&DestinationString);
      v2 += 8;
      v4 = (const char *)*((_QWORD *)v2 - 1);
    }
    while ( v4 );
    a1 = v11;
  }
  if ( v3 )
  {
    v5 = v3 + 2;
    a1->MaximumLength = v5;
    v11->Buffer = (wchar_t *)ExAllocatePool2(256LL, v5, 1399874369LL);
    Buffer = v11->Buffer;
    if ( !Buffer )
      return 3221225626LL;
    v9.MaximumLength = v5;
    va_copy(v8, va);
    while ( 1 )
    {
      v9.Buffer = Buffer;
      if ( !*((_QWORD *)v8 - 1) )
        break;
      RtlInitAnsiString(&DestinationString, *((PCSZ *)v8 - 1));
      RtlAnsiStringToUnicodeString(&v9, &DestinationString, 0);
      v8 += 8;
      Buffer = &v9.Buffer[((unsigned __int64)v9.Length >> 1) + 1];
      v9.MaximumLength += -2 - v9.Length;
      v9.Length = 0;
    }
    *Buffer = 0;
    v11->Length = v11->MaximumLength;
  }
  else
  {
    RtlInitUnicodeString(a1, 0LL);
  }
  return 0LL;
}
