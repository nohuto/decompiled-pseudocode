/*
 * XREFs of IvtAttachDeviceDomainInternal @ 0x140529388
 * Callers:
 *     IvtAttachDeviceDomain @ 0x140529370 (IvtAttachDeviceDomain.c)
 *     IvtDetachDeviceDomain @ 0x140529CF0 (IvtDetachDeviceDomain.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     IvtFlushTbInternal @ 0x1403ABA60 (IvtFlushTbInternal.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IvtAllocateTranslationStructures @ 0x1405292FC (IvtAllocateTranslationStructures.c)
 *     IvtGetDomainId @ 0x14052A58C (IvtGetDomainId.c)
 *     IvtUpdateTranslationStructures @ 0x14052BCBC (IvtUpdateTranslationStructures.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IvtAttachDeviceDomainInternal(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int *v6; // rax
  _DWORD *v7; // rsi
  char v9; // r14
  __int64 result; // rax
  int v11; // eax
  unsigned __int8 CurrentIrql; // bl
  __int64 v13; // r12
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rdx
  __int64 DomainId; // rax
  int v17; // r8d
  unsigned __int8 v18; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v20; // r9
  int v21; // eax
  bool v22; // zf
  _QWORD *v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // r14
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  _QWORD *v33; // rdx
  unsigned __int64 v34; // rbx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r11
  _DWORD *v37; // r10
  int v38; // eax
  __int64 v39; // r9
  unsigned __int8 v40; // bl
  _DWORD *v41; // r8
  __int64 v42; // rcx
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  int v47; // [rsp+20h] [rbp-E0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v49[28]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v50[40]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v51; // [rsp+190h] [rbp+90h] BYREF
  __int64 v52; // [rsp+198h] [rbp+98h]
  __int64 v53; // [rsp+1A8h] [rbp+A8h]

  v53 = a4;
  v51 = 0LL;
  v6 = (unsigned int *)a2[7];
  v7 = (_DWORD *)a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v53 = a3;
  v9 = 0;
  result = IvtAllocateTranslationStructures(a1, *v6, a3, a4, &v51);
  if ( (int)result >= 0 )
  {
    memset(v49, 0, sizeof(v49));
    if ( !a3 )
    {
      v11 = *(_DWORD *)(a1 + 308);
      if ( v11 == 2 )
      {
        v49[1] = 1;
      }
      else if ( v11 != 1 )
      {
        return 3221225473LL;
      }
      v7 = v49;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    LODWORD(v13) = 0x8000;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v15) = 0x8000;
      else
        v15 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v15;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
    DomainId = IvtGetDomainId(a1, *(unsigned int *)a2[7]);
    v52 = DomainId;
    if ( v53 || DomainId == a2[3] )
    {
      IvtUpdateTranslationStructures(a1, a2[7], v17, v51, v47);
      v9 = 1;
      a2[3] = (unsigned int)v7[12];
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    if ( KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    if ( !v9 )
      return 0LL;
    if ( !v53 || a2[2] )
    {
      v24 = a2[2];
      *(_BYTE *)(v24 + 96) = HalpAcquireHighLevelLock((PKSPIN_LOCK)(v24 + 88));
      v23 = a2 + 5;
      v25 = a2[5];
      v26 = (__int64 *)a2[6];
      if ( *(__int64 **)(v25 + 8) != a2 + 5 || (_QWORD *)*v26 != v23 )
        goto LABEL_67;
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
      v27 = a2[2];
      v28 = *(unsigned __int8 *)(v27 + 96);
      KxReleaseSpinLock((volatile signed __int64 *)(v27 + 88));
      if ( KiIrqlFlags )
      {
        v29 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
          v22 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
      __writecr8(v28);
      _InterlockedAdd((volatile signed __int32 *)(a2[2] + 52), 0xFFFFFFFF);
      if ( !v53 )
        goto LABEL_48;
    }
    else
    {
      v23 = a2 + 5;
    }
    *((_BYTE *)v7 + 96) = HalpAcquireHighLevelLock((PKSPIN_LOCK)v7 + 11);
    v33 = (_QWORD *)*((_QWORD *)v7 + 8);
    if ( (_DWORD *)*v33 == v7 + 14 )
    {
      *v23 = v7 + 14;
      v23[1] = v33;
      *v33 = v23;
      *((_QWORD *)v7 + 8) = v23;
      v34 = *((unsigned __int8 *)v7 + 96);
      KxReleaseSpinLock((volatile signed __int64 *)v7 + 11);
      if ( KiIrqlFlags )
      {
        v35 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && (unsigned __int8)v34 <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
          v22 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
      __writecr8(v34);
      _InterlockedIncrement(v7 + 13);
LABEL_48:
      memset(v50, 0, 0x70uLL);
      v39 = v52;
      v50[12] = v52;
      v40 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v40 <= 0xFu )
      {
        v41 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v40 != 15 )
          v13 = (-1LL << (v40 + 1)) & 0xFFFC;
        v41[5] |= v13;
      }
      v42 = *a2;
      if ( v39 == 0x10000 )
      {
        v7 = 0LL;
      }
      else
      {
        IvtFlushTbInternal(a1, 0, (__int64)v50, 1, v42, 0LL, 0, 0LL);
        v42 = *a2;
      }
      IvtFlushTbInternal(a1, 0, (__int64)v7, 1, v42, 0LL, 0, 0LL);
      if ( KiIrqlFlags )
      {
        v43 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && v40 <= 0xFu && v43 >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          v45 = v44->SchedulerAssist;
          v46 = ~(unsigned __int16)(-1LL << (v40 + 1));
          v22 = (v46 & v45[5]) == 0;
          v45[5] &= v46;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v44);
        }
      }
      __writecr8(v40);
      return 0LL;
    }
LABEL_67:
    __fastfail(3u);
  }
  return result;
}
