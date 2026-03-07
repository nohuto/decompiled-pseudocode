struct _KPRCB *__fastcall KiCommitThreadWait(ULONG_PTR a1, __int64 *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // r9
  __int64 v6; // r15
  int v7; // r12d
  char v8; // r13
  int v9; // edi
  __int64 *v10; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  BOOL v13; // ebp
  char v14; // cl
  char v15; // bp
  _BYTE *v16; // r14
  __int64 v17; // rdi
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *v26; // r8
  char v27; // al
  _QWORD *v28; // r13
  _BYTE *v29; // r12
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // r9
  __int64 *v35; // rbp
  volatile signed __int32 *v36; // r15
  __int64 *v37; // rcx
  __int64 **v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rax
  int v43; // [rsp+30h] [rbp-78h] BYREF
  int v44; // [rsp+34h] [rbp-74h] BYREF
  int v45; // [rsp+38h] [rbp-70h] BYREF
  __int128 v46; // [rsp+40h] [rbp-68h]
  __int64 v47; // [rsp+50h] [rbp-58h]
  int v48; // [rsp+B0h] [rbp+8h]
  __int16 v49; // [rsp+B8h] [rbp+10h]
  unsigned int v50; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v51; // [rsp+C8h] [rbp+20h]

  v51 = a4;
  v5 = 0LL;
  v6 = a1 + 256;
  v50 = 0;
  v47 = 0LL;
  v46 = 0LL;
  v7 = 0;
  v48 = 0;
  v8 = 0;
  v9 = a3;
  v10 = a2;
  _m_prefetchw((const void *)(a1 + 112));
  if ( (_DWORD)a3 )
  {
    *(_DWORD *)(a1 + 116) |= 0x200u;
    *(_DWORD *)v6 |= 0x40000080u;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v49 = 1;
  *(_QWORD *)(a1 + 208) = a2;
  v13 = *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x40) != 0 && *(char *)(a1 + 195) < 25;
  v43 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v43);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v14 = *(_BYTE *)(a1 + 112);
  if ( (v14 & 0xE7) == 0 )
  {
    *(_BYTE *)(a1 + 112) = v14 & 0xF8 | 1;
    if ( v13 )
    {
      v44 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->WaitLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v44);
        while ( CurrentPrcb->WaitLock );
      }
      Blink = CurrentPrcb->WaitListHead.Blink;
      v20 = (struct _LIST_ENTRY *)(a1 + 216);
      if ( Blink->Flink != &CurrentPrcb->WaitListHead )
        goto LABEL_84;
      v20->Flink = &CurrentPrcb->WaitListHead;
      *(_QWORD *)(a1 + 224) = Blink;
      Blink->Flink = v20;
      CurrentPrcb->WaitListHead.Blink = v20;
      *(_QWORD *)(a1 + 712) = CurrentPrcb;
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->WaitLock, 0LL);
    }
    if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
    if ( (_bittest((const signed __int32 *)(a1 + 116), 0x13u) & _bittest((const signed __int32 *)(a1 + 120), 0xEu)) != 0
      && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u) )
    {
      v7 = 1;
      v48 = 1;
    }
    v15 = 0;
    if ( v9 == 2 )
    {
      v21 = *(unsigned int *)(a1 + 952);
      if ( *(_BYTE *)(a1 + 391) )
      {
        if ( !*(_DWORD *)(a1 + 484) && !*(_BYTE *)(a1 + 390) && !*(_BYTE *)(a1 + 192) )
        {
          v15 = 1;
          if ( (_DWORD)v21 )
            v51 += v21;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 643) == 15 || (v16 = *(_BYTE **)(a1 + 232)) == 0LL )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      goto LABEL_16;
    }
    _m_prefetchw(v16);
    v24 = *(_QWORD *)(a1 + 232);
    if ( (*v16 & 0x7F) == 0x15 )
    {
      v31 = (unsigned __int8)*(_DWORD *)(a1 + 540);
      v25 = 4 * v31 + 536;
      *(_DWORD *)(a1 + 540) = v31 | 0x100;
    }
    else
    {
      v25 = 40LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)&v16[v25]);
    v26 = v16 + 40;
    if ( _interlockedbittestandset((volatile signed __int32 *)v16, 7u) )
      v27 = 0;
    else
      v27 = 1;
    v5 = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( !v27 )
    {
      KiActivateWaiterQueueWithNoLocks(a1, v16, 0LL);
LABEL_16:
      if ( v7 )
        KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
      *(_BYTE *)(a1 + 565) = 0;
      if ( !v9 )
        return KiSwapThread(a1, (__int64)CurrentPrcb, a5, v5);
      if ( v9 == 2 )
      {
        v22 = v51 + MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(a1 + 248);
        *(_QWORD *)(v6 + 24) = v22;
        v22 >>= 18;
        v50 = (unsigned __int8)v22;
        LODWORD(v46) = *(_DWORD *)v6;
        BYTE1(v46) &= ~1u;
        BYTE2(v46) = v22;
        *(_DWORD *)v6 = v46;
        if ( v15 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 544) + 2432LL));
      }
      else if ( !(unsigned int)KiComputeDueTime((int *)v6, v51, 0, &v50) )
      {
        goto LABEL_87;
      }
      if ( KiGlobalTimerResolutionRequests
        || (v30 = *(_QWORD *)(a1 + 544), (*(_DWORD *)(v30 + 1124) & 0x1000) != 0)
        && (*(_DWORD *)(v30 + 2172) & 0x4000000) == 0 )
      {
        v49 = 0;
      }
      *(_WORD *)(v6 + 58) = v49;
      if ( KiInsertTimerTable((__int64)CurrentPrcb, v6, 0LL, v50, 0LL) )
      {
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          LOBYTE(v23) = 1;
          KiTraceSetTimer(v6, 0LL, v23);
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
        }
        return KiSwapThread(a1, (__int64)CurrentPrcb, a5, v5);
      }
LABEL_87:
      KiTimerWaitTest((__int64)CurrentPrcb, v6, 0LL);
      return KiSwapThread(a1, (__int64)CurrentPrcb, a5, v5);
    }
    if ( (*v16 & 0x7F) == 0x15 )
    {
      KiActivateWaiterPriQueue(v16, v24, v26);
      goto LABEL_16;
    }
    if ( *v26 >= *((_DWORD *)v16 + 11)
      || (v28 = (_QWORD *)*((_QWORD *)v16 + 3), v29 = v16 + 24, v28 == (_QWORD *)(v16 + 24))
      || *((_BYTE **)v16 + 1) == v16 + 8 )
    {
LABEL_50:
      _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
      v7 = v48;
      goto LABEL_16;
    }
    v32 = *v28;
    v33 = (_QWORD *)v28[1];
    if ( *(_QWORD **)(*v28 + 8LL) == v28 && (_QWORD *)*v33 == v28 )
    {
      *v33 = v32;
      *(_QWORD *)(v32 + 8) = v33;
      *v28 = 0LL;
      if ( (unsigned __int8)KiWakeQueueWaiter(KeGetCurrentPrcb(), v16, v28) )
      {
        --*((_DWORD *)v16 + 1);
        _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
        v7 = v48;
        goto LABEL_16;
      }
      v42 = *(_QWORD *)v29;
      if ( *(_BYTE **)(*(_QWORD *)v29 + 8LL) == v29 )
      {
        *v28 = v42;
        v28[1] = v29;
        *(_QWORD *)(v42 + 8) = v28;
        *(_QWORD *)v29 = v28;
        goto LABEL_50;
      }
    }
LABEL_84:
    __fastfail(3u);
  }
  if ( (v14 & 7) != 0 )
  {
    v34 = 0LL;
  }
  else if ( (v14 & 0x20) != 0 )
  {
    v34 = 0LL;
    *(_QWORD *)(a1 + 200) = 256LL;
    *(_QWORD *)(a1 + 976) = 0LL;
  }
  else
  {
    v40 = 257LL;
    v8 = 1;
    if ( (v14 & 0x40) != 0 )
      v40 = 192LL;
    v34 = 0LL;
    *(_QWORD *)(a1 + 200) = v40;
    *(_QWORD *)(a1 + 976) = 0LL;
  }
  *(_BYTE *)(a1 + 388) = 2;
  if ( *(_BYTE *)(a1 + 643) == 15 )
  {
    v39 = *(_QWORD *)(a1 + 232);
    if ( v39 )
      KiIncrementConcurrencyCount(v39, a1, a3, 0LL);
  }
  *(_QWORD *)(a1 + 64) = v34;
  if ( v9 )
    *(_DWORD *)(a1 + 116) &= ~0x200u;
  v17 = *(_QWORD *)(a1 + 200);
  if ( a5 )
    *a5 = *(_QWORD *)(a1 + 976);
  if ( v8 )
  {
    v41 = *(char *)(a1 + 391);
    v45 = v34;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v45);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( v17 == 257 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(v41 + a1 + 114) )
        {
          *(_BYTE *)(v41 + a1 + 114) = 0;
        }
        else if ( (_BYTE)v41 )
        {
          *(_BYTE *)(a1 + 114) = 0;
        }
      }
      else
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
      }
    }
    else if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
    {
      *(_BYTE *)(a1 + 194) |= 2u;
    }
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v35 = &v10[6 * *(unsigned __int8 *)(a1 + 587)];
  do
  {
    if ( *((_BYTE *)v10 + 17) < 5u )
    {
      v36 = (volatile signed __int32 *)v10[4];
      KiAcquireKobjectLockSafe(v36);
      if ( *((_BYTE *)v10 + 17) == 4 )
      {
        v37 = (__int64 *)*v10;
        v38 = (__int64 **)v10[1];
        if ( *(__int64 **)(*v10 + 8) != v10 || *v38 != v10 )
          goto LABEL_84;
        *v38 = v37;
        v37[1] = (__int64)v38;
      }
      _InterlockedAnd(v36, 0xFFFFFF7F);
    }
    v10 += 6;
  }
  while ( v10 != v35 );
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0, 0);
  KiExitThreadWait((__int64)CurrentPrcb, a1, 1);
  return (struct _KPRCB *)v17;
}
