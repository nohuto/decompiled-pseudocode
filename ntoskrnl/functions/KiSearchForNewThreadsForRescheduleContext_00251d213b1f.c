volatile signed __int64 *__fastcall KiSearchForNewThreadsForRescheduleContext(_BYTE *a1, __int64 a2)
{
  volatile signed __int32 *i; // r9
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 **v6; // rax
  __int64 v7; // rcx
  char v8; // bl
  int ready; // eax
  __int64 v10; // rdx
  volatile signed __int64 *j; // r8
  volatile signed __int64 *result; // rax
  volatile signed __int64 **v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 CanLocalReadyThreadBeScheduledToRescheduleContext; // rsi
  __int64 v24; // rsi
  _DWORD v25[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v26[54]; // [rsp+40h] [rbp-C0h] BYREF

  for ( i = 0LL; ; i = v5 )
  {
    v5 = 0LL;
    if ( !*a1 )
      break;
    v6 = (volatile signed __int32 **)(a1 + 24);
    v7 = (unsigned __int8)*a1;
    do
    {
      if ( *v6 > i && (!v5 || *v6 < v5) )
        v5 = *v6;
      v6 += 5;
      --v7;
    }
    while ( v7 );
    if ( !v5 )
      break;
    v25[0] = 0;
    while ( _interlockedbittestandset64(v5, 0LL) )
    {
      do
        KeYieldProcessorEx(v25);
      while ( *(_QWORD *)v5 );
    }
  }
LABEL_9:
  memset(v26, 0, sizeof(v26));
  KiStartReadyQueueEnumeratorForRescheduleContext(v26, a1);
LABEL_10:
  if ( BYTE5(v26[1]) != 4 )
  {
    if ( BYTE5(v26[1]) )
      goto LABEL_36;
    v8 = 1;
    while ( 1 )
    {
      if ( v8 == 1 )
      {
        v10 = 0LL;
        goto LABEL_17;
      }
      if ( v8 == 2 )
        break;
      if ( v8 == 3 )
      {
        v10 = 1LL;
LABEL_17:
        ready = KiReadyQueueEnumeratorStartNormalQueuesPhase(v26, v10);
LABEL_18:
        if ( ready >= 0 )
          goto LABEL_20;
      }
      if ( (unsigned __int8)++v8 >= 4u )
      {
LABEL_20:
        BYTE5(v26[1]) = v8;
        if ( v8 == 4 )
          goto LABEL_21;
LABEL_36:
        v26[5] = *(_QWORD *)v26[5];
        if ( v26[5] == v26[4] )
        {
          while ( (int)KiAdvanceReadyQueueEnumeratorToNextList(v26) >= 0 )
          {
            v26[5] = *(_QWORD *)v26[5];
            if ( v26[5] != v26[4] )
              goto LABEL_37;
          }
          goto LABEL_21;
        }
LABEL_37:
        v15 = v26[5] - 216LL;
        v16 = v26[6 * BYTE2(v26[1]) + 6];
        if ( BYTE5(v26[1]) == 2 )
        {
          v18 = v26[2];
          v17 = 0LL;
        }
        else
        {
          if ( BYTE4(v26[1]) == 1 )
            v17 = v26[6 * BYTE2(v26[1]) + 7];
          else
            v17 = 0LL;
          v18 = 0LL;
        }
        if ( (unsigned int)KiCheckThreadAffinity(v26[5] - 216LL, v18) )
        {
          if ( !v19
            && (v22 = *(_QWORD *)(v15 + 104)) != 0
            && (v24 = *(unsigned int *)(v16 + 216) + v22) != 0
            && (LOBYTE(v21) = 1, (unsigned int)KiGetThreadEffectiveRankNonZero(v20, v24, v21, 0LL)) )
          {
            KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v26, v15);
            *(_DWORD *)(v15 + 536) = *(_DWORD *)(v16 + 36);
            KiAddThreadToScbQueue(v16, v24, v15, 0LL);
          }
          else
          {
            CanLocalReadyThreadBeScheduledToRescheduleContext = KiCanLocalReadyThreadBeScheduledToRescheduleContext(
                                                                  a1,
                                                                  v15,
                                                                  v16,
                                                                  v17);
            if ( CanLocalReadyThreadBeScheduledToRescheduleContext )
            {
              KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v26, v15);
              if ( !v15 )
                goto LABEL_21;
              KiScheduleThreadToRescheduleContext(
                (_DWORD)a1,
                v15,
                CanLocalReadyThreadBeScheduledToRescheduleContext,
                0,
                a2);
              goto LABEL_9;
            }
          }
        }
        else
        {
          KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v26, v15);
          KiInsertDeferredReadyList(a2, v15);
        }
        goto LABEL_10;
      }
    }
    ready = KiReadyQueueEnumeratorStartScbQueuesPhase(v26);
    goto LABEL_18;
  }
LABEL_21:
  for ( j = 0LL; ; j = result )
  {
    result = 0LL;
    if ( !*a1 )
      break;
    v13 = (volatile signed __int64 **)(a1 + 24);
    v14 = (unsigned __int8)*a1;
    do
    {
      if ( *v13 > j && (!result || *v13 < result) )
        result = *v13;
      v13 += 5;
      --v14;
    }
    while ( v14 );
    if ( !result )
      break;
    _InterlockedAnd64(result, 0LL);
  }
  return result;
}
