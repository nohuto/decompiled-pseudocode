__int64 __fastcall MiCoalesceFreePages(__int64 a1)
{
  ULONG_PTR v1; // r13
  __int64 v2; // r12
  unsigned __int64 v3; // rsi
  signed __int64 v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // rbp
  int v7; // edx
  unsigned __int64 v8; // r10
  ULONG_PTR v9; // r8
  char *v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // r9
  struct _KTHREAD *CurrentThread; // r8
  volatile signed __int64 *v15; // r11
  unsigned int AbEntrySummary; // eax
  unsigned int v17; // ecx
  struct _KPRCB *CurrentPrcb; // r9
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  unsigned __int64 v21; // r13
  _QWORD *v22; // r15
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // eax
  unsigned int v26; // r11d
  __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r15
  unsigned int v30; // r13d
  unsigned __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rbx
  int v34; // r11d
  volatile LONG *v35; // r14
  unsigned int i; // ebx
  signed __int64 *v37; // rbx
  ULONG_PTR v39; // r11
  _QWORD *v40; // rcx
  signed __int32 v41; // eax
  signed __int32 v42; // ett
  int v43; // r9d
  int v44; // ecx
  ULONG_PTR v45; // r11
  unsigned int v46; // [rsp+40h] [rbp-98h]
  int v47; // [rsp+44h] [rbp-94h] BYREF
  struct _KTHREAD *v48; // [rsp+48h] [rbp-90h]
  ULONG_PTR v49; // [rsp+50h] [rbp-88h]
  unsigned int v50; // [rsp+58h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-78h]
  __int128 v52; // [rsp+70h] [rbp-68h] BYREF
  __int128 v53; // [rsp+80h] [rbp-58h]
  __int128 v54; // [rsp+90h] [rbp-48h]

  v1 = 0LL;
  v47 = 0;
  v52 = 0LL;
  v53 = 0LL;
  if ( !MmPhysicalMemoryBlock )
    return 0LL;
  v2 = 48 * a1 - 0x220000000000LL;
  v3 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v46 = *(_BYTE *)(v2 + 34) & 7;
  v4 = 48 * (a1 & 0xFFFFFFFFFFFFFFF0uLL);
  v5 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v2 + 40) >> 43) & 0x3FFLL));
  v6 = v4 - 0x220000000000LL;
  v7 = dword_140C65708;
  v8 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = 0xAAAAAAAAAAAAAAABuLL * (v4 >> 4);
  if ( dword_140C65704 > (unsigned int)dword_140C65708
    || (v10 = (char *)qword_140C65748 + 16 * dword_140C65704, v9 < *(_QWORD *)v10)
    || dword_140C65704 != dword_140C65708 && v9 >= *((_QWORD *)v10 + 2) )
  {
    v43 = 0;
    if ( dword_140C65708 < 0 )
LABEL_99:
      KeBugCheckEx(0x1Au, 0x6201uLL, v9, 0LL, 0LL);
    while ( 1 )
    {
      v44 = (v43 + v7) >> 1;
      v10 = (char *)qword_140C65748 + 16 * v44;
      if ( v9 < *(_QWORD *)v10 )
      {
        if ( !v44 )
          KeBugCheckEx(0x1Au, 0x6200uLL, v9, (ULONG_PTR)qword_140C65748, 0LL);
        v7 = v44 - 1;
      }
      else
      {
        if ( v44 == dword_140C65708 || v9 < *((_QWORD *)v10 + 2) )
        {
          dword_140C65704 = (v43 + v7) >> 1;
          break;
        }
        v43 = v44 + 1;
      }
      if ( v7 < v43 )
        goto LABEL_99;
    }
  }
  v11 = *((unsigned int *)v10 + 2);
  if ( v6 != v6 + 768 )
  {
    v12 = (_QWORD *)(v6 + 40);
    v13 = (_QWORD *)(v4 - 0x21FFFFFFFFD8LL);
    while ( v8 <= qword_140C65820
         && (*v13 & 0x40000000000000LL) != 0
         && *(_QWORD *)(qword_140C67048 + 8 * ((*v12 >> 43) & 0x3FFLL)) == v5
         && (*((_BYTE *)v12 - 6) & 7u) <= 1
         && (*v12 & 0x10000000000LL) == 0 )
    {
      v12 += 6;
      ++v8;
      v13 += 6;
      if ( v12 == (_QWORD *)(v6 + 808) )
        goto LABEL_14;
    }
    return 0LL;
  }
LABEL_14:
  CurrentThread = KeGetCurrentThread();
  v15 = (volatile signed __int64 *)(v5 + 216);
  BugCheckParameter2 = v5 + 216;
  v54 = 0LL;
  v48 = CurrentThread;
  v49 = v3;
  v50 = 0;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary )
    goto LABEL_15;
  AbEntrySummary = KiAbTryReclaimOrphanedEntries(v5 + 216, CurrentThread);
  v15 = (volatile signed __int64 *)(v5 + 216);
  if ( AbEntrySummary )
  {
    CurrentThread = v48;
LABEL_15:
    _BitScanForward(&v17, AbEntrySummary);
    v50 = v17;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v17);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v41 = *SchedulerAssist;
      do
      {
        v42 = v41;
        v41 = _InterlockedCompareExchange(SchedulerAssist, v41 & 0xFFDFFFFF, v41);
      }
      while ( v42 != v41 );
      if ( (v41 & 0x200000) != 0 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        CurrentThread = v48;
        v15 = (volatile signed __int64 *)(v5 + 216);
      }
    }
    _enable();
    v1 = (ULONG_PTR)(&CurrentThread[1].Process + 12 * v50);
    if ( (unsigned __int64)v15 - qword_140C65668 < 0x8000000000LL )
    {
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      v15 = (volatile signed __int64 *)(v5 + 216);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v1 + 8) = SessionId;
    *(_QWORD *)v1 = (unsigned __int64)v15 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64(v15, 17LL, 0LL) && !(unsigned __int8)ExfTryAcquirePushLockSharedEx(v15, 0LL) )
  {
    if ( v1 )
      KeAbPostReleaseEx(v45, v1);
    return 0LL;
  }
  if ( v1 )
    *(_BYTE *)(v1 + 18) = 1;
  v21 = 48 * v3 - 0x220000000000LL;
  v22 = (_QWORD *)(v4 - 0x21FFFFFFFFD8LL);
  while ( 1 )
  {
    if ( v21 == v2 )
    {
      v40 = (_QWORD *)(v21 + 16);
      if ( (*(_BYTE *)(v21 + 34) & 7) != 0 )
        MiSetOriginalPtePfnFromFreeList(v40, SchedulerAssist, CurrentThread);
      else
        *v40 &= 0xFFFFFFFFFFFFFC1FuLL;
      goto LABEL_35;
    }
    if ( v49 > qword_140C65820
      || (*v22 & 0x40000000000000LL) == 0
      || *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL)) != v5
      || (*(_BYTE *)(v21 + 34) & 7u) > 1
      || _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
    {
      goto LABEL_87;
    }
    if ( (*(_BYTE *)(v21 + 34) & 7u) > 1 )
      goto LABEL_106;
    v23 = *(_QWORD *)(v21 + 40);
    if ( *(_QWORD *)(qword_140C67048 + 8 * ((v23 >> 43) & 0x3FF)) != v5
      || (*(_BYTE *)(v21 + 35) & 0x40) != 0
      || (v23 & 0x10000000000LL) != 0 )
    {
      goto LABEL_106;
    }
    if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v49, 0LL, 0) )
      break;
    ++*((_DWORD *)&v54 + ((unsigned __int64)*(unsigned __int8 *)(v21 + 34) >> 6));
LABEL_35:
    ++v49;
    v21 += 48LL;
    v22 += 6;
    if ( v21 == v6 + 768 )
      goto LABEL_36;
  }
  MiReturnFreeZeroPage(v21, 512LL);
LABEL_106:
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_87:
  if ( v21 != v6 + 768 )
  {
    for ( ; v6 < v21; v6 += 48LL )
    {
      if ( v6 != v2 )
      {
        MiReturnFreeZeroPage(v6, 512LL);
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    v39 = BugCheckParameter2;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      v39 = BugCheckParameter2;
    }
    KeAbPostRelease(v39);
    return 0LL;
  }
LABEL_36:
  v24 = 0LL;
  v25 = 0;
  v26 = 1;
  if ( (_DWORD)v54 )
  {
    v25 = v54;
    v26 = 0;
  }
  if ( v25 < DWORD1(v54) )
  {
    v25 = DWORD1(v54);
    v26 = 1;
  }
  if ( v25 < DWORD2(v54) )
  {
    v25 = DWORD2(v54);
    v26 = 2;
  }
  if ( v25 < HIDWORD(v54) )
    v26 = 3;
  LODWORD(v49) = v26;
  if ( v46 != 1 )
  {
    while ( 1 )
    {
      v21 -= 48LL;
      if ( MiPfnZeroingNeeded(v21) )
        break;
      if ( v21 == v6 )
        goto LABEL_45;
    }
    v46 = 1;
  }
LABEL_45:
  LODWORD(v27) = v24;
  v47 = v24;
  v28 = v6 + 720;
  LODWORD(v48) = v24;
  v29 = v6 + 720;
  v30 = v24;
  do
  {
    if ( *(unsigned __int8 *)(v29 + 34) >> 6 != v26 )
    {
      MiChangePageAttribute(v29, v26, 1LL, 4294967293LL);
      LODWORD(v27) = (_DWORD)v48;
      v24 = 0LL;
      v26 = v49;
    }
    v31 = *(_QWORD *)(v29 + 16);
    if ( qword_140C657C0 && (v31 & 0x10) == 0 )
      v31 &= ~qword_140C657C0;
    if ( HIDWORD(v31) == 4294967293 )
      v27 = (unsigned int)v27 | 1;
    else
      v27 = (unsigned int)v27 | 2;
    *(_QWORD *)(v29 + 16) = v24;
    ++v30;
    v29 -= 48LL;
    LODWORD(v48) = v27;
  }
  while ( v30 < 0x10 );
  v32 = MiDetermineCoalescedLargePageHeatState(2LL, v27, v46, &v47);
  *(_QWORD *)&v52 = v3;
  v53 = 0LL;
  *((_QWORD *)&v52 + 1) = v46 | 0x200000000LL;
  LOBYTE(v53) = 17;
  v33 = *(_QWORD *)(v5 + 16) + 25408 * v11;
  MiInitializeAllResidentPageBasePfns((unsigned __int16 *)v5, v3, 16LL, 2, v34, v32, 1);
  MiCreateInitialLargeLeafPfns(v3, 16LL, 2, v49, *(_WORD *)v5, 1);
  v35 = (volatile LONG *)(v33 + 23104);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v33 + 23104));
  for ( i = 0; i < 0x10; ++i )
  {
    if ( v28 == v6 )
      MiInsertLargePageInNodeList(&v52);
    if ( v28 != v2 )
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v28 -= 48LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v35);
  if ( v47 )
    MiChangePageHeatImmediate(v3, 2LL, 0LL);
  v37 = (signed __int64 *)BugCheckParameter2;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v37);
  KeAbPostRelease((ULONG_PTR)v37);
  return 1LL;
}
