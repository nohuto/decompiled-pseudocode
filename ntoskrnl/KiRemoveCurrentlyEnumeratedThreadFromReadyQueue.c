/*
 * XREFs of KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140256490
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140227C10 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiSearchForNewThread @ 0x140260460 (KiSearchForNewThread.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x1402AE79C (KiRemoveThreadFromScbQueue.c)
 *     KiAdvanceReadyQueueEnumeratorToNextList @ 0x1402EE9E4 (KiAdvanceReadyQueueEnumeratorToNextList.c)
 *     KiAcquireSoftParkElectionLock @ 0x14040A5D8 (KiAcquireSoftParkElectionLock.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting @ 0x14040AF08 (Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting.c)
 *     KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x14040B024 (KiUpdateLocalReadyQueueStatisticsOnRemoval.c)
 */

__int64 __fastcall KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 result; // rax
  int v10; // ecx
  __int64 v11; // rbx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  bool v14; // zf
  __int64 v15; // rdx
  bool v16; // si
  __int64 v17; // r8
  int v18; // ecx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax

  v3 = *(unsigned __int8 *)(a1 + 8);
  v5 = a2 + 216;
  v6 = *(_QWORD *)(a1 + 48 * (*(unsigned __int8 *)(a1 + 10) + 1LL));
  if ( *(_BYTE *)(a1 + 13) == 2 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    v8 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)v5 == v7 && *(_QWORD *)(a2 + 224) == v7 )
      KiAdvanceReadyQueueEnumeratorToNextList(a1);
    else
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    return KiRemoveThreadFromScbQueue(v6, v8, a2, v3);
  }
  result = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(result + 8);
  v10 = *(unsigned __int8 *)(a1 + 12);
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v10 != 1 )
      return result;
    if ( ((*(unsigned __int8 *)(a1 + 11) - 1) & *(unsigned __int8 *)(a1 + 11)) != 0 )
      _bittestandset((signed __int32 *)(v6 + 32476), v3);
    v11 = *(_QWORD *)(v6 + 34888);
    if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
    v12 = *(_QWORD **)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) == v5 )
    {
      v13 = *(_QWORD **)(a2 + 224);
      if ( *v13 == v5 )
      {
        *v13 = v12;
        v12[1] = v13;
        if ( v13 == v12 )
          *(_DWORD *)(v11 + 8) ^= 1 << v3;
        --*(_DWORD *)(v11 + 672);
        *(_QWORD *)(v11 + 680) -= *(unsigned int *)(a2 + 2288);
        v14 = (unsigned int)Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting() == 0;
        result = *(_QWORD *)(v11 + 696);
        v16 = !v14;
        LOBYTE(v17) = 0;
        if ( *(_QWORD *)(a2 + 2296) == result )
        {
          if ( !v14 )
          {
            KiAcquireSoftParkElectionLock(v11, v15, v17);
            result = *(_QWORD *)(v11 + 696);
            LOBYTE(v17) = 1;
            if ( *(_QWORD *)(a2 + 2296) != result )
              goto LABEL_25;
          }
          v18 = *(_DWORD *)(v11 + 704) - 1;
          *(_DWORD *)(v11 + 704) = v18;
          *(_QWORD *)(v11 + 712) -= *(unsigned int *)(a2 + 2292);
          if ( v16 && !v18 )
            *(_QWORD *)(v11 + 1680) = 0LL;
          v19 = *(unsigned __int8 *)(a2 + 1649)
              + 8 * (*(unsigned __int8 *)(a2 + 1650) + 2LL * *(unsigned __int8 *)(a2 + 1648));
          result = *(unsigned int *)(a2 + 2292);
          *(_QWORD *)(v11 + 8 * v19 + 784) -= result;
          if ( (_BYTE)v17 )
LABEL_25:
            _InterlockedAnd64((volatile signed __int64 *)(v11 + 688), 0LL);
        }
        return result;
      }
    }
LABEL_35:
    __fastfail(3u);
  }
  if ( ((*(unsigned __int8 *)(a1 + 11) - 1) & *(unsigned __int8 *)(a1 + 11)) != 0 )
    _bittestandreset((signed __int32 *)(v6 + 32476), v3);
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
  v20 = *(_QWORD **)v5;
  if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
    goto LABEL_35;
  v21 = *(_QWORD **)(a2 + 224);
  if ( *v21 != v5 )
    goto LABEL_35;
  *v21 = v20;
  v20[1] = v21;
  if ( v21 == v20 )
    *(_DWORD *)(v6 + 32472) ^= 1 << v3;
  return KiUpdateLocalReadyQueueStatisticsOnRemoval(v6, a2);
}
