/*
 * XREFs of CmRegUtilUcValueSetUcString @ 0x1C00BDF2C
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00BD814 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C00BE0D8 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     memmove @ 0x1C001D640 (memmove.c)
 *     CmpRegUtilAllocateUnicodeString @ 0x1C00BE134 (CmpRegUtilAllocateUnicodeString.c)
 */

__int64 __fastcall CmRegUtilUcValueSetUcString(void *KeyHandle, _UNICODE_STRING *ValueName, _UNICODE_STRING *ValueData)
{
  unsigned __int64 Length; // rdx
  NTSTATUS v7; // ebx
  wchar_t *Buffer; // rdx
  _UNICODE_STRING tempString; // [rsp+30h] [rbp-18h] BYREF

  Length = ValueData->Length;
  tempString = 0LL;
  if ( ValueData->MaximumLength - Length < 2 )
  {
    v7 = CmpRegUtilAllocateUnicodeString(&tempString, Length);
    if ( v7 >= 0 )
    {
      Buffer = ValueData->Buffer;
      tempString.Length = ValueData->Length;
      memmove(tempString.Buffer, Buffer, tempString.Length);
      tempString.Buffer[(unsigned __int64)tempString.Length >> 1] = 0;
      v7 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, tempString.Buffer, tempString.Length + 2);
      RtlFreeUnicodeString(&tempString);
    }
  }
  else
  {
    ValueData->Buffer[Length >> 1] = 0;
    return (unsigned int)ZwSetValueKey(KeyHandle, ValueName, 0, 1u, ValueData->Buffer, ValueData->Length + 2);
  }
  return (unsigned int)v7;
}
