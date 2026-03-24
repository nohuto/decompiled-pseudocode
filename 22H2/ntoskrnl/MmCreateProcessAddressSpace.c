/*
 * XREFs of MmCreateProcessAddressSpace @ 0x1406FDDB4
 * Callers:
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 *     MiDeleteProcessShadow @ 0x140285DE8 (MiDeleteProcessShadow.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiReturnResident @ 0x1402E9FEC (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x1402EA088 (PsReturnProcessQuota.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiCheckWsLimits @ 0x1403173DC (MiCheckWsLimits.c)
 *     MiSyncSystemPdes @ 0x14035586C (MiSyncSystemPdes.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1403558E0 (KeMakeKernelDirectoryTableBase.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x1403558F8 (MiCreateNewProcessTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x140355B48 (MiInsertNewProcess.c)
 *     PsChargeProcessQuota @ 0x140357284 (PsChargeProcessQuota.c)
 *     PsGetDefaultWsMaximum @ 0x1403572BC (PsGetDefaultWsMaximum.c)
 *     RtlRandomEx @ 0x1403572D0 (RtlRandomEx.c)
 *     MiSetProcessPartitionId @ 0x1403572F8 (MiSetProcessPartitionId.c)
 *     MiMakePartitionActive @ 0x140357308 (MiMakePartitionActive.c)
 *     MiAllocateProcessShadow @ 0x1406FE00C (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x1406FE0F4 (MiAllocateTopLevelPage.c)
 *     MiJoinSession @ 0x1406FE290 (MiJoinSession.c)
 */

char __fastcall MmCreateProcessAddressSpace(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  __int16 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  ULONG_PTR v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 TopLevelPage; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r9
  unsigned __int64 v23; // rbx
  int v24; // r15d
  __int64 v25; // r8
  __int64 v27; // [rsp+30h] [rbp-38h] BYREF
  __int64 v28; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp+18h] BYREF

  v29 = a3;
  v28 = 0LL;
  v7 = PspMinimumWorkingSet;
  v8 = a3;
  v9 = a6;
  v27 = PspMinimumWorkingSet;
  if ( a1 )
    v10 = **(__int16 ***)(a6 + 2520);
  else
    v10 = (__int16 *)&MiSystemPartition;
  if ( !(unsigned int)MiMakePartitionActive((__int64)v10) )
    return 0;
  MiSetProcessPartitionId(v9, *v10);
  if ( !(unsigned int)MiChargeCommit((__int64)v10, 4uLL, 0) )
    return 0;
  *(_DWORD *)(v9 + 1664) = (unsigned __int16)RtlRandomEx(&Seed);
  *(_QWORD *)(v9 + 2368) = v9 + 2360;
  *(_QWORD *)(v9 + 2360) = v9 + 2360;
  *(_QWORD *)(v9 + 2352) = 0LL;
  if ( v8 != PsGetDefaultWsMaximum() )
  {
    MiCheckWsLimits(v9 + 1664, (unsigned __int64 *)&v27, &v29, a4, 1);
    v8 = v29;
    v7 = v27;
  }
  *(_QWORD *)(v9 + 1776) = v7;
  *(_QWORD *)(v9 + 1816) = v8;
  if ( (a4 & 1) != 0 )
    *(_BYTE *)(v9 + 1848) |= 0x40u;
  if ( (int)PsChargeProcessQuota((struct _KPROCESS *)v9, v11, v7) < 0 )
  {
LABEL_26:
    MiReturnCommit((__int64)v10, 4LL);
    return 0;
  }
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v10, v7, 0LL, v12) )
  {
LABEL_25:
    PsReturnProcessQuota(v9, v13, v7);
    goto LABEL_26;
  }
  v16 = MiReservePtes((__int64)&qword_140C4EF40, 1u, v14, v15);
  if ( !v16 )
  {
LABEL_24:
    MiReturnResident((__int64)v10, v7);
    goto LABEL_25;
  }
  if ( (int)MiAllocateProcessShadow(v9, a5) < 0 )
  {
LABEL_23:
    MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v16, 1u);
    goto LABEL_24;
  }
  if ( !(unsigned int)MiJoinSession(&v28) )
  {
    MiDeleteProcessShadow(v9, 0, v17);
    goto LABEL_23;
  }
  v18 = a5;
  *(_QWORD *)(v9 + 1608) = 4LL;
  TopLevelPage = MiAllocateTopLevelPage(v9, v16, v18);
  v20 = v28;
  v21 = TopLevelPage;
  if ( v28 )
  {
    *(_QWORD *)(v9 + 1368) = v28;
    _InterlockedOr((volatile signed __int32 *)(v9 + 1124), 0x10000u);
    v20 = v28;
  }
  MiInsertNewProcess((_QWORD *)v9, v20);
  MiCreateNewProcessTopLevelMappings(v9, (__int64)(v16 << 25) >> 16);
  v23 = MiMakeValidPte(0LL, v21, 2415919110LL, v22) & 0xFFFFFFFFFFFFFEFFuLL;
  v24 = 0;
  if ( !MiPteInShadowRange(((__int64)(v16 << 25) >> 16) + 3944) )
    goto LABEL_17;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v24 = 1;
    if ( !HIBYTE(word_140C4E008) )
    {
LABEL_31:
      if ( (v23 & 1) != 0 )
        v23 |= 0x8000000000000000uLL;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    goto LABEL_31;
  }
LABEL_17:
  *(_QWORD *)(((__int64)(v16 << 25) >> 16) + 0xF68) = v23;
  if ( v24 )
    MiWritePteShadow(((__int64)(v16 << 25) >> 16) + 3944, v23, v25);
  *(_QWORD *)(v9 + 40) = KeMakeKernelDirectoryTableBase(v21 << 12);
  MiSyncSystemPdes(v9);
  MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v16, 1u);
  return 1;
}
