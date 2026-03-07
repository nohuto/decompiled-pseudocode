void __fastcall NSInstrumentation::PlatformPersistConfig32(
        NSInstrumentation *this,
        unsigned __int16 *a2,
        const unsigned __int16 **const a3,
        const unsigned int *a4)
{
  unsigned __int64 i; // rbx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  KeyHandle = this;
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
  if ( ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes) < 0 )
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
    for ( i = 0LL; i < 0xA; ++i )
    {
      RtlInitUnicodeString(&DestinationString, *(PCWSTR *)&a2[4 * i]);
      v8 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a3, 4u);
      a3 = (const unsigned __int16 **const)((char *)a3 + 4);
      *((_BYTE *)a4 + i) = v8 >= 0;
    }
    ZwFlushKey(KeyHandle);
    ZwClose(KeyHandle);
  }
}
