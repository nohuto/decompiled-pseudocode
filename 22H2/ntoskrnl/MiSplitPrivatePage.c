/*
 * XREFs of MiSplitPrivatePage @ 0x14028D630
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140636FA0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14021B950 (MiVadPureReserve.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiIncreaseUsedPtesCount @ 0x140289E54 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14028D0E0 (MiGetUsedPtesHandle.c)
 *     MiGetNextPageTable @ 0x14028DEA0 (MiGetNextPageTable.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B11D0 (MiGetProtoPteAddress.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x1402E3470 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x140315C64 (MiMakeProtoLeafValid.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BE38 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405F91A0 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x14063BF58 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitPrivatePage(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // r15
  ULONG_PTR v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  unsigned __int8 v14; // di
  int v15; // r9d
  ULONG_PTR v16; // rcx
  unsigned __int64 NextPageTable; // rax
  _KPROCESS *v18; // r14
  volatile signed __int64 *v19; // rbx
  __int64 v20; // rdx
  int v21; // edi
  __int64 v22; // r8
  _DWORD *v23; // r9
  unsigned __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 UsedPtesHandle; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int16 v30; // ax
  int v31; // r13d
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // r8
  _DWORD *v43; // r9
  __int64 v44; // rax
  int v46; // r13d
  int v47; // edi
  unsigned __int64 v48; // rdx
  char v49; // di
  int v50; // ebp
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  bool v57; // zf
  _KPROCESS *v58; // rbp
  int v59; // [rsp+30h] [rbp-98h]
  __int64 v60; // [rsp+38h] [rbp-90h] BYREF
  int v61; // [rsp+40h] [rbp-88h]
  int v62; // [rsp+44h] [rbp-84h]
  __int64 v63; // [rsp+48h] [rbp-80h]
  int v64; // [rsp+50h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-70h]
  _KPROCESS *Process; // [rsp+60h] [rbp-68h]
  __int64 ProtoPteAddress; // [rsp+68h] [rbp-60h]
  __int64 v68[11]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int8 v71; // [rsp+E0h] [rbp+18h]
  int v72; // [rsp+E8h] [rbp+20h]

  v64 = 0;
  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v61 = MiVadPureReserve(a2);
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v68[0] = *(_QWORD *)(v6 + 72);
  v8 = MiChargeFullProcessCommitment(v7, 1LL);
  v9 = v8;
  v10 = 0LL;
  v72 = v8;
  v59 = 0;
  v62 = 0;
  v14 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v11, v12, v13);
  v71 = v14;
  v63 = v9;
  while ( 1 )
  {
    LOBYTE(v15) = v14;
    v16 = v5;
    if ( v61 )
      break;
LABEL_11:
    MiMakeSystemAddressValid(v16, 0);
LABEL_12:
    ProtoPteAddress = MiGetProtoPteAddress(v3, a1 >> 12, 0LL, v68);
    v24 = ProtoPteAddress;
    v60 = MI_READ_PTE_LOCK_FREE(v5);
    v26 = v60;
    if ( !v60 )
    {
      if ( v63 < 0 )
        goto LABEL_61;
      UsedPtesHandle = MiGetUsedPtesHandle(a1, v25);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL, v28, v29);
      if ( v61 )
      {
        if ( !v24
          || (v30 = MI_READ_PTE_LOCK_FREE(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), (v30 & 1) == 0)
          && (v30 & 0x3E0) == 0 )
        {
          v59 = 1;
LABEL_55:
          v46 = v72;
          goto LABEL_56;
        }
      }
      v60 = MiSwizzleInvalidPte(-4294966240LL);
      v26 = v60;
      v31 = 0;
      v32 = v60;
      if ( (unsigned int)MiPteInShadowRange(v5, v33) )
      {
        if ( (unsigned int)MiPteHasShadow(v35, v34, v36, v37) )
        {
          v31 = 1;
          if ( !HIBYTE(word_140C4E008) && (v26 & 1) != 0 )
            v32 |= 0x8000000000000000uLL;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v26 & 1) != 0 )
          {
            v32 |= 0x8000000000000000uLL;
          }
          v26 = v60;
        }
      }
      *(_QWORD *)v5 = v32;
      if ( v31 )
        MiWritePteShadow(v5, v32);
      v3 = a2;
      v24 = ProtoPteAddress;
    }
    if ( (v26 & 1) != 0 )
    {
      v38 = MI_READ_PTE_LOCK_FREE(&v60);
      if ( !(unsigned int)MI_PFN_IS_PROTO(48 * ((v38 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL)
        || (*(_QWORD *)(v39 + 8) | 0x8000000000000000uLL) != v24 )
      {
        goto LABEL_75;
      }
      if ( v63 < 0 )
      {
LABEL_61:
        if ( v10 )
          MiUnlockPageTableInternal(v4, v10);
        v46 = v72;
LABEL_64:
        MiUnlockWorkingSetShared(v4, v71);
        return (unsigned int)v46;
      }
      v40 = MiCopyOnWrite(a1, (ULONG_PTR *)v5, -1LL, 0);
      if ( v40 >= 0 )
        goto LABEL_55;
      if ( v10 )
      {
        MiUnlockPageTableInternal(v4, v10);
        v10 = 0LL;
      }
      v14 = v71;
      MiUnlockWorkingSetShared(v4, v71);
      MiCopyOnWriteCheckConditions(v4, (unsigned int)v40);
      MiLockWorkingSetShared(v4, v41, v42, v43);
      v9 = v63;
    }
    else
    {
      if ( (v26 & 0x400) == 0 )
        goto LABEL_75;
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v26) )
      {
        v44 = v26;
        if ( qword_140C4DF40 && (v26 & 0x10) == 0 )
          v44 = v26 & ~qword_140C4DF40;
        if ( v44 >> 16 != v24 )
        {
LABEL_75:
          v47 = 0;
          v46 = v72;
          goto LABEL_76;
        }
      }
      v14 = v71;
      if ( (int)MiMakeProtoLeafValid(v5) < 0 && v26 == MI_READ_PTE_LOCK_FREE(v5) )
      {
        v46 = v72;
        if ( v72 < 0 )
        {
          if ( v10 )
            MiUnlockPageTableInternal(v4, v10);
          goto LABEL_64;
        }
        v59 = 1;
LABEL_56:
        v47 = 1;
        v48 = ((((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF) + 1) >> 31;
        *(_DWORD *)(a2 + 52) ^= (*(_DWORD *)(a2 + 52) ^ (((*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF)
                                                       + 1)) & 0x7FFFFFFF;
        *(_BYTE *)(a2 + 34) = v48;
        if ( v59 == 1 )
        {
          v60 = MiSwizzleInvalidPte(32LL);
          v49 = v60;
          v50 = 0;
          v51 = v60;
          if ( (unsigned int)MiPteInShadowRange(v5, v52) )
          {
            if ( (unsigned int)MiPteHasShadow(v54, v53, v55, v56) )
            {
              v50 = 1;
              if ( !HIBYTE(word_140C4E008) )
              {
                v57 = (v49 & 1) == 0;
                goto LABEL_71;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v57 = (v49 & 1) == 0;
LABEL_71:
              if ( !v57 )
                v51 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v5 = v51;
          v47 = 1;
          if ( v50 )
            MiWritePteShadow(v5, v51);
        }
LABEL_76:
        if ( v10 )
          MiUnlockPageTableInternal(v4, v10);
        MiUnlockWorkingSetShared(v4, v71);
        v58 = Process;
        if ( v62 == 1 )
        {
          if ( (_InterlockedExchangeAdd64(
                  (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8],
                  0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&v58[1].Affinity.Bitmap[8]);
          KeAbPostRelease((ULONG_PTR)&v58[1].Affinity.Bitmap[8]);
          KiLeaveGuardedRegionUnsafe(CurrentThread);
        }
        if ( !v47 && v46 >= 0 )
          MiReturnFullProcessCommitment(v58);
        return 0LL;
      }
      v9 = v63;
      if ( v10 )
      {
        MiUnlockPageTableInternal(v4, v10);
        v10 = 0LL;
      }
    }
  }
  NextPageTable = MiGetNextPageTable(v5, v5, 0, v15, 0, (__int64)&v64);
  if ( NextPageTable )
    v10 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 == NextPageTable )
    goto LABEL_12;
  if ( v10 )
    MiUnlockPageTableInternal(v4, v10);
  MiUnlockWorkingSetShared(v4, v14);
  if ( v9 < 0 )
    return (unsigned int)v72;
  v62 = 1;
  --CurrentThread->SpecialApcDisable;
  v18 = Process;
  v19 = (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v21 = MiCommitPageTablesForVad(v3, a1, a1);
  if ( v21 >= 0 )
  {
    v10 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v71 = MiLockWorkingSetShared(v4, v20, v22, v23);
    v16 = v5;
    goto LABEL_11;
  }
  if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v19);
  KeAbPostRelease((ULONG_PTR)v19);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  if ( v72 >= 0 )
    MiReturnFullProcessCommitment(v18);
  return (unsigned int)v21;
}
