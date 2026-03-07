void __fastcall DrvLogDisplayDriverEvent(int a1)
{
  int v2; // ebx
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp+7h] BYREF
  struct _UNICODE_STRING v7; // [rsp+50h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF
  int Data; // [rsp+A8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+77h] BYREF

  Data = 1;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v7 = 0LL;
  DestinationString = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(SGDGetSessionState() + 24) + 3008LL) )
    return;
  RtlInitUnicodeString(&DestinationString, &word_1C02856D8);
  v2 = a1 - 1;
  if ( !v2 )
    goto LABEL_8;
  v3 = v2 - 1;
  if ( !v3 )
    goto LABEL_8;
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 && (unsigned int)(v5 - 1) > 1 )
      return;
LABEL_8:
    WdLogSingleEntry0(4LL);
    goto LABEL_9;
  }
  RtlInitUnicodeString(&DestinationString, L"OldDisplayDriver");
  WdLogSingleEntry0(4LL);
LABEL_9:
  if ( DestinationString.Length )
  {
    RtlInitUnicodeString(
      &v7,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InvalidDisplay");
    ObjectAttributes.ObjectName = &v7;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0x2000000u, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
    {
      ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
      ZwClose(KeyHandle);
    }
  }
}
