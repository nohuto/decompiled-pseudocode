void __fastcall SepAuditAssignPrimaryToken(__int64 a1, __int64 a2)
{
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 v5; // rbx
  struct _LIST_ENTRY *Flink; // r12
  _QWORD **v7; // rdi
  __int64 v8; // r14
  int AllocatedFullProcessImageName; // ebx
  __int64 v10; // r15
  int v11; // eax
  int v12; // eax
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  PVOID SubjectContext[5]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  memset(SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  memset(Src, 0, 0x418uLL);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  v5 = (__int64)CurrentThreadProcess;
  if ( CurrentThreadProcess[1].ActiveProcessors.StaticBitmap[2] )
  {
    Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
    v7 = (_QWORD **)SubjectContext[3];
    if ( SubjectContext[1] )
      v7 = (_QWORD **)SubjectContext[1];
    if ( v7 )
    {
      v8 = *v7[19];
      AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(v5, (__int64)SubjectContext);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        v10 = *(_QWORD *)(a1 + 1088);
        AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(a1, (__int64)&P);
        if ( AllocatedFullProcessImageName >= 0 )
        {
          v11 = *(unsigned __int8 *)(v8 + 1);
          Src[0] = 0x125800000005LL;
          Src[11] = 0x800000005LL;
          LODWORD(Src[2]) = 524421;
          HIDWORD(Src[3]) = 4 * v11 + 8;
          LODWORD(Src[3]) = 4;
          Src[6] = v8;
          Src[10] = &SeSubsystemName;
          Src[12] = v7[3];
          Src[16] = *(_QWORD *)(a2 + 24);
          v12 = *(unsigned __int16 *)P + 16;
          Src[26] = P;
          HIDWORD(Src[23]) = v12;
          Src[34] = SubjectContext[0];
          Src[7] = 0x2000000001LL;
          HIDWORD(Src[31]) = *(unsigned __int16 *)SubjectContext[0] + 16;
          Src[15] = 0x800000023LL;
          Src[19] = 0x80000000BLL;
          Src[20] = v10;
          LODWORD(Src[23]) = 2;
          Src[27] = 0x80000000BLL;
          Src[28] = Flink;
          LODWORD(Src[31]) = 2;
          LODWORD(Src[1]) = 8;
          SepAdtLogAuditRecord(Src);
        }
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741700;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( SubjectContext[0] )
      ExFreePoolWithTag(SubjectContext[0], 0);
    if ( AllocatedFullProcessImageName < 0 )
      SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
  }
}
