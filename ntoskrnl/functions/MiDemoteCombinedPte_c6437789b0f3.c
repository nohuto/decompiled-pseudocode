__int64 __fastcall MiDemoteCombinedPte(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v7; // r14
  __int64 v8; // rcx
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  char WsleContents; // di
  unsigned __int8 v14; // al
  __int16 v15; // cx
  unsigned __int8 v16; // r11
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int16 v20; // bx
  __int64 PagingFileOffset; // rdx
  unsigned __int8 v22; // bl
  __int64 v23; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  unsigned __int8 v33; // [rsp+30h] [rbp-39h]
  unsigned __int8 v34; // [rsp+30h] [rbp-39h]
  BOOL v35; // [rsp+34h] [rbp-35h]
  int v36; // [rsp+34h] [rbp-35h]
  unsigned __int64 v37; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-29h]
  __int64 v39; // [rsp+48h] [rbp-21h]
  __int64 v40; // [rsp+50h] [rbp-19h]
  unsigned __int64 ContainingPageTable; // [rsp+58h] [rbp-11h] BYREF
  __int128 v42; // [rsp+60h] [rbp-9h] BYREF
  __int64 v43; // [rsp+70h] [rbp+7h]
  __int128 *v44; // [rsp+78h] [rbp+Fh] BYREF
  int v45; // [rsp+80h] [rbp+17h]
  int v46; // [rsp+84h] [rbp+1Bh]

  v38 = a2;
  v39 = a3;
  v43 = 0LL;
  v42 = 0LL;
  v5 = a3 - 32;
  v37 = MI_READ_PTE_LOCK_FREE(a2);
  if ( *(_QWORD *)(v5 + 56) > 1uLL )
    return 0LL;
  v7 = 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v7 = a1 - 1664;
    if ( *(_QWORD *)(a1 - 1664 + 1248) )
      return 0LL;
  }
  v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v37) >> 12) & 0xFFFFFFFFFFLL;
  v10 = 48 * v9 - 0x220000000000LL;
  v11 = *(unsigned __int16 *)(a1 + 174);
  v44 = *(__int128 **)(qword_140C67048 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
  if ( *(__int128 **)(qword_140C67048 + 8 * v11) != v44 )
    return 0LL;
  v12 = (__int64)(a2 << 25) >> 16;
  WsleContents = MiGetWsleContents(v8, v12);
  ContainingPageTable = MiGetContainingPageTable(v38);
  v40 = *(_QWORD *)((v5 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v14 = MiLockPageInline(48 * v9 - 0x220000000000LL);
  v15 = *(_WORD *)(v10 + 32);
  v16 = v14;
  v33 = v14;
  v35 = v15 != 1 && (v15 != 2 || (*(_BYTE *)(v10 + 34) & 8) == 0);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v16 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v27 = ~(unsigned __int16)(-1LL << (v16 + 1));
      v28 = (v27 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v27;
      if ( v28 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v16 = v33;
      }
    }
  }
  __writecr8(v16);
  if ( v35 || (unsigned int)MiDecrementCombinedPteEx(a1, v39, 6) == 2 )
    return 0LL;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 392), 0xFFFFFFFF);
  v36 = DWORD1(PerfGlobalGroupMask) & 0x8000001;
  v17 = MiLockPageInline(48 * v9 - 0x220000000000LL);
  v18 = ContainingPageTable;
  v34 = v17;
  *(_QWORD *)(v10 + 8) = v38;
  *(_QWORD *)(v10 + 40) &= ~0x8000000000000000uLL;
  v40 = *(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFLL;
  MiSetPfnPteFrame(48 * v9 - 0x220000000000LL, v18);
  v19 = *(_QWORD *)(v10 + 16) >> 5;
  if ( (v19 & 5) == 5 )
    *(_QWORD *)(v10 + 16) ^= ((unsigned __int16)*(_QWORD *)(v10 + 16) ^ (unsigned __int16)(32 * (v19 & 0xFFFE))) & 0x3E0;
  ContainingPageTable = MiCapturePageFileInfoInline(v10 + 16, 0LL, 0LL);
  v20 = ContainingPageTable;
  PagingFileOffset = (unsigned int)MiGetPagingFileOffset(&ContainingPageTable);
  if ( (v20 & 4) != 0 )
    MiUpdatePageFileBlockOwner(
      *((_QWORD *)v44 + (v20 >> 12) + 2132),
      PagingFileOffset,
      *(_QWORD *)(v10 + 8),
      v39 & 0x7FFFFFFFFFFFFFFFLL,
      (*(unsigned __int8 *)(v10 + 34) >> 3) & 1);
  if ( v36 )
    MiIdentifyPfn(v9, &v42);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (v29 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v29 <= 0xFu )
  {
    v22 = v34;
    if ( v34 <= 0xFu && v29 >= 2u )
    {
      v30 = KeGetCurrentPrcb();
      v31 = v30->SchedulerAssist;
      v32 = ~(unsigned __int16)(-1LL << (v34 + 1));
      v28 = (v32 & v31[5]) == 0;
      v31[5] &= v32;
      if ( v28 )
        KiRemoveSystemWorkPriorityKick(v30);
    }
  }
  else
  {
    v22 = v34;
  }
  __writecr8(v22);
  if ( (v37 & 0x200) != 0 )
  {
    v37 = v37 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
    MiWriteValidPteNewProtection(v38, v37);
  }
  v23 = 48 * v40 - 0x220000000000LL;
  if ( (WsleContents & 0xF) == 8 )
    MiUnlockPageTableCharges(48 * v40 - 0x220000000000LL);
  MiLockAndDecrementShareCount(v23, 0);
  MiUpdateWorkingSetPrivateSize(a1, v12, 1uLL, 0LL);
  if ( v7 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 1272), 1uLL);
  if ( v36 )
  {
    MiLogCombinedPteDelete(v39);
    v46 = 0;
    v44 = &v42;
    v45 = 24;
    EtwTraceKernelEvent((unsigned int)&v44, 1, 671088641, 630, 289413892);
  }
  return 1LL;
}
