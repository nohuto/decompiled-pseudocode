/*
 * XREFs of CmRegUtilUcValueSetUcString @ 0x1C0393CE4
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C0393598 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C0393E90 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     CmpRegUtilAllocateUnicodeString @ 0x1C0393EEC (CmpRegUtilAllocateUnicodeString.c)
 */

__int64 __fastcall CmRegUtilUcValueSetUcString(HANDLE KeyHandle, PUNICODE_STRING ValueName, unsigned __int16 *a3)
{
  unsigned __int64 v4; // rdx
  NTSTATUS v7; // ebx
  const void *v8; // rdx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  v4 = *a3;
  UnicodeString = 0LL;
  if ( a3[1] - v4 < 2 )
  {
    v7 = CmpRegUtilAllocateUnicodeString(&UnicodeString);
    if ( v7 >= 0 )
    {
      v8 = (const void *)*((_QWORD *)a3 + 1);
      UnicodeString.Length = *a3;
      memmove(UnicodeString.Buffer, v8, UnicodeString.Length);
      UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 0;
      v7 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
  else
  {
    *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * (v4 >> 1)) = 0;
    return (unsigned int)ZwSetValueKey(KeyHandle, ValueName, 0, 1u, *((PVOID *)a3 + 1), *a3 + 2);
  }
  return (unsigned int)v7;
}
