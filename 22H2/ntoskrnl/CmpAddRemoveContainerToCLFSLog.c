/*
 * XREFs of CmpAddRemoveContainerToCLFSLog @ 0x14077C8DC
 * Callers:
 *     CmpStartCLFSLog @ 0x14077D884 (CmpStartCLFSLog.c)
 *     CmpAddRemoveRMLogContainer @ 0x140875224 (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     RtlInitAnsiString @ 0x14024FB10 (RtlInitAnsiString.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1403480C0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     sprintf_s @ 0x1403D74F0 (sprintf_s.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     PsDisableImpersonation @ 0x140653AA0 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x140653BD0 (PsRestoreImpersonation.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406F6920 (RtlAnsiStringToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  _DWORD *v13; // r9
  int v14; // edx
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  NTSTATUS v18; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  STRING SourceString; // [rsp+60h] [rbp-A0h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v22[3]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+B0h] [rbp-50h] BYREF
  char *v24; // [rsp+D0h] [rbp-30h]
  int v25; // [rsp+D8h] [rbp-28h]
  int v26; // [rsp+DCh] [rbp-24h]
  NTSTATUS *v27; // [rsp+E0h] [rbp-20h]
  int v28; // [rsp+E8h] [rbp-18h]
  int v29; // [rsp+ECh] [rbp-14h]
  _DWORD *v30; // [rsp+F0h] [rbp-10h]
  int v31; // [rsp+F8h] [rbp-8h]
  int v32; // [rsp+FCh] [rbp-4h]
  wchar_t *Buffer; // [rsp+100h] [rbp+0h]
  _DWORD v34[2]; // [rsp+108h] [rbp+8h] BYREF
  char DstBuf[16]; // [rsp+110h] [rbp+10h] BYREF

  SourceString = 0LL;
  Destination = 0LL;
  DestinationString = 0LL;
  ImpersonationState = 0LL;
  memset(v22, 0, sizeof(v22));
  RtlInitUnicodeString(&DestinationString, 0LL);
  Destination.MaximumLength = Source->Length + a3->Length + a4->Length + Sourcea->Length + 34;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x20204D43u);
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
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v22, v13);
    v11 = ClfsAddLogContainer(plfoLog, pcbContainer, &Destination);
    KiUnstackDetachProcess((__int64)v22, 0);
    if ( v12 )
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  }
  if ( (unsigned int)dword_140C02130 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    {
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v34[1] = 0;
      v24 = &v16;
      v27 = &v18;
      v30 = v34;
      Buffer = Destination.Buffer;
      v34[0] = Destination.Length;
      v16 = v14;
      v25 = v14;
      v18 = v11;
      v28 = 4;
      v31 = 2;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)&unk_140023EF0,
        0LL,
        0LL,
        6u,
        &v23);
    }
  }
  RtlFreeAnsiString(&DestinationString);
  ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v11;
}
