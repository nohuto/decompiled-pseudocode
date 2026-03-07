__int64 __fastcall KiUpdateThreadPriority(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rdx
  _DWORD *v14; // rdi
  __int64 result; // rax
  int v16; // ecx
  int v17; // ecx
  struct _KPRCB **v18; // rsi
  _BYTE *v19; // rax
  __int64 v20; // rbp
  struct _KPRCB *v21; // r14
  unsigned __int8 *PriorityState; // r15
  char v23; // cl
  unsigned __int8 v24; // al
  void *SchedulerAssist; // rcx
  struct _SINGLE_LIST_ENTRY *v26; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  __int64 v28; // rdx
  unsigned int v29; // r10d
  __int64 v30; // r10
  __int64 v31; // rdx
  int v32; // edx
  bool v33; // cc
  __int64 v34; // rdx
  unsigned int v35; // edx
  char v36; // al
  char v37; // al
  char v38; // cl
  __int64 v39; // [rsp+60h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  if ( a4 > *(char *)(a3 + 195) )
  {
    if ( *(_BYTE *)(a3 + 793) )
    {
      v26 = (struct _SINGLE_LIST_ENTRY *)(a3 + 808);
      if ( *(_QWORD *)(a3 + 808) == 1LL )
      {
        p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
        if ( CurrentPrcb != (struct _KPRCB *)-35704LL )
        {
          v26->Next = p_AbPropagateBoostsList->Next;
          p_AbPropagateBoostsList->Next = v26;
          _InterlockedIncrement16((volatile signed __int16 *)(a3 + 868));
          KiAbQueueAutoBoostDpc(CurrentPrcb);
        }
      }
    }
  }
  v9 = *(_DWORD *)(a3 + 80);
  v10 = 1;
  v11 = *(_DWORD *)(a3 + 84);
  v12 = 1LL;
  *(_BYTE *)(a3 + 195) = a4;
  if ( v9 <= v11 )
    v9 = v11;
  if ( v9 < KiDynamicHeteroCpuPolicyExpectedCycles )
    v12 = 0LL;
  if ( !KeHeteroSystem )
  {
    v13 = 0LL;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x400000) != 0 )
  {
    v13 = (unsigned __int8)*(_DWORD *)(a3 + 512);
    goto LABEL_9;
  }
  v28 = *(_QWORD *)(a3 + 1552);
  if ( v28 )
  {
    v29 = *(_DWORD *)(a3 + 512);
    v12 = *(unsigned int *)(v28 + 512);
    if ( (unsigned __int8)v12 == (unsigned __int8)v29
      || (unsigned __int8)v12 != 3
      && (unsigned __int8)v29 != 3
      && (unsigned __int8)v12 >= (unsigned int)(unsigned __int8)v29 )
    {
      v12 = v29;
    }
    v13 = (unsigned __int8)v12;
    goto LABEL_9;
  }
  if ( *(_BYTE *)(a3 + 124) == 1 )
  {
    v13 = 3LL;
    goto LABEL_9;
  }
  v14 = (_DWORD *)(a3 + 120);
  if ( *(_BYTE *)(a3 + 124) == 2 )
  {
    v13 = 4LL;
    goto LABEL_10;
  }
  v13 = (unsigned int)KiThreadPolicyToQosMappingTable[(*(_DWORD *)(a3 + 956) >> 8) & 7];
  if ( (_DWORD)v13 == 7 )
  {
    v30 = *(_QWORD *)(a3 + 544);
    v31 = (*(_DWORD *)(v30 + 632) >> 7) & 0xF;
    if ( (KiDynamicHeteroCpuPolicyMask & 4) != 0 )
    {
      if ( (_DWORD)v31 != 3 )
      {
        if ( (_DWORD)v31 == 8 )
          goto LABEL_55;
        if ( !(_DWORD)v12 && KeHeteroSystemQos && (KiDynamicHeteroCpuPolicyMask & 8) != 0 )
        {
          v13 = 2LL;
          goto LABEL_9;
        }
      }
    }
    else if ( (_DWORD)v31 == 8 )
    {
      goto LABEL_55;
    }
    if ( (KiDynamicHeteroCpuPolicyMask & 1) != 0 && *(_BYTE *)(v30 + 1850) == 2 )
    {
      v13 = 0LL;
      goto LABEL_9;
    }
LABEL_55:
    v13 = (unsigned int)KiProcessPolicyToQosMappingTable[v31];
    v14 = (_DWORD *)(a3 + 120);
    if ( (_DWORD)v13 == 7 )
    {
      v32 = *(char *)(a3 + 195);
      if ( *(char *)(a3 + 195) < 15 )
      {
        if ( (KiDynamicHeteroCpuPolicyMask & 2) != 0 )
        {
          if ( v32 >= KiDynamicHeteroCpuPolicyImportantPriority )
          {
            v13 = 0LL;
            goto LABEL_9;
          }
          if ( (*(_DWORD *)(a3 + 116) & 0x400) != 0 )
          {
            v33 = (char)v32 < 8;
            v13 = 0LL;
            if ( !v33 )
              goto LABEL_9;
          }
        }
        v13 = 6LL;
        goto LABEL_9;
      }
      v13 = 0LL;
LABEL_9:
      v14 = (_DWORD *)(a3 + 120);
    }
  }
LABEL_10:
  if ( (_DWORD)v13 != (unsigned __int8)*(_DWORD *)(a3 + 512) )
    KiSetThreadQosLevelUnsafe(a3, v13);
  if ( a5 )
  {
    v16 = *v14 >> 1;
    v39 = a1;
    v17 = v10 & v16;
    if ( v17 )
    {
      if ( v17 != v10 )
        goto LABEL_13;
      v19 = *(_BYTE **)(a1 + 34904);
      v10 = (unsigned __int8)*v19;
      v18 = (struct _KPRCB **)(v19 + 8);
      if ( !*v19 )
        goto LABEL_13;
    }
    else
    {
      v18 = (struct _KPRCB **)&v39;
    }
    v20 = v10;
    do
    {
      v21 = *v18;
      PriorityState = (unsigned __int8 *)(*v18)->PriorityState;
      if ( (*(_BYTE *)(a3 + 2) & 4) != 0 && KiIsThreadRankNonZero(a3, *v18) )
        v23 = 1;
      else
        v23 = *(_BYTE *)(a3 + 195);
      v24 = v23 & 0x7F | ((unsigned __int8)(*v14 >> 1) << 7);
      *PriorityState = v24;
      SchedulerAssist = v21->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( (_KTHREAD *)a3 == v21->IdleThread )
          v34 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v34 = v24 & 0x7F;
        KiSetSchedulerAssistPriority(SchedulerAssist, v34, 0LL);
      }
      v12 = (__int64)v21->PriorityState;
      if ( KeHeteroSystem )
      {
        v35 = *(_DWORD *)(a3 + 80);
        v36 = (*(_BYTE *)(a3 + 512) ^ *(_BYTE *)(v12 + 64)) & 7 ^ *(_BYTE *)(v12 + 64);
        v37 = (v36 ^ (8 * *(_BYTE *)(a3 + 516))) & 0x38 ^ v36;
        if ( v35 <= *(_DWORD *)(a3 + 84) )
          v35 = *(_DWORD *)(a3 + 84);
        v38 = 64;
        if ( v35 < KiDynamicHeteroCpuPolicyExpectedCycles )
          v38 = 0;
        *(_BYTE *)(v12 + 64) = v38 | v37 & 0xBF;
      }
      ++v18;
      --v20;
    }
    while ( v20 );
  }
LABEL_13:
  result = (unsigned int)*v14;
  if ( (result & 0x400000) != 0 )
  {
    LOBYTE(v12) = 1;
    return KiSetSchedulerAssistPriority(*(_QWORD *)(a3 + 968), (unsigned int)*(char *)(a3 + 195), v12);
  }
  return result;
}
