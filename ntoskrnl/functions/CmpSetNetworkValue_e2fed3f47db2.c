__int64 __fastcall CmpSetNetworkValue(__int64 a1)
{
  NTSTATUS v2; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+98h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"ln";
  KeyHandle = 0LL;
  Disposition = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( v2 >= 0 )
  {
    v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpDhcpServerAckString, 0, 3u, *(PVOID *)a1, *(_DWORD *)(a1 + 8));
    if ( v2 >= 0 )
    {
      v2 = ZwSetValueKey(
             KeyHandle,
             (PUNICODE_STRING)&CmpBootServerReplyString,
             0,
             3u,
             *(PVOID *)(a1 + 16),
             *(_DWORD *)(a1 + 24));
      if ( v2 >= 0 )
        v2 = 0;
    }
  }
  ZwClose(KeyHandle);
  return (unsigned int)v2;
}
