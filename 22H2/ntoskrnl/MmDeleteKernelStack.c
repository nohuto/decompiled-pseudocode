/*
 * XREFs of MmDeleteKernelStack @ 0x1402AB200
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402AA8C0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     PspDeleteKernelStack @ 0x14031BEC0 (PspDeleteKernelStack.c)
 *     KeUserModeCallback @ 0x14063D750 (KeUserModeCallback.c)
 *     PspInsertThread @ 0x1406C1DE8 (PspInsertThread.c)
 *     KeFreeCalloutStack @ 0x14077CAD0 (KeFreeCalloutStack.c)
 *     KeAllocateCalloutStackEx @ 0x1407800A0 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x1408BA6C8 (KiStartDynamicProcessor.c)
 *     KeInitThread @ 0x14098FD94 (KeInitThread.c)
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiDeleteKernelStack @ 0x14033B750 (MiDeleteKernelStack.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x140546A80 (MiLogKernelStackEvent.c)
 */

signed __int64 __fastcall MmDeleteKernelStack(unsigned __int64 a1, struct _LIST_ENTRY *Flink)
{
  unsigned int v2; // esi
  __int64 v4; // rdx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  struct _LIST_ENTRY *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 i; // rdx
  char *v17; // r9
  ULONG_PTR BugCheckParameter4; // r10
  __int64 v19; // rcx
  unsigned int v20; // ebx
  int v21; // esi
  __int64 v22; // rax
  __int64 Process; // rdx
  _QWORD *p_Flink; // r9
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v30; // rax
  unsigned __int8 v31; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v34; // eax
  bool v35; // zf
  unsigned __int64 v36; // rsi
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  int v39; // eax
  __int64 v40; // rcx
  signed __int64 result; // rax
  __int64 v42; // rax
  int *v43; // r15
  __int64 v44; // r13
  unsigned __int8 v45; // r12
  int v46; // ebp
  int v47; // edi
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r14
  __int64 v51; // rbx
  unsigned __int64 v52; // r8
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  struct _LIST_ENTRY *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rsi
  struct _LIST_ENTRY *v60; // r8
  __int64 v61; // rax
  __int64 v62; // r8
  ULONG_PTR v63; // r8
  __int64 v64; // rax
  int v65; // ecx
  int v66; // eax
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  int v69; // eax
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r9
  _DWORD *v72; // r8
  int v73; // eax
  unsigned __int64 v74; // [rsp+30h] [rbp-88h] BYREF
  __int64 v75; // [rsp+38h] [rbp-80h] BYREF
  __int64 v76; // [rsp+40h] [rbp-78h]
  unsigned __int64 v77; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v78; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v79; // [rsp+58h] [rbp-60h]
  __int64 v80; // [rsp+60h] [rbp-58h]
  int v81; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v82; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v83; // [rsp+D0h] [rbp+18h]
  int v84; // [rsp+D8h] [rbp+20h] BYREF

  v82 = (unsigned int)Flink;
  v74 = 0LL;
  v2 = (unsigned int)Flink;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && ((unsigned __int8)Flink & 2) != 0 )
  {
    v4 = 18LL;
    if ( (v2 & 1) == 0 )
      v4 = (unsigned __int8)byte_140C4EBBC;
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v4 << 12), v4, 0LL);
  }
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v79 = v5;
  v6 = *(_QWORD *)v5;
  v7 = *(_QWORD *)v5;
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 |= 0x20uLL;
      v8 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
      if ( (v8 & 0x20) == 0 )
        v7 = *(_QWORD *)v5;
      if ( (v8 & 0x42) != 0 )
        v7 |= 0x42uLL;
    }
  }
  v77 = v7;
  if ( (unsigned int)MiPteInShadowRange(&v77, Flink)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v9 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 8 * (((unsigned __int64)&v77 >> 3) & 0x1FF));
      v9 = v7 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v9 = v7;
      v7 = v9;
      if ( (v10 & 0x42) != 0 )
        v7 = v9 | 0x42;
    }
  }
  if ( *(ULONG_PTR **)(qword_140C4E648
                     + 8 * ((*(_QWORD *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 39) & 0x3FFLL)) != &MiSystemPartition
    || (v2 & 1) != 0 )
  {
    return MiDeleteKernelStack(v5, v2);
  }
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v9 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v9 )
    {
      v11 = *(_QWORD *)(v9 + 8 * ((v5 >> 3) & 0x1FF));
      v9 = v6 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v9 = v6;
      v6 = v9;
      if ( (v11 & 0x42) != 0 )
        v6 = v9 | 0x42;
    }
  }
  v78 = v6;
  if ( (unsigned int)MiPteInShadowRange(&v78, v9)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v12 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v12 )
    {
      v13 = *((_QWORD *)&v12->Flink + (((unsigned __int64)&v78 >> 3) & 0x1FF));
      v14 = v6 | 0x20;
      if ( (v13 & 0x20) == 0 )
        v14 = v6;
      v6 = v14;
      if ( (v13 & 0x42) != 0 )
        v6 = v14 | 0x42;
    }
  }
  v15 = MiSearchNumaNodeTable((__int64)(48 * ((v6 >> 12) & 0xFFFFFFFFFLL)) / 48);
  BugCheckParameter4 = 0LL;
  v19 = 0LL;
  v76 = 0LL;
  v20 = *(_DWORD *)(v15 + 8);
  LODWORD(v83) = v20;
  if ( (v2 & 4) != 0 )
  {
    v21 = MiPteInShadowRange(&v74, i);
    while ( 1 )
    {
      v22 = MI_READ_PTE_LOCK_FREE(v5);
      v74 = v22;
      v25 = v22;
      if ( v21 )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 912) != 1 && (v22 & 1) != 0 )
          {
            Process = v22;
            if ( (v22 & 0x20) == 0 || (v22 & 0x42) == 0 )
            {
              p_Flink = &KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink->Flink;
              if ( p_Flink )
              {
                v26 = p_Flink[((unsigned __int64)&v74 >> 3) & 0x1FF];
                if ( (v26 & 0x20) != 0 )
                  v25 = Process | 0x20;
                if ( (v26 & 0x42) != 0 )
                  v25 |= 0x42uLL;
              }
              else
              {
                v25 = v74;
              }
            }
          }
        }
      }
      v27 = (v25 >> 12) & 0xFFFFFFFFFLL;
      v28 = 48 * v27 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        p_Flink = KeGetCurrentPrcb()->SchedulerAssist;
        Process = (-1LL << (CurrentIrql + 1)) & 4;
        v27 = (unsigned int)Process | *((_DWORD *)p_Flink + 5);
        *((_DWORD *)p_Flink + 5) = v27;
      }
      v81 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v81, Process, v27, (__int64)p_Flink);
        while ( *(__int64 *)(v28 + 24) < 0 );
      }
      v30 = MI_READ_PTE_LOCK_FREE(v5);
      if ( v74 == v30 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v31 = KeGetCurrentIrql();
          if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v35 = (v34 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v34;
            if ( v35 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    if ( (*(_QWORD *)v28 & 0xFFFFFFFFFFELL) != 0 )
      v36 = 8 * (*(_QWORD *)v28 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
    else
      v36 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v20 = v83;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v37 = KeGetCurrentIrql();
        if ( v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          i = -1LL << (CurrentIrql + 1);
          v17 = (char *)v38->SchedulerAssist;
          v39 = ~(unsigned __int16)i;
          v35 = (v39 & *((_DWORD *)v17 + 5)) == 0;
          *((_DWORD *)v17 + 5) &= v39;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick(v38);
        }
      }
    }
    __writecr8(CurrentIrql);
    BugCheckParameter4 = 0LL;
    v19 = 0LL;
    v76 = 0LL;
    if ( v36 == -32LL )
    {
      i = (__int64)KeGetCurrentPrcb();
      if ( *(unsigned __int16 *)(*(_QWORD *)(i + 192) + 146LL) == v20 && !*(_QWORD *)(i + 32520) )
      {
        v40 = (__int64)(v5 << 25) >> 16;
        *(_QWORD *)(v40 + 4064) = v40 ^ qword_140C4EEC8;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(i + 32520), v40 + 4080, 0LL);
        if ( !result )
          return result;
      }
      v19 = 1LL;
      v76 = 1LL;
    }
  }
  v42 = 176LL * v20;
  v80 = v42;
  while ( 1 )
  {
    v43 = (int *)((char *)&SListHead[2 * v19] + v42);
    if ( *(unsigned __int16 *)v43 >= v43[4] )
      goto LABEL_176;
    v44 = (__int64)(v5 << 25) >> 16;
    *(_QWORD *)(v44 + 0xFE0) = v44 ^ qword_140C4EEC8;
    if ( v19 == 1 )
      return (signed __int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v43, (PSLIST_ENTRY)(v44 + 4080));
    v45 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v45 <= 0xFu )
    {
      v17 = (char *)KeGetCurrentPrcb()->SchedulerAssist;
      i = (-1LL << (v45 + 1)) & 4;
      *((_DWORD *)v17 + 5) |= i;
    }
    v46 = 1;
    v75 = 0LL;
    v47 = -1;
    v48 = v5 - 8LL * (unsigned __int8)byte_140C4EBBC;
    v49 = v48 + 8LL * ((unsigned int)(unsigned __int8)byte_140C4EBBC + 1);
    v50 = v48 + 8;
    v83 = v49;
    if ( v50 >= v49 )
      break;
    do
    {
      v51 = *(_QWORD *)v50;
      v52 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v50 >= 0xFFFFF6FB7DBED000uLL
        && v50 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, i, 0xFFFFF6FB7DBED7F8uLL, v17)
        && (v51 & 1) != 0
        && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
      {
        i = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( i )
        {
          v53 = *(_QWORD *)(i + 8 * ((v50 >> 3) & 0x1FF));
          i = v51 | 0x20;
          if ( (v53 & 0x20) == 0 )
            i = v51;
          v51 = i;
          if ( (v53 & 0x42) != 0 )
            v51 = i | 0x42;
        }
      }
      v75 = v51;
      if ( (v51 & 1) != 0 )
      {
        v54 = v51;
        v55 = (unsigned __int64)&v75;
        if ( (unsigned __int64)&v75 >= 0xFFFFF6FB7DBED000uLL )
        {
          v55 = (unsigned __int64)&v75;
          if ( (unsigned __int64)&v75 <= v52
            && (unsigned int)MiPteHasShadow(&v75, v51, v52, v17)
            && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
          {
            v55 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v56 = *(struct _LIST_ENTRY **)(v55 + 1928);
            if ( v56 )
            {
              v57 = *((_QWORD *)&v56->Flink + (((unsigned __int64)&v75 >> 3) & 0x1FF));
              v54 = v51 | 0x20;
              v55 = (unsigned __int8)v57;
              LOBYTE(v55) = v57 & 0x20;
              if ( (v57 & 0x20) == 0 )
                v54 = v51;
              if ( (v57 & 0x42) != 0 )
                v54 |= 0x42uLL;
            }
            else
            {
              v54 = v51;
            }
          }
        }
        v58 = (v54 >> 12) & 0xFFFFFFFFFLL;
        v17 = (char *)0xFFFFFA8000000000LL;
        v59 = 48 * v58 - 0x58000000000LL;
        v84 = BugCheckParameter4;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v59 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v84, v58, v52, (__int64)v17);
            while ( *(__int64 *)(v59 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v59 + 24), 0x3FuLL) );
          BugCheckParameter4 = 0LL;
          v17 = (char *)0xFFFFFA8000000000LL;
        }
        i = *(_QWORD *)v50;
        if ( v50 >= 0xFFFFF6FB7DBED000uLL
          && v50 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v55, i, v52, 0xFFFFFA8000000000uLL)
          && (i & 1) != 0
          && ((i & 0x20) == 0 || (i & 0x42) == 0) )
        {
          v60 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v60 )
          {
            v61 = *((_QWORD *)&v60->Flink + ((v50 >> 3) & 0x1FF));
            v62 = i | 0x20;
            if ( (v61 & 0x20) == 0 )
              v62 = i;
            i = v62;
            if ( (v61 & 0x42) != 0 )
              i = v62 | 0x42;
          }
        }
        if ( v51 == i )
        {
          i = (unsigned __int128)((v59 - (__int64)v17) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v63 = (v59 - (__int64)v17) / 48;
          if ( v47 == -1 )
          {
            v64 = MiSearchNumaNodeTable((v59 - (__int64)v17) / 48);
            BugCheckParameter4 = 0LL;
            v47 = *(_DWORD *)(v64 + 8);
          }
          else
          {
            v65 = dword_140C4DE88;
            if ( dword_140C4DE84 > (unsigned int)dword_140C4DE88
              || (v17 = (char *)qword_140C4DEC8 + 16 * dword_140C4DE84, v63 < *(_QWORD *)v17)
              || dword_140C4DE84 != dword_140C4DE88 && v63 >= *((_QWORD *)v17 + 2) )
            {
              for ( i = (unsigned int)BugCheckParameter4; ; i = (unsigned int)(v66 + 1) )
              {
                while ( 1 )
                {
                  if ( v65 < (int)i )
                    KeBugCheckEx(0x1Au, 0x6201uLL, v63, 0LL, BugCheckParameter4);
                  v66 = ((int)i + v65) >> 1;
                  v17 = (char *)qword_140C4DEC8 + 16 * v66;
                  if ( v63 >= *(_QWORD *)v17 )
                    break;
                  if ( !v66 )
                    KeBugCheckEx(0x1Au, 0x6200uLL, v63, (ULONG_PTR)v17, BugCheckParameter4);
                  v65 = v66 - 1;
                }
                if ( v66 == dword_140C4DE88 || v63 < *((_QWORD *)v17 + 2) )
                  break;
              }
              dword_140C4DE84 = ((int)i + v65) >> 1;
            }
            if ( v47 != *((_DWORD *)v17 + 2) )
              v46 = BugCheckParameter4;
          }
          *(_QWORD *)v59 &= 0xFFFFF00000000001uLL;
          v50 += 8LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v50 += 8LL;
      }
    }
    while ( v50 < v83 );
    if ( v46 == 1 )
      break;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v67 = KeGetCurrentIrql();
        if ( v67 <= 0xFu && v45 <= 0xFu && v67 >= 2u )
        {
          v68 = KeGetCurrentPrcb();
          i = -1LL << (v45 + 1);
          v17 = (char *)v68->SchedulerAssist;
          v69 = ~(unsigned __int16)i;
          v35 = (v69 & *((_DWORD *)v17 + 5)) == 0;
          *((_DWORD *)v17 + 5) &= v69;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick(v68);
        }
      }
    }
    __writecr8(v45);
    v19 = v76;
    v5 = v79;
LABEL_176:
    if ( v19 != 1 )
    {
      v2 = v82;
      return MiDeleteKernelStack(v5, v2);
    }
    v42 = v80;
    BugCheckParameter4 = 0LL;
    v19 = 0LL;
    v76 = 0LL;
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v43, (PSLIST_ENTRY)(v44 + 4080));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v70 = KeGetCurrentIrql();
      if ( v70 <= 0xFu && v45 <= 0xFu && v70 >= 2u )
      {
        v71 = KeGetCurrentPrcb();
        v72 = v71->SchedulerAssist;
        v73 = ~(unsigned __int16)(-1LL << (v45 + 1));
        v35 = (v73 & v72[5]) == 0;
        v72[5] &= v73;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v71);
      }
    }
  }
  result = v45;
  __writecr8(v45);
  return result;
}
