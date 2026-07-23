/*
 * XREFs of SepAdtTokenRightAdjusted @ 0x1406980F4
 * Callers:
 *     SepAdjustPrivileges @ 0x140697BA0 (SepAdjustPrivileges.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023C620 (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x1403C2884 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SepAdtAuditablePrivilege @ 0x140596EFC (SepAdtAuditablePrivilege.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14067B228 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406981E0 (SeAuditingWithTokenForSubcategory.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall SepAdtTokenRightAdjusted(__int64 a1, char *a2, unsigned int a3, char *a4, unsigned int a5, char a6)
{
  int *v9; // r14
  int *v10; // rsi
  _QWORD **ClientToken; // rdi
  _KPROCESS *CurrentThreadProcess; // rax
  _QWORD *PrimaryToken; // rcx
  _QWORD **v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  int *PoolWithTag; // rax
  signed __int64 v18; // rcx
  __int64 v19; // rdx
  int *v20; // rax
  signed __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+30h] [rbp-D0h]
  __int64 v32; // [rsp+38h] [rbp-C8h]
  struct _LIST_ENTRY *Flink; // [rsp+40h] [rbp-C0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+70h] [rbp-90h] BYREF

  P = 0LL;
  v31 = a1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = 0LL;
  v10 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = (_QWORD **)SubjectContext.ClientToken;
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(139LL)
    && (SepAdtAuditablePrivilege(a2, a3) || SepAdtAuditablePrivilege(a4, a5)) )
  {
    memset(Src, 0, 0x418uLL);
    Src[0] = 0x125F00000005LL;
    LODWORD(Src[2]) = 524427;
    if ( !a6 )
      WORD1(Src[2]) = 16;
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    if ( CurrentThreadProcess[1].ActiveProcessors.Bitmap[2] )
    {
      Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
      if ( (int)PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P) >= 0 )
      {
        PrimaryToken = SubjectContext.PrimaryToken;
        v14 = (_QWORD **)SubjectContext.PrimaryToken;
        if ( ClientToken )
        {
          v14 = ClientToken;
          PrimaryToken = ClientToken;
        }
        v15 = PrimaryToken[3];
        v16 = *(_QWORD *)(v31 + 24);
        v32 = *v14[19];
        if ( a5 )
        {
          PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 12 * a5 + 20LL, 0x70416553u);
          v9 = PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_2;
          PoolWithTag[1] = 1;
          v18 = (char *)PoolWithTag - a4;
          *PoolWithTag = a5;
          v19 = a5;
          do
          {
            *(_QWORD *)&a4[v18 + 8] = *(_QWORD *)a4;
            *(_DWORD *)&a4[v18 + 16] = *((_DWORD *)a4 + 2);
            a4 += 12;
            --v19;
          }
          while ( v19 );
        }
        if ( a3 )
        {
          v20 = (int *)ExAllocatePoolWithTag(PagedPool, 12 * a3 + 20LL, 0x70416553u);
          v10 = v20;
          if ( !v20 )
            goto LABEL_2;
          v20[1] = 1;
          v21 = (char *)v20 - a2;
          *v20 = a3;
          v22 = a3;
          do
          {
            *(_QWORD *)&a2[v21 + 8] = *(_QWORD *)a2;
            *(_DWORD *)&a2[v21 + 16] = *((_DWORD *)a2 + 2);
            a2 += 12;
            --v22;
          }
          while ( v22 );
        }
        Src[6] = v32;
        LODWORD(Src[3]) = 4;
        Src[7] = 0x2000000001LL;
        v23 = *(unsigned __int8 *)(v32 + 1);
        Src[11] = 0x800000005LL;
        HIDWORD(Src[3]) = 4 * v23 + 8;
        Src[10] = &SeSubsystemName;
        v24 = *(unsigned __int16 *)P + 16;
        Src[12] = v15;
        HIDWORD(Src[19]) = v24;
        Src[24] = Flink;
        Src[15] = 0x800000023LL;
        Src[16] = v16;
        LODWORD(Src[19]) = 2;
        Src[22] = P;
        Src[23] = 0x80000000BLL;
        if ( v9 )
        {
          v25 = *v9;
          LODWORD(Src[27]) = 8;
          if ( v25 )
            v26 = 12 * v25 + 8;
          else
            v26 = 8;
          HIDWORD(Src[27]) = v26;
          Src[30] = v9;
        }
        if ( v10 )
        {
          v27 = *v10;
          LODWORD(Src[31]) = 8;
          if ( v27 )
            v28 = 12 * v27 + 8;
          else
            v28 = 8;
          HIDWORD(Src[31]) = v28;
          Src[34] = v10;
        }
        LODWORD(Src[1]) = 8;
        SepAdtLogAuditRecord(Src);
      }
    }
  }
LABEL_2:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  SeReleaseSubjectContext(&SubjectContext);
}
