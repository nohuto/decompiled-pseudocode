/*
 * XREFs of MiLogPageAccess @ 0x140326EF0
 * Callers:
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiResetAccessBitPte @ 0x140325D60 (MiResetAccessBitPte.c)
 *     MiClearPteAccessed @ 0x140326910 (MiClearPteAccessed.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140349598 (MI_WSLE_LOG_ACCESS.c)
 *     MiResetAccessBitPteWorker @ 0x140463BAC (MiResetAccessBitPteWorker.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiStartingOffset @ 0x14028C530 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1403440B0 (MiReferenceControlAreaFileWithTag.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140350400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiAllocateAccessLog @ 0x140364034 (MiAllocateAccessLog.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140462ED8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiLogPageAccess(__int64 a1, unsigned __int64 a2)
{
  char v2; // bl
  unsigned __int64 v3; // rdi
  _QWORD *v5; // rsi
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // r14
  LONG *v12; // r13
  volatile signed __int32 *v13; // rbx
  _QWORD *AccessLog; // rbx
  __int64 v15; // rsi
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r14
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // rdx
  unsigned __int64 v23; // rax
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  signed __int64 *v29; // roff
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v35; // rcx
  __int64 SharedVm; // rax
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v38; // [rsp+70h] [rbp+8h] BYREF
  __int64 v39; // [rsp+78h] [rbp+10h]
  int v40; // [rsp+80h] [rbp+18h]
  int v41; // [rsp+84h] [rbp+1Ch]
  __int64 v42; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_BYTE *)(a1 + 184) & 7;
  v40 = 0;
  v41 = 3;
  v3 = a2;
  if ( v2 == 2 )
    v5 = &unk_140C69E28;
  else
    v5 = (_QWORD *)(a1 + 232);
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v3 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v7 = *(_QWORD *)v3;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL
    && v3 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v35 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
      if ( (v35 & 0x20) != 0 )
        v7 |= 0x20uLL;
      if ( (v35 & 0x42) != 0 )
        v7 |= 0x42uLL;
    }
  }
  v42 = v7;
  v11 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v42) >> 12) & 0xFFFFFFFFFFLL)
                 - 0x220000000000LL);
  v12 = &dword_140C69E40;
  if ( v2 == 2 )
    v13 = &dword_140C69E40;
  else
    v13 = (volatile signed __int32 *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(v8) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v13, v8);
  }
  else
  {
    v38 = 0;
    if ( _interlockedbittestandset(v13, 0x1Fu) )
      v38 = ExpWaitForSpinLockExclusiveAndAcquire(v13);
    while ( (*v13 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (*v13 & 0x40000000) == 0 )
        _InterlockedOr(v13, 0x40000000u);
      KeYieldProcessorEx(&v38);
    }
  }
  AccessLog = (_QWORD *)*v5;
  if ( !*v5 || (unsigned __int64)(AccessLog[4] + 8LL) > AccessLog[5] )
  {
    AccessLog = (_QWORD *)MiAllocateAccessLog(a1);
    if ( !AccessLog )
      goto LABEL_58;
  }
  if ( (__int64)v11[5] < 0 && (v15 = v11[2], (v15 & 0x400) != 0) )
  {
    if ( qword_140C657C0 && (v15 & 0x10) == 0 )
      v15 &= ~qword_140C657C0;
    v16 = AccessLog[6];
    v17 = v11[1] | 0x8000000000000000uLL;
    v18 = v15 >> 16;
    v19 = v17 << 16;
    if ( AccessLog[7] <= 1uLL )
    {
      v24 = (*(_BYTE *)(v18 + 34) & 2) == 0;
      v25 = *(_QWORD *)v18;
      v39 = *(_QWORD *)v18;
      if ( !v24 && (*(_DWORD *)(v25 + 56) & 0x8000000) != 0 )
      {
LABEL_58:
        SharedVm = MiGetSharedVm(a1, v8, v9, v10);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(SharedVm + 64));
        return;
      }
      v26 = MiReferenceControlAreaFileWithTag(v25, 1666411853LL);
      v27 = v39;
      v28 = v26;
      v20 = *(_QWORD *)(v26 + 24);
      v29 = (signed __int64 *)(v39 + 64);
      _m_prefetchw((const void *)(v39 + 64));
      v30 = *v29;
      if ( (v28 ^ (unsigned __int64)*v29) >= 0xF )
      {
LABEL_46:
        ObDereferenceObjectDeferDeleteWithTag((PVOID)v28, 0x63536D4Du);
      }
      else
      {
        while ( 1 )
        {
          v31 = v30;
          v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 64), v30 + 1, v30);
          if ( v31 == v30 )
            break;
          if ( (v28 ^ (unsigned __int64)v30) >= 0xF )
            goto LABEL_46;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo(v28 - 48);
      }
      v32 = MiStartingOffset((__int64 *)v18, v17, 0xFFFFFFFF);
      v33 = v32 << *(&v40 + ((*(_DWORD *)(v39 + 56) >> 5) & 1));
      v39 = v33 ^ ((unsigned __int16)v33 ^ (unsigned __int16)(32 * *(_DWORD *)(v39 + 56))) & 0x400;
      v16 -= 8LL;
      v19 = v39;
    }
    else
    {
      v20 = v18;
    }
    v21 = AccessLog[5];
    v22 = (__int64 *)(v21 + 8);
    if ( v21 + 8 > v16 )
    {
LABEL_24:
      v22 = (__int64 *)AccessLog[5];
      AccessLog[5] = v21 - 8;
      *v22 = v20;
    }
    else
    {
      while ( *v22 != v20 )
      {
        if ( (unsigned __int64)++v22 > v16 )
          goto LABEL_24;
      }
    }
    v23 = v19 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)v6 << 9) | ((__int64)(AccessLog[6] - (_QWORD)v22) >> 3) & 0x1FF;
  }
  else
  {
    v23 = (v3 << 16) | ((unsigned __int64)v6 << 9);
  }
  *(_QWORD *)AccessLog[4] = v23;
  AccessLog[4] += 8LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    v12 = (LONG *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
  else
    *v12 = 0;
}
