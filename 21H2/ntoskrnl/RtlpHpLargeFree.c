/*
 * XREFs of RtlpHpLargeFree @ 0x140370928
 * Callers:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x140364128 (RtlpHpFreeHeap.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpFreeVA @ 0x140363E50 (RtlpHpFreeVA.c)
 *     RtlpHpMetadataFree @ 0x140370C00 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x140371248 (RtlpHpLargeLockAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x1405F1BBC (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  char v4; // si
  __int64 v5; // r13
  unsigned __int8 v6; // al
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  ULONG_PTR v12; // r15
  unsigned __int64 v13; // rax
  char v14; // cl
  __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // r13
  unsigned int SessionId; // ecx
  __int64 p_Process; // rsi
  unsigned int v20; // r8d
  struct _KTHREAD *v21; // rcx
  bool v22; // zf
  int v23; // r8d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // edx
  volatile signed __int64 *v28; // rsi
  struct _KTHREAD *v29; // r15
  unsigned int v30; // ecx
  __int64 v31; // rdi
  unsigned int v32; // r8d
  int v33; // r8d
  struct _KTHREAD *v34; // rcx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // edx
  __int128 v39; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp+58h] BYREF

  v41 = a2;
  v3 = 0LL;
  v42 = 0LL;
  v4 = a3;
  v5 = a1;
  v6 = RtlpHpLargeLockAcquire(a1, a3);
  v7 = (unsigned __int64 *)(v5 + 72);
  v8 = v6;
  if ( (*(_BYTE *)(v5 + 80) & 1) != 0 )
  {
    if ( *v7 )
      v9 = *v7 ^ (unsigned __int64)v7;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = *v7;
  }
  while ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( v41 >= v10 )
    {
      if ( v41 <= v10 )
      {
        RtlRbRemoveNode(v7, v9);
        if ( (v4 & 1) == 0 )
        {
          v12 = v5 + 64;
          if ( (*(_DWORD *)v5 & 1) != 0 )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
                  v22 = (v27 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v27;
                  if ( v22 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
            }
            __writecr8(v8);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v5 + 64);
            CurrentThread = KeGetCurrentThread();
            if ( v12 - qword_140C50630 >= 0x8000000000LL )
              SessionId = -1;
            else
              SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
            _disable();
            p_Process = (__int64)&CurrentThread[1].Process;
            v20 = 0;
            while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v12 & 0x7FFFFFFFFFFFFFFCLL)
                 || !*(_BYTE *)(p_Process + 18)
                 || (*(_DWORD *)p_Process & 1) != 0
                 || *(_DWORD *)(p_Process + 8) != SessionId )
            {
              ++v20;
              p_Process += 96LL;
              if ( v20 >= 6 )
                goto LABEL_32;
            }
            *(_BYTE *)(p_Process + 18) = 0;
            if ( !p_Process )
            {
LABEL_32:
              if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v12, SessionId, 0LL);
              _enable();
              goto LABEL_34;
            }
            if ( *(__int64 *)p_Process < 0 )
            {
              *(_BYTE *)p_Process |= 2u;
              _enable();
              KiAbEntryRemoveFromTree(p_Process);
              _disable();
            }
            v23 = *(_DWORD *)(p_Process + 88);
            *(_DWORD *)(p_Process + 88) = 0;
            *(_BYTE *)(p_Process + 17) = 0;
            *(_QWORD *)p_Process = 0LL;
            CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
            _enable();
            if ( v23 )
              KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v12, v23);
LABEL_34:
            v21 = KeGetCurrentThread();
            v22 = v21->SpecialApcDisable++ == -1;
            if ( v22 && ($CEA84C04E3712D858E5667A507841A2A *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
              KiCheckForKernelApcDelivery();
            v5 = a1;
          }
        }
        v13 = *(_QWORD *)(v9 + 32);
        v14 = (unsigned __int8)v13 >> 2;
        v39 = *(_OWORD *)v5;
        v15 = (((v13 >> 12) + ((v13 >> 1) & 1)) << 12) - 1;
        v42 = (1LL << v14) - (((1LL << v14) - 1) & ((1LL << v14) + v15)) + v15;
        RtlpHpFreeVA(&v41, &v42, 0x8000LL, &v39);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 96), -(*(_QWORD *)(v9 + 32) >> 12));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 88), -(__int64)(v42 >> 12));
        v39 = *(_OWORD *)v5;
        RtlpHpMetadataFree(v9, &v39);
        return v42;
      }
      v11 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v9;
    }
    if ( (*(_BYTE *)(v5 + 80) & 1) != 0 && v11 )
      v9 ^= v11;
    else
      v9 = v11;
  }
  if ( (v4 & 1) == 0 )
  {
    v28 = (volatile signed __int64 *)(v5 + 64);
    if ( (*(_DWORD *)v5 & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = v36->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v22 = (v38 & v37[5]) == 0;
            v37[5] &= v38;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
      }
      __writecr8(v8);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5 + 64);
      v29 = KeGetCurrentThread();
      if ( (unsigned __int64)v28 - qword_140C50630 >= 0x8000000000LL )
        v30 = -1;
      else
        v30 = MmGetSessionIdEx((__int64)v29->ApcState.Process);
      _disable();
      v31 = (__int64)&v29[1].Process;
      v32 = 0;
      while ( (*(_QWORD *)v31 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v28 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v31 + 18)
           || (*(_DWORD *)v31 & 1) != 0
           || *(_DWORD *)(v31 + 8) != v30 )
      {
        ++v32;
        v31 += 96LL;
        if ( v32 >= 6 )
          goto LABEL_69;
      }
      *(_BYTE *)(v31 + 18) = 0;
      if ( v31 )
      {
        if ( *(__int64 *)v31 < 0 )
        {
          *(_BYTE *)v31 |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(v31);
          _disable();
        }
        v33 = *(_DWORD *)(v31 + 88);
        *(_DWORD *)(v31 + 88) = 0;
        *(_BYTE *)(v31 + 17) = 0;
        *(_QWORD *)v31 = 0LL;
        v29->AbEntrySummary |= 1 << *(_BYTE *)(v31 + 16);
        _enable();
        if ( v33 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v29, v5 + 64, v33);
        goto LABEL_72;
      }
LABEL_69:
      if ( (*((_DWORD *)&v29->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v29, v5 + 64, v30, 0LL);
      _enable();
LABEL_72:
      v34 = KeGetCurrentThread();
      v22 = v34->SpecialApcDisable++ == -1;
      if ( v22 && ($CEA84C04E3712D858E5667A507841A2A *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
        KiCheckForKernelApcDelivery();
    }
  }
  RtlpLogHeapFailure(8, v5, v41, 0, 0LL, 0LL);
  return v3;
}
