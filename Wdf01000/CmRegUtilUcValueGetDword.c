NTSTATUS __fastcall CmRegUtilUcValueGetDword(
        void *KeyHandle,
        _UNICODE_STRING *ValueName,
        unsigned int Value,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  NTSTATUS result; // eax
  unsigned int keyValueLength; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 valueBuffer[16]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  keyValueLength = 0;
  result = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, valueBuffer, 0x10u, &keyValueLength);
  if ( result >= 0 )
  {
    if ( *(_DWORD *)&valueBuffer[4] == 4 )
      v4 = *(_DWORD *)&valueBuffer[12];
    else
      result = -1073741788;
  }
  *a4 = v4;
  return result;
}
