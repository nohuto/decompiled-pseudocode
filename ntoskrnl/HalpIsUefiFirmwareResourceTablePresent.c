char HalpIsUefiFirmwareResourceTablePresent()
{
  char v0; // bl
  _QWORD v2[2]; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF

  v2[0] = 4194366LL;
  v2[1] = L"\\REGISTRY\\MACHINE\\HARDWARE\\UEFI";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v0 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v2;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v0 = 1;
    ZwClose(KeyHandle);
  }
  return v0;
}
