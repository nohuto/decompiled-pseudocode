/*
 * XREFs of CmpSetSystemRegistryString @ 0x1403B7734
 * Callers:
 *     CmpSetSystemValues @ 0x140A59CB0 (CmpSetSystemValues.c)
 * Callees:
 *     ZwSetValueKey @ 0x1403FA620 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403FB500 (ZwDeleteValueKey.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1407A7470 (RtlCreateUnicodeStringFromAsciiz.c)
 */

__int64 __fastcall CmpSetSystemRegistryString(HANDLE KeyHandle, PUNICODE_STRING ValueName, PCSTR SourceString)
{
  wchar_t *Buffer; // rdi
  BOOLEAN v6; // al
  unsigned int v7; // ebx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  Buffer = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( SourceString )
  {
    v6 = RtlCreateUnicodeStringFromAsciiz(&UnicodeString, SourceString);
    Buffer = UnicodeString.Buffer;
    if ( v6 )
      v7 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
    else
      v7 = -1073741823;
  }
  else
  {
    v7 = ZwDeleteValueKey(KeyHandle, ValueName);
    if ( v7 != -1073741772 )
      return v7;
    v7 = 0;
  }
  if ( Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return v7;
}
