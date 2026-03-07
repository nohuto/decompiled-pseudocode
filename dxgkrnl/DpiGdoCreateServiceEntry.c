__int64 __fastcall DpiGdoCreateServiceEntry(__int64 a1, void *a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  wchar_t *v6; // rbx
  __int64 v7; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp+7h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+6Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Video");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry1(2LL, v4);
  }
  else
  {
    v6 = wcsrchr_0(*(const wchar_t **)(a1 + 8), 0x5Cu) + 1;
    RtlInitUnicodeString(&ValueName, L"Service");
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v5 = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v6, 2 * v7 + 2);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v5;
}
