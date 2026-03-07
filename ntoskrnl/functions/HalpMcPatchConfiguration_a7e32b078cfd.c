__int64 HalpMcPatchConfiguration()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  _QWORD v3[2]; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v3[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\MCUpdate\\PatchConfig";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v3;
  v3[0] = 9437326LL;
  ObjectAttributes.Attributes = 576;
  v0 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v1 = v0;
  if ( v0 == -1073741772 )
  {
    v1 = 0;
  }
  else if ( v0 >= 0 )
  {
    v1 = HalpMcEnumerateAndSetPatchConfig(KeyHandle, 0LL, 0);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v1;
}
