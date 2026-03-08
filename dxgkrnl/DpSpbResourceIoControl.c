/*
 * XREFs of DpSpbResourceIoControl @ 0x1C03A32A0
 * Callers:
 *     <none>
 * Callees:
 *     DpiValidateSpbResource @ 0x1C03A3748 (DpiValidateSpbResource.c)
 */

__int64 __fastcall DpSpbResourceIoControl(
        int a1,
        int a2,
        ULONG a3,
        ULONG a4,
        PVOID InputBuffer,
        ULONG OutputBufferLength,
        PVOID OutputBuffer,
        HANDLE Event,
        struct _IO_STATUS_BLOCK *IoStatusBlock)
{
  PVOID Ptr; // rbx
  __int64 v11; // rdx
  __int64 result; // rax
  struct _EX_RUNDOWN_REF *v13; // rdi
  NTSTATUS Status; // ebx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  struct _EX_RUNDOWN_REF *v17; // [rsp+50h] [rbp-38h] BYREF

  v17 = 0LL;
  Ptr = Event;
  if ( !InputBuffer && a4 )
  {
    v11 = a4;
LABEL_4:
    WdLogSingleEntry1(3LL, v11);
    return 3221225485LL;
  }
  if ( !OutputBuffer && OutputBufferLength )
  {
    v11 = OutputBufferLength;
    goto LABEL_4;
  }
  if ( !IoStatusBlock )
  {
    WdLogSingleEntry1(3LL, 0LL);
    return 3221225716LL;
  }
  result = DpiValidateSpbResource(a1, a2, (unsigned int)&DpSpbResourceIoControl, 0, (__int64)&v17);
  if ( (int)result >= 0 )
  {
    v13 = v17;
    if ( !Event )
      Ptr = v17[7].Ptr;
    Status = ZwDeviceIoControlFile(
               v17[5].Ptr,
               Ptr,
               0LL,
               0LL,
               IoStatusBlock,
               a3,
               InputBuffer,
               a4,
               OutputBuffer,
               OutputBufferLength);
    if ( Status == 259 )
    {
      if ( Event )
        goto LABEL_21;
      v15 = KeWaitForSingleObject(v13[8].Ptr, Executive, 0, 0, 0LL);
      Status = v15;
      if ( v15 )
      {
        v16 = v15;
LABEL_20:
        WdLogSingleEntry1(2LL, v16);
        goto LABEL_21;
      }
      Status = IoStatusBlock->Status;
    }
    if ( Status < 0 )
    {
      v16 = Status;
      goto LABEL_20;
    }
LABEL_21:
    ExReleaseRundownProtection(v13 + 3);
    return (unsigned int)Status;
  }
  return result;
}
