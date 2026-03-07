char __fastcall EtwpGetCrimsonStackKey(__int64 a1, __int64 a2, PSLIST_ENTRY *a3)
{
  char v3; // di
  unsigned int v5; // ebp
  struct _SLIST_ENTRY *v6; // r13
  unsigned int v7; // r15d
  unsigned __int64 v8; // r8
  unsigned int v9; // r9d
  __int64 v10; // r10
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // r14
  int v14; // ebx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v16; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v18; // rdx
  PSLIST_ENTRY v19; // rsi
  unsigned int v20; // ecx
  PSLIST_ENTRY v21; // r15
  unsigned int Next; // edx
  _SLIST_ENTRY *v23; // rcx
  PSLIST_ENTRY *v24; // rax
  PSLIST_ENTRY v25; // rax
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  __int64 *v31; // rax
  unsigned int v32; // ebx
  PSLIST_ENTRY v33; // r12
  __int64 v34; // r13
  PSLIST_ENTRY v35; // r15
  unsigned int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  _DWORD *v39; // r8
  int v40; // eax
  struct _SLIST_ENTRY *v41; // rbx
  PSLIST_ENTRY *v42; // rax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  unsigned int v48; // [rsp+20h] [rbp-78h]
  unsigned __int8 v49; // [rsp+28h] [rbp-70h]
  unsigned int v50; // [rsp+30h] [rbp-68h]
  __int64 v51; // [rsp+38h] [rbp-60h]
  struct _SLIST_ENTRY *ListEntry; // [rsp+40h] [rbp-58h]
  unsigned __int8 v53; // [rsp+A0h] [rbp+8h]
  unsigned int v55; // [rsp+A8h] [rbp+10h]
  int ListHead; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  *a3 = 0LL;
  if ( (*(_DWORD *)(a1 + 820) & 1) != 0 )
  {
    v5 = ((unsigned int)*(unsigned __int16 *)(a2 + 6) - 8) >> 3;
    v6 = 0LL;
    v7 = 0;
    v8 = 4LL * v5;
    v9 = 0;
    v51 = *(_QWORD *)(a1 + 1008);
    ListEntry = 0LL;
    v50 = 0;
    if ( v8 )
    {
      v10 = 0LL;
      do
      {
        v11 = v9 + 1;
        v9 += 2;
        v12 = *(unsigned __int16 *)(a2 + 2 * v10 + 16) ^ *(unsigned __int16 *)(a2 + 2 * v11 + 16);
        v10 = v9;
        v7 += v12;
      }
      while ( v9 < v8 );
      v50 = v7;
    }
    v13 = *(_QWORD *)(a1 + 1008)
        + 8
        * (v7 % *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 8LL) + 2 * (v7 % *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 8LL) + 2LL));
    v14 = 0;
    CurrentIrql = KeGetCurrentIrql();
    v49 = CurrentIrql;
    v53 = CurrentIrql;
    if ( !CurrentIrql || CurrentIrql == 1 )
    {
      v16 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v16 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v16 == 2 )
          LODWORD(v18) = 4;
        else
          v18 = (-1LL << (v16 + 1)) & 4;
        SchedulerAssist[5] |= v18;
      }
    }
    else if ( CurrentIrql != 2 )
    {
      if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)(v13 + 16)) )
        return v3;
LABEL_19:
      v19 = *(PSLIST_ENTRY *)v13;
      if ( *(_QWORD *)v13 != v13 )
      {
        do
        {
          ++v14;
          if ( *((_DWORD *)&v19[1].Next + 3) == v7 && LODWORD(v19[2].Next) == v5 )
          {
            v20 = 0;
            v21 = v19;
            ListHead = 0;
            while ( 1 )
            {
              Next = 32;
              if ( LODWORD(v21[2].Next) < 0x20 )
                Next = (unsigned int)v21[2].Next;
              v48 = Next;
              if ( RtlCompareMemory(&v21[2].Next + 1, (const void *)(a2 + 16 + 8LL * v20), 8LL * Next) != 8LL * Next )
                break;
              v20 = v48 + ListHead;
              v21 = v21[1].Next;
              ListHead += v48;
              if ( !v21 )
              {
                _InterlockedIncrement((volatile signed __int32 *)&v19[1].Next + 2);
                v23 = v19->Next;
                v24 = (PSLIST_ENTRY *)*((_QWORD *)&v19->Next + 1);
                if ( *(&v19->Next->Next + 1) == v19 && *v24 == v19 )
                {
                  *v24 = v23;
                  *((_QWORD *)&v23->Next + 1) = v24;
                  v25 = *(PSLIST_ENTRY *)v13;
                  if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) == v13 )
                  {
                    v19->Next = v25;
                    *((_QWORD *)&v19->Next + 1) = v13;
                    *((_QWORD *)&v25->Next + 1) = v19;
                    *(_QWORD *)v13 = v19;
                    KxReleaseSpinLock((volatile signed __int64 *)(v13 + 16));
                    if ( KiIrqlFlags )
                    {
                      v26 = KeGetCurrentIrql();
                      if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && v49 <= 0xFu && v26 >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        v28 = CurrentPrcb->SchedulerAssist;
                        v29 = ~(unsigned __int16)(-1LL << (v53 + 1));
                        v30 = (v29 & v28[5]) == 0;
                        v28[5] &= v29;
                        if ( v30 )
                          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                      }
                    }
                    __writecr8(v49);
                    goto LABEL_79;
                  }
                }
LABEL_69:
                __fastfail(3u);
              }
            }
            v7 = v50;
          }
          v19 = v19->Next;
        }
        while ( v19 != (PSLIST_ENTRY)v13 );
        if ( v14 == 4 )
        {
          v6 = *(struct _SLIST_ENTRY **)(v13 + 8);
          ListEntry = v6;
          v31 = (__int64 *)*((_QWORD *)&v6->Next + 1);
          if ( v6->Next != (_SLIST_ENTRY *)v13 || (struct _SLIST_ENTRY *)*v31 != v6 )
            goto LABEL_69;
          *(_QWORD *)(v13 + 8) = v31;
          *v31 = v13;
        }
      }
      v19 = 0LL;
      v32 = 0;
      if ( !v5 )
        goto LABEL_68;
      v33 = 0LL;
      v34 = a2;
      do
      {
        v35 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v51 + 16));
        if ( !v35 )
          break;
        if ( v32 + 32 >= v5 )
          v36 = v5 - v32;
        else
          v36 = 32;
        v55 = v36;
        memmove(&v35[2].Next + 1, (const void *)(v34 + 16 + 8LL * v32), 8LL * v36);
        if ( v32 )
          LODWORD(v35[2].Next) = v55;
        else
          v19 = v35;
        if ( v33 )
          v33[1].Next = v35;
        v32 += v55;
        v35[1].Next = 0LL;
        v33 = v35;
      }
      while ( v32 < v5 );
      v6 = ListEntry;
      if ( v32 < v5 )
      {
        KxReleaseSpinLock((volatile signed __int64 *)(v13 + 16));
        if ( KiIrqlFlags )
        {
          v37 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && v49 <= 0xFu && v37 >= 2u )
          {
            v38 = KeGetCurrentPrcb();
            v39 = v38->SchedulerAssist;
            v40 = ~(unsigned __int16)(-1LL << (v53 + 1));
            v30 = (v40 & v39[5]) == 0;
            v39[5] &= v40;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick((__int64)v38);
          }
        }
        __writecr8(v49);
        if ( v19 )
        {
          do
          {
            v41 = v19[1].Next;
            RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v51 + 16), v19);
            v19 = v41;
          }
          while ( v41 );
        }
        if ( ListEntry )
          EtwpDereferenceStackEntry(ListEntry, (unsigned int **)v51);
      }
      else
      {
LABEL_68:
        *((_DWORD *)&v19[1].Next + 3) = v50;
        LODWORD(v19[2].Next) = v5;
        *((_DWORD *)&v19[1].Next + 2) = 2;
        v42 = *(PSLIST_ENTRY **)(v13 + 8);
        if ( *v42 != (PSLIST_ENTRY)v13 )
          goto LABEL_69;
        v19->Next = (_SLIST_ENTRY *)v13;
        *((_QWORD *)&v19->Next + 1) = v42;
        *v42 = v19;
        *(_QWORD *)(v13 + 8) = v19;
        KxReleaseSpinLock((volatile signed __int64 *)(v13 + 16));
        if ( KiIrqlFlags )
        {
          v43 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && v49 <= 0xFu && v43 >= 2u )
          {
            v44 = KeGetCurrentPrcb();
            v45 = v44->SchedulerAssist;
            v46 = ~(unsigned __int16)(-1LL << (v53 + 1));
            v30 = (v46 & v45[5]) == 0;
            v45[5] &= v46;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick((__int64)v44);
          }
        }
        __writecr8(v49);
        if ( v6 )
          EtwpDereferenceStackEntry(v6, (unsigned int **)v51);
LABEL_79:
        v3 = 1;
        *a3 = v19;
      }
      return v3;
    }
    KxAcquireSpinLock((PKSPIN_LOCK)(v13 + 16));
    goto LABEL_19;
  }
  return 0;
}
