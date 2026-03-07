__int64 __fastcall CheckSpaceAvailable(HANDLE KeyHandle)
{
  unsigned int v1; // ebx
  NTSTATUS v3; // eax
  _DWORD *PoolWithTag; // rdi
  NTSTATUS v5; // eax
  ULONG Length; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  Length = 0;
  v3 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
  if ( v3 == -2147483643 || v3 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, (int)Length, 0x7765726Bu);
    if ( PoolWithTag )
    {
      v5 = ZwQueryKey(KeyHandle, KeyFullInformation, PoolWithTag, Length, &Length);
      if ( v5 >= 0 )
      {
        if ( PoolWithTag[5] < 0xAu )
          v1 = 1;
        else
          DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Live kernel queue size exceeded\n", 516);
      }
      else
      {
        DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed with 0x%x\n", 510, v5);
      }
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR OOM\n", 493);
    }
  }
  else
  {
    DbgPrintEx(
      0x96u,
      0,
      "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed while determining the size with 0x%x\n",
      485,
      v3);
  }
  return v1;
}
