char __fastcall SepAdtPrivilegeObjectAuditAlarm(
        const int *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        int *a9,
        char a10)
{
  unsigned __int16 *v10; // r12
  unsigned __int16 *v11; // r15
  PSID *v13; // rax
  unsigned __int8 *v14; // r13
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // eax
  const int *v17; // r14
  __int64 v18; // rbx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  bool IsKernelHandle; // al
  unsigned __int64 v24; // r8
  int v25; // r9d
  __int64 v26; // r10
  int v27; // r11d
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  int v30; // eax
  int v31; // ecx
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  const int *v34; // [rsp+48h] [rbp-C0h]
  __int64 v35; // [rsp+50h] [rbp-B8h]
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  v34 = a1;
  v10 = a3;
  v35 = a4;
  LOBYTE(a3) = a10 == 0;
  v11 = a2;
  LOWORD(v32) = 0;
  P = 0LL;
  LOBYTE(a2) = a10;
  if ( !(unsigned __int8)SepAdtAuditPrivilegeUseWithContext((_DWORD)a9, (_DWORD)a2, (_DWORD)a3, 0, (__int64)&v32) )
    return 0;
  v13 = a5 ? *(PSID **)(a5 + 152) : *(PSID **)(a6 + 152);
  v14 = (unsigned __int8 *)*v13;
  if ( RtlEqualSid(SeLocalSystemSid, *v13) )
    return 0;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
  if ( AllocatedFullProcessImageName < 0 )
  {
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    return 0;
  }
  v17 = &SeSubsystemName;
  v18 = *(_QWORD *)(a6 + 24);
  if ( v34 )
    v17 = v34;
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x124200000004LL;
  LOWORD(Src[2]) = v32;
  WORD1(Src[2]) = 8;
  if ( !a10 )
    WORD1(Src[2]) = 16;
  v19 = *(unsigned __int16 *)v17 + 16;
  LODWORD(Src[3]) = 4;
  v20 = v14[1];
  Src[6] = v14;
  LODWORD(Src[7]) = 1;
  HIDWORD(Src[7]) = v19;
  Src[10] = v17;
  HIDWORD(Src[3]) = 4 * v20 + 8;
  Src[11] = 0x800000005LL;
  if ( a5 )
    Src[12] = *(_QWORD *)(a5 + 24);
  else
    Src[12] = v18;
  LODWORD(Src[15]) = 1;
  HIDWORD(Src[15]) = v19;
  Src[18] = v17;
  if ( v11 )
  {
    v21 = *v11;
    LODWORD(Src[19]) = 1;
    HIDWORD(Src[19]) = v21 + 16;
    Src[22] = v11;
  }
  if ( v10 )
  {
    v22 = *v10;
    LODWORD(Src[23]) = 2;
    HIDWORD(Src[23]) = v22 + 16;
    Src[26] = v10;
  }
  Src[27] = 0x80000000BLL;
  IsKernelHandle = ObpIsKernelHandle(v35, 0);
  v29 = v28 ^ 0xFFFFFFFF80000000uLL;
  HIDWORD(Src[31]) = v26;
  Src[32] = a8;
  if ( !IsKernelHandle )
    v29 = v24;
  Src[28] = v29 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v11 )
  {
    LODWORD(Src[31]) = 7;
    Src[33] = v26;
  }
  else
  {
    LODWORD(Src[31]) = 3;
  }
  if ( a9 )
  {
    v30 = *a9;
    if ( *a9 )
    {
      LODWORD(Src[35]) = v25;
      Src[38] = a9;
      HIDWORD(Src[35]) = 12 * v30 + 8;
    }
  }
  Src[40] = a7;
  LODWORD(Src[39]) = 11;
  HIDWORD(Src[39]) = v25;
  LODWORD(Src[43]) = 2;
  v31 = *(unsigned __int16 *)P;
  Src[46] = P;
  HIDWORD(Src[43]) = v27 + v31;
  LODWORD(Src[1]) = 11;
  SepAdtLogAuditRecord(Src);
  ExFreePoolWithTag(P, 0);
  return 1;
}
