/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x1402491D0
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x140362540 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegContextInitialize @ 0x14036F8F8 (RtlpHpSegContextInitialize.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpQueryVA @ 0x140362864 (RtlpHpQueryVA.c)
 *     RtlpHpAcquireLockExclusive @ 0x140365AF4 (RtlpHpAcquireLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  unsigned __int16 *v4; // r14
  unsigned __int16 v5; // ax
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rbp
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // r8d
  struct _KTHREAD *v17; // rcx
  bool v18; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // edx
  __int128 v22; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int16 *v23; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_OWORD *)(a1 + 40);
  v23 = 0LL;
  v22 = v2;
  RtlpHpQueryVA(a2, &v22, &v23, 0LL);
  v4 = v23;
  v5 = *v23;
  *v23 ^= (*v23 ^ (*v23 + 1)) & 0x7FF;
  if ( ((v5 ^ (v5 ^ (v5 + 1)) & 0x7FF) & 0x8000u) != 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), 1uLL);
    v4 = v23;
  }
  v6 = a1 + 112;
  v7 = (unsigned __int64)*v4 >> 15;
  v8 = RtlpHpAcquireLockExclusive(a1 + 112, *(_DWORD *)(a1 + 40) & 1);
  *((_QWORD *)v4 + 1) = *(_QWORD *)(a1 + 8 * v7 + 120);
  *(_QWORD *)(a1 + 8 * v7 + 120) = v4 + 4;
  v9 = v8;
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          result = -1LL << ((unsigned __int8)v9 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)result;
          v18 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v18 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 112);
    CurrentThread = KeGetCurrentThread();
    if ( v6 - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    _disable();
    p_Process = (char *)&CurrentThread[1].Process;
    v14 = v6 & 0x7FFFFFFFFFFFFFFCLL;
    v15 = 0LL;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v14
         || !p_Process[18]
         || (*(_DWORD *)p_Process & 1) != 0
         || *((_DWORD *)p_Process + 2) != SessionId )
    {
      v15 = (unsigned int)(v15 + 1);
      p_Process += 96;
      if ( (unsigned int)v15 >= 6 )
        goto LABEL_23;
    }
    p_Process[18] = 0;
    if ( p_Process )
    {
      if ( *(__int64 *)p_Process < 0 )
      {
        *p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process, v15, v14);
        _disable();
      }
      v16 = *((_DWORD *)p_Process + 22);
      *((_DWORD *)p_Process + 22) = 0;
      p_Process[17] = 0;
      *(_QWORD *)p_Process = 0LL;
      result = (unsigned __int8)p_Process[16];
      CurrentThread->AbEntrySummary |= 1 << result;
      _enable();
      if ( v16 )
        result = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v6, v16);
      goto LABEL_26;
    }
LABEL_23:
    result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, SessionId, 0LL);
    _enable();
LABEL_26:
    v17 = KeGetCurrentThread();
    v18 = v17->SpecialApcDisable++ == -1;
    if ( v18 )
    {
      result = (__int64)&v17->152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
