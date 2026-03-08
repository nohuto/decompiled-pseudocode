/*
 * XREFs of SeAuditHandleDuplication @ 0x1409C77FC
 * Callers:
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x14071134C (ObCompleteObjectDuplication.c)
 *     ObAuditInheritedHandleProcedure @ 0x140977D60 (ObAuditInheritedHandleProcedure.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x1403521C8 (ObpIsKernelHandle.c)
 *     SepAdtLogAuditRecord @ 0x140397890 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

void __fastcall SeAuditHandleDuplication(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  bool IsKernelHandle; // al
  unsigned int v13; // r10d
  unsigned int v14; // r9d
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  bool v17; // al
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  _QWORD SubjectContext[5]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  memset(&SubjectContext[1], 0, 32);
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
  v8 = SubjectContext[3];
  v9 = SubjectContext[3];
  if ( SubjectContext[1] )
    v9 = SubjectContext[1];
  v10 = **(_QWORD **)(v9 + 152);
  memset(Src, 0, 0x418uLL);
  LODWORD(Src[0]) = 3;
  if ( SubjectContext[1] )
    v8 = SubjectContext[1];
  LODWORD(Src[2]) = 524411;
  HIDWORD(Src[0]) = 4690;
  LODWORD(Src[3]) = 4;
  v11 = *(unsigned __int8 *)(v10 + 1);
  Src[6] = v10;
  Src[7] = 0x2000000001LL;
  Src[11] = 0x800000005LL;
  HIDWORD(Src[3]) = 4 * v11 + 8;
  Src[10] = &SeSubsystemName;
  Src[12] = *(_QWORD *)(v8 + 24);
  Src[15] = 0x80000000BLL;
  IsKernelHandle = ObpIsKernelHandle(a1, 0);
  Src[19] = __PAIR64__(v13, v14);
  v16 = v15 ^ 0xFFFFFFFF80000000uLL;
  LODWORD(Src[23]) = v14;
  if ( !IsKernelHandle )
    v16 = a1;
  Src[20] = *(_QWORD *)(a3 + 1088);
  HIDWORD(Src[23]) = v13;
  Src[16] = v16 & 0xFFFFFFFFFFFFFFFCuLL;
  v17 = ObpIsKernelHandle(a2, 0);
  v20 = v19 ^ v18;
  Src[27] = __PAIR64__(v22, v21);
  if ( !v17 )
    v20 = a2;
  Src[28] = *(_QWORD *)(a4 + 1088);
  LODWORD(Src[1]) = 7;
  Src[24] = v20 & 0xFFFFFFFFFFFFFFFCuLL;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
}
