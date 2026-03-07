void __stdcall SeAuditTransactionStateChange(GUID *TransactionId, GUID *ResourceManagerId, ULONG NewTransactionState)
{
  __int64 v4; // r15
  GUID *v6; // rsi
  _QWORD *PrimaryToken; // rbx
  _QWORD **ClientToken; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  _KPROCESS *CurrentThreadProcess; // rax
  PVOID *v12; // rdi
  int v13; // eax
  _KPROCESS *v14; // rax
  struct _LIST_ENTRY *Flink; // rcx
  PVOID DestinationString[3]; // [rsp+28h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD Src[132]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v19; // [rsp+488h] [rbp+380h] BYREF

  SubjectContext.ClientToken = 0LL;
  v4 = NewTransactionState;
  SubjectContext.ImpersonationLevel = 0x80000000;
  memset(&SubjectContext.ImpersonationLevel + 1, 0, 20);
  memset(Src, 0, 0x418uLL);
  DestinationString[0] = 0LL;
  v6 = (GUID *)&v19;
  Src[0] = 0x137900000003LL;
  LOWORD(Src[2]) = 116;
  if ( ResourceManagerId )
    v6 = ResourceManagerId;
  v19 = 0LL;
  WORD1(Src[2]) = 8;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (_DWORD)v4 == 6 )
    WORD1(Src[2]) = 16;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
  {
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    PrimaryToken = SubjectContext.ClientToken;
  }
  v9 = PrimaryToken[3];
  v10 = *ClientToken[19];
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  if ( (int)PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)DestinationString) < 0
    || (v12 = (PVOID *)DestinationString[0]) == 0LL )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"?");
    v12 = &DestinationString[1];
    DestinationString[0] = &DestinationString[1];
  }
  v13 = *(unsigned __int8 *)(v10 + 1);
  Src[12] = v9;
  LODWORD(Src[3]) = 4;
  Src[6] = v10;
  Src[7] = 0x2000000001LL;
  HIDWORD(Src[3]) = 4 * v13 + 8;
  Src[11] = 0x800000005LL;
  Src[10] = &SeSubsystemName;
  Src[15] = 0x100000000DLL;
  Src[18] = TransactionId;
  Src[19] = 0x400000003LL;
  Src[20] = v4;
  Src[23] = 0x100000000DLL;
  Src[26] = v6;
  Src[27] = 0x80000000BLL;
  v14 = PsGetCurrentThreadProcess();
  LODWORD(Src[31]) = 2;
  Src[34] = v12;
  LODWORD(Src[1]) = 8;
  Flink = v14[1].Header.WaitListHead.Flink;
  LODWORD(v14) = *(unsigned __int16 *)v12 + 16;
  Src[28] = Flink;
  HIDWORD(Src[31]) = (_DWORD)v14;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
  if ( DestinationString[0] )
  {
    if ( DestinationString[0] != &DestinationString[1] )
      ExFreePoolWithTag(DestinationString[0], 0);
  }
}
