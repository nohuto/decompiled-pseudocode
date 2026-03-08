/*
 * XREFs of RtlInitializeBootStatDataCache @ 0x1403A4724
 * Callers:
 *     RtlLockBootStatusData @ 0x14073DD00 (RtlLockBootStatusData.c)
 * Callees:
 *     ZwReadFile @ 0x1404123D0 (ZwReadFile.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 RtlInitializeBootStatDataCache()
{
  NTSTATUS v0; // edx
  void *Pool2; // rax
  unsigned int v2; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-10h] BYREF
  ULONG Buffer; // [rsp+70h] [rbp+10h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+78h] [rbp+18h] BYREF

  Buffer = 0;
  IoStatusBlock = 0LL;
  if ( BootStatDataCache )
  {
    return 0;
  }
  else
  {
    ByteOffset.QuadPart = 0LL;
    v0 = ZwReadFile(BootStatFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 4u, &ByteOffset, 0LL);
    if ( v0 >= 0 )
    {
      if ( Buffer && Buffer <= 0x800 )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, Buffer, 1717859170LL);
        BootStatDataCache = Pool2;
        if ( Pool2 )
        {
          v0 = ZwReadFile(BootStatFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Pool2, Buffer, &ByteOffset, 0LL);
          if ( v0 >= 0 )
          {
            v2 = v0;
            if ( IoStatusBlock.Information != Buffer )
              return (unsigned int)-1073741823;
            return v2;
          }
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  return (unsigned int)v0;
}
