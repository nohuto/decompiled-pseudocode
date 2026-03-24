/*
 * XREFs of MiInPageSingleKernelStack @ 0x1403561A0
 * Callers:
 *     KiInSwapKernelStacks @ 0x140355C1C (KiInSwapKernelStacks.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiPrefetchVirtualMemory @ 0x14033DEB0 (MiPrefetchVirtualMemory.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14035666C (MiReleaseWsSwapReservationPfn.c)
 *     MiSetPfnKernelStack @ 0x1403566C8 (MiSetPfnKernelStack.c)
 *     MiKernelStackVaToStackNode @ 0x14038BA94 (MiKernelStackVaToStackNode.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiFlushAllFilesystemPages @ 0x140535508 (MiFlushAllFilesystemPages.c)
 *     MiDeleteKernelStackNode @ 0x140535DAC (MiDeleteKernelStackNode.c)
 *     MiLogKernelStackEvent @ 0x140546A80 (MiLogKernelStackEvent.c)
 */

void *__fastcall MiInPageSingleKernelStack(ULONG_PTR a1, _QWORD *a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // r15
  ULONG_PTR v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // r10
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  __int64 *v14; // r15
  __int64 v15; // rax
  unsigned int v16; // ebx
  ULONG_PTR v17; // r13
  signed __int64 v18; // r15
  ULONG_PTR v19; // rsi
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  unsigned __int64 v22; // r12
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  BOOL v25; // edi
  __int64 v26; // rax
  __int64 v27; // rdx
  struct _LIST_ENTRY *Flink; // r8
  _DWORD *v29; // r9
  __int64 v30; // rbx
  _QWORD *v31; // rbx
  void *result; // rax
  __int64 v33; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  bool v38; // zf
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  unsigned __int16 v43; // [rsp+30h] [rbp-D0h]
  __int64 v45; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v47; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v48; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v51; // [rsp+68h] [rbp-98h]
  ULONG_PTR *v52; // [rsp+70h] [rbp-90h]
  unsigned __int64 v53; // [rsp+78h] [rbp-88h]
  _QWORD *v54; // [rsp+80h] [rbp-80h]
  _QWORD v55[12]; // [rsp+90h] [rbp-70h] BYREF
  signed __int64 v56; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v57; // [rsp+F8h] [rbp-8h] BYREF

  v54 = a2;
  memset(v55, 0, sizeof(v55));
  v43 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 146LL);
  v4 = *a2;
  v5 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = v5;
  v6 = (((unsigned __int64)(v4 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  v52 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 544) + 1838LL));
  if ( v52 == &MiSystemPartition )
  {
    P = 0LL;
  }
  else
  {
    result = (void *)MiKernelStackVaToStackNode(v4 - 1);
    P = result;
    if ( !result )
      return result;
  }
  MI_READ_PTE_LOCK_FREE(v7);
  BugCheckParameter1 = 0LL;
  v10 = MiSwizzleInvalidPte(128LL);
  if ( v9 != v10 )
    BugCheckParameter1 = (v9 & 0x800) == 0;
  v45 = MiSwizzleInvalidPte(768LL);
  v12 = MiSwizzleInvalidPte(992LL);
  v13 = v5;
  if ( v5 <= v6 )
  {
    v14 = &v57;
    while ( 1 )
    {
      v15 = MI_READ_PTE_LOCK_FREE(v13);
      if ( v15 == v12 || v15 == v10 || v15 == v45 || (v15 & 0x800) != 0 )
      {
        v11 = 1LL;
      }
      else
      {
        v11 = 1LL;
        *v14 = 4096LL;
        ++v8;
        *(v14 - 1) = (__int64)(v13 << 25) >> 16;
        v14 += 2;
        if ( v8 == 18 )
        {
LABEL_10:
          if ( v8 > 1 )
          {
            MiPrefetchVirtualMemory(v8, (__int64)&v56, 1LL, 45);
            v11 = 1LL;
          }
          break;
        }
      }
      v13 += 8LL;
      if ( v13 > v6 )
        goto LABEL_10;
    }
  }
  v16 = 0;
  v46 = 0LL;
  v17 = ((v11 + v43) << 57) | 2;
  v18 = (__int64)(v6 << 25) >> 16;
  v19 = v11 | (unsigned __int64)v55;
  v51 = v17;
  v53 = v11 | (unsigned __int64)v55;
  v57 = 4096LL;
  while ( v6 >= v48 )
  {
    if ( (MI_READ_PTE_LOCK_FREE(v6) & 0x3E0) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v6, a1, 0LL);
    v56 = v18;
    v55[3] = 0LL;
    v55[4] = 0LL;
    LOWORD(v55[0]) = 4;
    v55[1] = &v56;
    v55[2] = 1LL;
    v55[5] = a1;
    MmAccessFault(v17, v18, 0, v19);
    if ( (*(_BYTE *)v6 & 1) != 0 )
    {
      v25 = MiPteInShadowRange((unsigned __int64)&v47);
      while ( 1 )
      {
        v26 = MI_READ_PTE_LOCK_FREE(v6);
        v47 = v26;
        v20 = v26;
        v30 = v26;
        if ( v25 )
        {
          v27 = v26;
          if ( (MiFlags & 0xC00000) == 0 || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
          {
            v20 = v26;
          }
          else
          {
            v20 = v26;
            if ( (v26 & 1) != 0 && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v20 = v26;
                v33 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v47 >> 3) & 0x1FF));
                if ( (v33 & 0x20) != 0 )
                  v20 = v30 | 0x20;
                if ( (v33 & 0x42) != 0 )
                  v20 |= 0x42uLL;
              }
              else
              {
                v20 = v47;
              }
            }
          }
        }
        v21 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v22 = (unsigned __int8)MiLockPageInline(v21, v27, (__int64)Flink, v29);
        if ( v30 == MI_READ_PTE_LOCK_FREE(v6) )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
              v38 = (v37 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v37;
              if ( v38 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v22);
      }
      MiSetPfnKernelStack(v21, a1);
      *(_QWORD *)(v21 + 40) = *(_QWORD *)(v21 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
      *(_BYTE *)(v21 + 35) = *(_BYTE *)(v21 + 35) & 0xF8 | 5;
      v24 = MiReleaseWsSwapReservationPfn(v21, v23);
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v17 = v51;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = v40->SchedulerAssist;
            v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
            v38 = (v42 & v41[5]) == 0;
            v41[5] &= v42;
            if ( v38 )
              KiRemoveSystemWorkPriorityKick(v40);
          }
        }
      }
      __writecr8(v22);
      if ( v24 )
        MiReleasePageFileInfo((__int64)v52, v24, 0);
      v6 -= 8LL;
      v19 = v53;
      v18 -= 4096LL;
      v16 = ++v46;
    }
  }
  if ( P )
    MiDeleteKernelStackNode(P);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v18 + 4096, v16, 1LL);
  v31 = v54;
  result = (void *)v54[2];
  if ( *((_QWORD *)result - 1) != a1 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, BugCheckParameter1, *(_QWORD *)(v31[2] - 8LL), 0LL, v31[2]);
  }
  return result;
}
