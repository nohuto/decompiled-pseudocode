void __fastcall SeAuditProcessExit(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  int AllocatedFullProcessImageName; // eax
  ULONG_PTR v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // edx
  int v9; // eax
  PVOID P[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+38h] [rbp-D0h] BYREF

  P[0] = 0LL;
  v3 = a2;
  memset(Src, 0, 0x418uLL);
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(a1, (__int64)P);
  if ( AllocatedFullProcessImageName < 0 )
  {
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  }
  else
  {
    v5 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
    v6 = **(_QWORD **)(v5 + 152);
    v7 = *(_QWORD *)(v5 + 24);
    Src[0] = 0x125100000005LL;
    LODWORD(Src[2]) = 524422;
    LODWORD(Src[3]) = 4;
    v8 = *(unsigned __int8 *)(v6 + 1);
    Src[12] = v7;
    Src[10] = &SeSubsystemName;
    Src[20] = *(_QWORD *)(a1 + 1088);
    HIDWORD(Src[3]) = 4 * v8 + 8;
    Src[6] = v6;
    Src[7] = 0x2000000001LL;
    Src[11] = 0x800000005LL;
    Src[15] = 0x40000000ALL;
    Src[16] = v3;
    Src[19] = 0x80000000BLL;
    LODWORD(Src[23]) = 2;
    v9 = *(unsigned __int16 *)P[0] + 16;
    Src[26] = P[0];
    HIDWORD(Src[23]) = v9;
    LODWORD(Src[1]) = 6;
    SepAdtLogAuditRecord(Src);
    ObfDereferenceObject((PVOID)v5);
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
}
