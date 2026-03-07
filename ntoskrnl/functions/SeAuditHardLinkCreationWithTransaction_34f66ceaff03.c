void __stdcall SeAuditHardLinkCreationWithTransaction(
        PUNICODE_STRING FileName,
        PUNICODE_STRING LinkName,
        BOOLEAN bSuccess,
        GUID *TransactionId)
{
  GUID *v8; // rsi
  _QWORD *PrimaryToken; // r8
  _QWORD *ClientToken; // rax
  _QWORD *v11; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v14; // [rsp+468h] [rbp+360h] BYREF

  SubjectContext.ClientToken = 0LL;
  SubjectContext.ImpersonationLevel = 0x80000000;
  memset(&SubjectContext.ImpersonationLevel + 1, 0, 20);
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x123800000003LL;
  LOWORD(Src[2]) = 116;
  v8 = (GUID *)&v14;
  if ( TransactionId )
    v8 = TransactionId;
  WORD1(Src[2]) = 8;
  v14 = 0LL;
  if ( !bSuccess )
    WORD1(Src[2]) = 16;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  LODWORD(Src[3]) = 4;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  LODWORD(Src[7]) = 1;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  HIDWORD(Src[7]) = 32;
  Src[11] = 0x800000005LL;
  LODWORD(Src[15]) = 2;
  v11 = (_QWORD *)ClientToken[19];
  LODWORD(Src[19]) = 2;
  Src[18] = FileName;
  Src[6] = *v11;
  Src[22] = LinkName;
  Src[23] = 0x100000000DLL;
  LODWORD(v11) = *(unsigned __int8 *)(Src[6] + 1LL);
  Src[26] = v8;
  LODWORD(Src[1]) = 6;
  HIDWORD(Src[3]) = 4 * (_DWORD)v11 + 8;
  Src[10] = &SeSubsystemName;
  Src[12] = PrimaryToken[3];
  HIDWORD(Src[15]) = FileName->Length + 16;
  HIDWORD(Src[19]) = LinkName->Length + 16;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
}
