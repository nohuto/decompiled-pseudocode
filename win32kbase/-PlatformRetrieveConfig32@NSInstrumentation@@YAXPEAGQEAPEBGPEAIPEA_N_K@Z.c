void __fastcall NSInstrumentation::PlatformRetrieveConfig32(
        NSInstrumentation *this,
        PCWSTR *a2,
        const unsigned __int16 **const a3,
        unsigned int *a4)
{
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-41h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-21h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+80h] [rbp+Fh] BYREF
  int v15; // [rsp+8Ch] [rbp+1Bh]

  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS NT\\CURRENTVERSION\\WINDOWS");
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v7 = 10LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    v9 = 0LL;
    do
    {
      *((_BYTE *)a4 + v9) = 0;
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < 0xA );
  }
  else
  {
    do
    {
      RtlInitUnicodeString(&DestinationString, *a2);
      ResultLength = 0;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x10u,
             &ResultLength) >= 0
        && ResultLength == 16 )
      {
        v8 = v15;
        *(_BYTE *)a4 = 1;
        *(_DWORD *)a3 = v8;
      }
      else
      {
        *(_BYTE *)a4 = 0;
      }
      ++a2;
      a3 = (const unsigned __int16 **const)((char *)a3 + 4);
      a4 = (unsigned int *)((char *)a4 + 1);
      --v7;
    }
    while ( v7 );
    ZwClose(KeyHandle);
  }
}
