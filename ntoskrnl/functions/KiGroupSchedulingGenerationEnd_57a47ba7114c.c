__int64 __fastcall KiGroupSchedulingGenerationEnd(struct _KPRCB *a1, __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 CurrentThread; // r15
  _KTHREAD *IdleThread; // rdi
  __int64 *v7; // r12
  char v9; // r13
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  __int64 v12; // rsi
  char v13; // al
  _QWORD **v14; // rdi
  __int64 result; // rax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // r8
  int v18; // ett
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  _KTHREAD *v21; // r15
  char v22; // r11
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  char v26; // dl
  _KTHREAD *NextThread; // rax
  int v28; // r8d
  unsigned __int8 v29; // dl
  __int64 v30; // r14
  _DWORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // r8
  _DWORD *v37; // r11
  char v38; // r10
  __int64 v39; // r10
  _DWORD *v40; // rcx
  __int64 v41; // r11
  _DWORD *v42; // r10
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r14
  bool v46; // zf
  unsigned __int64 v47; // rax
  __int64 v48; // r13
  __int64 v49; // rcx
  char v50; // al
  char v51; // al
  char v52; // cl
  char v53; // al
  __int64 v54; // rcx
  char v55; // cl
  __int64 RescheduleContextEntryForPrcb; // rax
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // r8
  _DWORD *v61; // r11
  char v62; // r10
  __int64 v63; // r10
  _DWORD *v64; // rcx
  char v65; // r11
  _KSOFTWARE_INTERRUPT_BATCH *p_DeferredDispatchInterrupts; // rsi
  char v67; // r14
  __int64 v68; // [rsp+20h] [rbp-E0h]
  __int64 v69; // [rsp+20h] [rbp-E0h]
  __int64 v70; // [rsp+20h] [rbp-E0h]
  bool v71; // [rsp+30h] [rbp-D0h]
  _QWORD *v72; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v74; // [rsp+48h] [rbp-B8h]
  __int64 v75; // [rsp+50h] [rbp-B0h]
  _DWORD v76[84]; // [rsp+60h] [rbp-A0h] BYREF

  CurrentThread = (__int64)a1->CurrentThread;
  IdleThread = a1->IdleThread;
  v7 = a2;
  v74 = a2;
  v75 = CurrentThread;
  v9 = CurrentThread == (_QWORD)IdleThread;
  v71 = CurrentThread == (_QWORD)IdleThread;
  _disable();
  LOBYTE(a4) = 1;
  KiEndThreadCycleAccumulation((__int64)a1, CurrentThread, 0LL, a4);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v19 = *SchedulerAssist;
    do
    {
      v20 = v19;
      v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
    }
    while ( v20 != v19 );
    if ( (v19 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  if ( (_KTHREAD *)CurrentThread != IdleThread )
    goto LABEL_3;
  NextThread = a1->NextThread;
  if ( !NextThread || NextThread == a1->IdleThread )
  {
    if ( (a1->IdleState & 1) != 0 )
      goto LABEL_24;
  }
  else if ( (a1->IdleState & 1) == 0 )
  {
LABEL_24:
    __fastfail(0x1Eu);
  }
LABEL_3:
  KiTransitionSchedulingGroupGeneration(a1, (__int64)SchedulerAssist, a3, 0);
  v72 = 0LL;
  memset(v76, 0, sizeof(v76));
  KiStartRescheduleContext((__int64)v76, v7, 0LL);
  v12 = (__int64)a1->NextThread;
  if ( !v12 || (unsigned __int8)KiIsPrcbThread(a1->NextThread) )
    goto LABEL_4;
  v21 = a1->CurrentThread;
  v73 = 0LL;
  if ( (*((_DWORD *)&v21->0 + 1) & 0x1000) != 0 || v21 == a1->SmtIsolationThread )
  {
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v76, a1);
    LOBYTE(v57) = 1;
    KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v58, v57, 0LL, v68);
    if ( (v62 & 2) != 0 )
    {
      LOBYTE(v59) = v76[0];
      v63 = 0LL;
      if ( LOBYTE(v76[0]) )
      {
        do
        {
          v64 = &v76[10 * v63 + 4];
          if ( v64 != v61 )
          {
            LOBYTE(v60) = 1;
            KiAdjustRescheduleContextEntryForThreadRemoval(v64, v59, v60, 0LL, v70);
            LOBYTE(v59) = v76[0];
          }
          v63 = (unsigned int)(v63 + 1);
        }
        while ( (unsigned int)v63 < (unsigned __int8)v59 );
      }
      v76[1] = 0;
    }
    goto LABEL_28;
  }
  v23 = KiFindRescheduleContextEntryForPrcb(v76, a1);
  if ( (unsigned __int8)(v22 & 2) <= (unsigned __int8)(*(_BYTE *)(v12 + 120) & 2)
    || (v29 = v76[0], v30 = 0LL, !LOBYTE(v76[0])) )
  {
LABEL_20:
    v24 = *(_QWORD *)v23;
    v25 = *(_QWORD *)(*(_QWORD *)v23 + 8LL);
    *(_QWORD *)(v23 + 16) = v25;
    v26 = *(_BYTE *)(v23 + 32) & 0xFE | (v25 == *(_QWORD *)(v24 + 24));
    *(_BYTE *)(v23 + 32) = v26;
    LODWORD(v24) = *(_DWORD *)(v25 + 120);
    *(_QWORD *)(v23 + 24) = 0LL;
    *(_BYTE *)(v23 + 33) &= ~1u;
    *(_BYTE *)(v23 + 34) |= 1u;
    *(_BYTE *)(v23 + 32) = v26 & 0xC5 | (2 * (((v24 & 2) != 0) | 2));
    if ( ((*((_BYTE *)&v21->MiscFlags + 4) | *(_BYTE *)(v12 + 120)) & 2) != 0 )
    {
      v41 = 0LL;
      if ( LOBYTE(v76[0]) )
      {
        do
        {
          v42 = &v76[10 * v41 + 4];
          if ( (_DWORD *)v23 != v42 )
          {
            v43 = *(&v21->MiscFlags + 1);
            v44 = *((_QWORD *)v42 + 3);
            v73 = 0LL;
            v45 = *(_QWORD *)v42;
            v46 = (v43 & 2) == 0;
            v47 = v44 - 1;
            if ( v46 )
            {
              v48 = *(_QWORD *)(v45 + 24);
              if ( v47 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v44) )
              {
                if ( (*((_BYTE *)v42 + 33) & 1) != 0 )
                  *(_DWORD *)(v54 + 116) |= 2u;
                *(_BYTE *)(v54 + 565) = 1;
                KiInsertDeferredReadyList(&v73, v54);
              }
              v55 = *((_BYTE *)v42 + 32) | 1;
              *((_QWORD *)v42 + 2) = v48;
              *((_BYTE *)v42 + 32) = v55;
              *((_BYTE *)v42 + 32) = v55 & 0xC5 | (2 * (((*(_DWORD *)(v48 + 120) & 2) != 0) | 2));
            }
            else
            {
              v48 = *(_QWORD *)(v45 + 34944);
              if ( v47 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v44) )
              {
                if ( (*((_BYTE *)v42 + 33) & 1) != 0 )
                  *(_DWORD *)(v49 + 116) |= 2u;
                *(_BYTE *)(v49 + 565) = 1;
                KiInsertDeferredReadyList(&v73, v49);
              }
              v50 = v42[8] & 0xFE;
              *((_QWORD *)v42 + 2) = v21;
              *((_BYTE *)v42 + 32) = v50;
              v51 = v50 & 0xE5 | (2 * (((*((_DWORD *)&v21->0 + 1) & 2) != 0) | 2));
              v52 = v51 | 0x20;
              v53 = v51 & 0xDF;
              if ( v21 == (_KTHREAD *)v48 )
                v52 = v53;
              *((_BYTE *)v42 + 32) = v52;
            }
            *((_BYTE *)v42 + 33) &= ~1u;
            *((_QWORD *)v42 + 3) = v48;
            if ( !(unsigned __int8)KiIsPrcbThread(v48) )
              *(_DWORD *)(v48 + 536) = *(_DWORD *)(v45 + 36);
          }
          v41 = (unsigned int)(v41 + 1);
        }
        while ( (unsigned int)v41 < LOBYTE(v76[0]) );
        v9 = v71;
      }
    }
    v76[1] = (*((_DWORD *)&v21->0 + 1) >> 1) & 1;
    goto LABEL_41;
  }
  while ( 1 )
  {
    v31 = &v76[10 * v30 + 4];
    if ( (_DWORD *)v23 != v31 )
      break;
LABEL_33:
    v30 = (unsigned int)(v30 + 1);
    if ( (unsigned int)v30 >= v29 )
      goto LABEL_20;
  }
  if ( (unsigned __int8)KiDoesThreadDominateRescheduleContextEntry(v31, v21, 2LL) )
  {
    v29 = v76[0];
    goto LABEL_33;
  }
  v32 = KiFindRescheduleContextEntryForPrcb(v76, a1);
  LOBYTE(v33) = 1;
  KiAdjustRescheduleContextEntryForThreadRemoval(v32, v34, v33, 0LL, v68);
  if ( (v38 & 2) != 0 )
  {
    LOBYTE(v35) = v76[0];
    v39 = 0LL;
    if ( LOBYTE(v76[0]) )
    {
      do
      {
        v40 = &v76[10 * v39 + 4];
        if ( v40 != v37 )
        {
          LOBYTE(v36) = 1;
          KiAdjustRescheduleContextEntryForThreadRemoval(v40, v35, v36, 0LL, v69);
          LOBYTE(v35) = v76[0];
        }
        v39 = (unsigned int)(v39 + 1);
      }
      while ( (unsigned int)v39 < (unsigned __int8)v35 );
    }
    v76[1] = 0;
  }
LABEL_41:
  v7 = v74;
LABEL_28:
  *(_BYTE *)(v12 + 388) = 1;
  v28 = *(char *)(v12 + 195);
  *(_DWORD *)(v12 + 436) = MEMORY[0xFFFFF78000000320];
  KiAddThreadToPrcbQueue((__int64)a1, v12, v28, 1, 0);
  CurrentThread = v75;
LABEL_4:
  KiSearchForNewThreadsForRescheduleContext(v76, (__int64)&v72);
  v13 = KiCommitRescheduleContext(v76, a1, 0LL, &v72);
  v14 = (_QWORD **)v72;
  if ( v13 || v72 )
  {
    KiReleasePrcbLocksForIsolationUnit(v7);
    if ( v65 )
    {
      KiCompleteRescheduleContext(v76, a1);
      p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
      KiFlushSoftwareInterruptBatch(&a1->DeferredDispatchInterrupts);
    }
    else
    {
      p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
    }
    if ( v14 )
    {
      v67 = 0;
      v72 = *v14;
      do
      {
        KiDeferredReadySingleThread((__int64)a1, (unsigned __int64)(v14 - 27), (__int64)&v72);
        v14 = (_QWORD **)v72;
        ++v67;
        if ( v72 )
          v72 = (_QWORD *)*v72;
        if ( (v67 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(p_DeferredDispatchInterrupts);
      }
      while ( v14 );
      KiFlushSoftwareInterruptBatch(p_DeferredDispatchInterrupts);
    }
    KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 0, v7);
  }
  _disable();
  result = KiStartThreadCycleAccumulation((__int64)a1, CurrentThread, v9);
  v16 = KeGetCurrentPrcb();
  v17 = v16->SchedulerAssist;
  if ( v17 )
  {
    _m_prefetchw(v17);
    LODWORD(result) = *v17;
    do
    {
      v18 = result;
      result = (unsigned int)_InterlockedCompareExchange(v17, result & 0xFFDFFFFF, result);
    }
    while ( v18 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick(v16);
  }
  _enable();
  return result;
}
