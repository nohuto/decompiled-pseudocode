/*
 * XREFs of KeFlushTb @ 0x140323CB0
 * Callers:
 *     MiGetUltraMapping @ 0x140276080 (MiGetUltraMapping.c)
 *     MiInsertCachedPte @ 0x14027D0C0 (MiInsertCachedPte.c)
 *     MiAgeWorkingSetTail @ 0x1402C9E50 (MiAgeWorkingSetTail.c)
 *     MiAttachSessionGlobal @ 0x1402D509C (MiAttachSessionGlobal.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1402F5E60 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036D020 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403AC164 (MiGetWsAndMakePageTablesNx.c)
 *     MiManageUltraSpacePageTable @ 0x14046673C (MiManageUltraSpacePageTable.c)
 *     MiSwitchToPfns @ 0x140B37268 (MiSwitchToPfns.c)
 *     MiInitializeTbFlush @ 0x140B5CD2C (MiInitializeTbFlush.c)
 * Callees:
 *     KxFlushNonGlobalTb @ 0x140212260 (KxFlushNonGlobalTb.c)
 *     KiIpiSendRequestEx @ 0x14021238C (KiIpiSendRequestEx.c)
 *     KiIpiSendRequest @ 0x140233230 (KiIpiSendRequest.c)
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeFlushProcessWriteBuffers @ 0x1402373CC (KeFlushProcessWriteBuffers.c)
 *     KiFlushCurrentTbWorker @ 0x1402D0000 (KiFlushCurrentTbWorker.c)
 *     KxSetTimeStampBusy @ 0x1402DC0CC (KxSetTimeStampBusy.c)
 *     KxFlushEntireTb @ 0x1403AD5FC (KxFlushEntireTb.c)
 *     KiFlushCurrentTbOnly @ 0x1403B8390 (KiFlushCurrentTbOnly.c)
 *     KiFlushAddressSpaceTb @ 0x1403C6B40 (KiFlushAddressSpaceTb.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 *     KiPrepareFlushParameters @ 0x1403C8E3C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x1403C9158 (KiFlushAffinity.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiIsFlushEntire @ 0x140457F9C (KiIsFlushEntire.c)
 *     VmFlushTb @ 0x14045DE9C (VmFlushTb.c)
 *     VslFlushSecureAddressSpace @ 0x140548BFC (VslFlushSecureAddressSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFlushTb @ 0x14060AC48 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushTb(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // ebp
  int v5; // r14d
  bool v6; // r8
  __int64 v7; // r13
  unsigned __int8 v8; // r12
  struct _KPRCB *v9; // r15
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rdi
  _KPROCESS *v11; // rbx
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int16 v21; // cx
  _KPROCESS *Process; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int8 v25; // r10
  _DWORD *v26; // r10
  __int64 v27; // rdx
  _DWORD *SchedulerAssist; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  bool v36; // zf
  unsigned __int8 v37; // cl
  unsigned __int8 v38; // cl
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  unsigned __int8 v42; // cl
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  unsigned __int8 v46; // bl
  _DWORD *v47; // r9
  __int64 v48; // rdx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  int v52; // eax
  signed __int32 v53[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int8 v54; // [rsp+90h] [rbp+18h] BYREF
  __int64 v55; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v55 = 0LL;
  v4 = a1;
  v54 = 0;
  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_2;
  if ( (HvlEnlightenments & 2) != 0 || (HvlEnlightenments & 0x800000) != 0 && (unsigned __int8)KiIsFlushEntire(a1) )
  {
LABEL_40:
    v5 = 0;
    KiPrepareFlushParameters(v4, &v55, &v54);
    v24 = KiFlushAffinity(a2);
    result = KiFlushAddressSpaceTb(v55, v24, v54, v25);
    goto LABEL_16;
  }
  if ( (_DWORD)KeNumberProcessors_0 != 1 )
  {
    if ( !a2 )
    {
      _InterlockedOr(v53, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 12 )
          LODWORD(v29) = 4096;
        else
          v29 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
        SchedulerAssist[5] |= v29;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = 0;
      Process = CurrentPrcb->CurrentThread->ApcState.Process;
      if ( !Process->ActiveProcessors.Count )
      {
LABEL_32:
        KiFlushCurrentTbOnly(v4);
        if ( KiIrqlFlags )
        {
          v38 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v40 = v39->SchedulerAssist;
            v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v36 = (v41 & v40[5]) == 0;
            v40[5] &= v41;
            if ( v36 )
              KiRemoveSystemWorkPriorityKick(v39);
          }
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        v5 = 0;
        goto LABEL_16;
      }
      while ( 1 )
      {
        v23 = Process->ActiveProcessors.Bitmap[v21];
        if ( v23 )
        {
          if ( v21 != CurrentPrcb->Group || v23 != CurrentPrcb->GroupSetMember )
            break;
        }
        if ( ++v21 >= Process->ActiveProcessors.Count )
          goto LABEL_32;
      }
      if ( KiIrqlFlags )
      {
        v37 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v36 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v36 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
      __writecr8(CurrentIrql);
    }
    goto LABEL_40;
  }
LABEL_2:
  v5 = 1;
  if ( !KiKvaShadow )
  {
    if ( !v4 || v4 - 1 > 1 )
    {
      result = KxFlushEntireTb(a2);
      goto LABEL_16;
    }
    goto LABEL_57;
  }
  if ( v4 != 1 && (!v4 || v4 == 2) )
  {
LABEL_57:
    result = KxFlushNonGlobalTb(a2);
    goto LABEL_16;
  }
  v6 = 1;
  v7 = 3LL;
  if ( a2 == 1 )
    v7 = 2147483651LL;
  else
    v6 = a2 != 0;
  v8 = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v8 <= 0xFu )
  {
    v26 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v8 == 12 )
      LODWORD(v27) = 4096;
    else
      v27 = (-1LL << (v8 + 1)) & 0x1FFC;
    v26[5] |= v27;
  }
  if ( v6 )
  {
    if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
    {
      KiIpiSendRequestEx(
        (__int64)KeGetCurrentPrcb(),
        1,
        0LL,
        0,
        v7,
        (void (__fastcall *)(__int64))KiFlushCurrentTbWorker,
        0LL);
      _InterlockedIncrement(&KiTbFlushTimeStamp);
    }
  }
  else
  {
    _InterlockedOr(v53, 0);
    v9 = KeGetCurrentPrcb();
    p_StaticAffinity = &v9->StaticAffinity;
    v11 = v9->CurrentThread->ApcState.Process;
    *(_QWORD *)&v9->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
    memset(&v9->StaticAffinity.KeSyncContextAffinity.8, 0, sizeof(v9->StaticAffinity.KeSyncContextAffinity.8));
    KiCopyAffinityEx(
      (__int64)&v9->StaticAffinity,
      v9->StaticAffinity.KeFlushTbAffinity.Size,
      &v11->ActiveProcessors.Count);
    v13 = KiProcessorIndexToNumberMappingTable[v9->Number];
    v14 = v13 & 0x3F;
    v15 = v13 >> 6;
    if ( v9->StaticAffinity.KeFlushTbAffinity.Count > (unsigned int)v15 )
    {
      v12 = (__int64)p_StaticAffinity + 8 * v15;
      v16 = *(_QWORD *)(v12 + 8);
      _bittestandreset64(&v16, (unsigned int)v14);
      *(_QWORD *)(v12 + 8) = v16;
    }
    v17 = 0;
    if ( p_StaticAffinity->KeFlushTbAffinity.Count )
    {
      while ( 1 )
      {
        v12 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[v17];
        if ( v12 )
        {
          if ( v17 != v9->Group || v12 != v9->GroupSetMember )
            break;
        }
        if ( ++v17 >= p_StaticAffinity->KeFlushTbAffinity.Count )
          goto LABEL_13;
      }
      KiIpiSendRequest((__int64)v9, 0, (_DWORD)v9 + 11704, 0LL, v7);
      KiFlushCurrentTbWorker(0LL, v30, v31);
      while ( v9->PacketBarrier )
      {
        if ( (++v3 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v32) )
        {
          HvlNotifyLongSpinWait(v3);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
LABEL_13:
      KiFlushCurrentTbWorker(0LL, v12, v14);
    }
  }
  if ( KiIrqlFlags )
  {
    v42 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v42 <= 0xFu && v8 <= 0xFu && v42 >= 2u )
    {
      v43 = KeGetCurrentPrcb();
      v44 = v43->SchedulerAssist;
      v45 = ~(unsigned __int16)(-1LL << (v8 + 1));
      v36 = (v45 & v44[5]) == 0;
      v44[5] &= v45;
      if ( v36 )
        KiRemoveSystemWorkPriorityKick(v43);
    }
  }
  result = v8;
  __writecr8(v8);
LABEL_16:
  if ( v4 == 1 )
  {
    result = (__int64)KeGetCurrentThread();
    if ( *(_QWORD *)(*(_QWORD *)(result + 184) + 992LL) )
      result = VslFlushSecureAddressSpace();
  }
  if ( !v5 && v4 == 4 )
    result = KeFlushProcessWriteBuffers(1);
  if ( VmTbFlushEnabled )
    result = VmFlushTb(0LL, 0LL, v4);
  if ( ExTbFlushActive )
  {
    v46 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v46 <= 0xFu )
    {
      v47 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v46 == 15 )
        LODWORD(v48) = 0x8000;
      else
        v48 = (-1LL << (v46 + 1)) & 0xFFFC;
      v47[5] |= v48;
    }
    ExFlushTb(0LL, 0LL, v4);
    if ( KiIrqlFlags )
    {
      v49 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v49 <= 0xFu && v46 <= 0xFu && v49 >= 2u )
      {
        v50 = KeGetCurrentPrcb();
        v51 = v50->SchedulerAssist;
        v52 = ~(unsigned __int16)(-1LL << (v46 + 1));
        v36 = (v52 & v51[5]) == 0;
        v51[5] &= v52;
        if ( v36 )
          KiRemoveSystemWorkPriorityKick(v50);
      }
    }
    result = v46;
    __writecr8(v46);
  }
  return result;
}
