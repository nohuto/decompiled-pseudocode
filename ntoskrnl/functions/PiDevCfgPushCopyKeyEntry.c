__int64 __fastcall PiDevCfgPushCopyKeyEntry(HANDLE *a1, void *a2, void *a3, int a4)
{
  NTSTATUS v7; // esi
  __int64 Pool2; // rax
  HANDLE *v10; // rbx
  HANDLE *v11; // r14
  HANDLE **v12; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF

  v7 = 0;
  memset(&ObjectAttributes, 0, 44);
  Pool2 = ExAllocatePool2(256LL, 40LL, 1667526736LL);
  v10 = (HANDLE *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(Pool2 + 32) = a4;
  v11 = (HANDLE *)(Pool2 + 16);
  if ( a4 < 0 )
  {
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDevCfgEmptyString;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(v11, 0x20019u, &ObjectAttributes);
    if ( v7 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDevCfgEmptyString;
      ObjectAttributes.RootDirectory = a3;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v7 = ZwOpenKey(v10 + 3, 0xF003Fu, &ObjectAttributes);
      if ( v7 >= 0 )
      {
        *((_DWORD *)v10 + 8) |= 0x40000000u;
        goto LABEL_4;
      }
      ZwClose(*v11);
    }
    ExFreePoolWithTag(v10, 0);
    return (unsigned int)v7;
  }
  *v11 = a2;
  *(_QWORD *)(Pool2 + 24) = a3;
LABEL_4:
  v12 = (HANDLE **)a1[1];
  if ( *v12 != a1 )
    __fastfail(3u);
  *v10 = a1;
  v10[1] = v12;
  *v12 = v10;
  a1[1] = v10;
  return (unsigned int)v7;
}
