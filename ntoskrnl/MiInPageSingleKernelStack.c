/*
 * XREFs of MiInPageSingleKernelStack @ 0x1402A7A08
 * Callers:
 *     KiInSwapKernelStacks @ 0x1402A72E0 (KiInSwapKernelStacks.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1402A7DBC (MiReleaseWsSwapReservationPfn.c)
 *     MiSetPfnKernelStack @ 0x1402A7DF0 (MiSetPfnKernelStack.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 *     MiPrefetchVirtualMemory @ 0x140363970 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushAllFilesystemPages @ 0x140626E68 (MiFlushAllFilesystemPages.c)
 *     MiDeleteKernelStackNode @ 0x14062A8DC (MiDeleteKernelStackNode.c)
 *     MiKernelStackVaToStackNode @ 0x14062AE2C (MiKernelStackVaToStackNode.c)
 *     MiLogKernelStackEvent @ 0x140642970 (MiLogKernelStackEvent.c)
 */

void *__fastcall MiInPageSingleKernelStack(ULONG_PTR a1, _QWORD *a2)
{
  int v4; // r15d
  __int64 v5; // r13
  __int64 v6; // r8
  ULONG_PTR v7; // r13
  ULONG_PTR v8; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned __int64 v15; // r15
  __int64 *v16; // r14
  __int64 v17; // rax
  bool v18; // cc
  unsigned int v19; // ebx
  signed __int64 v20; // rdi
  char *v21; // rsi
  ULONG_PTR v22; // r13
  __int64 v23; // rbx
  __int64 v24; // rsi
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rbx
  _QWORD *v27; // rbx
  void *result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  __int64 v38; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-C8h]
  __int64 v40; // [rsp+40h] [rbp-C0h]
  ULONG_PTR v41; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-A8h]
  void *v44; // [rsp+60h] [rbp-A0h]
  char *v45; // [rsp+68h] [rbp-98h]
  _QWORD *v46; // [rsp+70h] [rbp-90h]
  _QWORD v47[14]; // [rsp+80h] [rbp-80h] BYREF
  signed __int64 v48; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v49; // [rsp+F8h] [rbp-8h] BYREF

  v46 = a2;
  BugCheckParameter3 = a1;
  memset(v47, 0, 0x68uLL);
  v4 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 138LL) + 1;
  v5 = (a2[1] >> 9) & 0x7FFFFFFFF8LL;
  LODWORD(v40) = v4;
  v6 = *a2;
  v7 = v5 - 0x98000000000LL;
  v41 = v7;
  v8 = (((unsigned __int64)(v6 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = *(_QWORD *)(a1 + 544);
  v38 = 0LL;
  v44 = *(void **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v10 + 1838));
  if ( v44 == &MiSystemPartition )
  {
    P = 0LL;
  }
  else
  {
    result = (void *)MiKernelStackVaToStackNode(v6 - 1);
    P = result;
    if ( !result )
      return result;
  }
  MI_READ_PTE_LOCK_FREE(v9);
  BugCheckParameter1 = 0LL;
  v12 = MiSwizzleInvalidPte(128LL);
  if ( v11 != v12 )
    BugCheckParameter1 = (v11 & 0x800) == 0;
  v13 = MiSwizzleInvalidPte(768LL);
  v14 = MiSwizzleInvalidPte(992LL);
  if ( v7 <= v8 )
  {
    v15 = v38;
    v16 = &v49;
    do
    {
      v17 = MI_READ_PTE_LOCK_FREE(v7);
      v38 = v17;
      if ( v17 != v14 && v17 != v12 && v17 != v13 && (v17 & 0x800) == 0 )
      {
        ++v15;
        *v16 = 4096LL;
        *(v16 - 1) = (__int64)(v7 << 25) >> 16;
        v16 += 2;
        if ( v15 == 18 )
          break;
      }
      v7 += 8LL;
    }
    while ( v7 <= v8 );
    v38 = v15;
    v18 = v15 <= 1;
    v4 = v40;
    if ( !v18 )
      MiPrefetchVirtualMemory(v38, &v48, 1LL, 45LL);
  }
  v19 = 0;
  v40 = 0LL;
  v49 = 4096LL;
  v20 = (__int64)(v8 << 25) >> 16;
  v21 = (char *)v47 + 1;
  v45 = (char *)v47 + 1;
LABEL_12:
  v22 = BugCheckParameter3;
  while ( v8 >= v41 )
  {
    v38 = MI_READ_PTE_LOCK_FREE(v8);
    if ( (v38 & 0x3E0) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v8, BugCheckParameter3, 0LL);
    v48 = v20;
    v47[3] = 0LL;
    v47[4] = 0LL;
    LOWORD(v47[0]) = 4;
    v47[1] = &v48;
    v47[2] = 1LL;
    v47[6] = v22;
    LODWORD(v47[5]) = v4;
    MmAccessFault(2uLL, v20, 0, (ULONG_PTR)v21);
    if ( (*(_BYTE *)v8 & 1) != 0 )
    {
      while ( 1 )
      {
        v38 = MI_READ_PTE_LOCK_FREE(v8);
        v23 = v38;
        v24 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v38) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v25 = (unsigned __int8)MiLockPageInline(v24);
        if ( v23 == MI_READ_PTE_LOCK_FREE(v8) )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v25 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
            v33 = (v32 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v32;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v25);
      }
      MiSetPfnKernelStack(v24, BugCheckParameter3);
      MiSetPfnIdentity(v24, 2LL);
      *(_BYTE *)(v24 + 35) = *(_BYTE *)(v24 + 35) & 0xF8 | 5;
      v26 = MiReleaseWsSwapReservationPfn(v24);
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v34 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && (unsigned __int8)v25 <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = v35->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
          v33 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
      __writecr8(v25);
      if ( v26 )
        MiReleasePageFileInfo((__int64)v44, v26, 0);
      v8 -= 8LL;
      v21 = v45;
      v20 -= 4096LL;
      v19 = ++v40;
      goto LABEL_12;
    }
  }
  if ( P )
    MiDeleteKernelStackNode(P);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v20 + 4096, v19, 1LL);
  v27 = v46;
  result = (void *)v46[2];
  if ( *((_QWORD *)result - 1) != v22 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, BugCheckParameter1, *(_QWORD *)(v27[2] - 8LL), 0LL, v27[2]);
  }
  return result;
}
