/*
 * XREFs of CmpInitializeLoadOptions @ 0x140388708
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

wchar_t *__fastcall CmpInitializeLoadOptions(ULONG_PTR BugCheckParameter3)
{
  const char *v1; // rdx
  wchar_t *result; // rax
  STRING SourceString; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(const char **)(BugCheckParameter3 + 216);
  SourceString = 0LL;
  RtlInitAnsiString(&SourceString, v1);
  CmpLoadOptions.Length = 0;
  CmpLoadOptions.MaximumLength = 2 * (SourceString.Length + 1);
  CmpLoadOptions.Buffer = (wchar_t *)ExAllocatePool2(256LL, 2LL * ((unsigned int)SourceString.Length + 1), 809061699LL);
  if ( !CmpLoadOptions.Buffer )
    KeBugCheckEx(0x74u, 3uLL, 1uLL, BugCheckParameter3, 0LL);
  RtlAnsiStringToUnicodeString(&CmpLoadOptions, &SourceString, 0);
  result = CmpLoadOptions.Buffer;
  CmpLoadOptions.Buffer[SourceString.Length] = 0;
  CmpLoadOptions.Length += 2;
  return result;
}
