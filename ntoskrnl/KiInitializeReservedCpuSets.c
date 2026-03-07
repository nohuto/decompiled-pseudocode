NTSTATUS KiInitializeReservedCpuSets()
{
  unsigned int v0; // ebx
  NTSTATUS result; // eax
  unsigned int v2; // edx
  __int64 v3; // r8
  int i; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD KeyValueInformation[68]; // [rsp+90h] [rbp-70h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ResultLength = 0;
  KeyHandle = 0LL;
  v7[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\kernel";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v0 = 32;
  ValueName.Buffer = L"ReservedCpuSets";
  v7[0] = 9699474LL;
  *(_QWORD *)&ValueName.Length = 2097182LL;
  memset(&KiReservedCpuSets, 0, 0x100uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v7;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x110u,
               &ResultLength);
    if ( result >= 0 && KeyValueInformation[1] == 3 && (KeyValueInformation[2] & 7) == 0 )
    {
      result = KiValidateCpuSetMasks((char *)&KeyValueInformation[3], KeyValueInformation[2] >> 3);
      if ( result >= 0 )
      {
        if ( v2 >= 0x20 || (v0 = v2) != 0 )
          memmove(&KiReservedCpuSets, &KeyValueInformation[3], 8LL * v0);
        for ( i = 0; i < 2; ++i )
          result = KeModifySystemAllowedCpuSets(0, 0, v3, i);
      }
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
