/*
 * XREFs of DpSpbResourceIoControl @ 0x1C02D78D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiValidateSpbResource @ 0x1C02D7E08 (DpiValidateSpbResource.c)
 */

__int64 __fastcall DpSpbResourceIoControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        PVOID InputBuffer,
        ULONG OutputBufferLength,
        PVOID OutputBuffer,
        HANDLE Event,
        struct _IO_STATUS_BLOCK *IoStatusBlock)
{
  PVOID Ptr; // rbx
  __int64 InputBufferLength; // rbp
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  NTSTATUS v17; // eax
  __int64 v18; // rax
  struct _EX_RUNDOWN_REF *v19; // [rsp+50h] [rbp-38h] BYREF
  ULONG IoControlCode; // [rsp+A0h] [rbp+18h]

  IoControlCode = a3;
  v19 = 0LL;
  Ptr = Event;
  InputBufferLength = a4;
  if ( !InputBuffer && a4 )
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v11 + 24) = InputBufferLength;
LABEL_4:
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  if ( !OutputBuffer && OutputBufferLength )
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v11 + 24) = OutputBufferLength;
    goto LABEL_4;
  }
  if ( !IoStatusBlock )
  {
    v13 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v13 + 24) = 0LL;
    WdLogEvent5_WdWarning(v13);
    return 3221225716LL;
  }
  result = DpiValidateSpbResource(a1, a2, (unsigned int)&DpSpbResourceIoControl, 0, (__int64)&v19);
  if ( (int)result >= 0 )
  {
    v14 = v19;
    if ( !Event )
      Ptr = v19[7].Ptr;
    LODWORD(Ptr) = ZwDeviceIoControlFile(
                     v19[5].Ptr,
                     Ptr,
                     0LL,
                     0LL,
                     IoStatusBlock,
                     IoControlCode,
                     InputBuffer,
                     InputBufferLength,
                     OutputBuffer,
                     OutputBufferLength);
    if ( (_DWORD)Ptr == 259 )
    {
      if ( Event )
        goto LABEL_21;
      v17 = KeWaitForSingleObject(v14[8].Ptr, Executive, 0, 0, 0LL);
      Ptr = (PVOID)v17;
      if ( v17 )
      {
        v18 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v18 + 24) = Ptr;
LABEL_20:
        WdLogEvent5_WdError(v18);
        goto LABEL_21;
      }
      LODWORD(Ptr) = IoStatusBlock->Status;
    }
    if ( (int)Ptr < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v18 + 24) = (int)Ptr;
      goto LABEL_20;
    }
LABEL_21:
    ExReleaseRundownProtection(v14 + 3);
    return (unsigned int)Ptr;
  }
  return result;
}
