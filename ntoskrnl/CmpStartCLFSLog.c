/*
 * XREFs of CmpStartCLFSLog @ 0x14086411C
 * Callers:
 *     CmpStartRMLog @ 0x140863C7C (CmpStartRMLog.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PsDisableImpersonation @ 0x1406D2C20 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x1406D2D60 (PsRestoreImpersonation.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140864428 (CmpAddRemoveContainerToCLFSLog.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpStartCLFSLog(
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a2,
        __int64 a3,
        void *a4,
        int a5,
        ULONGLONG *a6,
        int *a7,
        FILE_OBJECT **a8,
        PVOID *a9)
{
  unsigned __int16 v12; // cx
  NTSTATUS LogFileInformation; // ebx
  int TotalContainers; // edi
  FILE_OBJECT *v15; // rax
  CLFS_INFORMATION *Pool2; // rax
  CLFS_INFORMATION *v18; // rsi
  BOOLEAN v19; // [rsp+60h] [rbp-79h]
  FILE_OBJECT *pplfoLog; // [rsp+68h] [rbp-71h] BYREF
  ULONG pcbInfoBuffer; // [rsp+70h] [rbp-69h] BYREF
  UNICODE_STRING Destination; // [rsp+78h] [rbp-61h] BYREF
  PVOID ppvMarshalContext; // [rsp+88h] [rbp-51h] BYREF
  PULONGLONG pcbContainer; // [rsp+90h] [rbp-49h]
  struct _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+98h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-31h] BYREF

  pcbContainer = a6;
  *a8 = 0LL;
  *a9 = 0LL;
  v12 = Source->Length + 26 + a2->Length;
  pcbInfoBuffer = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.MaximumLength = v12;
  ImpersonationState = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, v12, 538987843LL);
  if ( !Destination.Buffer )
    return 3221225626LL;
  *a8 = 0LL;
  *a9 = 0LL;
  RtlAppendUnicodeStringToString(&Destination, &CmpLogPrefix);
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a2);
  RtlAppendUnicodeStringToString(&Destination, &CmpLogExt);
  pplfoLog = 0LL;
  ppvMarshalContext = 0LL;
  v19 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  LogFileInformation = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0010000, 0, a4, 1u, 8u, 0, 0x200u, 0LL, 0);
  if ( LogFileInformation >= 0 )
  {
    pcbInfoBuffer = 120;
    Pool2 = (CLFS_INFORMATION *)ExAllocatePool2(256LL, 120LL, 538987843LL);
    v18 = Pool2;
    if ( Pool2 )
    {
      LogFileInformation = ClfsGetLogFileInformation(pplfoLog, Pool2, &pcbInfoBuffer);
      if ( LogFileInformation < 0 )
      {
        ExFreePoolWithTag(v18, 0);
      }
      else
      {
        TotalContainers = v18->TotalContainers;
        ExFreePoolWithTag(v18, 0);
LABEL_8:
        LogFileInformation = ClfsCreateMarshallingArea(
                               pplfoLog,
                               PagedPool,
                               0LL,
                               0LL,
                               0x1000u,
                               2u,
                               0x14u,
                               &ppvMarshalContext);
        if ( LogFileInformation >= 0 )
        {
          v15 = pplfoLog;
          *a7 = TotalContainers;
          *a8 = v15;
          *a9 = ppvMarshalContext;
        }
      }
    }
    else
    {
      LogFileInformation = -1073741670;
    }
  }
  else if ( LogFileInformation == -1073741772 )
  {
    LogFileInformation = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0010000, 0, a4, 2u, 8u, 0, 0x200u, 0LL, 0);
    if ( LogFileInformation >= 0 )
    {
      TotalContainers = 0;
      while ( 1 )
      {
        LogFileInformation = CmpAddRemoveContainerToCLFSLog(
                               pplfoLog,
                               Source,
                               a2,
                               &CmpLogExt,
                               &CmpContainerSuffix,
                               TotalContainers,
                               pcbContainer);
        if ( LogFileInformation < 0 )
          break;
        if ( (unsigned int)++TotalContainers >= 3 )
          goto LABEL_8;
      }
    }
  }
  KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  if ( v19 )
    PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( LogFileInformation < 0 )
  {
    if ( pplfoLog )
      ClfsCloseLogFileObject(pplfoLog);
  }
  return (unsigned int)LogFileInformation;
}
