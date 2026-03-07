char __fastcall MmCreateProcessAddressSpace(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  __int16 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  ULONG_PTR v14; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 TopLevelPage; // rax
  volatile signed __int32 *v19; // rdx
  __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  int v22; // r15d
  __int64 v23; // r8
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v27; // [rsp+80h] [rbp+18h] BYREF

  v27 = a3;
  v26 = 0LL;
  v7 = PspMinimumWorkingSet;
  v8 = a3;
  v9 = a6;
  v25 = PspMinimumWorkingSet;
  if ( a1 )
    v10 = **(__int16 ***)(a6 + 2520);
  else
    v10 = (__int16 *)MiSystemPartition;
  if ( !(unsigned int)MiMakePartitionActive((__int64)v10) )
    return 0;
  MiSetProcessPartitionId(v9, *v10);
  *(_DWORD *)(v9 + 2876) = 1;
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)v10, 4uLL, 0LL) )
    return 0;
  *(_DWORD *)(v9 + 1664) = (unsigned __int16)RtlRandomEx(&Seed);
  *(_QWORD *)(v9 + 2352) = 0LL;
  *(_QWORD *)(v9 + 2368) = v9 + 2360;
  *(_QWORD *)(v9 + 2360) = v9 + 2360;
  if ( v8 != PsGetDefaultWsMaximum() )
  {
    MiCheckWsLimits(v9 + 1664, &v25, &v27, a4, 1);
    v8 = v27;
    v7 = v25;
  }
  *(_QWORD *)(v9 + 1776) = v7;
  *(_QWORD *)(v9 + 1784) = v8;
  if ( (a4 & 1) != 0 )
    *(_BYTE *)(v9 + 1848) |= 0x40u;
  if ( (int)PsChargeProcessQuota((struct _KPROCESS *)v9, v11, v7) < 0 )
  {
LABEL_26:
    MiReturnCommit((__int64)v10, 4LL, v12);
    return 0;
  }
  if ( !(unsigned int)MiChargeResident(v10, v7, 0LL) )
  {
LABEL_25:
    PsReturnProcessQuota((struct _KPROCESS *)v9, v13, v7);
    goto LABEL_26;
  }
  v14 = MiReservePtes((__int64)&qword_140C695C0, 1u);
  if ( !v14 )
  {
LABEL_24:
    MiReturnResident((__int64)v10, v7);
    goto LABEL_25;
  }
  if ( (int)MiAllocateProcessShadow(v9, a5) < 0 )
  {
LABEL_23:
    MiReleasePtes((__int64)&qword_140C695C0, (__int64 *)v14, 1u);
    goto LABEL_24;
  }
  if ( !(unsigned int)MiJoinSession(&v26) )
  {
    MiDeleteProcessShadow(v9, 0LL, v15, v16);
    goto LABEL_23;
  }
  v17 = a5;
  *(_QWORD *)(v9 + 1608) = 4LL;
  TopLevelPage = MiAllocateTopLevelPage(v9, v14, v17);
  v19 = v26;
  v20 = TopLevelPage;
  if ( v26 )
  {
    *(_QWORD *)(v9 + 1368) = v26;
    _InterlockedOr((volatile signed __int32 *)(v9 + 1124), 0x10000u);
    v19 = v26;
  }
  MiInsertNewProcess((_QWORD *)v9, (__int64)v19);
  MiCreateNewProcessTopLevelMappings(v9, (__int64)(v14 << 25) >> 16);
  v21 = MiMakeValidPte(0LL, v20, -1879048186) & 0xFFFFFFFFFFFFFEFFuLL;
  v22 = 0;
  if ( !MiPteInShadowRange(((__int64)(v14 << 25) >> 16) + 3944) )
    goto LABEL_17;
  if ( MiPteHasShadow() )
  {
    v22 = 1;
    if ( !HIBYTE(word_140C6697C) )
    {
LABEL_31:
      if ( (v21 & 1) != 0 )
        v21 |= 0x8000000000000000uLL;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    goto LABEL_31;
  }
LABEL_17:
  *(_QWORD *)(((__int64)(v14 << 25) >> 16) + 0xF68) = v21;
  if ( v22 )
    MiWritePteShadow(((__int64)(v14 << 25) >> 16) + 3944, v21, v23);
  *(_QWORD *)(v9 + 40) = KeMakeKernelDirectoryTableBase(v20 << 12);
  MiSyncSystemPdes(v9);
  MiReleasePtes((__int64)&qword_140C695C0, (__int64 *)v14, 1u);
  return 1;
}
