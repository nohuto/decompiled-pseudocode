/*
 * XREFs of CmpAddRemoveContainerToCLFSLog @ 0x140864428
 * Callers:
 *     CmpStartCLFSLog @ 0x14086411C (CmpStartCLFSLog.c)
 *     CmpAddRemoveRMLogContainer @ 0x140A1BBAC (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     sprintf_s @ 0x1403D9BA0 (sprintf_s.c)
 *     PsDisableImpersonation @ 0x1406D2C20 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x1406D2D60 (PsRestoreImpersonation.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpAddRemoveContainerToCLFSLog(
        PLOG_FILE_OBJECT plfoLog,
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a3,
        PCUNICODE_STRING a4,
        PCUNICODE_STRING Sourcea,
        int a6,
        PULONGLONG pcbContainer)
{
  NTSTATUS v11; // edi
  BOOLEAN v12; // bl
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  NTSTATUS v16; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  STRING SourceString; // [rsp+60h] [rbp-A0h] BYREF
  struct _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+70h] [rbp-90h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+B0h] [rbp-50h] BYREF
  char *v22; // [rsp+D0h] [rbp-30h]
  int v23; // [rsp+D8h] [rbp-28h]
  int v24; // [rsp+DCh] [rbp-24h]
  NTSTATUS *v25; // [rsp+E0h] [rbp-20h]
  int v26; // [rsp+E8h] [rbp-18h]
  int v27; // [rsp+ECh] [rbp-14h]
  _DWORD *v28; // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+FCh] [rbp-4h]
  wchar_t *Buffer; // [rsp+100h] [rbp+0h]
  _DWORD v32[2]; // [rsp+108h] [rbp+8h] BYREF
  char DstBuf[16]; // [rsp+110h] [rbp+10h] BYREF

  SourceString = 0LL;
  Destination = 0LL;
  DestinationString = 0LL;
  ImpersonationState = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  RtlInitUnicodeString(&DestinationString, 0LL);
  Destination.MaximumLength = Source->Length + a3->Length + a4->Length + Sourcea->Length + 34;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, Destination.MaximumLength, 538987843LL);
  if ( !Destination.Buffer )
    return 3221225626LL;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a3);
  RtlAppendUnicodeStringToString(&Destination, a4);
  sprintf_s(DstBuf, 0x10uLL, ".%u", a6);
  RtlInitAnsiString(&SourceString, DstBuf);
  v11 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
  if ( v11 >= 0 && DestinationString.Length <= 0x20u )
  {
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, Sourcea);
    v12 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    v11 = ClfsAddLogContainer(plfoLog, pcbContainer, &Destination);
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    if ( v12 )
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  }
  if ( (unsigned int)dword_140C04328 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C04328, 1LL) )
    {
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v32[1] = 0;
      v22 = &v14;
      v14 = 1;
      v25 = &v16;
      v28 = v32;
      Buffer = Destination.Buffer;
      v32[0] = Destination.Length;
      v23 = 1;
      v16 = v11;
      v26 = 4;
      v29 = 2;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C04328,
        (unsigned __int8 *)&dword_140037DFC,
        0LL,
        0LL,
        6u,
        &v21);
    }
  }
  RtlFreeUnicodeString(&DestinationString);
  ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v11;
}
