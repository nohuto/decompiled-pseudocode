/*
 * XREFs of MiAllocateWsle @ 0x140211C80
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140210810 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216750 (MiResolveTransitionFault.c)
 *     MiIssueHardFault @ 0x14028F030 (MiIssueHardFault.c)
 *     MiCompleteRestrictedImageFault @ 0x14029D730 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14029F220 (MiMakeSystemCacheRangeValid.c)
 *     MiMakeSystemCachePteValid @ 0x1402F3648 (MiMakeSystemCachePteValid.c)
 *     MiInitializeWorkingSetList @ 0x1403526E4 (MiInitializeWorkingSetList.c)
 *     MiResolveProtoCombine @ 0x14036A484 (MiResolveProtoCombine.c)
 *     MiCreateForkWsle @ 0x140559B5C (MiCreateForkWsle.c)
 * Callees:
 *     MiAddWorkingSetEntries @ 0x140212380 (MiAddWorkingSetEntries.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiGetPagePrivilege @ 0x1402A8D80 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140310124 (MiMarkPfnVerified.c)
 *     MiLockWorkingSetCoreExclusive @ 0x14032A9D4 (MiLockWorkingSetCoreExclusive.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14035666C (MiReleaseWsSwapReservationPfn.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x140512DB8 (KeSetPagePrivilege.c)
 *     MiIncrementVmFaultCount @ 0x140530450 (MiIncrementVmFaultCount.c)
 *     MiLogAllocateWsleEvent @ 0x140530478 (MiLogAllocateWsleEvent.c)
 *     MiCompleteSecureProcessFault @ 0x1405480C4 (MiCompleteSecureProcessFault.c)
 *     MiFillVirtualFaultInfo @ 0x140548424 (MiFillVirtualFaultInfo.c)
 *     MiGetVirtualFaultPageInfo @ 0x1405486AC (MiGetVirtualFaultPageInfo.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x14054F82C (MiUnlockWorkingSetCoreExclusive.c)
 */

__int64 __fastcall MiAllocateWsle(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        char a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  int v7; // esi
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  char v12; // r8
  unsigned int Queue; // edx
  unsigned int v14; // edx
  char v15; // al
  unsigned int v16; // edx
  signed __int64 v17; // rbx
  unsigned int v18; // r12d
  unsigned int v19; // edi
  int v20; // edi
  unsigned __int8 v21; // r13
  __int64 v22; // rdx
  ULONG_PTR v23; // r14
  ULONG_PTR v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  ULONG_PTR v27; // r14
  char v28; // al
  signed __int64 v29; // rcx
  char v30; // r15
  unsigned __int64 v31; // r12
  int v32; // eax
  ULONG_PTR v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r11
  __int64 VirtualFaultPageInfo; // r15
  int v37; // edx
  signed __int64 v38; // rdx
  _QWORD *v39; // r8
  int v40; // eax
  char v41; // al
  unsigned __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r9
  char v47; // [rsp+30h] [rbp-50h]
  unsigned int v48; // [rsp+34h] [rbp-4Ch]
  unsigned __int64 v49; // [rsp+38h] [rbp-48h]
  int v50; // [rsp+40h] [rbp-40h] BYREF
  int v51; // [rsp+44h] [rbp-3Ch] BYREF
  int v52; // [rsp+48h] [rbp-38h] BYREF
  int v53; // [rsp+4Ch] [rbp-34h] BYREF
  __int64 v54; // [rsp+50h] [rbp-30h]
  __int128 v55; // [rsp+58h] [rbp-28h] BYREF
  __int128 v56; // [rsp+68h] [rbp-18h] BYREF
  __int64 v57; // [rsp+78h] [rbp-8h]
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp+50h] BYREF

  BugCheckParameter2 = (ULONG_PTR)a3;
  v7 = *(_DWORD *)(a1 + 184);
  v48 = 0;
  v9 = (__int64)(a2 << 25) >> 16;
  v49 = v9;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = 1LL;
    v54 = 1LL;
    v48 = 1;
  }
  else
  {
    v10 = 0LL;
    v54 = 0LL;
    if ( (v7 & 7) == 0 && (((unsigned __int8)*a3 >> 1) & 7) != 0 )
      *a3 &= 0xFFFFFFFFFFFFFFF1uLL;
  }
  CurrentThread = KeGetCurrentThread();
  v12 = 0;
  v47 = 0;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v14 = Queue >> 9;
  }
  else
  {
    v14 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v15 = 2;
      if ( v14 < 2 )
        v15 = v14;
      LOBYTE(v14) = v15;
    }
  }
  v16 = v14 & 7;
  v17 = a5;
  v18 = 5;
  v19 = 8 * v16;
  if ( v10 )
  {
    if ( (a6 & 2) != 0 )
    {
      v12 = 9;
    }
    else if ( v16 >= 5 )
    {
      if ( (a6 & 8) != 0 )
      {
        v12 = 6;
      }
      else
      {
        if ( (a5 & 1) == 0 )
        {
LABEL_26:
          v21 = v12 | (16 * (a4 & 7));
          goto LABEL_27;
        }
        v12 = (a5 & 0x20) == 0;
      }
    }
    else
    {
      v12 = 7;
    }
    v47 = v12;
    goto LABEL_26;
  }
  v20 = 5;
  if ( v16 > 5 )
    v20 = v16;
  v21 = 0;
  v19 = 8 * v20;
LABEL_27:
  v22 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (a6 & 1) != 0 )
  {
    v23 = BugCheckParameter2;
    v50 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v50);
      while ( *(__int64 *)(v23 + 24) < 0 );
    }
    v24 = BugCheckParameter2;
    v25 = MiReleaseWsSwapReservationPfn(BugCheckParameter2, v22);
    v26 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v24 + 40) >> 39) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v25 )
      MiReleasePageFileInfo(v26, v25, 1LL);
    v17 = a5;
  }
  v27 = BugCheckParameter2;
  v28 = *(_BYTE *)(BugCheckParameter2 + 35);
  if ( (v28 & 8) == 0 )
    v18 = v28 & 7;
  if ( v18 < v19 >> 3 )
  {
    v51 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v51);
        while ( *(__int64 *)(v27 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) );
    }
    *(_BYTE *)(v27 + 35) = (v19 >> 3) | *(_BYTE *)(v27 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v17 = a5;
    v27 = BugCheckParameter2;
  }
  if ( (*(_BYTE *)v27 & 1) == 0 )
  {
    v52 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v52);
      while ( *(__int64 *)(v27 + 24) < 0 );
    }
    if ( (*(_QWORD *)BugCheckParameter2 & 1) == 0 )
      *(_QWORD *)BugCheckParameter2 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v17 = a5;
    v27 = BugCheckParameter2;
  }
  if ( (v17 & 1) == 0 )
  {
    v31 = v49;
    goto LABEL_108;
  }
  v29 = 0x8000000000000000uLL;
  v30 = v7 & 7;
  if ( (v7 & 7) == 2 )
  {
    v17 |= 0x8000000000000000uLL;
    a5 = v17;
LABEL_51:
    v31 = v49;
    goto LABEL_52;
  }
  if ( (MiFlags & 0x10000) == 0 )
    goto LABEL_51;
  v31 = v49;
  if ( (v49 < 0xFFFFF68000000000uLL || v49 > 0xFFFFF6FFFFFFFFFFuLL)
    && (v17 & 0x8000000000000000uLL) == 0
    && ((MiFlags & 0x40000) != 0 || v30) )
  {
    v53 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v53);
      while ( *(__int64 *)(v27 + 24) < 0 );
    }
    v33 = BugCheckParameter2;
    if ( !(unsigned int)MiGetPagePrivilege(BugCheckParameter2) )
    {
      v34 = 38LL;
      if ( !v30 )
        v34 = 7LL;
      MiMarkPfnVerified(v33, v34);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v17 = a5;
    v27 = BugCheckParameter2;
  }
LABEL_52:
  if ( (MiFlags & 0x8000) != 0
    && (MiFlags & 0x10000) != 0
    && (unsigned int)MI_PFN_IS_PROTO(v27)
    && ((*(_QWORD *)(v27 + 40) >> 60) & 7) == 3
    && (v30 == 4 || v30 == 1) )
  {
    v55 = 0LL;
    if ( (MiGetPagePrivilege(v29) & 8) != 0 )
    {
      v32 = KeSetPagePrivilege((__int64)(v27 + 0x58000000000LL) / 48, &v55, 1024LL);
      if ( v32 < 0 )
        KeBugCheckEx(0x1Au, 0x515E4uLL, v27, v32, 0LL);
    }
  }
  v35 = a7;
  if ( a7
    && (VirtualFaultPageInfo = MiGetVirtualFaultPageInfo(a7, v31)) != 0
    && ((v37 = *(_DWORD *)(v35 + 56), (v37 & 0x20) == 0)
     || (*(_QWORD *)(v27 + 40) & 0x1000000000LL) != 0
     || (v29 = *(_QWORD *)(v27 + 8), v29 <= 0)) )
  {
    if ( (v37 & 0x10) != 0 && (unsigned __int8)v47 < 6u )
      v21 = v21 & 0xF0 | 6;
  }
  else
  {
    VirtualFaultPageInfo = 0LL;
  }
  if ( v54 )
  {
    v29 = (unsigned __int64)v21 << 56;
    v17 = v17 & 0x80FFFFFFFFFFFFFFuLL | v29;
    a5 = v17;
    LOBYTE(v19) = v19 | 1;
  }
  v38 = v17;
  v39 = (_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(v29, v17, a2, v10) )
    {
      if ( !HIBYTE(word_140C4E008) && (v38 & 1) != 0 )
        v38 |= 0x8000000000000000uLL;
      *v39 = v38;
      MiWritePteShadow(v39, v38);
      goto LABEL_98;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v38 & 1) != 0 )
      v38 |= 0x8000000000000000uLL;
    v27 = BugCheckParameter2;
    v17 = a5;
  }
  *v39 = v38;
LABEL_98:
  if ( VirtualFaultPageInfo )
  {
    v40 = *(_DWORD *)(v35 + 56);
    if ( ((v40 & 1) == 0 || (v17 & 0x42) != 0) && ((v40 & 2) == 0 || v17 >= 0) )
    {
      LOBYTE(v19) = v19 | 4;
      if ( (v40 & 0x20) != 0 )
      {
        v41 = MiCompleteSecureProcessFault(&BugCheckParameter2, &a5, v35 + 48);
        v17 = a5;
        v27 = BugCheckParameter2;
        LOBYTE(v19) = (v19 ^ (4 * v41)) & 4 ^ v19;
      }
      if ( (v19 & 4) != 0 )
      {
        v42 = MI_READ_PTE_LOCK_FREE(&a5);
        MiFillVirtualFaultInfo(VirtualFaultPageInfo, (v42 >> 12) & 0xFFFFFFFFFLL, v17);
      }
    }
  }
LABEL_108:
  if ( v54 && (v19 & 1) == 0 )
    *(_BYTE *)v54 = v21;
  if ( (a6 & 2) != 0 )
  {
    v56 = 0LL;
    v57 = 0LL;
    MiLockWorkingSetCoreExclusive(a1, &v56);
    MiIncrementVmFaultCount(a1, 1LL);
    MiUnlockWorkingSetCoreExclusive(&v56);
  }
  else if ( (a6 & 4) == 0 )
  {
    v43 = MI_PFN_IS_PROTO(v27);
    v45 = v48 | 2;
    if ( v43 )
      v45 = v48;
    if ( v44 || (v7 & 7) == 0 )
      v45 = (unsigned int)v45 | 4;
    MiAddWorkingSetEntries(a1, v31, 1LL, v45);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(v27, v7 & 7, v31);
  return 1LL;
}
