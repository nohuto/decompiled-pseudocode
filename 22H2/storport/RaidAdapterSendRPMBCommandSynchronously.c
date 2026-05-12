/*
 * XREFs of RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EE18
 * Callers:
 *     RaidAdapterRpmbRequest @ 0x1C002E69C (RaidAdapterRpmbRequest.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003834 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0003890 (RaidAdapterExecuteXrb.c)
 *     RaidBuildMdlForXrb @ 0x1C00065A4 (RaidBuildMdlForXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C000674C (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0006B8C (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C0006C4C (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000735C (RaidSrbStatusToNtStatus.c)
 *     RaidXrbDeallocateResources @ 0x1C00076A8 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000AF90 (RaidZeroXrb.c)
 *     RaidAllocatePool @ 0x1C000BD40 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x1C000BDA4 (RaidAllocateSrb.c)
 *     memset @ 0x1C0020480 (memset.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002D5BC (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D620 (RaidAdapterPoFxIdleComponent.c)
 *     WPP_SF_qqq @ 0x1C0033880 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaidAdapterSendRPMBCommandSynchronously(__int64 a1, IRP *a2, char a3, void *a4, int a5)
{
  unsigned int v6; // ebx
  ULONG v7; // r13d
  _BYTE *v8; // r15
  __int64 v9; // rbp
  _BYTE *v10; // r14
  void *v11; // r12
  _BYTE *Srb; // rdi
  int v13; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v15; // rdx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  PVOID Pool; // rax
  __int64 v20; // r13
  __int64 v21; // r14
  int v22; // eax
  _BYTE *v23; // rcx
  __int64 v24; // rax
  __int16 v25; // ax
  __int64 v26; // r8
  int v27; // eax
  __int64 v29; // [rsp+80h] [rbp+8h]

  v6 = (*(_DWORD *)(a1 + 468) + 7) & 0xFFFFFFF8;
  v7 = a5 << 9;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(a1 + 426), 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v6 + 1088, v13, a1);
  v29 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v9 = ContiguousIoResources + 32;
    RaidZeroXrb(ContiguousIoResources + 32, v15, 0, 0LL);
    v16 = RaidBuildMdlForXrb(v9, a4, v7);
    if ( v16 < 0 )
    {
LABEL_10:
      v20 = v29;
      goto LABEL_11;
    }
    if ( a3 == -94 )
    {
      v17 = 64;
    }
    else
    {
      v17 = 0;
      if ( a3 == -75 )
        v17 = 128;
    }
    v18 = v17 | 0x102;
    Pool = RaidAllocatePool(NonPagedPoolNx, 0xFFuLL, 0x4E536152u, *(_QWORD *)(a1 + 8));
    v11 = Pool;
    if ( !Pool )
    {
      v16 = -1073741801;
      goto LABEL_10;
    }
    memset(Pool, 0, 0xFFuLL);
    if ( *(_BYTE *)(a1 + 426) == 1 )
    {
      v8 = Srb;
      v21 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 5) = 0;
      *((_DWORD *)Srb + 8) = -1;
      *((_DWORD *)Srb + 6) = v18;
      *((_QWORD *)Srb + 8) = a4;
      *((_DWORD *)Srb + 15) = v7;
      *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
      v22 = *(_DWORD *)(a1 + 4268);
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 10) = v22;
      *((_QWORD *)Srb + 12) = v9;
      if ( *(_WORD *)(a1 + 5696) == 1 )
      {
        Srb[v21 + 8] = *(_BYTE *)(a1 + 5704);
        Srb[v21 + 9] = *(_BYTE *)(a1 + 5705);
        Srb[v21 + 10] = *(_BYTE *)(a1 + 5706);
      }
      *(_QWORD *)(v9 + 168) = Srb;
      *(_QWORD *)(v9 + 184) = *((_QWORD *)Srb + 8);
      *(_QWORD *)(v9 + 176) = *((_QWORD *)Srb + 12);
      v10 = &Srb[*((unsigned int *)Srb + 30)];
      *(_DWORD *)v10 = 64;
      v23 = v10 + 24;
      *((_DWORD *)v10 + 1) = 32;
      *(_WORD *)(v10 + 9) = 3327;
      *((_QWORD *)v10 + 2) = v11;
    }
    else
    {
      Srb[2] = 0;
      *(_WORD *)Srb = 88;
      *((_QWORD *)Srb + 3) = a4;
      *((_DWORD *)Srb + 3) = v18;
      Srb[8] = -1;
      *((_DWORD *)Srb + 4) = v7;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 4268);
      Srb[11] = -1;
      *((_QWORD *)Srb + 4) = v11;
      *((_QWORD *)Srb + 6) = v9;
      if ( *(_WORD *)(a1 + 5696) == 1 )
      {
        Srb[5] = *(_BYTE *)(a1 + 5704);
        Srb[6] = *(_BYTE *)(a1 + 5705);
        Srb[7] = *(_BYTE *)(a1 + 5706);
      }
      v23 = Srb + 72;
      *(_QWORD *)(v9 + 168) = Srb;
      v24 = *((_QWORD *)Srb + 3);
      *(_QWORD *)(v9 + 176) = a2;
      *(_QWORD *)(v9 + 184) = v24;
      Srb[10] = 12;
    }
    if ( Srb[2] == 40 )
      *((_WORD *)Srb + 19) = 32;
    else
      Srb[9] = 32;
    *v23 = a3;
    v23[1] = *(_BYTE *)(a1 + 5688);
    v25 = *(_WORD *)(a1 + 5690);
    *(_DWORD *)(v23 + 6) = _byteswap_ulong(v7);
    v20 = v29;
    *((_WORD *)v23 + 1) = __ROR2__(v25, 8);
    RaSrbSetMiniportContext(a1, (__int64)Srb, v29 + 1088);
    KeInitializeEvent((PRKEVENT)(v9 + 664), NotificationEvent, 0);
    *(_QWORD *)(v9 + 656) = RaidXrbSignalCompletion;
    if ( *(_QWORD *)(a1 + 5088) )
      RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
    if ( *(_BYTE *)(a1 + 426) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          68LL,
          &WPP_1af4e391bf1d3e2526011607efd76594_Traceguids,
          v9,
          v8,
          *((_QWORD *)v8 + 13));
      }
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        69LL,
        &WPP_1af4e391bf1d3e2526011607efd76594_Traceguids,
        v9,
        Srb,
        *((_QWORD *)Srb + 7));
    }
    if ( *(_BYTE *)(a1 + 4514) )
      v27 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v9);
    else
      v27 = RaidAdapterExecuteXrb(a1, (_QWORD *)v9, v26);
    v16 = v27;
    if ( v27 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v9 + 664), Executive, 0, 0, 0LL);
      v16 = RaidSrbStatusToNtStatus(Srb[3]);
    }
    if ( (*(_BYTE *)(v9 + 17) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponent(a1, *(unsigned int *)(v9 + 748), 0LL);
      *(_BYTE *)(v9 + 17) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 5088) )
      RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
  }
  else
  {
    v16 = -1073741801;
    v20 = ContiguousIoResources;
  }
LABEL_11:
  if ( v20 )
  {
    RaidXrbDeallocateResources(v9, 0);
    StorFreeContiguousIoResources(a1, v20);
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0x4E536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 426) == 1 )
    {
      if ( !v8 )
        v8 = Srb;
      *((_QWORD *)v8 + 10) = 0LL;
      *((_QWORD *)v8 + 13) = 0LL;
      if ( v10 )
        *((_QWORD *)v10 + 2) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
      *((_QWORD *)Srb + 4) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v16;
}
