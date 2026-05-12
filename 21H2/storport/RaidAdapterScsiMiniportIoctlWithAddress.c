/*
 * XREFs of RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C00067E8
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0005C08 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C000B738 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003834 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0003890 (RaidAdapterExecuteXrb.c)
 *     RaidGetSrbIoctlFromIrp @ 0x1C0006448 (RaidGetSrbIoctlFromIrp.c)
 *     RaidBuildMdlForXrb @ 0x1C0006614 (RaidBuildMdlForXrb.c)
 *     RaidAdapterFindUnit @ 0x1C0006674 (RaidAdapterFindUnit.c)
 *     RaSrbSetMiniportContext @ 0x1C00067BC (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0006BFC (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C0006CBC (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00073CC (RaidSrbStatusToNtStatus.c)
 *     RaidXrbDeallocateResources @ 0x1C0007718 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000B000 (RaidZeroXrb.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B640 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B684 (RaUnitAcquireRemoveLock.c)
 *     RaidAllocateSrb @ 0x1C000BE14 (RaidAllocateSrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002D5DC (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D640 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0033004 (RaidUnitPoFxIdleComponentFromMiniport.c)
 */

__int64 __fastcall RaidAdapterScsiMiniportIoctlWithAddress(__int64 a1, IRP *a2, char a3, char a4, char a5, int a6)
{
  __int64 ContiguousIoResources; // r15
  __int64 v9; // r12
  _QWORD *Srb; // rsi
  __int64 v11; // rbx
  int SrbIoctlFromIrp; // eax
  __int64 v13; // r8
  int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  char v18; // al
  char v19; // dl
  char v20; // cl
  __int64 Unit; // rax
  __int64 v22; // rdi
  __int16 IoPriorityHint; // ax
  _DWORD *v24; // rcx
  _QWORD *v25; // rdi
  __int64 v26; // rax
  _DWORD *v27; // rax
  ULONG v28; // ecx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // eax
  _QWORD *v36; // r12
  unsigned int v37; // eax
  unsigned __int64 v38; // rcx
  _QWORD *v39; // rax
  int v41; // [rsp+30h] [rbp-30h]
  ULONG v42; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v43; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v44; // [rsp+40h] [rbp-20h]
  void *v45; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v46; // [rsp+50h] [rbp-10h]
  __int64 v47; // [rsp+58h] [rbp-8h]

  v45 = 0LL;
  v42 = 0;
  v43 = 0;
  v47 = 0LL;
  v46 = 0LL;
  HIBYTE(v41) = 0;
  ContiguousIoResources = 0LL;
  v9 = 0LL;
  Srb = 0LL;
  v11 = 0LL;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((__int64)a2, (__int64)&v45, (__int64)&v42, (__int64)&v43, 2);
  v14 = SrbIoctlFromIrp;
  if ( SrbIoctlFromIrp < 0 )
  {
    a2->IoStatus.Status = SrbIoctlFromIrp;
    goto LABEL_37;
  }
  v15 = *(_QWORD *)(a1 + 8);
  LOBYTE(v13) = *(_BYTE *)(a1 + 426);
  v47 = a1 + 328;
  Srb = (_QWORD *)RaidAllocateSrb(v15, 2LL, v13, 0LL);
  if ( !Srb )
    goto LABEL_4;
  ContiguousIoResources = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 468) + 7) & 0xFFFFFFF8) + 1088, v16, a1);
  if ( !ContiguousIoResources )
  {
    if ( !*(_QWORD *)(a1 + 112) || _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0) )
    {
LABEL_4:
      v14 = -1073741801;
      goto LABEL_37;
    }
    ContiguousIoResources = *(_QWORD *)(a1 + 112);
  }
  v11 = ContiguousIoResources + 32;
  v44 = (_QWORD *)(ContiguousIoResources + 32);
  RaidZeroXrb(ContiguousIoResources + 32, v17, 0LL, 0LL);
  v14 = RaidBuildMdlForXrb(ContiguousIoResources + 32, v45, v42);
  if ( v14 >= 0 )
  {
    v18 = a5;
    v19 = a3;
    v20 = a4;
    BYTE2(v41) = a5;
    LOBYTE(v41) = a3;
    BYTE1(v41) = a4;
    if ( a6 == 1 )
    {
      Unit = RaidAdapterFindUnit(a1, v41);
      v20 = a4;
      v9 = Unit;
      v19 = a3;
      *(_QWORD *)(ContiguousIoResources + 256) = Unit;
      v18 = a5;
    }
    if ( *(_BYTE *)(v47 + 98) == 1 )
    {
      v22 = *((unsigned int *)Srb + 13);
      Srb[12] = v44;
      v46 = Srb;
      Srb[10] = a2;
      *((_DWORD *)Srb + 5) = 2;
      *((_DWORD *)Srb + 6) = 192;
      IoPriorityHint = IoGetIoPriorityHint(a2);
      v24 = v45;
      *((_WORD *)Srb + 18) = IoPriorityHint;
      *((_DWORD *)Srb + 10) = v24[3];
      *((_DWORD *)Srb + 15) = v42;
      Srb[8] = v24;
      *((_BYTE *)Srb + v22 + 8) = a3;
      *((_BYTE *)Srb + v22 + 9) = a4;
      *((_BYTE *)Srb + v22 + 10) = a5;
      v25 = v44;
      *(_QWORD *)(ContiguousIoResources + 200) = Srb;
      *(_QWORD *)(ContiguousIoResources + 208) = Srb[10];
      v26 = Srb[8];
    }
    else
    {
      v25 = v44;
      *((_BYTE *)Srb + 7) = v18;
      v27 = v45;
      *((_BYTE *)Srb + 6) = v20;
      v28 = v42;
      Srb[3] = v27;
      Srb[6] = v25;
      *(_WORD *)Srb = 88;
      *((_BYTE *)Srb + 2) = 2;
      *((_BYTE *)Srb + 5) = v19;
      *((_DWORD *)Srb + 3) = 192;
      *((_DWORD *)Srb + 4) = v28;
      *((_DWORD *)Srb + 5) = v27[3];
      *(_QWORD *)(ContiguousIoResources + 200) = Srb;
      *(_QWORD *)(ContiguousIoResources + 208) = a2;
      v26 = Srb[3];
    }
    *(_QWORD *)(ContiguousIoResources + 216) = v26;
    RaSrbSetMiniportContext(a1, (__int64)Srb, ContiguousIoResources + 1088);
    KeInitializeEvent((PRKEVENT)(ContiguousIoResources + 696), NotificationEvent, 0);
    *(_QWORD *)(ContiguousIoResources + 688) = RaidXrbSignalCompletion;
    if ( *(_QWORD *)(a1 + 5088) )
      RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
    if ( *(_BYTE *)(a1 + 4514) )
      v30 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (__int64)v25);
    else
      v30 = RaidAdapterExecuteXrb(a1, v25, v29);
    v14 = v30;
    if ( v30 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(ContiguousIoResources + 696), Executive, 0, 0, 0LL);
      LOBYTE(v31) = *((_BYTE *)Srb + 3);
      v14 = RaidSrbStatusToNtStatus(v31);
    }
    v32 = *(_BYTE *)(ContiguousIoResources + 49);
    if ( (v32 & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponent(a1, *(unsigned int *)(ContiguousIoResources + 780), 0LL);
      *(_BYTE *)(ContiguousIoResources + 49) &= ~1u;
      v32 = *(_BYTE *)(ContiguousIoResources + 49);
    }
    if ( (v32 & 2) != 0 )
    {
      if ( a6 == 1 )
      {
        v35 = 0;
      }
      else
      {
        v33 = RaidAdapterFindUnit(a1, v41);
        v9 = v33;
        if ( v33 )
        {
          LOBYTE(v34) = 1;
          v35 = RaUnitAcquireRemoveLock(v33, a2, v34);
        }
        else
        {
          v35 = -1073741823;
        }
      }
      if ( !v35 )
      {
        if ( v9 )
        {
          RaidUnitPoFxIdleComponentFromMiniport(v9, *(unsigned int *)(ContiguousIoResources + 780));
          *(_BYTE *)(ContiguousIoResources + 49) &= ~2u;
          if ( a6 != 1 )
            RaUnitReleaseRemoveLock(v9);
        }
      }
    }
    if ( *(_QWORD *)(a1 + 5088) )
      RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
    v11 = (__int64)v44;
  }
LABEL_37:
  v36 = v46;
  if ( v14 < 0 )
  {
    v38 = 0LL;
  }
  else
  {
    if ( *((_BYTE *)Srb + 2) == 40 )
      v37 = *((_DWORD *)v46 + 15);
    else
      v37 = *((_DWORD *)Srb + 4);
    if ( v43 < v37 )
      v37 = v43;
    v38 = v37;
  }
  a2->IoStatus.Information = v38;
  if ( ContiguousIoResources )
  {
    RaidXrbDeallocateResources(v11, 0LL);
    if ( ContiguousIoResources == *(_QWORD *)(a1 + 112) )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0);
    else
      StorFreeContiguousIoResources(a1, ContiguousIoResources);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v47 + 98) == 1 )
    {
      v39 = Srb;
      if ( v36 )
        v39 = v36;
      v39[10] = 0LL;
      v39[13] = 0LL;
    }
    else
    {
      Srb[6] = 0LL;
      Srb[7] = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return RaidCompleteRequestEx(a2);
}
