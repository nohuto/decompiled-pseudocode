void __fastcall SepAdtDeleteObjectAuditAlarm(
        const UNICODE_STRING *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int128 *a5,
        char a6)
{
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // eax
  __int128 *v11; // r14
  const int *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  bool IsKernelHandle; // al
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned int v22; // r8d
  _KPROCESS *v23; // rax
  unsigned __int16 v24; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+470h] [rbp+370h] BYREF

  P = 0LL;
  v24 = 0;
  v27 = 0LL;
  if ( (unsigned __int8)SepAdtAuditObjectAccessWithContext(a4, a1, 1, 0, 0LL, a6, &v24) )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
    if ( AllocatedFullProcessImageName < 0 )
    {
      SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    }
    else
    {
      v11 = &v27;
      if ( a5 )
        v11 = a5;
      memset(Src, 0, 0x418uLL);
      v12 = &SeSubsystemName;
      v13 = *a3;
      LOWORD(Src[2]) = v24;
      LODWORD(Src[0]) = 3;
      v14 = v13;
      if ( a1 )
        v12 = (const int *)a1;
      HIDWORD(Src[0]) = 4660;
      WORD1(Src[2]) = 8;
      LODWORD(Src[3]) = 4;
      if ( !v13 )
        v14 = a3[2];
      HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(**(_QWORD **)(v14 + 152) + 1LL) + 8;
      v15 = v13;
      if ( !v13 )
        v15 = a3[2];
      v16 = *(_QWORD **)(v15 + 152);
      LODWORD(Src[7]) = 1;
      Src[10] = v12;
      Src[11] = 0x800000005LL;
      Src[6] = *v16;
      v17 = *(unsigned __int16 *)v12 + 16;
      HIDWORD(Src[7]) = v17;
      if ( !v13 )
        v13 = a3[2];
      v18 = *(_QWORD *)(v13 + 24);
      Src[18] = v12;
      HIDWORD(Src[15]) = v17;
      Src[19] = 0x80000000BLL;
      Src[12] = v18;
      LODWORD(Src[15]) = 1;
      IsKernelHandle = ObpIsKernelHandle(a2, 0);
      v21 = v20 ^ 0xFFFFFFFF80000000uLL;
      Src[23] = v22 | 0x800000000LL;
      if ( !IsKernelHandle )
        v21 = a2;
      Src[20] = v21 & 0xFFFFFFFFFFFFFFFCuLL;
      v23 = PsGetCurrentThreadProcess();
      LODWORD(Src[27]) = 2;
      Src[31] = 0x100000000DLL;
      Src[24] = v23[1].Header.WaitListHead.Flink;
      Src[30] = P;
      Src[34] = v11;
      LODWORD(Src[1]) = 8;
      HIDWORD(Src[27]) = *(unsigned __int16 *)P + 16;
      SepAdtLogAuditRecord(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
