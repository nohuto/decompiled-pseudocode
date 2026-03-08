/*
 * XREFs of EtwpTraceStackKey @ 0x140461010
 * Callers:
 *     EtwpTraceStackWalk @ 0x140460A6C (EtwpTraceStackWalk.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     KxTryToAcquireSpinLock @ 0x14036B144 (KxTryToAcquireSpinLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     EtwpDereferenceStackEntry @ 0x140460D12 (EtwpDereferenceStackEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall EtwpTraceStackKey(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int **v6; // r14
  char v7; // bp
  unsigned int v8; // r15d
  unsigned int *v9; // r13
  unsigned int v10; // r11d
  unsigned __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // r10
  __int64 v14; // rax
  int v15; // edx
  int v16; // ebx
  unsigned int **v17; // rsi
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v19; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v21; // rdx
  PSLIST_ENTRY v22; // rdi
  unsigned int v23; // eax
  unsigned int v24; // ecx
  PSLIST_ENTRY v25; // r14
  unsigned int Next; // edx
  _SLIST_ENTRY *v27; // rcx
  PSLIST_ENTRY *v28; // rax
  unsigned int *v29; // rax
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v32; // r8
  int v33; // eax
  bool v34; // zf
  unsigned int *v35; // rax
  __int64 v36; // rbx
  PSLIST_ENTRY v37; // rbp
  union _SLIST_HEADER *v38; // r12
  PSLIST_ENTRY v39; // rax
  PSLIST_ENTRY v40; // r14
  unsigned int v41; // r15d
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  int v45; // eax
  struct _SLIST_ENTRY *v46; // rbx
  PSLIST_ENTRY *v47; // rax
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r9
  _DWORD *v50; // r8
  int v51; // eax
  unsigned __int8 v53; // [rsp+30h] [rbp-88h]
  unsigned __int8 v54; // [rsp+38h] [rbp-80h]
  int v55; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v56; // [rsp+40h] [rbp-78h]
  unsigned int **v57; // [rsp+48h] [rbp-70h]
  unsigned int ListHead; // [rsp+50h] [rbp-68h]
  union _SLIST_HEADER *ListHeada; // [rsp+50h] [rbp-68h]
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-58h] BYREF
  unsigned int **v61; // [rsp+68h] [rbp-50h]

  v6 = *(unsigned int ***)(a1 + 1008);
  ListEntry = 0LL;
  v57 = v6;
  if ( !v6 )
    return 0;
  v8 = a6;
  v9 = 0LL;
  v10 = 0;
  v11 = 4LL * a6;
  v12 = 0;
  v56 = 0;
  if ( v11 )
  {
    v13 = 0LL;
    do
    {
      v14 = v12 + 1;
      v12 += 2;
      v15 = *(unsigned __int16 *)(a5 + 2 * v13) ^ *(unsigned __int16 *)(a5 + 2 * v14);
      v13 = v12;
      v10 += v15;
    }
    while ( v12 < v11 );
    v8 = a6;
    v56 = v10;
  }
  v16 = 0;
  v17 = &(&v6[2 * (v10 % *((_DWORD *)v6 + 2)) + 4])[v10 % *((_DWORD *)v6 + 2)];
  v61 = v17;
  CurrentIrql = KeGetCurrentIrql();
  v53 = CurrentIrql;
  v7 = 1;
  v54 = CurrentIrql;
  if ( !CurrentIrql || CurrentIrql == 1 )
  {
    v19 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v19 == 2 )
        LODWORD(v21) = 4;
      else
        v21 = (-1LL << (v19 + 1)) & 4;
      SchedulerAssist[5] |= v21;
    }
    goto LABEL_19;
  }
  if ( CurrentIrql == 2 )
  {
LABEL_19:
    KxAcquireSpinLock((PKSPIN_LOCK)v17 + 2);
    goto LABEL_20;
  }
  if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)v17 + 4) )
    return 0;
LABEL_20:
  v22 = (PSLIST_ENTRY)*v17;
  if ( *v17 != (unsigned int *)v17 )
  {
    v23 = v56;
    do
    {
      ++v16;
      if ( *((_DWORD *)&v22[1].Next + 3) == v23 && LODWORD(v22[2].Next) == v8 )
      {
        v24 = 0;
        v25 = v22;
        v55 = 0;
        while ( 1 )
        {
          Next = 32;
          if ( LODWORD(v25[2].Next) < 0x20 )
            Next = (unsigned int)v25[2].Next;
          ListHead = Next;
          if ( RtlCompareMemory(&v25[2].Next + 1, (const void *)(a5 + 8LL * v24), 8LL * Next) != 8LL * Next )
            break;
          v24 = ListHead + v55;
          v25 = v25[1].Next;
          v55 += ListHead;
          if ( !v25 )
          {
            _InterlockedAdd((volatile signed __int32 *)&v22[1].Next + 2, 1u);
            v27 = v22->Next;
            v28 = (PSLIST_ENTRY *)*((_QWORD *)&v22->Next + 1);
            if ( *(&v22->Next->Next + 1) == v22 && *v28 == v22 )
            {
              *v28 = v27;
              *((_QWORD *)&v27->Next + 1) = v28;
              v29 = *v17;
              if ( *((unsigned int ***)*v17 + 1) == v17 )
              {
                v22->Next = (_SLIST_ENTRY *)v29;
                *((_QWORD *)&v22->Next + 1) = v17;
                *((_QWORD *)v29 + 1) = v22;
                *v17 = (unsigned int *)v22;
                KxReleaseSpinLock((volatile signed __int64 *)v17 + 2);
                if ( KiIrqlFlags )
                {
                  v30 = KeGetCurrentIrql();
                  if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && v53 <= 0xFu && v30 >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v32 = CurrentPrcb->SchedulerAssist;
                    v33 = ~(unsigned __int16)(-1LL << (v54 + 1));
                    v34 = (v33 & v32[5]) == 0;
                    v32[5] &= v33;
                    if ( v34 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
                __writecr8(v53);
                goto LABEL_82;
              }
            }
LABEL_72:
            __fastfail(3u);
          }
        }
        v23 = v56;
      }
      v22 = v22->Next;
    }
    while ( v22 != (PSLIST_ENTRY)v17 );
    if ( v16 == 4 )
    {
      v9 = v17[1];
      v35 = (unsigned int *)*((_QWORD *)v9 + 1);
      if ( *(unsigned int ***)v9 != v17 || *(unsigned int **)v35 != v9 )
        goto LABEL_72;
      v17[1] = v35;
      *(_QWORD *)v35 = v17;
    }
    v6 = v57;
  }
  v22 = 0LL;
  v36 = 0LL;
  if ( v8 )
  {
    v37 = 0LL;
    v38 = (union _SLIST_HEADER *)(v6 + 2);
    ListHeada = (union _SLIST_HEADER *)(v6 + 2);
    do
    {
      v39 = RtlpInterlockedPopEntrySList(v38);
      v40 = v39;
      if ( !v39 )
        break;
      if ( (int)v36 + 32 >= v8 )
        v41 = v8 - v36;
      else
        v41 = 32;
      memmove(&v39[2].Next + 1, (const void *)(a5 + 8 * v36), 8LL * v41);
      if ( (_DWORD)v36 )
        LODWORD(v40[2].Next) = v41;
      else
        v22 = v40;
      if ( v37 )
        v37[1].Next = v40;
      v40[1].Next = 0LL;
      v36 = v41 + (unsigned int)v36;
      v8 = a6;
      v37 = v40;
    }
    while ( (unsigned int)v36 < a6 );
    v17 = v61;
    v7 = 1;
    if ( (unsigned int)v36 < v8 )
    {
      KxReleaseSpinLock((volatile signed __int64 *)v61 + 2);
      if ( KiIrqlFlags )
      {
        v42 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v42 <= 0xFu && v53 <= 0xFu && v42 >= 2u )
        {
          v43 = KeGetCurrentPrcb();
          v44 = v43->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << (v54 + 1));
          v34 = (v45 & v44[5]) == 0;
          v44[5] &= v45;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(v43);
        }
      }
      __writecr8(v53);
      if ( v22 )
      {
        do
        {
          v46 = v22[1].Next;
          RtlpInterlockedPushEntrySList(ListHeada, v22);
          v22 = v46;
        }
        while ( v46 );
      }
      if ( v9 )
        EtwpDereferenceStackEntry((PSLIST_ENTRY)v9, v57);
      return 0;
    }
  }
  *((_DWORD *)&v22[1].Next + 3) = v56;
  LODWORD(v22[2].Next) = v8;
  *((_DWORD *)&v22[1].Next + 2) = 2;
  v47 = (PSLIST_ENTRY *)v17[1];
  if ( *v47 != (PSLIST_ENTRY)v17 )
    goto LABEL_72;
  v22->Next = (_SLIST_ENTRY *)v17;
  *((_QWORD *)&v22->Next + 1) = v47;
  *v47 = v22;
  v17[1] = (unsigned int *)v22;
  KxReleaseSpinLock((volatile signed __int64 *)v17 + 2);
  if ( KiIrqlFlags )
  {
    v48 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v48 <= 0xFu && v53 <= 0xFu && v48 >= 2u )
    {
      v49 = KeGetCurrentPrcb();
      v50 = v49->SchedulerAssist;
      v51 = ~(unsigned __int16)(-1LL << (v54 + 1));
      v34 = (v51 & v50[5]) == 0;
      v50[5] &= v51;
      if ( v34 )
        KiRemoveSystemWorkPriorityKick(v49);
    }
  }
  __writecr8(v53);
  if ( v9 )
    EtwpDereferenceStackEntry((PSLIST_ENTRY)v9, v57);
LABEL_82:
  ListEntry = v22;
  *(_DWORD *)(a4 + 28) = 0;
  *(_QWORD *)(a4 + 16) = &ListEntry;
  *(_DWORD *)(a4 + 24) = 8;
  EtwpLogKernelEvent(a4, *(_QWORD *)(a1 + 1096), *(_DWORD *)a1, 2u, a3, a2);
  EtwpDereferenceStackEntry(ListEntry, *(unsigned int ***)(a1 + 1008));
  return v7;
}
