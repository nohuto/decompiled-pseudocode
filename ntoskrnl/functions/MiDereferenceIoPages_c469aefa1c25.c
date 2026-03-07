__int64 __fastcall MiDereferenceIoPages(int a1, __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rbx
  __int64 v5; // rbp
  ULONG_PTR v6; // r15
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned __int8 CurrentIrql; // r14
  int v9; // r10d
  int v10; // r11d
  ULONG_PTR v11; // rdi
  __int64 v12; // rcx
  int v13; // ebp
  ULONG_PTR v14; // rax
  unsigned __int64 v15; // rdi
  ULONG_PTR v16; // rcx
  __int64 j; // rdi
  _QWORD *i; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r15
  _WORD *v22; // r11
  __int16 v23; // ax
  __int64 result; // rax
  unsigned int v25; // edx
  unsigned __int64 v26; // r10
  int v27; // eax
  _DWORD *SchedulerAssist; // r9
  __int64 v29; // rax
  unsigned __int8 v30; // al
  char v31; // cl
  unsigned __int64 v32; // rax
  unsigned __int8 v33; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v35; // eax
  _DWORD *v36; // r8
  bool v37; // zf
  signed __int32 v38[8]; // [rsp+0h] [rbp-B8h] BYREF
  int v39; // [rsp+30h] [rbp-88h]
  ULONG_PTR v40; // [rsp+38h] [rbp-80h]
  __int64 v41; // [rsp+40h] [rbp-78h]
  unsigned __int64 v42; // [rsp+48h] [rbp-70h]
  __int128 v43; // [rsp+50h] [rbp-68h] BYREF
  __int64 v44; // [rsp+60h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp+10h]
  int v48; // [rsp+D8h] [rbp+20h]

  v44 = 0LL;
  v3 = 0LL;
  v40 = a3;
  v41 = a1;
  v48 = 1;
  v5 = ((1LL << ((unsigned __int8)dword_140C65760 - 12)) - 1) & a2;
  v6 = a3;
  v39 = 0;
  BugCheckParameter4 = v5;
  v42 = qword_140C69240;
  v43 = 0LL;
  BugCheckParameter2 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v29) = 4;
    if ( CurrentIrql != 2 )
      v29 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v29;
  }
  MiIoSpaceGetBounds(&v43, v5);
  v11 = *((_QWORD *)&v43 + 1);
  if ( HIDWORD(v44) != 3 && v9 == v10 && v5 + a3 - 1 <= *((_QWORD *)&v43 + 1) )
  {
    if ( !KiIrqlFlags )
      goto LABEL_83;
    v30 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v10) == 0 || v30 > 0xFu || CurrentIrql > 0xFu || v30 < 2u )
      goto LABEL_83;
    v31 = v10 + CurrentIrql;
LABEL_81:
    CurrentPrcb = KeGetCurrentPrcb();
    v35 = ~(unsigned __int16)(-1LL << v31);
    v36 = CurrentPrcb->SchedulerAssist;
    v37 = (v35 & v36[5]) == 0;
    v36[5] &= v35;
    if ( v37 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_83:
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    return result;
  }
  MiLockIoPfnTree(5LL);
  if ( a3 )
  {
    do
    {
      v13 = v48;
      while ( 1 )
      {
        if ( BugCheckParameter4 < (unsigned __int64)v43 || BugCheckParameter4 > v11 )
        {
          MiIoSpaceGetBounds(&v43, BugCheckParameter4);
          v11 = *((_QWORD *)&v43 + 1);
        }
        if ( HIDWORD(v44) != 3 && a1 == 1 )
          break;
        if ( v13 )
        {
          v3 = MiState[v41 + 2080];
          while ( v3 )
          {
            v14 = *(_QWORD *)(v3 + 24);
            if ( BugCheckParameter4 < v14 )
            {
              v3 = *(_QWORD *)v3;
            }
            else
            {
              if ( BugCheckParameter4 < v14 + 512 )
                break;
              v3 = *(_QWORD *)(v3 + 8);
            }
          }
          v48 = 0;
        }
        if ( !v3 )
          KeBugCheckEx(0x1Au, 0x61948uLL, BugCheckParameter2, a3, BugCheckParameter4);
        v15 = *(_QWORD *)(v3 + 8);
        v16 = v3;
        if ( v15 )
        {
          for ( i = *(_QWORD **)v15; i; i = (_QWORD *)*i )
            v15 = (unsigned __int64)i;
        }
        else
        {
          for ( j = *(_QWORD *)(v3 + 16); ; j = *(_QWORD *)(v15 + 16) )
          {
            v15 = j & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v15 || *(_QWORD *)v15 == v16 )
              break;
            v16 = v15;
          }
        }
        v19 = *(_QWORD *)(v3 + 24);
        v20 = (BugCheckParameter4 & ((1LL << ((unsigned __int8)dword_140C65760 - 12)) - 1)) - v19;
        if ( v6 + BugCheckParameter4 > v19 + 512 )
          v21 = 512LL;
        else
          v21 = v20 + v6;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 172));
        if ( v20 < v21 )
        {
          v22 = (_WORD *)(v3 + 2 * (v20 + 88));
          do
          {
            if ( !*v22 )
              KeBugCheckEx(0x1Au, 0x6194AuLL, BugCheckParameter2, a3, BugCheckParameter4);
            v23 = *v22 - 1;
            *v22 = v23;
            if ( !v23 )
            {
              v25 = *(_DWORD *)(v3 + 32);
              if ( v25 == 0 || v25 > 0x200 )
                KeBugCheckEx(0x1Au, 0x6194BuLL, v3, *(unsigned int *)(v3 + 32), BugCheckParameter4);
              *(_DWORD *)(v3 + 32) = v25 - 1;
              if ( v25 == 1 )
              {
                if ( *(_BYTE *)(v3 + 40) )
                {
                  _InterlockedOr(v38, 0);
                  *(_DWORD *)(v3 + 36) = KiCacheFlushTimeStamp;
                }
                _InterlockedExchangeAdd64(&MiState[v41 + 2082], 1uLL);
                if ( (unsigned int)MiIsPageInIoHugeRangeTransition(*(_QWORD *)(v3 + 24)) )
                {
                  _InterlockedAdd64(&qword_140C69220, 1uLL);
                  v42 = 1LL;
                }
                v27 = v39;
                if ( v26 >= v42 )
                  v27 = 1;
                v39 = v27;
              }
            }
            --v40;
            ++BugCheckParameter4;
            ++v22;
            ++v20;
          }
          while ( v20 < v21 );
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 172));
        v6 = v40;
        if ( !v40 || !(unsigned int)MiIoPfnTreeLockContended(0LL) && !KeShouldYieldProcessor() )
        {
          v3 = v15;
          v11 = *((_QWORD *)&v43 + 1);
          goto LABEL_34;
        }
        LOBYTE(v12) = CurrentIrql;
        MiUnlockIoPfnTree(v12, 1LL);
        v13 = 1;
        v48 = 1;
        MiLockIoPfnTree(1LL);
        v11 = *((_QWORD *)&v43 + 1);
      }
      v48 = 1;
      v32 = v11 - BugCheckParameter4 + 1;
      if ( v32 > v6 )
        v32 = v6;
      BugCheckParameter4 += v32;
      v6 -= v32;
      v40 = v6;
LABEL_34:
      ;
    }
    while ( v6 );
  }
  LOBYTE(v12) = CurrentIrql;
  result = MiUnlockIoPfnTree(v12, 1LL);
  if ( v39 )
  {
    ExAcquireSpinLockExclusive(&dword_140C69260);
    if ( !stru_140C69278.Parameter )
    {
      stru_140C69278.List.Flink = 0LL;
      stru_140C69278.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteStaleCacheMaps;
      stru_140C69278.Parameter = &stru_140C69278;
      ExQueueWorkItem(&stru_140C69278, DelayedWorkQueue);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C69260);
    if ( !KiIrqlFlags )
      goto LABEL_83;
    v33 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 || v33 > 0xFu || CurrentIrql > 0xFu || v33 < 2u )
      goto LABEL_83;
    v31 = CurrentIrql + 1;
    goto LABEL_81;
  }
  return result;
}
