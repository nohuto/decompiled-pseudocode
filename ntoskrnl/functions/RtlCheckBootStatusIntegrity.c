__int64 __fastcall RtlCheckBootStatusIntegrity(HANDLE FileHandle, bool *a2)
{
  char v4; // r14
  int v5; // ebx
  void *Pool2; // rsi
  __int64 v7; // rcx
  _BYTE *v8; // rax
  int v10; // [rsp+50h] [rbp-20h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-10h] BYREF
  ULONG Buffer; // [rsp+B0h] [rbp+40h] BYREF
  int v14; // [rsp+B8h] [rbp+48h] BYREF

  v14 = 0;
  v10 = 0;
  Buffer = 0;
  ByteOffset.QuadPart = 0LL;
  v4 = 0;
  IoStatusBlock = 0LL;
  v5 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 4u, &ByteOffset, 0LL);
  if ( v5 >= 0 )
  {
    v5 = RtlBootStatusItemInfo(15, &v14, &v10);
    if ( v5 >= 0 )
    {
      if ( Buffer < v14 + v10 || Buffer > 0x800 )
      {
        *a2 = 0;
      }
      else
      {
        Pool2 = (void *)ExAllocatePool2(256LL, Buffer, 1717859170LL);
        if ( Pool2 )
        {
          v5 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Pool2, Buffer, &ByteOffset, 0LL);
          if ( v5 >= 0 )
          {
            v7 = Buffer;
            if ( IoStatusBlock.Information == Buffer )
            {
              if ( Buffer )
              {
                v8 = Pool2;
                do
                {
                  v4 += *v8++;
                  --v7;
                }
                while ( v7 );
              }
              *a2 = v4 == 0;
            }
            else
            {
              *a2 = 0;
            }
          }
          ExFreePoolWithTag(Pool2, 0);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
  }
  return (unsigned int)v5;
}
