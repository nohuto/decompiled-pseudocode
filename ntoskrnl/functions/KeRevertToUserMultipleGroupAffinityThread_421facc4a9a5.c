char __fastcall KeRevertToUserMultipleGroupAffinityThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  int MiscFlags; // eax
  unsigned __int8 CurrentIrql; // r14
  __int64 CurrentPrcb; // rsi
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned int UserIdealProcessor; // r12d
  unsigned __int16 v8; // dx
  unsigned __int16 *v9; // r15
  char v10; // al
  char v11; // al
  struct _SINGLE_LIST_ENTRY *v12; // r8
  _WORD *v13; // rbp
  ULONG_PTR v14; // rbp
  bool v15; // zf
  int v16; // ecx
  struct _KPRCB *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // r9
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int16 v24; // bp
  unsigned int *i; // rbx
  unsigned __int64 v26; // rdi
  bool v27; // zf
  unsigned __int8 j; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v30; // rdx
  _WORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  char v34; // al
  struct _KPRCB *v35; // rcx
  signed __int32 *v36; // r8
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  __int64 v39; // r8
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  __int64 (__fastcall *v47)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // rax
  __int64 (__fastcall *v48)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v49)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v50)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v52[2]; // [rsp+40h] [rbp-328h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v54; // [rsp+4Ch] [rbp-31Ch]
  __int128 v55; // [rsp+50h] [rbp-318h] BYREF
  int v56; // [rsp+60h] [rbp-308h]
  int v57; // [rsp+68h] [rbp-300h] BYREF
  int v58; // [rsp+6Ch] [rbp-2FCh] BYREF
  _QWORD *v59; // [rsp+70h] [rbp-2F8h] BYREF
  _QWORD *v60; // [rsp+78h] [rbp-2F0h] BYREF
  __int64 *v61; // [rsp+80h] [rbp-2E8h] BYREF
  unsigned __int64 v62; // [rsp+88h] [rbp-2E0h] BYREF
  _DWORD v63[2]; // [rsp+90h] [rbp-2D8h] BYREF
  _DWORD v64[2]; // [rsp+98h] [rbp-2D0h] BYREF
  _DWORD v65[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  _DWORD v66[2]; // [rsp+A8h] [rbp-2C0h] BYREF
  _DWORD v67[2]; // [rsp+B0h] [rbp-2B8h] BYREF
  _DWORD v68[2]; // [rsp+B8h] [rbp-2B0h] BYREF
  __int128 v69; // [rsp+C0h] [rbp-2A8h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-298h]
  int v71; // [rsp+D8h] [rbp-290h] BYREF
  __int128 v72; // [rsp+DCh] [rbp-28Ch]
  __int128 v73; // [rsp+F0h] [rbp-278h] BYREF
  unsigned __int16 v74[136]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v75[34]; // [rsp+210h] [rbp-158h] BYREF
  int v76; // [rsp+360h] [rbp-8h]

  v60 = 0LL;
  CurrentThread = KeGetCurrentThread();
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 8) == 0 )
    return MiscFlags;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v30) = 4;
    else
      v30 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v30;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v57 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v57);
    while ( CurrentThread->ThreadLock );
  }
  Next = CurrentThread->SystemAffinityTokenListHead.Next;
  UserIdealProcessor = 2048;
  v8 = KeActiveProcessors[0];
  if ( Next )
    CurrentThread->SystemAffinityTokenListHead = (_SINGLE_LIST_ENTRY)Next->Next;
  v9 = *(unsigned __int16 **)(a1 + 24);
  if ( *v9 > v8 || v9[1] < v8 || (v10 = *(_BYTE *)(a1 + 19), (v10 & 1) == 0) || Next != (struct _SINGLE_LIST_ENTRY *)a1 )
    KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 1uLL, 0LL, 0LL);
  if ( *(_BYTE *)(a1 + 18) == 1 )
    *(_BYTE *)(a1 + 18) = v10 & 2;
  memset(v9 + 4, 0, 8LL * *v9);
  *v9 = 1;
  v11 = *(_BYTE *)(a1 + 18);
  if ( v11 )
  {
    if ( v11 != 2 )
      goto LABEL_15;
    if ( (*(_BYTE *)(a1 + 19) & 2) == 0 )
      KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 3uLL, 0LL, 0LL);
    v31 = *(_WORD **)(a1 + 24);
    v32 = *(unsigned __int16 *)(a1 + 16);
    v33 = *(_QWORD *)(a1 + 8);
    if ( *v31 <= (unsigned __int16)v32 )
    {
      if ( v31[1] <= (unsigned __int16)v32 )
        goto LABEL_15;
      *v31 = v32 + 1;
    }
    *(_QWORD *)&v31[4 * v32 + 4] |= v33;
  }
  else
  {
    v12 = CurrentThread->SystemAffinityTokenListHead.Next;
    if ( v12 )
    {
      v34 = BYTE2(v12[2].Next);
      if ( v34 && v34 != 2 )
        KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 2uLL, 0LL, 0LL);
      KiCopyAffinityEx(*(_QWORD *)(a1 + 24), *(_WORD *)(*(_QWORD *)(a1 + 24) + 2LL), (unsigned __int16 *)v12[3].Next);
    }
  }
LABEL_15:
  v13 = *(_WORD **)(a1 + 24);
  if ( (unsigned int)KeIsEmptyAffinityEx(v13) )
  {
    KiCopyAffinityEx((__int64)v13, v13[1], &CurrentThread->UserAffinity->Count);
    CurrentThread->MiscFlags &= ~8u;
    UserIdealProcessor = CurrentThread->UserIdealProcessor;
  }
  KiSetSystemAffinityThread(CurrentPrcb, *(unsigned __int16 **)(a1 + 24), 0LL, UserIdealProcessor, (__int64)&v60);
  LOBYTE(MiscFlags) = KiReadyDeferredReadyList(CurrentPrcb, &v60);
  v62 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v14 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      v16 = *(unsigned __int8 *)(v14 + 792) | *(unsigned __int8 *)(v14 + 870);
      v59 = 0LL;
      v61 = 0LL;
      if ( v16 != 63 )
      {
        v17 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v14, 1u, 1, 1, (__int64)&v59, (__int64)&v61, (__int64)&v17->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v61, (__int64)&v17->AbSelfIoBoostsList, (__int64)&v59);
        KiReadyDeferredReadyList((__int64)v17, &v59);
      }
      v58 = 0;
      v62 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v58);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v18 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v19 = __rdtsc();
      v20 = v19 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v14 + 72) += v20;
      v21 = *(unsigned int *)(v14 + 80);
      v22 = v20 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v19;
      v23 = (v22 >> 16) + v21;
      if ( v23 > 0xFFFFFFFF )
        LODWORD(v23) = -1;
      v15 = (*(_BYTE *)(v14 + 2) & 0xBE) == 0;
      *(_DWORD *)(v14 + 80) = v23;
      if ( !v15 )
      {
        LOBYTE(v19) = 1;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v14, v20, v19);
      }
      v35 = KeGetCurrentPrcb();
      v36 = (signed __int32 *)v35->SchedulerAssist;
      if ( v36 )
      {
        _m_prefetchw(v36);
        v37 = *v36;
        do
        {
          v38 = v37;
          v37 = _InterlockedCompareExchange(v36, v37 & 0xFFDFFFFF, v37);
        }
        while ( v38 != v37 );
        if ( (v37 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v18;
      if ( *(_BYTE *)(v18 + 388) == 1 )
        *(_DWORD *)(v18 + 132) = *(_DWORD *)(v18 + 132) - *(_DWORD *)(v18 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v18 + 388) = 2;
      *(_BYTE *)(v14 + 643) = 32;
      *(_BYTE *)(v14 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v62, v14);
      LOBYTE(v39) = CurrentIrql;
      v15 = (unsigned __int8)KiSwapContext(v14, v18, v39) == 0;
    }
    else
    {
      v15 = (*(_DWORD *)(v14 + 116) & 0x40) == 0;
    }
    if ( !v15 )
    {
      if ( KiIrqlFlags )
      {
        v40 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v40 - 2) <= 0xDu )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v15 = (v42[5] & 0xFFFF0003) == 0;
          v42[5] &= 0xFFFF0003;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v14 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      v43 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v43 - 2) <= 0xDu )
      {
        v44 = KeGetCurrentPrcb();
        v45 = v44->SchedulerAssist;
        v46 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v46 & v45[5]) == 0;
        v45[5] &= v46;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
    LOBYTE(MiscFlags) = CurrentIrql;
    __writecr8(CurrentIrql);
    return MiscFlags;
  }
  if ( !*(_QWORD *)(CurrentPrcb + 16) )
    return MiscFlags;
  LOBYTE(MiscFlags) = *(_BYTE *)(CurrentPrcb + 13242);
  if ( (_BYTE)MiscFlags )
    return MiscFlags;
  if ( *(_BYTE *)(CurrentPrcb + 32) )
  {
    *(_BYTE *)(CurrentPrcb + 6) = 1;
    return MiscFlags;
  }
  memset(v74, 0, 0x108uLL);
  v72 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v71 = 3;
    ProcNumber = (struct _PROCESSOR_NUMBER)-1;
    v54 = 1;
    v52[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v52[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v47 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                                 + 120);
    _disable();
    LOBYTE(MiscFlags) = v47(*(_QWORD *)(HalpInterruptController + 16), v52, &v71, 47LL, &ProcNumber);
    if ( (v76 & 0x200) != 0 )
      _enable();
  }
  else
  {
    KeInitializeAffinityEx2((__int64)v74, 0x20u);
    KeAddProcessorAffinityEx(v74, KeGetPcr()->Prcb.Number);
    v52[0] = 0;
    ProcNumber = 0;
    v70 = 0LL;
    v73 = 0LL;
    v69 = 0LL;
    memset(v75, 0, 0x108uLL);
    v56 = 0;
    v55 = 0LL;
    if ( qword_140C621C8 )
    {
      LOBYTE(MiscFlags) = qword_140C621C8(v74, 47LL);
      return MiscFlags;
    }
    KeInitializeAffinityEx2((__int64)v75, 0x20u);
    KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v74, v75, WORD1(v75[0]));
    v24 = v76;
    if ( HalpInterruptClusterModeEnabled )
    {
      for ( i = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)i < HalpInterruptClusterDataEnd; i += 6 )
      {
        if ( (unsigned int)KeAndGroupAffinityEx(v74, (__int64)(i + 2), (char *)&v73) )
        {
          v26 = v73;
          LODWORD(v55) = 6;
          v27 = (_QWORD)v73 == 0LL;
          *((_QWORD *)&v55 + 1) = *i;
          ProcNumber.Group = WORD4(v73);
          for ( j = 0; ; ++j )
          {
            ProcNumber.Number = j;
            if ( v27 )
              break;
            if ( (v26 & 1) != 0 )
            {
              v52[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
              HIDWORD(v55) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v52[0] + 12);
              j = ProcNumber.Number;
            }
            v26 >>= 1;
            v27 = v26 == 0;
          }
          v63[0] = -1;
          v63[1] = 1;
          v64[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v64[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v48 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
          _disable();
          MiscFlags = v48(*(_QWORD *)(HalpInterruptController + 16), v64, &v55, 47LL, v63);
          if ( (v24 & 0x200) != 0 )
            _enable();
          if ( MiscFlags < 0 )
            return MiscFlags;
        }
      }
      goto LABEL_53;
    }
    if ( HalpInterruptPhysicalModeOnly )
      goto LABEL_53;
    LODWORD(v55) = 5;
    DWORD2(v55) = 0;
    KeInitializeEnumerationContext((__int64)&v69, (__int64)v74);
    while ( !(unsigned int)KeEnumerateNextProcessor(v52, (unsigned __int16 **)&v69) )
    {
      if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v52[0]) == 5 )
        DWORD2(v55) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v52[0] + 8);
    }
    if ( !DWORD2(v55) )
      goto LABEL_53;
    v65[0] = -1;
    v65[1] = 1;
    v66[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v66[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v49 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
    _disable();
    MiscFlags = v49(*(_QWORD *)(HalpInterruptController + 16), v66, &v55, 47LL, v65);
    if ( (v24 & 0x200) != 0 )
      _enable();
    if ( MiscFlags >= 0 )
    {
LABEL_53:
      *((_QWORD *)&v69 + 1) = v75[1];
      *(_QWORD *)&v69 = v75;
      v52[0] = 0;
      LOWORD(v70) = 0;
      do
      {
        MiscFlags = KeEnumerateNextProcessor(v52, (unsigned __int16 **)&v69);
        if ( MiscFlags )
          break;
        LODWORD(v55) = 4;
        v67[0] = -1;
        v67[1] = 1;
        DWORD2(v55) = *(_DWORD *)(HalpInterruptTargets + 24LL * v52[0] + 8);
        v68[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v68[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v50 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        MiscFlags = v50(*(_QWORD *)(HalpInterruptController + 16), v68, &v55, 47LL, v67);
        if ( (v24 & 0x200) != 0 )
          _enable();
      }
      while ( MiscFlags >= 0 );
    }
  }
  return MiscFlags;
}
