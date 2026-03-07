NTSTATUS SepSecureBootCheckForUpdates()
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+40h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+37h] BYREF
  int v5; // [rsp+90h] [rbp+47h]

  KeyHandle = 0LL;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  v5 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"z|";
  KeyValueInformation = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_140005718,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 && HIDWORD(KeyValueInformation) && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      result = NtUpdateWnfStateData((int)&WNF_SBS_UPDATE_AVAILABLE, 0, 0, 0, 0LL, 0, 0);
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
