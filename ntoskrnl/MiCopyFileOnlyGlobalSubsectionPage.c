/*
 * XREFs of MiCopyFileOnlyGlobalSubsectionPage @ 0x140639EB8
 * Callers:
 *     MiResolveMappedFileFault @ 0x14028A780 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiInitializeTransitionPfn @ 0x140214B28 (MiInitializeTransitionPfn.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PsGetIoPriorityThread @ 0x1402832C0 (PsGetIoPriorityThread.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiStartingOffset @ 0x14028C530 (MiStartingOffset.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1402A2850 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiTryLockLeafPage @ 0x1402A29B8 (MiTryLockLeafPage.c)
 *     MiObtainProtoReference @ 0x1402A304C (MiObtainProtoReference.c)
 *     MiFlowThroughInsertNode @ 0x1402FE598 (MiFlowThroughInsertNode.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPage @ 0x14032DC70 (MiCopyPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiAdvanceFaultList @ 0x140363F9C (MiAdvanceFaultList.c)
 *     MiHandleInPageError @ 0x14036A984 (MiHandleInPageError.c)
 */

__int64 __fastcall MiCopyFileOnlyGlobalSubsectionPage(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter3,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  ULONG_PTR v12; // r14
  unsigned __int64 v13; // r15
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 *v16; // rdi
  unsigned __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  ULONG_PTR v20; // rbx
  _QWORD *v21; // r12
  __int64 v22; // rax
  ULONG_PTR v23; // r12
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v27; // [rsp+20h] [rbp-10h] BYREF
  int v28; // [rsp+70h] [rbp+40h] BYREF
  __int64 *v29; // [rsp+78h] [rbp+48h]
  __int64 v30; // [rsp+80h] [rbp+50h] BYREF

  v29 = a2;
  v7 = BugCheckParameter3;
  v30 = 0LL;
  v27 = 0LL;
  v12 = 48 * BugCheckParameter3 - 0x220000000000LL;
  v28 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v28);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  v13 = MI_READ_PTE_LOCK_FREE(a3);
  if ( (v13 & 0x400) != 0 )
  {
    v14 = -1LL;
  }
  else
  {
    if ( qword_140C657C0 )
    {
      if ( (v13 & 0x10) != 0 )
        v13 &= ~0x10uLL;
      else
        v13 &= ~qword_140C657C0;
    }
    v14 = (v13 >> 12) & 0xFFFFFFFFFFLL;
  }
  MiInitializeTransitionPfn(v7, (__int64 *)a3, v14);
  *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 2;
  *(_WORD *)(v12 + 32) = 1;
  *(_BYTE *)(v12 + 34) |= 0x20u;
  *(_QWORD *)v12 = (a1 + 32) & -(__int64)(a1 != 0);
  *(_BYTE *)(v12 + 35) ^= (*(_BYTE *)(v12 + 35) ^ (*(_DWORD *)(a1 + 192) >> 9)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = *a2;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*a2 + 72));
  ++*(_QWORD *)(v15 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
  v16 = v29;
  v17 = v29[1] + 8LL * (unsigned int)((__int64)(a3 - *(_QWORD *)(a7 + 72)) >> 3);
  if ( ((a3 ^ v17) & 0xFFFFFFFFF000LL) != 0 )
    v18 = MiTryLockProtoPoolPageAtDpc(v17, 0xFFFFFFFFF000LL, &v27, (__int64)&v30);
  else
    v18 = MiTryLockLeafPage((__int64 *)v17, 0, &v30);
  v19 = v18;
  if ( v18 < 0 )
    goto LABEL_29;
  if ( (*(_BYTE *)(v30 + 35) & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v27 )
      MiUnlockProtoPoolPage(v27, 2u);
    v19 = -1073740023;
LABEL_29:
    LODWORD(BugCheckParameter3) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&BugCheckParameter3);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    MiHandleInPageError(v12);
    MiRemoveLockedPageChargeAndDecRef(v12);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v19;
  }
  v20 = 0xAAAAAAAAAAAAAAABuLL * ((v30 + 0x220000000000LL) >> 4);
  if ( (a4 & 1) != 0 )
  {
    v21 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)v21 == 1 )
    {
      MiAdvanceFaultList(v21);
      *(_DWORD *)(a1 + 192) |= 8u;
    }
  }
  *(_QWORD *)(a1 + 168) = MI_READ_PTE_LOCK_FREE(a3);
  *(_QWORD *)(a1 + 232) = a3;
  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
    *(_DWORD *)(a1 + 192) |= 0x80u;
  v22 = a7;
  v23 = BugCheckParameter3;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 280) = 4325432;
  *(_QWORD *)(a1 + 312) = 4096LL;
  *(_QWORD *)(a1 + 320) = v23;
  v24 = MiStartingOffset(v16, a3, *(_DWORD *)(v22 + 64));
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = v16;
  v25 = a6;
  *(_QWORD *)(a1 + 248) = v12;
  *(_QWORD *)(a1 + 96) = v24;
  *(_QWORD *)(a1 + 240) = a3;
  *(_DWORD *)(a1 + 184) = 4096;
  MiObtainProtoReference(v25, 1);
  *(_QWORD *)(a1 + 160) = v25;
  MiCopyPage(v23, v20, 68);
  if ( v14 != -1 )
    MiFlowThroughInsertNode(a1, (_QWORD *)(48 * v14 - 0x220000000000LL));
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v27 )
    MiUnlockProtoPoolPage(v27, 2u);
  MiUnlockProtoPoolPage(v25, 2u);
  __incgsdword(0x2E98u);
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return 0LL;
}
