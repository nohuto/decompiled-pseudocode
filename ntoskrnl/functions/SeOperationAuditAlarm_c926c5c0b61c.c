void __fastcall SeOperationAuditAlarm(
        __int64 a1,
        char *a2,
        __int64 a3,
        const UNICODE_STRING *a4,
        unsigned int a5,
        int a6,
        void *a7)
{
  PVOID v7; // rbx
  int v11; // r14d
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // r13
  int AllocatedFullProcessImageName; // esi
  _QWORD **PrimaryToken; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  int v22; // r10d
  unsigned int v23; // r11d
  int v24; // eax
  int v25; // eax
  int v26; // eax
  _BYTE v27[4]; // [rsp+20h] [rbp-E0h] BYREF
  ULONG v28; // [rsp+24h] [rbp-DCh] BYREF
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  PVOID v30; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v31; // [rsp+38h] [rbp-C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD Src[132]; // [rsp+60h] [rbp-A0h] BYREF

  v7 = a7;
  P = a7;
  v30 = 0LL;
  v31 = 0LL;
  v28 = 0;
  v27[0] = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v11 = (unsigned __int16)SepAdtClassifyObjectIntoSubCategory((__int64)a2, a4, 1, 0);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&v30);
  if ( AllocatedFullProcessImageName < 0 )
  {
LABEL_24:
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    goto LABEL_25;
  }
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x123700000003LL;
  WORD1(Src[2]) = 8;
  LOWORD(Src[2]) = v11;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  LODWORD(Src[3]) = 4;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  Src[10] = &SeSubsystemName;
  Src[11] = 0x800000005LL;
  Src[6] = *PrimaryToken[19];
  v16 = *(unsigned __int8 *)(Src[6] + 1LL);
  Src[7] = 0x2000000001LL;
  HIDWORD(Src[3]) = 4 * v16 + 8;
  if ( SubjectContext.ClientToken )
    v17 = *((_QWORD *)SubjectContext.ClientToken + 3);
  else
    v17 = *((_QWORD *)SubjectContext.PrimaryToken + 3);
  Src[12] = v17;
  v18 = a4->Length + 16;
  Src[15] = 0x2000000001LL;
  LODWORD(Src[19]) = 1;
  HIDWORD(Src[19]) = v18;
  Src[18] = &SeSubsystemName;
  Src[22] = a4;
  SepQueryNameString(a2, &v31);
  if ( v31 )
  {
    if ( (_WORD)v11 == 116 || (LODWORD(Src[23]) = 1, (_WORD)v11 == 128) )
      LODWORD(Src[23]) = 2;
    v19 = *(unsigned __int16 *)v31;
    Src[26] = v31;
    HIDWORD(Src[23]) = v19 + 16;
  }
  Src[27] = 0x80000000BLL;
  if ( ObpIsKernelHandle(a3, 0) )
    a3 ^= 0xFFFFFFFF80000000uLL;
  Src[33] = 4LL;
  Src[32] = a5;
  Src[36] = a5;
  Src[46] = v30;
  v24 = *(unsigned __int16 *)v30 + 16;
  Src[28] = a3 & 0xFFFFFFFFFFFFFFFCuLL;
  Src[31] = 0x400000007LL;
  Src[35] = 0x40000000ALL;
  Src[39] = __PAIR64__(v20, v21);
  Src[40] = Flink;
  Src[43] = __PAIR64__(v24, v23);
  if ( v11 != v22 && v11 - v22 != 12 || !a7 )
    goto LABEL_19;
  v25 = SepCheckAndCopySelfRelativeSD((__int16 *)a7, &P, &v28, v27);
  v7 = P;
  AllocatedFullProcessImageName = v25;
  if ( v25 >= 0 )
  {
    LODWORD(Src[47]) = 31;
    v26 = SepSecurityDescriptorStrictLength((__int64)P);
    Src[49] = 0LL;
    HIDWORD(Src[47]) = v26;
    Src[50] = v7;
    Src[48] = 32LL;
LABEL_19:
    LODWORD(Src[1]) = 12;
    SepAdtLogAuditRecord(Src);
    SeReleaseSubjectContext(&SubjectContext);
  }
  if ( v27[0] && v7 )
    ExFreePoolWithTag(v7, 0);
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_24;
LABEL_25:
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
}
