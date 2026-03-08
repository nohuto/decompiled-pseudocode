/*
 * XREFs of EtwpQueueStackWalkApc @ 0x140460526
 * Callers:
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     EtwpStackTraceDispatcher @ 0x140460750 (EtwpStackTraceDispatcher.c)
 *     EtwpStackWalkDpc @ 0x1405FD990 (EtwpStackWalkDpc.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeInitializeApc @ 0x140237E20 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14028DD10 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeRemoveQueueApc @ 0x1402F7360 (KeRemoveQueueApc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     EtwpPopFreeApcEntry @ 0x140460490 (EtwpPopFreeApcEntry.c)
 *     KeTryToInsertQueueApc @ 0x140570BD0 (KeTryToInsertQueueApc.c)
 *     EtwpQueueStackWalkDpc @ 0x1405FD87C (EtwpQueueStackWalkDpc.c)
 */

char __fastcall EtwpQueueStackWalkApc(__int64 a1, unsigned __int8 a2, unsigned int *a3, char a4, _SLIST_ENTRY **a5)
{
  char v5; // r13
  struct _SLIST_ENTRY *v6; // rbp
  unsigned int v7; // esi
  signed __int8 v12; // cf
  PSLIST_ENTRY v13; // rax
  __int64 v14; // r14
  char inserted; // al
  signed int v17; // ecx

  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread()
    || *(_DWORD *)(*(_QWORD *)(a1 + 544) + 888LL) + ((*(_DWORD *)(*(_QWORD *)(a1 + 544) + 632LL) >> 3) & 1)
    || *(_BYTE *)(a1 + 644) )
  {
    return 0;
  }
  if ( a4 )
  {
    v12 = _bittest((const signed __int32 *)(a1 + 120), 0x17u);
  }
  else
  {
    v7 = (*((_WORD *)a3 + 409) & 7) + 24;
    v12 = _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), v7);
  }
  if ( v12 )
    return 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) == 0 )
    goto LABEL_18;
  if ( !ExAcquireRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a3 + 137) + 448LL) + 8LL * *a3),
          1u) )
    goto LABEL_18;
  v5 = 1;
  v13 = EtwpPopFreeApcEntry((__int64)a3, a2);
  v6 = v13;
  if ( !v13 || !a3[80] )
    goto LABEL_18;
  v14 = (__int64)&v13[-7];
  *((_BYTE *)&v13[1].Next + 8) = a4;
  v13[1].Next = *a5;
  KeInitializeApc(
    (__int64)&v13[-7],
    a1,
    0,
    (__int64)EtwpStackWalkApc,
    (__int64)EtwpCancelStackWalkApc,
    (__int64)EtwpStackWalkApc,
    0,
    (__int64)a3);
  if ( a2 <= 2u )
    inserted = KeInsertQueueApc(v14, 0LL, 0LL, 0);
  else
    inserted = KeTryToInsertQueueApc(v14, 0LL);
  if ( !a3[80] )
  {
    if ( inserted && !KeRemoveQueueApc(v14) )
      return 0;
    goto LABEL_18;
  }
  if ( !inserted )
  {
    if ( a2 > 2u )
    {
      if ( a4 )
      {
LABEL_21:
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)a3 + 58, v6);
LABEL_22:
        if ( v5 )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a3 + 137) + 448LL) + 8LL * *a3),
            1u);
        return 0;
      }
      EtwpQueueStackWalkDpc(a1, a3, a5);
LABEL_19:
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), v7);
LABEL_20:
      if ( !v6 )
        goto LABEL_22;
      goto LABEL_21;
    }
LABEL_18:
    if ( a4 )
      goto LABEL_20;
    goto LABEL_19;
  }
  _InterlockedIncrement((volatile signed __int32 *)a3 + 244);
  v17 = a3[244];
  if ( v17 > (int)a3[245] )
    a3[245] = v17;
  return 1;
}
