__int64 __fastcall DpReadSpbResource(
        int a1,
        int a2,
        ULONG a3,
        void *a4,
        PLARGE_INTEGER ByteOffset,
        HANDLE Event,
        PIO_STATUS_BLOCK a7)
{
  HANDLE Ptr; // rbx
  HANDLE v10; // r15
  __int64 result; // rax
  struct _IO_STATUS_BLOCK *IoStatusBlock; // rsi
  struct _EX_RUNDOWN_REF *v13; // rdi
  NTSTATUS File; // ebx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  struct _EX_RUNDOWN_REF *v17; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  Ptr = Event;
  v10 = Event;
  if ( !a4 && a3 )
  {
    WdLogSingleEntry1(3LL, a3);
    return 3221225485LL;
  }
  IoStatusBlock = a7;
  if ( !a7 )
  {
    WdLogSingleEntry1(3LL, 0LL);
    return 3221225716LL;
  }
  result = DpiValidateSpbResource(a1, a2, (unsigned int)&DpReadSpbResource, 0, (__int64)&v17);
  if ( (int)result >= 0 )
  {
    v13 = v17;
    if ( !Ptr )
      Ptr = v17[7].Ptr;
    File = ZwReadFile(v17[5].Ptr, Ptr, 0LL, 0LL, IoStatusBlock, a4, a3, ByteOffset, 0LL);
    if ( File == 259 )
    {
      if ( v10 )
        goto LABEL_17;
      v15 = KeWaitForSingleObject(v13[8].Ptr, Executive, 0, 0, 0LL);
      File = v15;
      if ( v15 )
      {
        v16 = v15;
LABEL_16:
        WdLogSingleEntry1(2LL, v16);
        goto LABEL_17;
      }
      File = IoStatusBlock->Status;
    }
    if ( File < 0 )
    {
      v16 = File;
      goto LABEL_16;
    }
LABEL_17:
    ExReleaseRundownProtection(v13 + 3);
    return (unsigned int)File;
  }
  return result;
}
