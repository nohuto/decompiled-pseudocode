void __fastcall SeAdtRegistryValueChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        char *a5,
        unsigned __int64 a6,
        unsigned int *a7,
        int a8)
{
  unsigned __int16 *v9; // rdi
  PACCESS_TOKEN ClientToken; // r15
  PACCESS_TOKEN PrimaryToken; // r13
  PACCESS_TOKEN v12; // rdx
  void *v13; // r8
  __int16 v14; // cx
  __int64 v15; // rax
  ACL *v16; // rdx
  __int64 v17; // rax
  ACL *v18; // rcx
  __int16 v19; // ax
  void *v20; // r8
  ACL *v21; // rdx
  __int64 v22; // rax
  int AllocatedFullProcessImageName; // eax
  unsigned int v24; // ebx
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // rbx
  _QWORD *v31; // rax
  __int64 v32; // rax
  _QWORD **v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  bool IsKernelHandle; // al
  unsigned int v37; // r8d
  int v38; // r9d
  unsigned int v39; // r10d
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  int v42; // eax
  BOOLEAN GenerateAudit; // [rsp+40h] [rbp-C0h] BYREF
  BOOLEAN GenerateAlarm; // [rsp+41h] [rbp-BFh] BYREF
  char v45; // [rsp+42h] [rbp-BEh] BYREF
  char v46[5]; // [rsp+43h] [rbp-BDh] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v48; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v49; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v50; // [rsp+68h] [rbp-98h] BYREF
  __int128 v51; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v52; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v53; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 *v54; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD Src[132]; // [rsp+E0h] [rbp-20h] BYREF
  char v58; // [rsp+500h] [rbp+400h] BYREF
  char v59; // [rsp+520h] [rbp+420h] BYREF
  char v60; // [rsp+540h] [rbp+440h] BYREF

  v54 = a4;
  memset(Src, 0, 0x418uLL);
  v48 = 0LL;
  v45 = 0;
  v9 = 0LL;
  v46[0] = 0;
  v52 = 0LL;
  P = 0LL;
  v53 = 0LL;
  GenerateAlarm = 0;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  DestinationString = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  v12 = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    v12 = SubjectContext.ClientToken;
  GenerateAudit = SeAuditingWithTokenForSubcategory(117, (__int64)v12);
  if ( GenerateAudit )
  {
    v13 = PrimaryToken;
    if ( ClientToken )
      v13 = ClientToken;
    v14 = *(_WORD *)(a2 + 2) & 0x8000;
    if ( (*(_WORD *)(a2 + 2) & 0x10) != 0 )
    {
      if ( v14 )
      {
        v15 = *(unsigned int *)(a2 + 12);
        if ( (_DWORD)v15 )
          v16 = (ACL *)(a2 + v15);
        else
          v16 = 0LL;
      }
      else
      {
        v16 = *(ACL **)(a2 + 24);
      }
      if ( !v14 )
      {
        v18 = *(ACL **)(a2 + 24);
        goto LABEL_18;
      }
      v17 = *(unsigned int *)(a2 + 12);
      if ( (_DWORD)v17 )
      {
        v18 = (ACL *)(a2 + v17);
        goto LABEL_18;
      }
    }
    else
    {
      v16 = 0LL;
    }
    v18 = 0LL;
LABEL_18:
    SeExamineSacl(v18, v16, v13, 2u, 1u, &GenerateAudit, &GenerateAlarm);
    RtlInitUnicodeString(&DestinationString, L"Key");
    v19 = *(_WORD *)(a2 + 2);
    v20 = PrimaryToken;
    if ( ClientToken )
      v20 = ClientToken;
    if ( (v19 & 0x10) == 0 )
      goto LABEL_21;
    if ( v19 >= 0 )
    {
      v21 = *(ACL **)(a2 + 24);
    }
    else
    {
      v22 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v22 )
      {
LABEL_21:
        v21 = 0LL;
        goto LABEL_26;
      }
      v21 = (ACL *)(a2 + v22);
    }
LABEL_26:
    SeExamineGlobalSacl(&DestinationString, v21, v20, 2u, 1u, &GenerateAudit, &GenerateAlarm);
    if ( !GenerateAudit )
      goto LABEL_63;
    if ( a5 )
    {
      AllocatedFullProcessImageName = SepQueryNameString(a5, &v48);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_54;
      if ( v48 )
        v9 = (unsigned __int16 *)v48;
    }
    v24 = 4096;
    if ( a8 )
    {
      v25 = a7[1];
      v26 = 4096LL;
      if ( v25 < 0x1000 )
        v26 = v25;
      AllocatedFullProcessImageName = AdtpBuildRegistryValueString(*a7, v26, *((_QWORD *)a7 + 1), &v52, &v45);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_54;
      v27 = *a7 + 1872;
      *(_DWORD *)&v49.Length = 1703936;
      v49.Buffer = (wchar_t *)&v58;
      AllocatedFullProcessImageName = AdtpBuildReplacementString(v27, &v49);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_54;
      if ( a8 == 2 )
      {
        RtlInitUnicodeString(&v53, L"-");
        RtlInitUnicodeString(&v50, L"-");
LABEL_43:
        LODWORD(v51) = 1703936;
        *((_QWORD *)&v51 + 1) = &v60;
        AllocatedFullProcessImageName = AdtpBuildReplacementString((unsigned int)(a8 + 1904), &v51);
        if ( AllocatedFullProcessImageName >= 0 )
        {
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
          AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(
                                            (__int64)CurrentThreadProcess,
                                            (__int64)&P);
          if ( AllocatedFullProcessImageName >= 0 )
          {
            LODWORD(Src[0]) = 3;
            v31 = PrimaryToken;
            LODWORD(Src[2]) = 524405;
            if ( ClientToken )
              v31 = ClientToken;
            HIDWORD(Src[0]) = 4657;
            LODWORD(Src[3]) = 4;
            Src[7] = 0x2000000001LL;
            v32 = v31[19];
            Src[11] = 0x800000005LL;
            HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(*(_QWORD *)v32 + 1LL) + 8;
            v33 = (_QWORD **)PrimaryToken;
            if ( ClientToken )
            {
              v33 = (_QWORD **)ClientToken;
              PrimaryToken = ClientToken;
            }
            v34 = *v33[19];
            Src[10] = &SeSubsystemName;
            Src[12] = *((_QWORD *)PrimaryToken + 3);
            Src[6] = v34;
            if ( v9 )
            {
              v35 = *v9;
              LODWORD(Src[15]) = 1;
              HIDWORD(Src[15]) = v35 + 16;
              Src[18] = v9;
            }
            Src[22] = v54;
            LODWORD(Src[19]) = 1;
            Src[23] = 0x80000000BLL;
            HIDWORD(Src[19]) = *v54 + 16;
            IsKernelHandle = ObpIsKernelHandle(a6, 0);
            v41 = v40 ^ 0xFFFFFFFF80000000uLL;
            LODWORD(Src[27]) = v38;
            LODWORD(Src[31]) = v38;
            if ( !IsKernelHandle )
              v41 = a6;
            HIDWORD(Src[27]) = (unsigned __int16)v51 + 16;
            Src[24] = v41 & 0xFFFFFFFFFFFFFFFCuLL;
            Src[30] = &v51;
            Src[54] = P;
            HIDWORD(Src[31]) = v49.Length + 16;
            Src[34] = &v49;
            LODWORD(Src[35]) = v38;
            HIDWORD(Src[35]) = v52.Length + 16;
            Src[38] = &v52;
            LODWORD(Src[39]) = v38;
            HIDWORD(Src[39]) = v50.Length + 16;
            Src[42] = &v50;
            LODWORD(Src[43]) = v38;
            HIDWORD(Src[43]) = v53.Length + 16;
            Src[46] = &v53;
            v42 = *(unsigned __int16 *)P + 16;
            Src[47] = __PAIR64__(v39, v37);
            HIDWORD(Src[51]) = v42;
            Src[48] = Flink;
            LODWORD(Src[51]) = 2;
            LODWORD(Src[1]) = 13;
            SepAdtLogAuditRecord(Src);
            goto LABEL_55;
          }
        }
LABEL_54:
        SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
LABEL_55:
        if ( v45 )
          ExFreePoolWithTag(v52.Buffer, 0);
        if ( v46[0] )
          ExFreePoolWithTag(v53.Buffer, 0);
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v48 )
          ExFreePoolWithTag(v48, 0);
        goto LABEL_63;
      }
    }
    else
    {
      RtlInitUnicodeString(&v52, L"-");
      RtlInitUnicodeString(&v49, L"-");
    }
    if ( a7[5] < 0x1000 )
      v24 = a7[5];
    AllocatedFullProcessImageName = AdtpBuildRegistryValueString(a7[4], v24, *((_QWORD *)a7 + 3), &v53, v46);
    if ( AllocatedFullProcessImageName < 0 )
      goto LABEL_54;
    v28 = a7[4] + 1872;
    *(_DWORD *)&v50.Length = 1703936;
    v50.Buffer = (wchar_t *)&v59;
    AllocatedFullProcessImageName = AdtpBuildReplacementString(v28, &v50);
    if ( AllocatedFullProcessImageName < 0 )
      goto LABEL_54;
    goto LABEL_43;
  }
LABEL_63:
  SeReleaseSubjectContext(&SubjectContext);
}
