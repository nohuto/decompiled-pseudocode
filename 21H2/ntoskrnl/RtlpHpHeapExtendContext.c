/*
 * XREFs of RtlpHpHeapExtendContext @ 0x14036F04C
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x14036F030 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpAllocVA @ 0x140351E90 (RtlpHpAllocVA.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140365AF4 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x14036F354 (RtlpHpAcquireReleaseLockExclusive.c)
 *     RtlpHpMetadataCommit @ 0x14036F520 (RtlpHpMetadataCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall RtlpHpHeapExtendContext(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  unsigned int v5; // r12d
  signed __int64 v6; // r14
  KIRQL v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int128 v12; // xmm0
  __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  int v15; // eax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v17; // ecx
  __int64 p_Process; // rsi
  unsigned int v19; // edx
  int v20; // r8d
  struct _KTHREAD *v21; // rcx
  bool v22; // zf
  unsigned int SessionId; // ecx
  unsigned int v24; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  struct _KTHREAD *v29; // rsi
  __int64 v30; // rbx
  unsigned int v31; // ecx
  int v32; // r8d
  struct _KTHREAD *v33; // rcx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  int v36; // edx
  _DWORD *v37; // r9
  __int128 v38; // [rsp+30h] [rbp-58h] BYREF
  __int128 v39[4]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v40; // [rsp+90h] [rbp+8h] BYREF
  __int64 v41; // [rsp+98h] [rbp+10h] BYREF

  v40 = 0LL;
  v2 = a1 + 224;
  v41 = 0LL;
  RtlpHpAcquireReleaseLockExclusive(a1 + 224);
  v5 = -1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(a1 + 232);
        if ( (unsigned __int64)(v6 + a2) > *(_QWORD *)(a1 + 240) )
          break;
        if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 232), v6 + a2, v6) )
          return v6;
      }
      v8 = RtlpHpAcquireLockExclusive((volatile LONG *)v2, *(_DWORD *)a1 & 1);
      v9 = *(_QWORD *)(a1 + 232);
      v10 = *(_QWORD *)(a1 + 240);
      v11 = v8;
      if ( v9 + a2 > v10 )
        break;
      if ( (*(_DWORD *)a1 & 1) != 0 )
        goto LABEL_31;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v2);
      CurrentThread = KeGetCurrentThread();
      if ( v2 - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      _disable();
      p_Process = (__int64)&CurrentThread[1].Process;
      v24 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v2 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != SessionId )
      {
        ++v24;
        p_Process += 96LL;
        if ( v24 >= 6 )
          goto LABEL_48;
      }
      *(_BYTE *)(p_Process + 18) = 0;
      if ( p_Process )
      {
LABEL_20:
        if ( *(__int64 *)p_Process < 0 )
        {
          *(_BYTE *)p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process);
          _disable();
        }
        v20 = *(_DWORD *)(p_Process + 88);
        *(_DWORD *)(p_Process + 88) = 0;
        *(_BYTE *)(p_Process + 17) = 0;
        *(_QWORD *)p_Process = 0LL;
        CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
        _enable();
        if ( v20 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v2, v20);
        goto LABEL_24;
      }
LABEL_48:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
LABEL_29:
      _enable();
LABEL_24:
      v21 = KeGetCurrentThread();
      v22 = v21->SpecialApcDisable++ == -1;
      if ( v22 && ($CEA84C04E3712D858E5667A507841A2A *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
        KiCheckForKernelApcDelivery();
    }
    v12 = *(_OWORD *)a1;
    v13 = v9 - v10;
    v41 = *(_QWORD *)(a1 + 240);
    v14 = (v13 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v40 = v14;
    if ( (*(_BYTE *)(a1 + 30) & 1) != 0 )
    {
      v38 = v12;
      v15 = RtlpHpMetadataCommit(a1, v10, (v13 + a2 + 4095) & 0xFFFFF000, (unsigned int)&v38, 1);
    }
    else
    {
      v39[0] = v12;
      v15 = RtlpHpAllocVA(&v41, (__int64 *)&v40, 0LL, 4096, 4, v39);
      v14 = v40;
    }
    v6 = 0LL;
    if ( v15 < 0 )
      break;
    *(_QWORD *)(a1 + 240) += v14;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), v14 >> 12);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v2);
      CurrentThread = KeGetCurrentThread();
      if ( v2 - qword_140C50630 < 0x8000000000LL )
        v17 = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        v17 = -1;
      _disable();
      p_Process = (__int64)&CurrentThread[1].Process;
      v19 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v2 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != v17 )
      {
        ++v19;
        p_Process += 96LL;
        if ( v19 >= 6 )
          goto LABEL_28;
      }
      *(_BYTE *)(p_Process + 18) = 0;
      if ( p_Process )
        goto LABEL_20;
LABEL_28:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, v17, 0LL);
      goto LABEL_29;
    }
LABEL_31:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v22 = (v28 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v28;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
  }
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v37 = v35->SchedulerAssist;
          v22 = (v36 & v37[5]) == 0;
          v37[5] &= v36;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
    }
    __writecr8(v11);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    v29 = KeGetCurrentThread();
    if ( v2 - qword_140C50630 < 0x8000000000LL )
      v5 = MmGetSessionIdEx((__int64)v29->ApcState.Process);
    _disable();
    v30 = (__int64)&v29[1].Process;
    v31 = 0;
    while ( (*(_QWORD *)v30 & 0x7FFFFFFFFFFFFFFCLL) != (v2 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v30 + 18)
         || (*(_DWORD *)v30 & 1) != 0
         || *(_DWORD *)(v30 + 8) != v5 )
    {
      ++v31;
      v30 += 96LL;
      if ( v31 >= 6 )
        goto LABEL_73;
    }
    *(_BYTE *)(v30 + 18) = 0;
    if ( v30 )
    {
      if ( *(__int64 *)v30 < 0 )
      {
        *(_BYTE *)v30 |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(v30);
        _disable();
      }
      v32 = *(_DWORD *)(v30 + 88);
      *(_DWORD *)(v30 + 88) = 0;
      *(_BYTE *)(v30 + 17) = 0;
      *(_QWORD *)v30 = 0LL;
      v29->AbEntrySummary |= 1 << *(_BYTE *)(v30 + 16);
      _enable();
      if ( v32 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v29, v2, v32);
      goto LABEL_76;
    }
LABEL_73:
    if ( (*((_DWORD *)&v29->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v29, v2, v5, 0LL);
    _enable();
LABEL_76:
    v33 = KeGetCurrentThread();
    v22 = v33->SpecialApcDisable++ == -1;
    if ( v22 && ($CEA84C04E3712D858E5667A507841A2A *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
      KiCheckForKernelApcDelivery();
  }
  return v6;
}
