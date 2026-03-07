NTSTATUS __fastcall CmpLoadLayerVersions(
        void *Base,
        _DWORD *a2,
        __int64 a3,
        void *a4,
        UNICODE_STRING *a5,
        unsigned int a6)
{
  NTSTATUS result; // eax
  int v10; // ebx
  ULONG i; // r14d
  NTSTATUS v12; // eax
  void *Pool2; // rdi
  int v14; // eax
  __int64 j; // rdi
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD KeyInformation[64]; // [rsp+80h] [rbp-80h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v18 = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  *a2 = 0;
  ObjectAttributes.RootDirectory = a4;
  ObjectAttributes.ObjectName = a5;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  v10 = result;
  if ( result >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( *a2 >= 0x10u )
        goto LABEL_12;
      v12 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0xFEu, &ResultLength);
      v10 = v12;
      if ( v12 == -2147483622 )
      {
        v10 = 0;
LABEL_12:
        qsort(Base, (unsigned int)*a2, 8uLL, CmpCompareLayerDescriptors);
        goto LABEL_13;
      }
      if ( v12 < 0 )
        goto LABEL_13;
      *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
      Pool2 = (void *)ExAllocatePool2(256LL, 808LL, 1685474627LL);
      if ( !Pool2 )
        break;
      LOWORD(v18) = KeyInformation[3];
      WORD1(v18) = LOWORD(KeyInformation[3]) + 2;
      *((_QWORD *)&v18 + 1) = &KeyInformation[4];
      v10 = CmpLoadLayerVersion(Pool2, KeyHandle, &v18, a6);
      if ( v10 < 0 )
        ExFreePoolWithTag(Pool2, 0x64764D43u);
      else
        *((_QWORD *)Base + (unsigned int)(*a2)++) = Pool2;
    }
    v10 = -1073741670;
LABEL_13:
    ZwClose(KeyHandle);
    if ( *a2 )
    {
      if ( v10 < 0 )
      {
        v14 = *a2 - 1;
        for ( j = v14; j >= 0; *((_QWORD *)Base + j--) = 0LL )
          ExFreePoolWithTag(*((PVOID *)Base + j), 0x64764D43u);
        *a2 = 0;
      }
      return v10;
    }
    else
    {
      return -2147483614;
    }
  }
  return result;
}
