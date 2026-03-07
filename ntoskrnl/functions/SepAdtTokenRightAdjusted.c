void __fastcall SepAdtTokenRightAdjusted(__int64 a1, char *a2, unsigned int a3, char *a4, unsigned int a5, char a6)
{
  unsigned int *v9; // r14
  unsigned int *v10; // rsi
  _QWORD **ClientToken; // rdi
  PACCESS_TOKEN PrimaryToken; // rdx
  _KPROCESS *CurrentThreadProcess; // rax
  _QWORD *v14; // rcx
  _QWORD **v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdi
  unsigned int *Pool2; // rax
  signed __int64 v19; // rdx
  __int64 v20; // r9
  unsigned int *v21; // rax
  signed __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+38h] [rbp-C8h]
  struct _LIST_ENTRY *Flink; // [rsp+40h] [rbp-C0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+70h] [rbp-90h] BYREF

  P = 0LL;
  v32 = a1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = 0LL;
  v10 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = (_QWORD **)SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(138LL, PrimaryToken)
    && (SepAdtAuditablePrivilege(a2, a3) || SepAdtAuditablePrivilege(a4, a5)) )
  {
    memset(Src, 0, 0x418uLL);
    Src[0] = 0x125F00000005LL;
    LODWORD(Src[2]) = 524426;
    if ( !a6 )
      WORD1(Src[2]) = 16;
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    if ( CurrentThreadProcess[1].ActiveProcessors.StaticBitmap[2] )
    {
      Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
      if ( (int)PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P) >= 0 )
      {
        v14 = SubjectContext.PrimaryToken;
        v15 = (_QWORD **)SubjectContext.PrimaryToken;
        if ( ClientToken )
        {
          v15 = ClientToken;
          v14 = ClientToken;
        }
        v16 = v14[3];
        v17 = *(_QWORD *)(v32 + 24);
        v33 = *v15[19];
        if ( a5 )
        {
          Pool2 = (unsigned int *)ExAllocatePool2(256LL, 12 * a5 + 20LL, 1883333971LL);
          v9 = Pool2;
          if ( !Pool2 )
            goto LABEL_4;
          Pool2[1] = 1;
          v19 = (char *)Pool2 - a4;
          *Pool2 = a5;
          v20 = a5;
          do
          {
            *(_QWORD *)&a4[v19 + 8] = *(_QWORD *)a4;
            *(_DWORD *)&a4[v19 + 16] = *((_DWORD *)a4 + 2);
            a4 += 12;
            --v20;
          }
          while ( v20 );
        }
        if ( a3 )
        {
          v21 = (unsigned int *)ExAllocatePool2(256LL, 12 * a3 + 20LL, 1883333971LL);
          v10 = v21;
          if ( !v21 )
            goto LABEL_4;
          v21[1] = 1;
          v22 = (char *)v21 - a2;
          *v21 = a3;
          v23 = a3;
          do
          {
            *(_QWORD *)&a2[v22 + 8] = *(_QWORD *)a2;
            *(_DWORD *)&a2[v22 + 16] = *((_DWORD *)a2 + 2);
            a2 += 12;
            --v23;
          }
          while ( v23 );
        }
        Src[6] = v33;
        LODWORD(Src[3]) = 4;
        Src[7] = 0x2000000001LL;
        v24 = *(unsigned __int8 *)(v33 + 1);
        Src[11] = 0x800000005LL;
        HIDWORD(Src[3]) = 4 * v24 + 8;
        Src[10] = &SeSubsystemName;
        v25 = *(unsigned __int16 *)P + 16;
        Src[12] = v16;
        HIDWORD(Src[19]) = v25;
        Src[24] = Flink;
        Src[15] = 0x800000023LL;
        Src[16] = v17;
        LODWORD(Src[19]) = 2;
        Src[22] = P;
        Src[23] = 0x80000000BLL;
        if ( v9 )
        {
          v26 = *v9;
          LODWORD(Src[27]) = 8;
          if ( v26 )
            v27 = 12 * v26 + 8;
          else
            v27 = 8;
          HIDWORD(Src[27]) = v27;
          Src[30] = v9;
        }
        if ( v10 )
        {
          v28 = *v10;
          LODWORD(Src[31]) = 8;
          if ( v28 )
            v29 = 12 * v28 + 8;
          else
            v29 = 8;
          HIDWORD(Src[31]) = v29;
          Src[34] = v10;
        }
        LODWORD(Src[1]) = 8;
        SepAdtLogAuditRecord(Src);
      }
    }
  }
LABEL_4:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  SeReleaseSubjectContext(&SubjectContext);
}
