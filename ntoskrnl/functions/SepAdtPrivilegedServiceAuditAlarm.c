void __fastcall SepAdtPrivilegedServiceAuditAlarm(
        __int64 a1,
        const int *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        char a7)
{
  __int64 v11; // rdx
  __int64 v12; // r8
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // r15
  int AllocatedFullProcessImageName; // ebx
  __int64 *v16; // rax
  __int64 v17; // r8
  const int *v18; // rdx
  __int64 v19; // rax
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  __int16 v25; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD Src[132]; // [rsp+40h] [rbp-C0h] BYREF

  memset(Src, 0, 0x418uLL);
  LOBYTE(v11) = a7;
  P = 0LL;
  LOBYTE(v12) = a7 == 0;
  v25 = 0;
  if ( SepAdtAuditPrivilegeUseWithContext(a6, v11, v12, a1, &v25) )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
    AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      if ( a4 )
        v16 = *(__int64 **)(a4 + 152);
      else
        v16 = *(__int64 **)(a5 + 152);
      v17 = *v16;
      v18 = &SeSubsystemName;
      v19 = *(_QWORD *)(a5 + 24);
      if ( a2 )
        v18 = a2;
      LOWORD(Src[2]) = v25;
      Src[0] = 0x124100000004LL;
      WORD1(Src[2]) = 8;
      if ( !a7 )
        WORD1(Src[2]) = 16;
      LODWORD(Src[3]) = 4;
      v20 = *(unsigned __int8 *)(v17 + 1);
      Src[6] = v17;
      LODWORD(Src[7]) = 1;
      Src[10] = v18;
      Src[11] = 0x800000005LL;
      HIDWORD(Src[3]) = 4 * v20 + 8;
      v21 = *(unsigned __int16 *)v18 + 16;
      HIDWORD(Src[7]) = v21;
      if ( a4 )
        v19 = *(_QWORD *)(a4 + 24);
      Src[12] = v19;
      LODWORD(Src[15]) = 1;
      HIDWORD(Src[15]) = v21;
      Src[18] = v18;
      if ( a3 )
      {
        v22 = *a3;
        LODWORD(Src[19]) = 1;
        HIDWORD(Src[19]) = v22 + 16;
        Src[22] = a3;
      }
      if ( a6 )
      {
        v23 = *a6;
        if ( *a6 )
        {
          LODWORD(Src[23]) = 8;
          Src[26] = a6;
          HIDWORD(Src[23]) = 12 * v23 + 8;
        }
      }
      Src[27] = 0x80000000BLL;
      Src[28] = Flink;
      LODWORD(Src[31]) = 2;
      v24 = *(unsigned __int16 *)P + 16;
      Src[34] = P;
      HIDWORD(Src[31]) = v24;
      LODWORD(Src[1]) = 8;
      SepAdtLogAuditRecord(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( AllocatedFullProcessImageName < 0 )
      SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  }
}
