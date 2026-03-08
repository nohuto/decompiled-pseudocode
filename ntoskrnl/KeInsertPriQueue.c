/*
 * XREFs of KeInsertPriQueue @ 0x14033F6C0
 * Callers:
 *     ExpTryQueueWorkItem @ 0x140308AAC (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 * Callees:
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035845C (KiAbQueueAutoBoostDpc.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall KeInsertPriQueue(__int64 a1, __int64 *a2, int a3, int a4, int a5)
{
  __int64 v5; // r12
  _QWORD **v6; // rdi
  unsigned __int8 v8; // bp
  __int64 CurrentIrql; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // rbx
  char v12; // r10
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // ecx
  _QWORD *v18; // r14
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  _QWORD *v21; // rcx
  ULONG_PTR v22; // rdi
  __int64 v23; // rax
  char v24; // cl
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rbp
  char v29; // al
  __int64 v30; // rcx
  __int64 *v31; // rax
  struct _KPRCB *v32; // rcx
  char v33; // al
  int v34; // edx
  int v35; // eax
  char v36; // cl
  _DWORD *SchedulerAssist; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  int v41; // edx
  __int64 v42; // rcx
  __int64 **v43; // rax
  __int64 *v44; // rdx
  char v45; // al
  char v46; // al
  char v47; // al
  __int64 *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  _QWORD *v51; // rcx
  struct _SINGLE_LIST_ENTRY *v52; // r8
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // rdx
  int v54; // [rsp+30h] [rbp-48h] BYREF
  int v55; // [rsp+34h] [rbp-44h] BYREF
  __int64 v56; // [rsp+38h] [rbp-40h]
  int v57; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v58; // [rsp+88h] [rbp+10h]
  int v59; // [rsp+98h] [rbp+20h]

  v59 = a4;
  v58 = a2;
  v5 = a3;
  v6 = (_QWORD **)(a1 + 8);
  v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v56 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v39) = 4;
    else
      v39 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v39;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v57 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      KeYieldProcessorEx(&v57);
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  v12 = a5;
  v59 = a5;
  if ( *v6 != v6 && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)a1 || CurrentThread->WaitReason != 15) )
  {
    v13 = 0;
    v14 = a1 + 664;
    v15 = 32LL;
    do
    {
      v16 = *(_DWORD *)(v14 - 4);
      v14 -= 4LL;
      v13 += v16;
      --v15;
      v17 = *(_DWORD *)(a1 + 664);
      if ( v13 >= v17 )
        goto LABEL_49;
    }
    while ( v15 > v5 );
    if ( v13 < v17 )
    {
      v18 = *v6;
      while ( 1 )
      {
        v19 = (_QWORD *)*v18;
        v20 = v18;
        v18 = v19;
        v21 = (_QWORD *)v20[1];
        if ( (_QWORD *)v19[1] != v20 || (_QWORD *)*v21 != v20 )
          goto LABEL_95;
        *v21 = v19;
        v8 = 0;
        v19[1] = v21;
        v22 = v20[3];
        v54 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v54);
          while ( *(_QWORD *)(v22 + 64) );
        }
        if ( *(_BYTE *)(v22 + 388) != 5 )
          goto LABEL_32;
        v23 = (unsigned __int8)*(_DWORD *)(v22 + 540);
        if ( (_DWORD)v23 != (_DWORD)v5 )
        {
          v41 = *(_DWORD *)(v22 + 540) & 0x100;
          if ( !v41 )
          {
            v49 = *(_QWORD *)(v22 + 232);
            _InterlockedDecrement((volatile signed __int32 *)(v49 + 4 * v23 + 536));
            _InterlockedIncrement((volatile signed __int32 *)(v49 + 4 * v5 + 536));
          }
          *(_DWORD *)(v22 + 540) = (unsigned __int8)v5 | v41;
        }
        v24 = *(_BYTE *)(v22 + 112);
        v25 = v24 & 7;
        if ( v25 == 1 || v25 == 4 )
        {
          v26 = *(_QWORD *)(v22 + 232);
          if ( v26 )
          {
            if ( (*(_BYTE *)v26 & 0x7F) == 0x15 )
            {
              v27 = (unsigned __int8)*(_DWORD *)(v22 + 540);
              *(_DWORD *)(v22 + 540) = v27;
              _InterlockedIncrement((volatile signed __int32 *)(v26 + 4 * v27 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v26 + 40));
            }
          }
          v28 = *(_QWORD *)(v22 + 712);
          if ( v28 )
          {
            v55 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 32464), 0LL) )
            {
              do
                KeYieldProcessorEx(&v55);
              while ( *(_QWORD *)(v28 + 32464) );
            }
            if ( *(_QWORD *)(v22 + 712) )
            {
              v50 = *(_QWORD *)(v22 + 216);
              v51 = *(_QWORD **)(v22 + 224);
              if ( *(_QWORD *)(v50 + 8) != v22 + 216 || *v51 != v22 + 216 )
                goto LABEL_95;
              *v51 = v50;
              *(_QWORD *)(v50 + 8) = v51;
              *(_QWORD *)(v22 + 712) = 0LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 32464), 0LL);
          }
          v29 = *(_BYTE *)(v22 + 388);
          if ( v29 == 1 )
          {
            *(_DWORD *)(v22 + 116) |= 2u;
          }
          else if ( v29 == 5 )
          {
            v30 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v22 + 436));
            if ( *(_BYTE *)(v22 + 391) )
              *(_QWORD *)(v22 + 1000) += v30;
            else
              *(_QWORD *)(v22 + 992) += v30;
          }
          *(_BYTE *)(v22 + 388) = 7;
          *(_QWORD *)(v22 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
          v31 = v58;
          CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v22 + 216);
          *(_QWORD *)(v22 + 200) = v31;
          *(_QWORD *)(v22 + 976) = 0LL;
        }
        else
        {
          if ( (*(_BYTE *)(v22 + 112) & 7) != 0 )
          {
            if ( v25 == 5 )
            {
              *(_BYTE *)(v22 + 112) = v24 & 0xF8 | 6;
            }
            else if ( v25 == 3 )
            {
              *((_BYTE *)v20 + 17) = 2;
            }
            goto LABEL_32;
          }
          v48 = v58;
          *(_BYTE *)(v22 + 112) = v24 & 0xF8 | 2;
          *(_QWORD *)(v22 + 200) = v48;
          *(_QWORD *)(v22 + 976) = 0LL;
          *((_BYTE *)v20 + 17) = 0;
        }
        *(_BYTE *)(v22 + 645) = 0;
        v8 = 1;
        v32 = KeGetCurrentPrcb();
        if ( (char)v5 < *(char *)(v22 + 563) )
        {
          if ( *(_BYTE *)(v22 + 871) )
          {
            v52 = (struct _SINGLE_LIST_ENTRY *)(v22 + 816);
            if ( *(_QWORD *)(v22 + 816) == 1LL )
            {
              p_AbSelfIoBoostsList = &v32->AbSelfIoBoostsList;
              if ( v32 != (struct _KPRCB *)-35696LL )
              {
                v52->Next = p_AbSelfIoBoostsList->Next;
                p_AbSelfIoBoostsList->Next = v52;
                _InterlockedIncrement16((volatile signed __int16 *)(v22 + 868));
                KiAbQueueAutoBoostDpc(v32);
              }
            }
          }
        }
        v33 = *(_BYTE *)(v22 + 564);
        *(_BYTE *)(v22 + 563) = v5;
        if ( v33 )
        {
          if ( (v33 & 0xF) != 0 )
            *(_DWORD *)(v22 + 872) = MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v22 + 564) = 0;
        }
        v34 = *(_DWORD *)(v22 + 1028);
        if ( (int)v5 >= 16 )
        {
          v45 = *(_BYTE *)((char)v5 + v22 + 824);
          if ( v45 == -1 )
            KeBugCheckEx(0x157u, v22, (char)v5, 1uLL, 0LL);
          *(_BYTE *)((char)v5 + v22 + 824) = v45 + 1;
          v35 = v5;
          *(_DWORD *)(v22 + 856) |= 1 << v5;
        }
        else
        {
          v35 = 32;
        }
        *(_DWORD *)(v22 + 1028) = v35;
        if ( v34 != 32 )
        {
          v46 = *(_BYTE *)((char)v34 + v22 + 824);
          if ( !v46 )
            KeBugCheckEx(0x157u, v22, (char)v34, 2uLL, 0LL);
          v47 = v46 - 1;
          *(_BYTE *)((char)v34 + v22 + 824) = v47;
          if ( !v47 )
            *(_DWORD *)(v22 + 856) ^= 1 << v34;
        }
        if ( (_DWORD)v5 != *(char *)(v22 + 195) )
        {
          v40 = *(_QWORD *)(v22 + 72) + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v22 + 651);
          if ( (*(_DWORD *)(v22 + 120) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)(v22 + 120), 5u);
          *(_QWORD *)(v22 + 32) = v40;
          KiSetPriorityThread(v22, 0LL, v5);
        }
LABEL_32:
        *(_QWORD *)(v22 + 64) = 0LL;
        ++*((_BYTE *)v20 + 17);
        if ( v8 )
        {
          v12 = v59;
          goto LABEL_34;
        }
        if ( v18 == (_QWORD *)(a1 + 8) )
        {
          v12 = v59;
          break;
        }
      }
    }
  }
LABEL_49:
  if ( (v12 & 2) == 0 )
  {
    ++*(_DWORD *)(a1 + 4);
    v42 = 16 * v5 + a1 + 24;
    v43 = *(__int64 ***)(v42 + 8);
    if ( *v43 != (__int64 *)v42 )
LABEL_95:
      __fastfail(3u);
    v44 = v58;
    *v58 = v42;
    v44[1] = (__int64)v43;
    *v43 = v44;
    *(_QWORD *)(v42 + 8) = v44;
  }
LABEL_34:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (v12 & 1) != 0 )
    v36 = 3;
  else
    v36 = 0;
  KiExitDispatcher((__int64)CurrentPrcb, v36, (struct _PROCESSOR_NUMBER)1, 0, v56);
  return v8;
}
