/*
 * XREFs of MiFreePhysicalPages @ 0x14054BE84
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x1408D6850 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x140288AE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402FAB20 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402FAF60 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiDecrementAweMapCount @ 0x14054B928 (MiDecrementAweMapCount.c)
 *     MiLockAweVadsExclusive @ 0x14054CF40 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14054DF38 (MiUnlockAweVadsExclusive.c)
 *     MiUpdateAwePageTable @ 0x14054DF74 (MiUpdateAwePageTable.c)
 */

__int64 __fastcall MiFreePhysicalPages(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 *v4; // rdi
  unsigned int v5; // r12d
  unsigned __int64 v6; // r14
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rbp
  __int64 v11; // r8
  const signed __int64 *v12; // rcx
  _DWORD *v13; // r9
  __int64 v14; // rbx
  unsigned __int128 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  char v23; // al
  __int64 result; // rax
  unsigned __int8 v25; // [rsp+20h] [rbp-168h]
  int v26; // [rsp+28h] [rbp-160h]
  int v27; // [rsp+2Ch] [rbp-15Ch]
  __int64 v28; // [rsp+30h] [rbp-158h]
  unsigned __int64 v29; // [rsp+38h] [rbp-150h]
  signed __int64 *v30; // [rsp+40h] [rbp-148h]
  struct _KTHREAD *v31; // [rsp+48h] [rbp-140h]
  unsigned __int64 v32; // [rsp+50h] [rbp-138h]
  __int64 v34; // [rsp+60h] [rbp-128h]
  unsigned __int64 v35; // [rsp+68h] [rbp-120h]
  __int64 v36; // [rsp+70h] [rbp-118h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-110h]
  _QWORD v38[24]; // [rsp+80h] [rbp-108h] BYREF

  v3 = a1;
  memset(v38, 0, 0xB8uLL);
  LODWORD(v38[0]) = 1;
  WORD2(v38[0]) = 0;
  v4 = (__int64 *)(a2 + 48);
  v38[2] = 0LL;
  v5 = 0;
  v38[3] = 0LL;
  v6 = 0LL;
  v26 = 0;
  v7 = (_QWORD *)(a2 + 48);
  v8 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  LODWORD(v38[1]) = 20;
  CurrentThread = KeGetCurrentThread();
  v25 = 17;
  v31 = CurrentThread;
  v29 = a2 + 48 + 8 * v8;
  v32 = *(_QWORD *)(v3 + 8);
  v10 = (__int64)&CurrentThread->ApcState.Process[1].ActiveProcessorsPadding[6];
  v27 = *(_DWORD *)v3 & 1;
  if ( v27 )
    MiLockAweVadsExclusive(CurrentThread);
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = v3 + 56;
  ExAcquireAutoExpandPushLockExclusive(v3 + 56, 0LL);
  v11 = *(_QWORD *)(v3 + 16);
  v12 = *(const signed __int64 **)(v3 + 24);
  v36 = v11;
  v30 = (signed __int64 *)v12;
  if ( (unsigned __int64)v4 >= v29 )
    goto LABEL_42;
  v13 = (_DWORD *)0xFFFFF68000000000LL;
  while ( 1 )
  {
    v34 = *v4;
    v14 = *v4;
    *(_QWORD *)&v15 = *v4 / v32;
    *((_QWORD *)&v15 + 1) = *v4 % v32;
    v35 = v15;
    if ( v15 >= (unsigned __int64)v11 )
      break;
    if ( !_bittest64(v12, v15) )
      break;
    *((_QWORD *)&v15 + 1) = 48 * v34 - 0x58000000000LL;
    v28 = *((_QWORD *)&v15 + 1);
    if ( (*(_QWORD *)(*((_QWORD *)&v15 + 1) + 24LL) & 0x4000000000000000LL) != 0 )
      break;
    v16 = *(_QWORD *)(*((_QWORD *)&v15 + 1) + 24LL) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v16 != 1 && (*(_DWORD *)v3 & 1) != 0 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)&v15 + 1) + 8LL);
      v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v6 != v18 )
      {
        if ( v6 )
        {
          MiFlushTbList((__int64)v38, *((_KPROCESS **)&v15 + 1));
          MiUnlockPageTableInternal(v10, v6);
        }
        v6 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v25 == 17 )
          v25 = MiLockWorkingSetShared(v10, *((__int64 *)&v15 + 1), v11, v13);
        MiLockPageTableInternal(v10, v18, 0LL);
      }
      v19 = ZeroPte;
      if ( MiPteInShadowRange(v17) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v21 = 1;
          if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
            v19 = ZeroPte | 0x8000000000000000uLL;
          goto LABEL_25;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v19 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      v21 = 0;
LABEL_25:
      *(_QWORD *)v17 = v19;
      if ( v21 )
        MiWritePteShadow(v17, v19, v20);
      MiUpdateAwePageTable(v6, -1LL, 0xFFFFFFFFLL);
      MiInsertTbFlushEntry((__int64)v38, (__int64)(v17 << 25) >> 16, 1LL, 0);
      MiDecrementAweMapCount(v22, v28, (__int64 *)MmBadPointer, 0LL);
      *((_QWORD *)&v15 + 1) = v28;
      v3 = a1;
      v14 = v34;
    }
    if ( !MiDecrementAweMapCount(v16, *((__int64 *)&v15 + 1), (__int64 *)MmBadPointer, (_DWORD *)1) )
    {
      *v7++ = v14;
      _bittestandreset64(v30, v35);
    }
    v23 = ++v26;
    if ( v25 != 17
      && (v23 & 0x3F) == 0
      && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v6) || KeShouldYieldProcessor()) )
    {
      MiFlushTbList((__int64)v38, *((_KPROCESS **)&v15 + 1));
      MiUnlockPageTableInternal(v10, v6);
      MiUnlockWorkingSetShared(v10, v25);
      v6 = 0LL;
      v25 = 17;
    }
    v12 = v30;
    ++v4;
    v11 = v36;
    v13 = (_DWORD *)0xFFFFF68000000000LL;
    if ( (unsigned __int64)v4 >= v29 )
      goto LABEL_39;
  }
  v5 = -1073741800;
LABEL_39:
  if ( v6 )
  {
    MiFlushTbList((__int64)v38, *((_KPROCESS **)&v15 + 1));
    MiUnlockPageTableInternal(v10, v6);
    MiUnlockWorkingSetShared(v10, v25);
  }
  CurrentThread = v31;
LABEL_42:
  ExReleaseAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v27 )
    MiUnlockAweVadsExclusive(CurrentThread);
  result = v5;
  *(_DWORD *)(a2 + 44) = ((__int64)v4 - a2 - 48) >> 3;
  *(_DWORD *)(a2 + 40) = ((__int64)v7 - a2 - 48) >> 3;
  return result;
}
