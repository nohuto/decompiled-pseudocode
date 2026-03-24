/*
 * XREFs of MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FCB8
 * Callers:
 *     MiResolveMappedFileFault @ 0x140299B10 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     PsGetIoPriorityThread @ 0x140242180 (PsGetIoPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiTryLockLeafPage @ 0x140283FF8 (MiTryLockLeafPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140285334 (MiTryLockProtoPoolPageAtDpc.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x14029A69C (MiObtainProtoReference.c)
 *     MiStartingOffset @ 0x14029EAA0 (MiStartingOffset.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     MiAdvanceFaultList @ 0x1402E40E8 (MiAdvanceFaultList.c)
 *     MiHandleInPageError @ 0x1402FB5D4 (MiHandleInPageError.c)
 *     MiFlowThroughInsertNode @ 0x14032951C (MiFlowThroughInsertNode.c)
 *     MiInitializeTransitionPfn @ 0x14033723C (MiInitializeTransitionPfn.c)
 */

__int64 __fastcall MiCopyFileOnlyGlobalSubsectionPage(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r13
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // r14
  volatile LONG *v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ebx
  __int64 v22; // rcx
  ULONG_PTR v23; // rbx
  _QWORD *v24; // r15
  __int64 v25; // rax
  __int64 *v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // [rsp+20h] [rbp-10h] BYREF
  __int64 v34; // [rsp+28h] [rbp-8h]
  int v35; // [rsp+70h] [rbp+40h] BYREF
  __int64 *v36; // [rsp+78h] [rbp+48h]
  __int64 v37; // [rsp+80h] [rbp+50h] BYREF

  v36 = a2;
  v7 = a5;
  v37 = 0LL;
  v33 = 0LL;
  v12 = 48 * a5 - 0x58000000000LL;
  LODWORD(a5) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a5, (__int64)a2, a3, a4);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  v13 = MI_READ_PTE_LOCK_FREE(a3);
  if ( (v13 & 0x400) != 0 )
  {
    v14 = -1LL;
  }
  else
  {
    if ( qword_140C4DF40 )
    {
      if ( (v13 & 0x10) != 0 )
        v13 &= ~0x10uLL;
      else
        v13 &= ~qword_140C4DF40;
    }
    v14 = (v13 >> 12) & 0xFFFFFFFFFLL;
  }
  MiInitializeTransitionPfn(v7, (__int64 *)a3, v14);
  *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 2;
  *(_WORD *)(v12 + 32) = 1;
  *(_BYTE *)(v12 + 34) |= 0x20u;
  *(_QWORD *)v12 = (a1 + 32) & -(__int64)(a1 != 0);
  *(_BYTE *)(v12 + 35) ^= (*(_BYTE *)(v12 + 35) ^ (*(_DWORD *)(a1 + 192) >> 9)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v34 = *a2;
  v15 = (volatile LONG *)(v34 + 72);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v34 + 72));
  ++*(_QWORD *)(v34 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel(v15);
  v16 = v36[1] + 8LL * (unsigned int)((__int64)(a3 - *(_QWORD *)(a7 + 72)) >> 3);
  if ( ((a3 ^ v16) & 0xFFFFFFFFF000LL) != 0 )
    v17 = MiTryLockProtoPoolPageAtDpc((__int64 *)v16, 0xFFFFFFFFF000LL, &v33, &v37);
  else
    v17 = MiTryLockLeafPage((__int64 *)v16, 0xFFFFFFFFF000LL, &v37);
  v21 = v17;
  if ( v17 < 0 )
    goto LABEL_30;
  v22 = v37;
  if ( (*(_BYTE *)(v37 + 35) & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v33 )
      MiUnlockProtoPoolPage(v33, 2u);
    v22 = v37;
    v21 = -1073740023;
  }
  if ( v21 < 0 )
  {
LABEL_30:
    v35 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v35, v18, v19, v20);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    MiHandleInPageError(v12);
    MiRemoveLockedPageChargeAndDecRef(v12);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return (unsigned int)v21;
  }
  else
  {
    v23 = (v22 + 0x58000000000LL) / 48;
    if ( (a4 & 1) != 0 )
    {
      v24 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *(_BYTE *)v24 == 1 )
      {
        MiAdvanceFaultList(v24);
        *(_DWORD *)(a1 + 192) |= 8u;
      }
    }
    *(_QWORD *)(a1 + 168) = MI_READ_PTE_LOCK_FREE(a3);
    *(_QWORD *)(a1 + 232) = a3;
    if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
      *(_DWORD *)(a1 + 192) |= 0x80u;
    v25 = a7;
    v26 = v36;
    *(_QWORD *)(a1 + 272) = 0LL;
    *(_DWORD *)(a1 + 280) = 4325432;
    *(_QWORD *)(a1 + 304) = 0LL;
    *(_QWORD *)(a1 + 312) = 4096LL;
    *(_QWORD *)(a1 + 320) = v7;
    v27 = MiStartingOffset(v26, a3, *(_DWORD *)(v25 + 64));
    *(_QWORD *)(a1 + 248) = v12;
    v28 = a6;
    *(_QWORD *)(a1 + 96) = v27;
    v29 = v34;
    *(_QWORD *)(a1 + 240) = a3;
    *(_QWORD *)(a1 + 208) = v29;
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_DWORD *)(a1 + 184) = 4096;
    MiObtainProtoReference(v28, 1LL, v30, v31);
    *(_QWORD *)(a1 + 160) = v28;
    MiCopyPage(v7, v23, 0LL, 68);
    if ( v14 != -1 )
      MiFlowThroughInsertNode(a1, (_QWORD *)(48 * v14 - 0x58000000000LL));
    _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v33 )
      MiUnlockProtoPoolPage(v33, 2u);
    MiUnlockProtoPoolPage(v28, 2u);
    __incgsdword(0x2E98u);
    *(_DWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 88) = 4096LL;
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    return 0LL;
  }
}
