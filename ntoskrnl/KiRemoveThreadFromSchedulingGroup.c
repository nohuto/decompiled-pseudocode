__int64 __fastcall KiRemoveThreadFromSchedulingGroup(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KPRCB *v3; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v5; // rdx
  __int64 result; // rax
  char v7; // r12
  __int64 *v8; // rdx
  char v9; // r15
  __int64 v10; // rdi
  volatile signed __int32 *v11; // rsi
  char v12; // al
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 v15; // r14
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  int v20; // [rsp+70h] [rbp+40h] BYREF
  int v21; // [rsp+78h] [rbp+48h] BYREF
  int v22; // [rsp+80h] [rbp+50h] BYREF
  __int64 v23; // [rsp+88h] [rbp+58h] BYREF

  v23 = 0LL;
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiUpdateTotalCyclesCurrentThread(CurrentPrcb, a1, 0LL);
    v3 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v3->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v13 = *SchedulerAssist;
      do
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
      }
      while ( v14 != v13 );
      if ( (v13 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v3);
    }
    _enable();
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( *(_QWORD *)(a1 + 64) );
    }
    KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v23);
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    LOBYTE(v5) = 2;
    KiUpdateThreadSchedulingProperties(a1, v5, CurrentPrcb);
    result = KiReleasePrcbLocksForIsolationUnit(&v23);
    goto LABEL_6;
  }
  v7 = 0;
  v21 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v21);
    while ( *(_QWORD *)(a1 + 64) );
  }
  while ( 2 )
  {
    while ( 2 )
    {
      v8 = KiProcessorBlock;
      while ( 1 )
      {
        v9 = *(_BYTE *)(a1 + 388);
        v10 = 0LL;
        v11 = 0LL;
        if ( v9 == 1 )
          break;
        switch ( *(_BYTE *)(a1 + 388) )
        {
          case 2:
LABEL_47:
            v18 = *(unsigned int *)(a1 + 536);
            if ( (int)v18 >= 0 )
            {
              v10 = KiProcessorBlock[v18];
              KiAcquirePrcbLocksForIsolationUnit(v10, 0, &v23);
              v16 = a1 == *(_QWORD *)(v10 + 8);
              goto LABEL_34;
            }
            break;
          case 3:
            v19 = *(unsigned int *)(a1 + 536);
            if ( (int)v19 >= 0 )
            {
              v10 = KiProcessorBlock[v19];
              KiAcquirePrcbLocksForIsolationUnit(v10, 0, &v23);
              if ( a1 == *(_QWORD *)(v10 + 16) )
                goto LABEL_15;
              if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v19 )
                __fastfail(0x1Eu);
              goto LABEL_54;
            }
            break;
          case 5:
            v12 = *(_BYTE *)(a1 + 112) & 7;
            if ( v12 == 1 || (unsigned __int8)(v12 - 3) <= 3u )
              goto LABEL_15;
            v9 = 2;
            goto LABEL_47;
          default:
            goto LABEL_15;
        }
      }
      v15 = *(unsigned int *)(a1 + 536);
      if ( (int)v15 >= 0 )
      {
        v10 = KiProcessorBlock[v15];
        KiAcquirePrcbLocksForIsolationUnit(v10, 0, &v23);
        if ( *(_BYTE *)(a1 + 388) == 1 )
        {
          v16 = *(_DWORD *)(a1 + 536) == (_DWORD)v15;
LABEL_34:
          if ( v16 )
            goto LABEL_15;
        }
LABEL_54:
        KiReleasePrcbLocksForIsolationUnit(&v23);
        continue;
      }
      break;
    }
    v17 = (unsigned int)v15;
    LODWORD(v17) = v15 & 0x7FFFFFFF;
    v22 = 0;
    v11 = *(volatile signed __int32 **)(KiProcessorBlock[v17] + 34888);
    while ( _interlockedbittestandset64(v11, 0LL) )
    {
      do
        KeYieldProcessorEx(&v22);
      while ( *(_QWORD *)v11 );
    }
    if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v15 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
      continue;
    }
    break;
  }
LABEL_15:
  if ( (*(_DWORD *)(a1 + 116) & 0x2000) != 0 )
  {
    KiRemoveThreadFromScbQueue(v10, *(_QWORD *)(a1 + 944), a1, *(_BYTE *)(a1 + 195));
    v7 = 1;
  }
  _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
  LOBYTE(v8) = v9;
  result = KiUpdateThreadSchedulingProperties(a1, v8, v10);
  if ( v7 )
    result = KiAddThreadToPrcbQueue(v10, a1, *(char *)(a1 + 195), 0, 0);
  if ( v10 )
    result = KiReleasePrcbLocksForIsolationUnit(&v23);
  if ( v11 )
    _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
LABEL_6:
  *(_QWORD *)(a1 + 64) = 0LL;
  return result;
}
