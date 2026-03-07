__int64 __fastcall RtlQueryValidationRunlevel(PUNICODE_STRING ValueName)
{
  int v1; // ebx
  unsigned int v3; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+40h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-10h]

  v1 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v8 = 0;
  KeyValueInformation = 0LL;
  v3 = MEMORY[0xFFFFF78000000258];
  if ( ValueName
    && MEMORY[0xFFFFF78000000258] != -1
    && ZwOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      v1 = HIDWORD(KeyValueInformation);
    }
    NtClose(KeyHandle);
  }
  return v1 | v3;
}
