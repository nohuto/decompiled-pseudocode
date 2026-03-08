/*
 * XREFs of ExpReleaseResourceForThreadLite @ 0x14033ABF0
 * Callers:
 *     SepMandatoryIntegrityCheck @ 0x140263A50 (SepMandatoryIntegrityCheck.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14033AA70 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 * Callees:
 *     ExpReleaseResourceSharedForThreadLite @ 0x14025D990 (ExpReleaseResourceSharedForThreadLite.c)
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     KeCaptureWaitChainHeadEx @ 0x1402D3E54 (KeCaptureWaitChainHeadEx.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeWakeWaitChain @ 0x14033AF30 (KeWakeWaitChain.c)
 *     ExpFreeOwnerEntry @ 0x14033B150 (ExpFreeOwnerEntry.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405FE480 (PerfLogExecutiveResourceRelease.c)
 */

char __fastcall ExpReleaseResourceForThreadLite(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  volatile __int64 *v2; // r8
  unsigned __int8 CurrentIrql; // r9
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // r8
  __int16 v8; // cx
  bool v9; // r15
  _QWORD *v10; // r14
  unsigned int v11; // edi
  unsigned int v12; // edi
  int v13; // ecx
  unsigned int v14; // r13d
  _DWORD *v15; // rdi
  int v16; // edx
  unsigned int v17; // esi
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // r8
  int v21; // eax
  unsigned int v22; // esi
  _DWORD *SchedulerAssist; // r10
  __int64 v24; // r11
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  int v27; // edx
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v31; // r8
  bool v32; // zf
  unsigned __int8 v33; // cl
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  signed __int32 v38[8]; // [rsp+0h] [rbp-60h] BYREF
  volatile signed __int64 *v39; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int64 *v40; // [rsp+38h] [rbp-28h]
  __int64 v41; // [rsp+40h] [rbp-20h]
  void *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v43; // [rsp+90h] [rbp+30h] BYREF
  __int64 v44; // [rsp+A0h] [rbp+40h] BYREF

  v2 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v41 = 0LL;
  v40 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v39 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = (unsigned __int8)v39 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v24) = 4;
    else
      v24 = (v6 << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v24;
  }
  LOBYTE(v41) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v39, v2);
  }
  else if ( _InterlockedExchange64(v2, (__int64)&v39) )
  {
    KxWaitForLockOwnerShip(&v39);
  }
  CurrentThread = KeGetCurrentThread();
  v8 = *(_WORD *)(BugCheckParameter1 + 26);
  if ( ((v8 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && (BugCheckParameter2 & 3) != 3
    && (struct _KTHREAD *)BugCheckParameter2 != CurrentThread )
  {
    KeBugCheckEx(0x16Eu, BugCheckParameter1, (ULONG_PTR)CurrentThread, BugCheckParameter2, 0LL);
  }
  if ( (v8 & 0x80u) == 0 )
  {
    LOBYTE(v21) = ExpReleaseResourceSharedForThreadLite(BugCheckParameter1, BugCheckParameter2, &v39);
    return v21;
  }
  v44 = 0LL;
  v9 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( (v8 & 1) != 0 || ExpResourceEnforceOwnerTransfer )
  {
    v10 = (_QWORD *)(BugCheckParameter1 + 48);
    if ( *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter2 )
      KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, *(_QWORD *)(BugCheckParameter1 + 16), 1uLL);
  }
  else
  {
    v10 = (_QWORD *)(BugCheckParameter1 + 48);
  }
  v11 = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | (8 * (*(_DWORD *)(BugCheckParameter1 + 56) >> 3) - 8);
  *(_DWORD *)(BugCheckParameter1 + 56) = v11;
  v12 = v11 >> 3;
  if ( v12 )
  {
    v14 = *(_DWORD *)(BugCheckParameter1 + 68);
    v22 = 65586;
    KxReleaseQueuedSpinLock(&v39);
    LOBYTE(v21) = KiIrqlFlags;
    v25 = (unsigned __int8)v41;
    if ( KiIrqlFlags )
    {
      v29 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v29 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v31 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(v6 << ((unsigned __int8)v41 + 1));
        v32 = (v21 & v31[5]) == 0;
        v31[5] &= v21;
        if ( v32 )
          LOBYTE(v21) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v25);
    goto LABEL_27;
  }
  ExpFreeOwnerEntry(v10);
  v13 = *(_DWORD *)(BugCheckParameter1 + 72);
  v14 = *(_DWORD *)(BugCheckParameter1 + 68);
  v15 = (_DWORD *)(BugCheckParameter1 + 76);
  v43 = 0LL;
  if ( v13 )
  {
    v26 = *(_QWORD *)(BugCheckParameter1 + 32);
    *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
    v27 = *(_DWORD *)(BugCheckParameter1 + 64);
    v44 = v26;
    *(_DWORD *)(BugCheckParameter1 + 72) = 0;
    *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
    v16 = v13 + v27 - 1;
  }
  else if ( *v15 )
  {
    KeCaptureWaitChainHeadEx((_QWORD **)(BugCheckParameter1 + 40), &v44, &v43);
    v16 = *(_DWORD *)(BugCheckParameter1 + 64);
    --*v15;
  }
  else
  {
    *(_WORD *)(BugCheckParameter1 + 24) = 0;
    *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
    v16 = 0;
  }
  *(_DWORD *)(BugCheckParameter1 + 64) = v16;
  if ( !*v15 && !*(_DWORD *)(BugCheckParameter1 + 72) )
    *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
  v17 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
  if ( v43 )
  {
    *v10 = v43;
    *(_DWORD *)(BugCheckParameter1 + 56) = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | 8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v39);
    v18 = (__int64)v39;
    if ( !v39 )
    {
      if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v40, 0LL, (signed __int64)&v39) == &v39 )
        goto LABEL_23;
      v18 = KxWaitForLockChainValid((__int64 *)&v39);
    }
    v39 = 0LL;
    v28 = (unsigned __int8)v40;
    if ( ((v28 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v18 + 8), (__int64)v40)) & 4) != 0 )
    {
      _InterlockedOr(v38, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v18 + 8) >> 5) & 0x7F], 0LL));
    }
    goto LABEL_23;
  }
  KiReleaseQueuedSpinLockInstrumented(&v39, retaddr);
LABEL_23:
  v19 = (unsigned __int8)v41;
  if ( KiIrqlFlags )
  {
    v33 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v33 >= 2u )
    {
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
      v32 = (v36 & v35[5]) == 0;
      v35[5] &= v36;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick(v34);
    }
  }
  __writecr8(v19);
  v20 = 3LL;
  if ( !v43 )
    v20 = 1LL;
  LOBYTE(v21) = KeWakeWaitChain(&v44, v17, v20);
  v22 = 65570;
  v12 = 0;
LABEL_27:
  __incgsdword(0x8A6Cu);
  if ( v9 )
    LOBYTE(v21) = PerfLogExecutiveResourceRelease(v22, BugCheckParameter1, v12, v14);
  return v21;
}
