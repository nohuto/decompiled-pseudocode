/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x140259550
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x14025923C (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14024CDC0 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14024CE70 (KiGetThreadEffectiveRankNonZero.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x140259900 (KiChargeSchedulingGroupCycleTime.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F4130 (KiAddThreadToPrcbQueue.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x14035D2FC (KiInsertNonMaxOverQuotaScb.c)
 *     KiSetSchedulerAssistPriority @ 0x140520894 (KiSetSchedulerAssistPriority.c)
 */

unsigned __int64 __fastcall KiTransitionSchedulingGroupGeneration(struct _KPRCB *a1, unsigned __int64 a2, char a3)
{
  char v4; // r15
  unsigned __int64 GenerationTarget; // rcx
  unsigned int v6; // r12d
  __int64 v7; // r10
  unsigned __int64 result; // rax
  _QWORD *v9; // r14
  _LIST_ENTRY *p_ScbList; // r13
  _LIST_ENTRY *Flink; // rdi
  _QWORD *p_Blink; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v15; // rsi
  __int64 v16; // r8
  volatile signed __int32 *v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // esi
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  bool IsThreadRankNonZero; // al
  char v25; // dl
  void *SchedulerAssist; // rcx
  __int64 v27; // rax
  __int64 v28; // r14
  _QWORD *v29; // r15
  __int64 v30; // r10
  __int64 v31; // r10
  __int64 v32; // rdx
  __int64 Number; // rax
  char v34; // cl
  __int64 v35; // [rsp+30h] [rbp-68h]
  _QWORD *v36; // [rsp+38h] [rbp-60h]
  char v37; // [rsp+A0h] [rbp+8h] BYREF
  char v38; // [rsp+A8h] [rbp+10h]
  char v39; // [rsp+B0h] [rbp+18h]
  int v40; // [rsp+B8h] [rbp+20h]

  v39 = a3;
  v4 = a3;
  GenerationTarget = a1->GenerationTarget;
  v6 = 1;
  if ( a2 > GenerationTarget )
    v6 = (a2 - 1 + (unsigned int)KiGenerationTicks - GenerationTarget) / (unsigned int)KiGenerationTicks + 1;
  v7 = 0LL;
  a1->GenerationTarget = KiGenerationEndTick;
  a1->ScbQueue.Root = 0LL;
  a1->ScbQueue.Min = 0LL;
  result = (unsigned __int64)a1->NextThread;
  v38 = 0;
  v35 = result;
  if ( !result )
  {
    result = (unsigned __int64)a1->CurrentThread;
    v35 = result;
  }
  v9 = *(_QWORD **)(result + 104);
  v36 = v9;
  if ( v9 )
  {
    result = a1->ScbOffset;
    v9 = (_QWORD *)((char *)v9 + result);
    v36 = v9;
  }
  p_ScbList = &a1->ScbList;
  Flink = a1->ScbList.Flink;
  if ( Flink == &a1->ScbList )
  {
LABEL_26:
    if ( a1->GroupSchedulingOverQuota )
    {
      Number = a1->Number;
      a1->GroupSchedulingOverQuota = 0;
      v34 = KiProcessorIndexToNumberMappingTable[Number];
      result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6;
      _InterlockedAnd64(&qword_140C11208[result], ~(1LL << (v34 & 0x3F)));
    }
    return result;
  }
  LOBYTE(result) = v6;
  do
  {
    p_Blink = &Flink[-5].Blink;
    if ( v6 >= 0x40 )
      v13 = v7;
    else
      v13 = p_Blink[6] << result;
    v14 = v13 | 1;
    if ( (p_Blink[14] & 4) == 0 )
      v14 = v13;
    p_Blink[6] = v14;
    v15 = (char *)p_Blink - a1->ScbOffset;
    KiChargeSchedulingGroupCycleTime(v15, &Flink[-5].Blink);
    if ( !v4 )
    {
      if ( a1->ClockOwner )
      {
        if ( (p_Blink[14] & 0x10) == 0 )
        {
          v21 = *((_QWORD *)v15 + 5);
          v22 = v21 + _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 6, v21);
          v23 = *((_QWORD *)v15 + 5);
          if ( v22 > v23 )
            _InterlockedExchange64((volatile __int64 *)v15 + 6, v23);
        }
      }
    }
    if ( p_Blink[1] != p_Blink[2] )
    {
      v16 = (unsigned int)KiGroupSchedulingNumerator * (*p_Blink >> 10)
          + ((p_Blink[4] * (unsigned __int64)(unsigned int)(1024 - KiGroupSchedulingNumerator)) >> 10);
      p_Blink[4] = v16;
    }
    v17 = (volatile signed __int32 *)p_Blink[15];
    v7 = 0LL;
    *p_Blink = 0LL;
    p_Blink[5] = 0LL;
    if ( v17 )
    {
      v18 = ((*((unsigned __int8 *)p_Blink + 112) >> 3) & 1) - *((_DWORD *)p_Blink + 29);
      if ( (int)(v18 + _InterlockedExchangeAdd(v17, v18)) < 0 )
        *(_DWORD *)p_Blink[15] = 0;
    }
    v19 = *((unsigned __int8 *)p_Blink + 112);
    p_Blink[3] = 0LL;
    *((_BYTE *)p_Blink + 112) = v19 & 0xFC;
    *((_DWORD *)p_Blink + 29) = (v19 >> 3) & 1;
    *(_OWORD *)(p_Blink + 11) = 0LL;
    p_Blink[13] = 0LL;
    p_Blink[49] = 0LL;
    p_Blink[50] = 0LL;
    if ( !*((_DWORD *)p_Blink + 29) )
    {
      *((_BYTE *)p_Blink + 112) &= ~4u;
      if ( p_Blink == v9 )
      {
        if ( (*(_BYTE *)(v35 + 2) & 4) != 0 )
        {
          IsThreadRankNonZero = KiIsThreadRankNonZero(v35, a1);
          v25 = 1;
          if ( !IsThreadRankNonZero )
            v25 = *(_BYTE *)(v35 + 195);
          v7 = 0LL;
        }
        else
        {
          v25 = *(_BYTE *)(v35 + 195);
        }
        *a1->PriorityState = v25;
        SchedulerAssist = a1->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( (_KTHREAD *)v35 == a1->IdleThread )
            v32 = (unsigned int)KiVpThreadSystemWorkPriority;
          else
            v32 = (unsigned int)v25;
          KiSetSchedulerAssistPriority(SchedulerAssist, v32, 0LL);
        }
      }
LABEL_22:
      v20 = *((unsigned __int16 *)p_Blink + 57);
      v40 = v7;
      v37 = 0;
      if ( v20 )
      {
        do
        {
          _BitScanReverse((unsigned int *)&v27, v20);
          v20 ^= 1 << v27;
          v40 = v27;
          v28 = (__int64)&p_Blink[2 * v27 + 17];
          v29 = *(_QWORD **)v28;
          do
          {
            *((_DWORD *)v29 - 25) &= ~0x2000u;
            v30 = (__int64)(v29 - 27);
            v29[91] = 0LL;
            v29 = (_QWORD *)*v29;
            KiGetThreadEffectiveRankNonZero(v30, (__int64)&Flink[-5].Blink, v16, 0, (bool *)&v37);
            KiAddThreadToPrcbQueue((_DWORD)a1, v31, *(char *)(v31 + 195), 0, v37);
          }
          while ( v29 != (_QWORD *)v28 );
          *(_QWORD *)(v28 + 8) = v28;
          *(_QWORD *)v28 = v28;
        }
        while ( v20 );
        v9 = v36;
        p_ScbList = &a1->ScbList;
        v4 = v39;
        v7 = 0LL;
      }
      *((_WORD *)p_Blink + 57) = v7;
      goto LABEL_24;
    }
    if ( v4 )
      goto LABEL_22;
    if ( *((_WORD *)p_Blink + 57) )
    {
      KiInsertNonMaxOverQuotaScb(&Flink[-5].Blink, a1, 0LL);
      v7 = 0LL;
      v38 = 1;
    }
LABEL_24:
    Flink = Flink->Flink;
    result = v6;
  }
  while ( Flink != p_ScbList );
  if ( !v38 )
    goto LABEL_26;
  return result;
}
