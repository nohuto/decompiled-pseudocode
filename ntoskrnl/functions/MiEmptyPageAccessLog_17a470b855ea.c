void __fastcall MiEmptyPageAccessLog(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r9
  unsigned __int64 *v2; // rdx
  unsigned int v3; // edi
  unsigned int SessionId; // eax
  unsigned int v5; // r10d
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  unsigned __int64 *v8; // rsi
  __int64 *v9; // r14
  __int64 v10; // rcx
  unsigned __int16 v11; // r8
  __int64 v12; // rbp
  unsigned __int64 v13; // rsi
  unsigned __int16 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rdx
  int v17; // esi
  unsigned __int64 v18; // r13
  __int64 **v19; // r14
  __int64 v20; // rsi
  signed __int64 v21; // rdx
  signed __int64 v22; // rax
  signed __int64 v23; // rbp
  unsigned int v24; // edx
  unsigned __int64 v25; // rbp
  __int64 *v26; // r15
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  __int64 v29; // rbp
  __int64 v30; // rcx
  __int64 v31; // rax
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  unsigned __int64 v34; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v38; // eax
  bool v39; // zf
  _QWORD *v40; // rbx
  PVOID v41; // rcx
  _DWORD v42[2]; // [rsp+20h] [rbp-58h]
  PVOID v43; // [rsp+28h] [rbp-50h]
  unsigned __int64 *P; // [rsp+80h] [rbp+8h]
  unsigned int v45; // [rsp+88h] [rbp+10h]
  unsigned __int64 v46; // [rsp+98h] [rbp+20h]

  P = a1;
  v1 = a1[7];
  v42[0] = 0;
  v2 = a1;
  v42[1] = 3;
  v3 = 0;
  v46 = v1;
  if ( v1 <= 1 || (*(_DWORD *)(v1 + 2172) & 0x1000) != 0 )
  {
    v5 = -1;
  }
  else
  {
    SessionId = MmGetSessionIdEx(v1);
    v1 = v46;
    v5 = SessionId;
    v2 = P;
  }
  v45 = v5;
  v6 = 0LL;
  while ( 2 )
  {
    v7 = (unsigned __int64)(v2 + 9);
    v8 = (unsigned __int64 *)*v2;
    v9 = (__int64 *)(v2[4] - 8);
    v43 = (PVOID)*v2;
    v10 = 0LL;
    v11 = 0;
    if ( v9 >= (__int64 *)v2 + 9 )
    {
      while ( 1 )
      {
        v12 = *v9;
        v13 = (unsigned __int64)*v9 >> 9;
        v14 = *v9 & 0x1FF;
        if ( !v14 )
          break;
        if ( v1 > 1 )
        {
          v15 = v12 >> 16;
          if ( v14 == v11 )
          {
            v6 += (v15 - v10) >> 3 << 12 << v42[(v6 >> 10) & 1];
            LODWORD(v16) = v6;
          }
          else
          {
            v30 = *(_QWORD *)(v2[6] - 8 * (*v9 & 0x1FF));
            v3 ^= ((unsigned __int16)v3 ^ (unsigned __int16)(32 * *(_DWORD *)(*(_QWORD *)v30 + 56LL))) & 0x400;
            v31 = MiStartingOffset(v30, v15, v5);
            v1 = v46;
            v11 = v14;
            v16 = v31 << v42[(v3 >> 10) & 1];
            LODWORD(v16) = v14 | v3 & 0x400 | v16 & 0xFFFFFA00;
            v6 = v16;
          }
          v10 = v15;
          *v9 = v6;
          v17 = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)((_WORD)v13 << 9)) & 0x200;
          v2 = P;
          goto LABEL_11;
        }
LABEL_12:
        v5 = v45;
        if ( (unsigned __int64)--v9 < v7 )
        {
          v8 = (unsigned __int64 *)v43;
          goto LABEL_14;
        }
      }
      v29 = v12 >> 16 << 25 >> 16;
      *v9 = v29;
      v17 = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)((_WORD)v13 << 9)) & 0x200;
LABEL_11:
      *(_DWORD *)v9 = v17;
      goto LABEL_12;
    }
LABEL_14:
    if ( v1 <= 1 )
      goto LABEL_30;
    v18 = v2[6] - 8;
    v19 = (__int64 **)(v2[5] + 8);
    if ( (unsigned __int64)v19 > v18 )
      goto LABEL_28;
    do
    {
      v20 = **v19;
      _m_prefetchw((const void *)(v20 + 64));
      v21 = *(_QWORD *)(v20 + 64);
      if ( (v21 & 0xF) != 0 )
      {
        do
        {
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 64), v21 - 1, v21);
          if ( v21 == v22 )
            break;
          v21 = v22;
        }
        while ( (v22 & 0xF) != 0 );
      }
      v23 = v21;
      v24 = v21 & 0xF;
      v25 = v23 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v24 <= 1 )
      {
        if ( !v24 )
          goto LABEL_47;
        ObpIncrPointerCountEx(v25 - 48, 15LL);
        _m_prefetchw((const void *)(v20 + 64));
        v32 = *(_QWORD *)(v20 + 64);
        while ( (v32 & 0xF) == 0 )
        {
          if ( v25 != (v32 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v33 = v32;
          v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 64), v32 + 15, v32);
          if ( v33 == v32 )
            goto LABEL_19;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 - 48), 0xFFFFFFFFFFFFFFF1uLL);
      }
LABEL_19:
      if ( ObpTraceFlags )
        ObpPushStackInfo(v25 - 48);
      if ( !v25 )
      {
LABEL_47:
        v34 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v20 + 72));
        v25 = *(_QWORD *)(v20 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v25 )
          ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(v20 + 64) & 0xFFFFFFFFFFFFFFF0uLL), 0x63536D4Du);
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v20 + 72));
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v34 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
            v39 = (v38 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v38;
            if ( v39 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v34);
      }
      v26 = *(__int64 **)(v25 + 24);
      _m_prefetchw((const void *)(v20 + 64));
      v27 = *(_QWORD *)(v20 + 64);
      if ( (v25 ^ v27) >= 0xF )
      {
LABEL_40:
        ObDereferenceObjectDeferDeleteWithTag((PVOID)v25, 0x63536D4Du);
      }
      else
      {
        while ( 1 )
        {
          v28 = v27;
          v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 64), v27 + 1, v27);
          if ( v28 == v27 )
            break;
          if ( (v25 ^ v27) >= 0xF )
            goto LABEL_40;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo(v25 - 48);
      }
      *v19++ = v26;
    }
    while ( (unsigned __int64)v19 <= v18 );
    v1 = v46;
LABEL_28:
    if ( ObReferenceObjectSafeWithTag(v1) )
    {
      v2 = P;
      v8 = (unsigned __int64 *)v43;
LABEL_30:
      MiQueuePageAccessLog(v2);
      v2 = v8;
      P = v8;
      if ( v8 )
      {
        v1 = v46;
        v5 = v45;
        continue;
      }
    }
    else
    {
      ExFreePoolWithTag(P, 0);
      v40 = v43;
      v41 = v43;
      if ( v43 )
      {
        do
        {
          v40 = (_QWORD *)*v40;
          ExFreePoolWithTag(v41, 0);
          v41 = v40;
        }
        while ( v40 );
      }
    }
    break;
  }
}
