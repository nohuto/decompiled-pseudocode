__int64 __fastcall DpiGetRegistryPathFromPDO(struct _DEVICE_OBJECT *a1, int a2, unsigned __int16 *a3)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v7; // rdi
  NTSTATUS v8; // eax
  unsigned __int16 v9; // r8
  void *v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  Length = 0;
  v4 = IoOpenDeviceRegistryKey(a1, 2 - (a2 != 0), 0x20019u, &KeyHandle);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry1(2LL, v4);
    return v5;
  }
  v5 = ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &Length);
  if ( v5 == -1073741789 )
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, Length, 1953656900LL);
    v7 = Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      goto LABEL_8;
    }
    memset(Pool2, 0, Length);
    v8 = ZwQueryKey(KeyHandle, KeyNameInformation, v7, Length, &Length);
    v5 = v8;
    if ( v8 < 0 )
    {
      v12 = v8;
      v13 = 2LL;
    }
    else
    {
      v9 = *v7;
      *a3 = *v7;
      a3[1] = v9 + 2;
      v10 = (void *)ExAllocatePool2(256LL, (unsigned __int16)(v9 + 2), 1953656900LL);
      *((_QWORD *)a3 + 1) = v10;
      if ( v10 )
      {
        memset(v10, 0, a3[1]);
        memmove(*((void **)a3 + 1), v7 + 2, *a3);
LABEL_7:
        ExFreePoolWithTag(v7, 0x74727044u);
        goto LABEL_8;
      }
      v12 = -1073741801LL;
      v5 = -1073741801;
      v13 = 6LL;
    }
    WdLogSingleEntry1(v13, v12);
    goto LABEL_7;
  }
LABEL_8:
  ZwClose(KeyHandle);
  return v5;
}
