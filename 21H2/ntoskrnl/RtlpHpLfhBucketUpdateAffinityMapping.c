/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x14037039C
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14034A490 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140355110 (KeGetCurrentProcessorNumberEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140365AF4 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x140370898 (RtlpHpLfhBucketAllocateSlot.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // al
  unsigned int v5; // r8d
  __int64 v6; // rcx
  unsigned int SessionId; // r12d
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 Slot; // rax
  ULONG_PTR v12; // rdi
  KIRQL v13; // al
  unsigned __int8 *v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int8 *v16; // r10
  unsigned int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // r8d
  _BYTE *v22; // rcx
  unsigned __int8 v23; // al
  struct _KTHREAD *v24; // rsi
  __int64 p_Process; // rbx
  unsigned int v26; // ecx
  int v27; // r8d
  struct _KTHREAD *v28; // rcx
  bool v29; // zf
  __int64 v30; // r8
  struct _KTHREAD *v31; // r14
  __int64 v32; // rbx
  unsigned int v33; // ecx
  int v34; // r8d
  struct _KTHREAD *v35; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // ecx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v42; // edx
  signed __int32 v44[8]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+30h] [rbp-98h]
  _BYTE v46[64]; // [rsp+40h] [rbp-88h] BYREF

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v5 = *(unsigned __int8 *)(a1 + 56);
  v6 = CurrentProcessorNumber & 0x3F;
  SessionId = -1;
  if ( (unsigned int)v6 >= v5 )
  {
    if ( (_DWORD)v6 == v5 || (_BYTE)v5 == 1 )
      v6 = 0LL;
    else
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + -1 - v5 + (unsigned int)v6);
  }
  Slot = *(_QWORD *)(a2 + 88);
  CurrentThread = KeGetCurrentThread();
  v9 = (unsigned int)v6;
  v45 = (unsigned int)v6;
  v10 = *(unsigned __int8 *)(v6 + Slot);
  LODWORD(Slot) = BYTE5(CurrentThread[1].Spare18);
  if ( (_DWORD)Slot != (_DWORD)v6 )
  {
    BYTE5(CurrentThread[1].Spare18) = v6;
    return Slot;
  }
  memset(v46, 0, sizeof(v46));
  v12 = a2 + 80;
  v13 = RtlpHpAcquireLockExclusive((volatile LONG *)(a2 + 80), *(unsigned __int8 *)(a1 + 57));
  v14 = *(unsigned __int8 **)(a2 + 88);
  v15 = v13;
  v16 = &v14[v9];
  if ( (_BYTE)v10 != v14[v9] )
    goto LABEL_16;
  v17 = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v17 )
  {
    v18 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v19 = *v14++;
      ++v46[v19];
      --v18;
    }
    while ( v18 );
  }
  if ( v46[v10] == 1 )
    goto LABEL_16;
  v20 = (unsigned int)(v10 + 1);
  v21 = v20;
  if ( (unsigned int)v20 < v17 )
  {
    v22 = &v46[(unsigned int)v20];
    do
    {
      if ( !*v22 )
        break;
      if ( *v22 < v46[v20] )
        v20 = v21;
      ++v21;
      ++v22;
    }
    while ( v21 < v17 );
  }
  if ( v46[v20] )
  {
    *v16 = v20;
LABEL_16:
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 80));
      LOBYTE(Slot) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(Slot) = KeGetCurrentIrql();
          if ( (unsigned __int8)Slot <= 0xFu && (unsigned __int8)v15 <= 0xFu && (unsigned __int8)Slot >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            Slot = -1LL << ((unsigned __int8)v15 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v42 = ~(unsigned __int16)Slot;
            v29 = (v42 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v42;
            if ( v29 )
              LOBYTE(Slot) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v15);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a2 + 80);
      v24 = KeGetCurrentThread();
      if ( v12 - qword_140C50630 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)v24->ApcState.Process);
      _disable();
      p_Process = (__int64)&v24[1].Process;
      v26 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v12 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != SessionId )
      {
        ++v26;
        p_Process += 96LL;
        if ( v26 >= 6 )
          goto LABEL_37;
      }
      *(_BYTE *)(p_Process + 18) = 0;
      if ( p_Process )
      {
        if ( *(__int64 *)p_Process < 0 )
        {
          *(_BYTE *)p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process);
          _disable();
        }
        v27 = *(_DWORD *)(p_Process + 88);
        *(_DWORD *)(p_Process + 88) = 0;
        *(_BYTE *)(p_Process + 17) = 0;
        *(_QWORD *)p_Process = 0LL;
        LOBYTE(Slot) = *(_BYTE *)(p_Process + 16);
        v24->AbEntrySummary |= 1 << Slot;
        _enable();
        if ( v27 )
          LOBYTE(Slot) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)v24, v12, v27);
        goto LABEL_33;
      }
LABEL_37:
      LODWORD(Slot) = *((_DWORD *)&v24->0 + 1);
      if ( (Slot & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v24, v12, SessionId, 0LL);
      _enable();
LABEL_33:
      v28 = KeGetCurrentThread();
      v29 = v28->SpecialApcDisable++ == -1;
      if ( v29 )
      {
        Slot = (__int64)&v28->152;
        if ( *(_QWORD *)Slot != Slot )
          LOBYTE(Slot) = KiCheckForKernelApcDelivery();
      }
    }
    return Slot;
  }
  v23 = *(_BYTE *)(a2 + 77);
  if ( v23 < 0x1Eu )
  {
    *(_BYTE *)(a2 + 77) = v23 + 1;
    goto LABEL_16;
  }
  if ( *(_BYTE *)(a1 + 57) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 80));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v29 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v37);
        }
      }
    }
    __writecr8(v15);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 80);
    v31 = KeGetCurrentThread();
    if ( v12 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v31->ApcState.Process);
    _disable();
    v32 = (__int64)&v31[1].Process;
    v33 = 0;
    while ( (*(_QWORD *)v32 & 0x7FFFFFFFFFFFFFFCLL) != (v12 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v32 + 18)
         || (*(_DWORD *)v32 & 1) != 0
         || *(_DWORD *)(v32 + 8) != SessionId )
    {
      ++v33;
      v32 += 96LL;
      if ( v33 >= 6 )
        goto LABEL_69;
    }
    *(_BYTE *)(v32 + 18) = 0;
    if ( v32 )
    {
      if ( *(__int64 *)v32 < 0 )
      {
        *(_BYTE *)v32 |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(v32);
        _disable();
      }
      v34 = *(_DWORD *)(v32 + 88);
      *(_DWORD *)(v32 + 88) = 0;
      *(_BYTE *)(v32 + 17) = 0;
      *(_QWORD *)v32 = 0LL;
      v31->AbEntrySummary |= 1 << *(_BYTE *)(v32 + 16);
      _enable();
      if ( v34 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v31, a2 + 80, v34);
      goto LABEL_64;
    }
LABEL_69:
    if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v31, a2 + 80, SessionId, 0LL);
    _enable();
LABEL_64:
    v35 = KeGetCurrentThread();
    v29 = v35->SpecialApcDisable++ == -1;
    if ( v29 && ($CEA84C04E3712D858E5667A507841A2A *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
      KiCheckForKernelApcDelivery();
    v9 = v45;
  }
  v45 = 0LL;
  v30 = *(_QWORD *)(a2 + 96);
  LOWORD(v45) = 2;
  Slot = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 8 * v20), 2LL, 0LL);
  if ( !Slot )
  {
    Slot = RtlpHpLfhBucketAllocateSlot(a1, a2, (unsigned int)v20);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v20) = Slot;
    if ( Slot )
    {
      _InterlockedOr(v44, 0);
      *(_BYTE *)(a2 + 2) = v20 + 1;
      Slot = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v9 + Slot) = v20;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
  return Slot;
}
