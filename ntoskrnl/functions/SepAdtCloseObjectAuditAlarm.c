void __fastcall SepAdtCloseObjectAuditAlarm(
        const UNICODE_STRING *a1,
        __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        __int64 a4,
        char a5)
{
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // rbx
  int AllocatedFullProcessImageName; // eax
  const int *v12; // r8
  _QWORD **ClientToken; // rdx
  _QWORD **PrimaryToken; // rax
  _QWORD **v15; // rax
  int v16; // ecx
  _QWORD *v17; // rax
  bool IsKernelHandle; // al
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  int v23; // eax
  unsigned __int16 v24; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+50h] [rbp-B0h] BYREF

  memset(Src, 0, 0x418uLL);
  P = 0LL;
  v24 = 0;
  if ( (unsigned __int8)SepAdtAuditObjectAccessWithContext(a4, a1, 1, 0, (__int64)a3, a5, &v24)
    && SepAdtAuditThisEventWithContext(123LL, 1u, 0, a3) )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
    AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
    if ( AllocatedFullProcessImageName < 0 )
    {
      SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    }
    else
    {
      v12 = &SeSubsystemName;
      ClientToken = (_QWORD **)a3->ClientToken;
      LOWORD(Src[2]) = v24;
      LODWORD(Src[0]) = 3;
      PrimaryToken = ClientToken;
      if ( a1 )
        v12 = (const int *)a1;
      HIDWORD(Src[0]) = 4658;
      WORD1(Src[2]) = 8;
      LODWORD(Src[3]) = 4;
      if ( !ClientToken )
        PrimaryToken = (_QWORD **)a3->PrimaryToken;
      HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(*PrimaryToken[19] + 1LL) + 8;
      v15 = ClientToken;
      if ( !ClientToken )
        v15 = (_QWORD **)a3->PrimaryToken;
      Src[6] = *v15[19];
      v16 = *(unsigned __int16 *)v12 + 16;
      LODWORD(Src[7]) = 1;
      HIDWORD(Src[7]) = v16;
      Src[10] = v12;
      Src[11] = 0x800000005LL;
      if ( !ClientToken )
        ClientToken = (_QWORD **)a3->PrimaryToken;
      v17 = ClientToken[3];
      Src[18] = v12;
      HIDWORD(Src[15]) = v16;
      Src[19] = 0x80000000BLL;
      Src[12] = v17;
      LODWORD(Src[15]) = 1;
      IsKernelHandle = ObpIsKernelHandle(a2, 0);
      v20 = v19 ^ 0xFFFFFFFF80000000uLL;
      Src[23] = __PAIR64__(v22, v21);
      Src[24] = Flink;
      if ( !IsKernelHandle )
        v20 = a2;
      LODWORD(Src[27]) = 2;
      Src[20] = v20 & 0xFFFFFFFFFFFFFFFCuLL;
      v23 = *(unsigned __int16 *)P + 16;
      Src[30] = P;
      HIDWORD(Src[27]) = v23;
      LODWORD(Src[1]) = 7;
      SepAdtLogAuditRecord(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
