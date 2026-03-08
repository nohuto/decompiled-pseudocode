/*
 * XREFs of PspReaper @ 0x1402A75B0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeEnumerateKernelStackSegments @ 0x1402A76A0 (KeEnumerateKernelStackSegments.c)
 *     KiWaitForContextSwap @ 0x1402A77E8 (KiWaitForContextSwap.c)
 *     KiDecrementProcessStackCount @ 0x1402A7824 (KiDecrementProcessStackCount.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

signed __int64 PspReaper()
{
  _QWORD *v0; // rdi
  _QWORD *v1; // rbx
  __int64 *v2; // rsi
  __int64 *v3; // rsi
  void *v4; // rcx
  signed __int64 result; // rax
  KIRQL v6; // al
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 **v9; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  KIRQL v15; // al
  __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  __int64 **v18; // rdx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax

  do
  {
    v0 = (_QWORD *)_InterlockedExchange64(&PsReaperListHead, 1LL);
    do
    {
      v1 = v0 - 149;
      KiWaitForContextSwap(v0 - 149);
      KiDecrementProcessStackCount(*(v0 - 126));
      v2 = v0 - 39;
      if ( *v2 != 1 )
      {
        v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C42198);
        v7 = *v2;
        v8 = v6;
        if ( *v2 != 1 && v1[111] )
        {
          v9 = (__int64 **)v1[111];
          if ( *(__int64 **)(v7 + 8) != v2 || *v9 != v2 )
LABEL_39:
            __fastfail(3u);
          *v9 = (__int64 *)v7;
          *(_QWORD *)(v7 + 8) = v9;
        }
        KxReleaseSpinLock((volatile signed __int64 *)&qword_140C42198);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v14 = (v13 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v8);
      }
      v3 = v1 + 126;
      if ( v1[126] != 1LL )
      {
        v15 = KeAcquireSpinLockRaiseToDpc(&KiUpdateVpThreadPriorityLock);
        v16 = *v3;
        v17 = v15;
        if ( *v3 != 1 && v1[127] )
        {
          v18 = (__int64 **)v1[127];
          if ( *(__int64 **)(v16 + 8) != v3 || *v18 != v3 )
            goto LABEL_39;
          *v18 = (__int64 *)v16;
          *(_QWORD *)(v16 + 8) = v18;
        }
        KxReleaseSpinLock((volatile signed __int64 *)&KiUpdateVpThreadPriorityLock);
        if ( KiIrqlFlags )
        {
          v19 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v19 >= 2u )
          {
            v20 = KeGetCurrentPrcb();
            v21 = v20->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
            v14 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        __writecr8(v17);
      }
      v4 = (void *)v1[188];
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        v1[188] = 0LL;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 363, 0xFFFFFFFF) == 1 )
      {
        KeEnumerateKernelStackSegments(v0 - 149, PspDeleteKernelStack, 0LL);
        v1[5] = 0LL;
      }
      v0 = (_QWORD *)*v0;
      ObfDereferenceObjectWithTag(v1, 0x746C6644u);
    }
    while ( v0 && v0 != (_QWORD *)1 );
    result = _InterlockedCompareExchange64(&PsReaperListHead, 0LL, 1LL);
  }
  while ( result != 1 );
  return result;
}
