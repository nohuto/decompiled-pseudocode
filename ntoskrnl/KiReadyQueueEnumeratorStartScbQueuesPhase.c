/*
 * XREFs of KiReadyQueueEnumeratorStartScbQueuesPhase @ 0x140261910
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140227C10 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiSearchForNewThread @ 0x140260460 (KiSearchForNewThread.c)
 *     KiAdvanceReadyQueueEnumeratorToNextPhase @ 0x1402EECB8 (KiAdvanceReadyQueueEnumeratorToNextPhase.c)
 * Callees:
 *     KiAdvanceReadyQueueEnumeratorToNextScb @ 0x1402EEAE4 (KiAdvanceReadyQueueEnumeratorToNextScb.c)
 */

__int64 __fastcall KiReadyQueueEnumeratorStartScbQueuesPhase(__int64 a1)
{
  unsigned __int8 v2; // cl
  unsigned int v3; // r8d
  unsigned int v4; // eax
  unsigned __int8 v5; // di
  __int64 v6; // r10
  unsigned __int8 v7; // al
  __int64 v8; // r11
  __int64 result; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // edx
  unsigned int v14; // edx
  __int64 v15; // rdx

  v2 = 0;
  v3 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(a1 + 48 * (v2 + 1LL) + 32);
      if ( v4 )
        break;
LABEL_3:
      v3 = *(_DWORD *)a1;
      if ( (unsigned int)++v2 >= *(_DWORD *)a1 )
        goto LABEL_4;
    }
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 48 * (v2 + 1LL)) + 32568LL);
    if ( (v10 & 1) != 0 )
    {
      if ( v10 == 1 )
      {
LABEL_15:
        v12 = 0LL;
LABEL_16:
        *(_QWORD *)(a1 + 48 * (v2 + 1LL) + 16) = v12;
        goto LABEL_3;
      }
      v11 = v10 ^ ((*(_QWORD *)(a1 + 48 * (v2 + 1LL)) + 32560LL) | 1);
    }
    else
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 48 * (v2 + 1LL)) + 32568LL);
    }
    if ( v11 )
    {
      v12 = v11 - 88;
      if ( *(_DWORD *)(v12 + 116) <= v4 )
        goto LABEL_16;
    }
    goto LABEL_15;
  }
LABEL_4:
  v5 = 0;
  v6 = 0LL;
  v7 = *(_BYTE *)(a1 + 9);
  do
  {
    v8 = *(_QWORD *)(a1 + 48LL * v7 + 64);
    if ( v8 && (!v6 || *(_DWORD *)(v6 + 116) < *(_DWORD *)(v8 + 116)) )
    {
      v5 = v7;
      v6 = *(_QWORD *)(a1 + 48LL * v7 + 64);
    }
    if ( ++v7 >= v3 )
      v7 = 0;
  }
  while ( v7 != *(_BYTE *)(a1 + 9) );
  if ( !v6 )
    return 2147483674LL;
  *(_BYTE *)(a1 + 10) = v5;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 16) = v6;
  v13 = *(unsigned __int16 *)(v6 + 114);
  *(_DWORD *)(a1 + 4) = v13;
  if ( *(_DWORD *)(v6 + 116) == *(_DWORD *)(a1 + 48LL * v5 + 80) )
  {
    v13 &= *(_DWORD *)(a1 + 48LL * v5 + 84);
    *(_DWORD *)(a1 + 4) = v13;
  }
  if ( v13 || (result = KiAdvanceReadyQueueEnumeratorToNextScb(a1), (int)result >= 0) )
  {
    _BitScanReverse(&v14, *(_DWORD *)(a1 + 4));
    *(_BYTE *)(a1 + 8) = v14;
    v15 = 16LL * (unsigned __int8)v14 + *(_QWORD *)(a1 + 16) + 136LL;
    *(_QWORD *)(a1 + 32) = v15;
    result = 0LL;
    *(_QWORD *)(a1 + 40) = v15;
  }
  return result;
}
