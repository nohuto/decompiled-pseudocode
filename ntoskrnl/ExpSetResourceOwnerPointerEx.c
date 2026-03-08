/*
 * XREFs of ExpSetResourceOwnerPointerEx @ 0x1402911D0
 * Callers:
 *     ExSetResourceOwnerPointerEx @ 0x140291140 (ExSetResourceOwnerPointerEx.c)
 *     ExSetResourceOwnerPointer @ 0x140291180 (ExSetResourceOwnerPointer.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     PsBoostThreadIoQoS @ 0x14029176C (PsBoostThreadIoQoS.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1402917A4 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1405FE674 (PerfLogExecutiveResourceSetOwnerPointer.c)
 */

__int64 __fastcall ExpSetResourceOwnerPointerEx(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter4,
        char a3,
        ULONG_PTR CurrentPrcb)
{
  bool v7; // r14
  ULONG_PTR CurrentThread; // rsi
  unsigned __int64 v9; // r8
  unsigned int v10; // r15d
  unsigned __int8 CurrentIrql; // dl
  __int64 v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rdi
  ULONG_PTR v15; // r15
  unsigned __int64 v16; // rcx
  ULONG_PTR v17; // rax
  ULONG_PTR v18; // r15
  unsigned int v19; // ecx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // r12d
  ULONG_PTR v23; // r15
  signed __int64 v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 result; // rax
  unsigned __int64 v28; // rbx
  _DWORD *SchedulerAssist; // r10
  __int64 v30; // r11
  int v31; // eax
  int *v32; // r12
  int v33; // eax
  ULONG_PTR v34; // rdi
  _QWORD *v35; // rcx
  unsigned __int8 v36; // cl
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned __int8 v41; // cl
  bool v42; // zf
  signed __int32 v43[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v44; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v45; // [rsp+38h] [rbp-40h]
  __int64 v46; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v46 = 0LL;
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  CurrentThread = (ULONG_PTR)KeGetCurrentThread();
  v9 = BugCheckParameter1 + 96;
  v45 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v44 = 0LL;
  v10 = 65792;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v12 = (unsigned __int8)v44 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v30) = 4;
    else
      v30 = (v12 << (CurrentIrql + 1)) & 4;
    CurrentPrcb = (unsigned int)v30 | SchedulerAssist[5];
    SchedulerAssist[5] = CurrentPrcb;
  }
  LOBYTE(v46) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v44, v9);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)v9, (__int64)&v44) )
  {
    KxWaitForLockOwnerShip(&v44);
  }
  if ( *(char *)(BugCheckParameter1 + 26) < 0 )
  {
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(BugCheckParameter1)
      && *(_QWORD *)(BugCheckParameter1 + 48) != CurrentThread )
    {
      KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 5uLL);
    }
    if ( (a3 & 1) != 0 )
    {
      if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
        KeBugCheckEx(
          0x132u,
          BugCheckParameter1,
          *(_QWORD *)(BugCheckParameter1 + 16),
          CurrentThread,
          BugCheckParameter4);
      ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
      *(_DWORD *)(BugCheckParameter1 + 56) |= 2u;
    }
    else
    {
      v38 = *(_DWORD *)(BugCheckParameter1 + 56);
      if ( (v38 & 1) != 0 )
      {
        PsBoostThreadIoEx(*(_QWORD *)(BugCheckParameter1 + 48), 1, 0, 0LL);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
        v38 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v38 & 4) != 0 )
      {
        PsBoostThreadIoQoS(*(_QWORD *)(BugCheckParameter1 + 48), 1LL);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 48) = BugCheckParameter4;
    __incgsdword(0x8AD4u);
    if ( v7 )
      v10 = 65824;
  }
  else
  {
    v13 = *(_QWORD *)(BugCheckParameter1 + 48);
    v14 = (_QWORD *)(BugCheckParameter1 + 48);
    if ( v13 == BugCheckParameter4 )
    {
      v18 = BugCheckParameter1 + 48;
    }
    else
    {
      v15 = *(_QWORD *)(BugCheckParameter1 + 16);
      v16 = v13 != 0;
      v9 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      CurrentPrcb = v15;
      if ( v15 && (v17 = v15 + 16LL * *(unsigned int *)(v15 + 8), v18 = v15 + 16, v16 < v9) )
      {
        while ( *(_QWORD *)v18 != BugCheckParameter4 )
        {
          if ( !*(_QWORD *)v18 || (++v16, v16 != v9) )
          {
            v18 += 16LL;
            if ( v18 != v17 )
              continue;
          }
          goto LABEL_12;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(v18 - CurrentPrcb) >> 4;
      }
      else
      {
LABEL_12:
        v18 = 0LL;
      }
    }
    if ( (CurrentThread & 3) != 0 )
      v19 = 0;
    else
      v19 = *(unsigned __int8 *)(CurrentThread + 1120);
    if ( *v14 != CurrentThread )
    {
      v20 = *v14 != 0LL;
      if ( !v19
        || (v21 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
        || v19 >= *(_DWORD *)(v21 + 8)
        || (v14 = (_QWORD *)(v21 + 16LL * v19), *v14 != CurrentThread) )
      {
        v34 = *(_QWORD *)(BugCheckParameter1 + 16);
        CurrentPrcb = v34;
        v9 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
        if ( !v34 || (v35 = (_QWORD *)(v34 + 16LL * *(unsigned int *)(v34 + 8)), v14 = (_QWORD *)(v34 + 16), v20 >= v9) )
LABEL_107:
          KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, CurrentPrcb, 4uLL);
        while ( *v14 != CurrentThread )
        {
          if ( !*v14 || (++v20, v20 != v9) )
          {
            v14 += 2;
            if ( v14 != v35 )
              continue;
          }
          goto LABEL_107;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)((__int64)v14 - CurrentPrcb) >> 4;
      }
    }
    v22 = a3 & 1;
    if ( v18 )
    {
      if ( v22 )
      {
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        v37 = *((_DWORD *)v14 + 2);
        v32 = (int *)(v14 + 1);
        if ( (v37 & 1) != 0 )
        {
          v39 = *(_DWORD *)(v18 + 8);
          if ( (v39 & 1) != 0 )
            PsBoostThreadIoEx(*v14, 1, 0, 0LL);
          else
            *(_DWORD *)(v18 + 8) = v39 | 1;
          *v32 &= ~1u;
          v37 = *v32;
        }
        if ( (v37 & 4) != 0 )
        {
          v40 = *(_DWORD *)(v18 + 8);
          if ( (v40 & 4) != 0 )
            PsBoostThreadIoQoS(*v14, 1LL);
          else
            *(_DWORD *)(v18 + 8) = v40 | 4;
          *v32 &= ~4u;
        }
        if ( (*(_DWORD *)(v18 + 8) & 2) == 0 )
        {
          ObfReferenceObjectWithTag((PVOID)*v14, 0x746C6644u);
          *(_DWORD *)(v18 + 8) |= 2u;
        }
      }
      else
      {
        v31 = *((_DWORD *)v14 + 2);
        v32 = (int *)(v14 + 1);
        if ( (v31 & 1) != 0 )
        {
          PsBoostThreadIoEx(*v14, 1, 0, 0LL);
          *v32 &= ~1u;
          v31 = *v32;
        }
        if ( (v31 & 4) != 0 )
        {
          PsBoostThreadIoQoS(*v14, 1LL);
          *v32 &= ~4u;
        }
      }
      v25 = 35548;
      *(_DWORD *)(v18 + 8) = (*v32 + (*(_DWORD *)(v18 + 8) & 0xFFFFFFF8)) ^ (*v32 ^ *(_DWORD *)(v18 + 8)) & 7;
      *v32 &= 7u;
      *v14 = 0LL;
      --*(_DWORD *)(BugCheckParameter1 + 64);
    }
    else
    {
      if ( v22 )
      {
        v23 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        if ( ObpTraceFlags )
          ObpPushStackInfo(v23 - 48);
        v24 = _InterlockedIncrement64((volatile signed __int64 *)(v23 - 48));
        if ( v24 <= 1 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL, 0x10uLL, v24);
        *((_DWORD *)v14 + 2) |= 2u;
      }
      else
      {
        v33 = *((_DWORD *)v14 + 2);
        if ( (v33 & 1) != 0 )
        {
          PsBoostThreadIoEx(*v14, 1, 0, 0LL);
          *((_DWORD *)v14 + 2) &= ~1u;
          v33 = *((_DWORD *)v14 + 2);
        }
        if ( (v33 & 4) != 0 )
        {
          PsBoostThreadIoQoS(*v14, 1LL);
          *((_DWORD *)v14 + 2) &= ~4u;
        }
      }
      *v14 = BugCheckParameter4;
      v25 = 35544;
    }
    __incgsdword(v25);
    v12 = -1LL;
    if ( v7 )
      v10 = 65856;
    else
      v10 = 65792;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v44, retaddr);
    goto LABEL_33;
  }
  _m_prefetchw(&v44);
  v26 = v44;
  if ( !v44 )
  {
    if ( (__int64 *)_InterlockedCompareExchange64(v45, 0LL, (signed __int64)&v44) == &v44 )
      goto LABEL_33;
    v26 = KxWaitForLockChainValid(&v44);
  }
  v44 = 0LL;
  v36 = (unsigned __int8)v45;
  if ( ((v36 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v26 + 8), (__int64)v45)) & 4) != 0 )
  {
    _InterlockedOr(v43, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v26 + 8) >> 5) & 0x7F], 0LL));
  }
LABEL_33:
  result = (unsigned int)KiIrqlFlags;
  v28 = (unsigned __int8)v46;
  if ( KiIrqlFlags )
  {
    v41 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v41 <= 0xFu && (unsigned __int8)v46 <= 0xFu && v41 >= 2u )
    {
      CurrentPrcb = (ULONG_PTR)KeGetCurrentPrcb();
      v9 = *(_QWORD *)(CurrentPrcb + 35000);
      result = ~(unsigned __int16)(v12 << ((unsigned __int8)v46 + 1));
      v42 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
      *(_DWORD *)(v9 + 20) &= result;
      if ( v42 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v28);
  if ( v7 )
    return PerfLogExecutiveResourceSetOwnerPointer(v10, BugCheckParameter1, v9, CurrentPrcb);
  return result;
}
