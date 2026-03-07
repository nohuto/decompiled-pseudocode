__int64 __fastcall MmSetPfnListInfo(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v9; // r14d
  unsigned __int64 *v10; // r15
  struct _KTHREAD *v11; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v13; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  unsigned __int64 v17; // rdi
  ULONG_PTR v18; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v20; // rcx
  char v21; // dl
  char v22; // r8
  __int64 v23; // rcx
  int v24; // eax
  bool v25; // zf
  _DWORD *v27; // r8
  __int64 v28; // r9
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  unsigned __int8 v31; // cl
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int8 v37; // dl
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // rdx
  _DWORD *v40; // r10
  int v41; // eax
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  unsigned __int64 v46; // xmm1_8
  int v47; // [rsp+20h] [rbp-E0h]
  unsigned int v48; // [rsp+24h] [rbp-DCh]
  int v49; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v50; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v51; // [rsp+40h] [rbp-C0h]
  struct _KTHREAD *v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+60h] [rbp-A0h] BYREF
  int v54; // [rsp+68h] [rbp-98h]
  _DWORD v55[32]; // [rsp+6Ch] [rbp-94h] BYREF

  v51 = 0LL;
  v50 = 0LL;
  memset(v55, 0, sizeof(v55));
  if ( a3 && !(unsigned int)MiColdPageSizeSupported(1u) )
    return 3221225659LL;
  v53 = 0LL;
  v6 = 3 * a1;
  v54 = 16;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v10 = &a2[v6];
  v47 = 0;
  --CurrentThread->SpecialApcDisable;
  v11 = KeGetCurrentThread();
  v52 = CurrentThread;
  _disable();
  AbEntrySummary = v11->AbEntrySummary;
  if ( v11->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C6B198, (__int64)v11)) != 0 )
  {
    _BitScanForward(&v13, AbEntrySummary);
    v48 = v13;
    v11->AbEntrySummary = AbEntrySummary & ~(1 << v13);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v29 = *SchedulerAssist;
      do
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange(SchedulerAssist, v29 & 0xFFDFFFFF, v29);
      }
      while ( v30 != v29 );
      if ( (v29 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v7 = (__int64)(&v11[1].Process + 12 * v48);
    if ( (unsigned __int64)&qword_140C6B198 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = (unsigned __int64)&qword_140C6B198 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C6B198, 0, v7, (__int64)&qword_140C6B198);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  if ( a2 < v10 )
  {
    while ( 1 )
    {
      v17 = a2[1];
      if ( v17 <= qword_140C65820 && (*(_QWORD *)(48 * v17 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
      {
        v18 = 48 * v17 - 0x220000000000LL;
        *(_QWORD *)&v50 = 0LL;
        v51 = 0LL;
        *((_QWORD *)&v50 + 1) = v17;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v27 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 2 )
            LODWORD(v28) = 4;
          else
            v28 = (-1LL << (CurrentIrql + 1)) & 4;
          v27[5] |= v28;
        }
        v49 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v49);
          while ( *(__int64 *)(v18 + 24) < 0 );
        }
        MiIdentifyPfn(v17, &v50);
        if ( v51 == a2[2] )
        {
          v20 = *a2;
          if ( (((unsigned __int64)v50 ^ *a2) & 0x1FFFFFFFFFFFE00LL) == 0 )
          {
            v21 = *(_BYTE *)(v18 + 34) & 7;
            if ( v21 == 6 || (unsigned __int8)(v21 - 2) <= 2u )
            {
              if ( !a3 )
              {
                v22 = *(_BYTE *)(v18 + 35);
                v23 = (v20 >> 57) & 7;
                if ( (v22 & 8) != 0 )
                  v24 = 5;
                else
                  v24 = v22 & 7;
                if ( (_DWORD)v23 != v24 )
                {
                  if ( v21 == 2 )
                    MiRelinkStandbyPage(v18, v23);
                  else
                    *(_BYTE *)(v18 + 35) = v23 | v22 & 0xF8;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( KiIrqlFlags )
                {
                  v31 = KeGetCurrentIrql();
                  if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
                  {
                    v32 = KeGetCurrentPrcb();
                    v33 = v32->SchedulerAssist;
                    v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v25 = (v34 & v33[5]) == 0;
                    v33[5] &= v34;
                    if ( v25 )
                      KiRemoveSystemWorkPriorityKick(v32);
                  }
                }
                __writecr8(CurrentIrql);
                goto LABEL_27;
              }
              if ( (v20 & 0x80u) != 0LL
                && v21 == 2
                && !*(_WORD *)(v18 + 32)
                && ((unsigned int)MiColdPageSizeSupported(3u) || _bittest64((const signed __int64 *)(v18 + 40), 0x35u)) )
              {
                v35 = *(_QWORD *)(v18 + 16);
                v36 = v35 >> 11;
                if ( (v35 & 0x400) == 0 )
                  v36 = v35 >> 3;
                if ( (v36 & 1) == 0 )
                {
                  MiSetActivePfnHeat(v18, 1LL);
                  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( KiIrqlFlags )
                  {
                    v38 = KeGetCurrentIrql();
                    if ( ((unsigned __int8)KiIrqlFlags & v37) != 0 && v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
                    {
                      v39 = KeGetCurrentPrcb();
                      v40 = v39->SchedulerAssist;
                      v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                      v25 = (v41 & v40[5]) == 0;
                      v40[5] &= v41;
                      if ( v25 )
                        KiRemoveSystemWorkPriorityKick(v39);
                    }
                  }
                  __writecr8(CurrentIrql);
                  if ( (unsigned int)MiAddPageToHeatRanges(&v53, v17, 3LL) )
                    MiNotifyPageHeat(&v53);
                  goto LABEL_27;
                }
              }
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v42 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v42 <= 0xFu && CurrentIrql <= 0xFu && v42 >= 2u )
          {
            v43 = KeGetCurrentPrcb();
            v44 = v43->SchedulerAssist;
            v45 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v25 = (v45 & v44[5]) == 0;
            v44[5] &= v45;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v43);
          }
        }
        __writecr8(CurrentIrql);
        v51 |= 2uLL;
        v46 = v51;
        *(_OWORD *)a2 = v50;
        v47 = -1073741788;
        a2[2] = v46;
      }
      else
      {
        v47 = -1073741584;
      }
LABEL_27:
      a2 += 3;
      if ( a2 >= v10 )
      {
        CurrentThread = v52;
        v9 = v47;
        break;
      }
    }
  }
  if ( HIDWORD(v53) )
    MiNotifyPageHeat(&v53);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
  KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
  v25 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v25 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v9;
}
