__int64 __fastcall ExpApplyPriorityBoost(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax
  bool v4; // zf
  int IoPriorityThread; // r12d
  int v9; // r8d
  int v10; // eax
  int v11; // r15d
  int v12; // r14d
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 v14; // dl
  char v15; // cl
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int8 OldIrql; // r10
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int64 v23; // rbx
  _DWORD *SchedulerAssist; // r10
  __int64 v25; // r11
  __int64 v26; // rsi
  unsigned int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // r13
  unsigned int v30; // eax
  int v31; // eax
  unsigned __int8 v32; // r10
  __int16 v33; // ax
  __int64 v34; // rcx
  unsigned __int8 Lock; // cl
  unsigned __int8 v36; // cl
  unsigned __int8 v37; // r10
  _DWORD *v38; // r8
  __int64 v39; // r9
  __int64 ExtensionTable; // rax
  unsigned __int8 v41; // cl
  struct _KPRCB *v42; // r11
  _DWORD *v43; // r9
  int v44; // eax
  unsigned __int8 v45; // cl
  struct _KPRCB *v46; // r11
  _DWORD *v47; // r9
  int v48; // eax
  unsigned __int8 v49; // cl
  struct _KPRCB *v50; // r11
  _DWORD *v51; // r9
  int v52; // eax
  __int64 v53; // rax
  unsigned __int8 v54; // cl
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  signed __int32 v57[8]; // [rsp+0h] [rbp-68h] BYREF
  int v58; // [rsp+20h] [rbp-48h]
  int v59; // [rsp+24h] [rbp-44h]
  __int64 CurrentPrcb; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+20h]
  unsigned __int8 v63; // [rsp+90h] [rbp+28h]
  unsigned __int8 v64; // [rsp+90h] [rbp+28h]
  unsigned __int8 v65; // [rsp+90h] [rbp+28h]
  int v66; // [rsp+A8h] [rbp+40h]

  result = 0LL;
  v4 = (*(_BYTE *)(a1 + 26) & 8) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v4 )
    return result;
  IoPriorityThread = PsGetIoPriorityThread(a3);
  if ( IoPriorityThread <= 2 )
    IoPriorityThread = 2;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  v9 = a2 & 0xFF00;
  v10 = a2 & 4;
  v11 = a2 & 2;
  v58 = v9;
  v59 = v10;
  LockHandle.LockQueue.Next = 0LL;
  v12 = 0;
  v66 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = 4LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v25) = 4;
    else
      v25 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v25;
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 96);
  }
  else
  {
    if ( !_InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)&LockHandle) )
      goto LABEL_7;
    KxWaitForLockOwnerShip(&LockHandle);
  }
  v9 = v58;
LABEL_7:
  if ( v59 )
    *(_WORD *)(a1 + 26) |= 4u;
  if ( v11 )
    *(_WORD *)(a1 + 26) |= 2u;
  if ( v9 )
  {
    v14 = *(_BYTE *)(a3 + 195);
    if ( (char)v14 > (int)*(unsigned __int8 *)(a1 + 27) )
    {
      v15 = 15;
      if ( v14 < 0xFu )
        v15 = *(_BYTE *)(a3 + 195);
      *(_BYTE *)(a1 + 27) = v15;
    }
  }
  v16 = ExpOwnerEntryToThread(a1 + 48);
  v19 = v16;
  if ( v16 )
  {
    if ( v17 && (*(_DWORD *)(a1 + 56) & 1) == 0 && (unsigned int)PsGetBaseIoPriorityThread(v16) < 2 )
    {
      v12 = CurrentPrcb;
      v66 = CurrentPrcb;
      PsBoostThreadIoEx(v19, 0, 0, 0LL);
      *(_DWORD *)(a1 + 56) |= 1u;
      v18 = v58;
    }
    if ( v11 && (*(_DWORD *)(a1 + 56) & 4) == 0 )
    {
      v12 |= 2u;
      v66 = v12;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v19 + 1444)) == 1 && *(_BYTE *)(v19 + 793) )
      {
        v36 = KeGetCurrentIrql();
        v65 = v36;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v36 <= 0xFu )
        {
          v38 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v36 == 2 )
            LODWORD(v39) = CurrentPrcb;
          else
            v39 = (-1LL << (v36 + 1)) & 4;
          v38[5] |= v39;
        }
        CurrentPrcb = (__int64)KeGetCurrentPrcb();
        if ( (unsigned int)KiAbThreadInsertList(v19, CurrentPrcb + 35704, v19 + 808) )
          KiAbQueueAutoBoostDpc(CurrentPrcb);
        v37 = v65;
        if ( KiIrqlFlags )
        {
          v41 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v41 <= 0xFu && v65 <= 0xFu && v41 >= 2u )
          {
            v42 = KeGetCurrentPrcb();
            v43 = v42->SchedulerAssist;
            v44 = ~(unsigned __int16)(-1LL << (v65 + 1));
            v4 = (v44 & v43[5]) == 0;
            v43[5] &= v44;
            if ( v4 )
            {
              KiRemoveSystemWorkPriorityKick(v42);
              v37 = v65;
            }
          }
        }
        __writecr8(v37);
      }
      *(_DWORD *)(a1 + 56) |= 4u;
      v18 = v58;
    }
    if ( v18 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v19 + 195) )
    {
      v12 |= 0xFF00u;
      v66 = v12;
    }
    if ( v12 )
    {
      v20 = v19 - 48;
      if ( ObpTraceFlags )
      {
        ObpPushStackInfo(v19 - 48);
        v20 = v19 - 48;
      }
      ObpIncrPointerCount(v20);
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      v63 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v45 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v45 <= 0xFu && LockHandle.OldIrql <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v4 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v4 )
          {
            KiRemoveSystemWorkPriorityKick(v46);
            OldIrql = v63;
          }
        }
      }
      __writecr8(OldIrql);
      if ( (v12 & 4) != 0 )
      {
        ++ExpResourceIoBoosted;
        IoBoostThreadIoPriority(v19, (unsigned int)IoPriorityThread, 0LL);
      }
      if ( (v12 & 2) != 0 )
      {
        if ( *(_DWORD *)(v19 + 1448) )
        {
          ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
          if ( ExtensionTable )
          {
            (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(v19);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
          }
        }
      }
      if ( (v12 & 0xFF00) != 0 )
      {
        __incgsdword(0x8AE8u);
        KeSetPriorityBoost(v19, *(unsigned __int8 *)(a1 + 27));
      }
      v66 = 0;
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v19, 0x746C6644u);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
    }
  }
  if ( *(char *)(a1 + 26) >= 0 )
  {
    v26 = *(_QWORD *)(a1 + 16);
    if ( v26 )
    {
      v27 = 1;
      LODWORD(CurrentPrcb) = *(_DWORD *)(v26 + 8);
      if ( (unsigned int)CurrentPrcb > 1 )
      {
        do
        {
          v26 += 16LL;
          v28 = ExpOwnerEntryToThread(v26);
          v29 = v28;
          if ( !v28 )
            goto LABEL_54;
          if ( v59 && (*(_DWORD *)(v26 + 8) & 1) == 0 && (unsigned int)PsGetBaseIoPriorityThread(v28) < 2 )
          {
            v66 |= 4u;
            PsBoostThreadIoEx(v29, 0, 0, 0LL);
            *(_DWORD *)(v26 + 8) |= 1u;
          }
          if ( v11 && (*(_DWORD *)(v26 + 8) & 4) == 0 )
          {
            v66 |= 2u;
            if ( _InterlockedIncrement((volatile signed __int32 *)(v29 + 1444)) == 1 )
              KeAbProcessEffectiveIoPriorityChange(v29, 0LL);
            *(_DWORD *)(v26 + 8) |= 4u;
          }
          if ( v58 )
          {
            v31 = v66;
            if ( *(unsigned __int8 *)(a1 + 27) > *(char *)(v29 + 195) )
            {
              v31 = v66 | 0xFF00;
              v66 |= 0xFF00u;
            }
          }
          else
          {
            v31 = v66;
          }
          if ( v31 )
          {
            ObfReferenceObjectWithTag((PVOID)v29, 0x746C6644u);
            KxReleaseQueuedSpinLock(&LockHandle);
            v32 = LockHandle.OldIrql;
            v64 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              v49 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v49 <= 0xFu && LockHandle.OldIrql <= 0xFu && v49 >= 2u )
              {
                v50 = KeGetCurrentPrcb();
                v51 = v50->SchedulerAssist;
                v52 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v4 = (v52 & v51[5]) == 0;
                v51[5] &= v52;
                if ( v4 )
                {
                  KiRemoveSystemWorkPriorityKick(v50);
                  v32 = v64;
                }
              }
            }
            __writecr8(v32);
            v33 = v66;
            if ( (v66 & 4) != 0 )
            {
              ++ExpResourceIoBoostedShared;
              IoBoostThreadIoPriority(v29, (unsigned int)IoPriorityThread, 0LL);
              v33 = v66;
            }
            if ( (v33 & 2) != 0 && *(_DWORD *)(v29 + 1448) )
            {
              v53 = ExGetExtensionTable(IopIoRateExtensionHost);
              if ( v53 )
              {
                (*(void (__fastcall **)(__int64))(v53 + 16))(v29);
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
              }
              v33 = v66;
            }
            if ( (v33 & 0xFF00) != 0 )
            {
              __incgsdword(0x8AECu);
              KeSetPriorityBoost(v29, *(unsigned __int8 *)(a1 + 27));
            }
            ObDereferenceObjectDeferDeleteWithTag((PVOID)v29, 0x746C6644u);
            v66 = 0;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
            v34 = *(_QWORD *)(a1 + 16);
            if ( !v34 )
              break;
            v30 = CurrentPrcb;
            if ( *(_DWORD *)(v34 + 8) != (_DWORD)CurrentPrcb )
              break;
          }
          else
          {
LABEL_54:
            v30 = CurrentPrcb;
          }
          ++v27;
        }
        while ( v27 < v30 );
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_44;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    Lock = (unsigned __int8)LockHandle.LockQueue.Lock;
    if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                     (volatile __int64 *)&Next->Lock,
                                     (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
    {
      _InterlockedOr(v57, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)&Next->Lock >> 5) & 0x7F], 0LL));
    }
    goto LABEL_44;
  }
  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_44:
  result = (unsigned int)KiIrqlFlags;
  v23 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v54 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v54 <= 0xFu && LockHandle.OldIrql <= 0xFu && v54 >= 2u )
    {
      v55 = KeGetCurrentPrcb();
      v56 = v55->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v4 = ((unsigned int)result & v56[5]) == 0;
      v56[5] &= result;
      if ( v4 )
        result = KiRemoveSystemWorkPriorityKick(v55);
    }
  }
  __writecr8(v23);
  return result;
}
