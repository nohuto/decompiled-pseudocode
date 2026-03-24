/*
 * XREFs of MiHandleForkTransitionPte @ 0x14055A9A4
 * Callers:
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 * Callees:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MiInitializePageColorBase @ 0x14023EBF0 (MiInitializePageColorBase.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     MiLockAndDecrementShareCount @ 0x140263D30 (MiLockAndDecrementShareCount.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x14031218C (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     MiFinalizePageAttribute @ 0x140337444 (MiFinalizePageAttribute.c)
 *     MiLockTransitionLeafPage @ 0x140363DD4 (MiLockTransitionLeafPage.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14036A904 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiDuplicateCloneLeaf @ 0x14055A174 (MiDuplicateCloneLeaf.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14055A8C4 (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x14055B620 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWriteUselessChildPte @ 0x14055BC20 (MiWriteUselessChildPte.c)
 *     MiWaitForFreePage @ 0x14055C13C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiHandleForkTransitionPte(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        unsigned __int8 a10,
        _QWORD *a11,
        _DWORD *a12)
{
  __int64 v12; // r14
  ULONG_PTR v13; // rdi
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  unsigned int v20; // r12d
  int v21; // r13d
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  ULONG_PTR v26; // rbp
  unsigned __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rax
  signed __int32 v32; // eax
  __int64 Page; // rax
  _KPROCESS *v34; // rdx
  unsigned __int8 v35; // r14
  __int64 v36; // r13
  LONG *v37; // rdi
  KIRQL v38; // al
  __int64 v39; // rax
  BOOL v40; // eax
  __int64 v41; // r8
  int v42; // edx
  int v43; // eax
  bool v44; // zf
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int64 v52; // rdi
  BOOL v53; // eax
  __int64 v54; // r8
  int v55; // edx
  int v56; // eax
  unsigned __int64 v57; // rdx
  int v58; // edi
  __int64 v59; // r8
  bool v60; // zf
  __int64 v61; // rbx
  _DWORD *v62; // r9
  _KPROCESS *v63; // rdx
  LONG *SharedVm; // rbx
  unsigned int v65; // [rsp+30h] [rbp-98h]
  unsigned int v66; // [rsp+30h] [rbp-98h]
  int v67; // [rsp+34h] [rbp-94h]
  int v68; // [rsp+38h] [rbp-90h]
  unsigned int v69; // [rsp+40h] [rbp-88h]
  __int64 v70; // [rsp+40h] [rbp-88h]
  __int64 v71; // [rsp+48h] [rbp-80h] BYREF
  __int64 v72; // [rsp+50h] [rbp-78h]
  __int64 v73; // [rsp+58h] [rbp-70h]
  __int128 v74; // [rsp+60h] [rbp-68h] BYREF
  __int64 v75; // [rsp+70h] [rbp-58h]
  __int64 v76; // [rsp+78h] [rbp-50h]

  v12 = a5;
  v13 = (ULONG_PTR)a3;
  v71 = 0LL;
  v74 = 0LL;
  v16 = MiSwizzleInvalidPte((a5 << 16) | 0x400);
  v19 = ZeroPte;
  v20 = v18;
  v75 = v16;
  v21 = v18;
  v22 = *(unsigned __int16 *)(v17 + 1838);
  v76 = ZeroPte;
  v67 = v18;
  v68 = v18;
  v23 = *(_QWORD *)(qword_140C4E648 + 8 * v22);
  v24 = *(unsigned __int16 *)(v15 + 1838);
  v72 = v23;
  v73 = *(_QWORD *)(qword_140C4E648 + 8 * v24);
  if ( v73 == v23 )
  {
    while ( 1 )
    {
LABEL_12:
      v26 = MiLockTransitionLeafPage(v13, 0LL);
      if ( !v26 )
        goto LABEL_22;
      v27 = MI_READ_PTE_LOCK_FREE(v13);
      v30 = 0LL;
      v31 = (v27 >> 5) & 0x1F;
      v69 = v31;
      if ( !*(_WORD *)(v26 + 32)
        && (v31 & 0xFFFFFFF8) != 0x10
        && !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v26 + 16)) )
      {
        break;
      }
      v65 = *(unsigned __int8 *)(v26 + 34) >> 6;
      v70 = a1 + 1664;
      if ( *a8 != -1LL )
      {
        if ( v21 )
        {
          MiReturnCommit(v23, 1LL);
          v30 = 0LL;
          v21 = 0;
        }
        if ( v20 )
        {
          MiReturnCrossPartitionCloneCharges(v23);
          v30 = 0LL;
        }
        v20 = v30;
        v61 = 48 * *a8 - 0x58000000000LL;
        MiLockNestedPageAtDpcInline(v61, v30, v28, v29);
        MiFinalizePageAttribute(v61, v65, 1, v62);
        _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (*(_BYTE *)(v26 + 34) & 0x20) != 0 && (MiFlushTbList(a7, v63), (*(_BYTE *)(v26 + 34) & 8) != 0) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiUnlockWorkingSetExclusive(v70, a10);
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
          SharedVm = MiGetSharedVm(v70);
          ExAcquireSpinLockExclusive(SharedVm);
          SharedVm[1] = 0;
        }
        else if ( (unsigned int)MiDuplicateCloneLeaf((unsigned __int64)a3, a4, *a8, a10, 2u) )
        {
          *a8 = -1LL;
          ++*a6;
          return 1LL;
        }
LABEL_22:
        if ( v21 )
          MiReturnCommit(v23, 1LL);
        if ( v20 )
          MiReturnCrossPartitionCloneCharges(v23);
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiInitializePageColorBase(a1 + 1664, v30, (__int64)&v74);
      v32 = _InterlockedExchangeAdd((volatile signed __int32 *)v74, 1u);
      v66 = HIDWORD(v74) | v32 & DWORD2(v74);
      Page = MiGetPage(v73, v66, 0LL);
      *a8 = Page;
      if ( Page == -1 )
      {
        v35 = a10;
        v36 = v73;
        do
        {
          MiFlushTbList(a7, v34);
          MiUnlockWorkingSetExclusive(v70, v35);
          MiWaitForFreePage(v36);
          v37 = MiGetSharedVm(v70);
          v38 = ExAcquireSpinLockExclusive(v37);
          v37[1] = 0;
          v35 = v38;
          MiMakeSystemAddressValid((ULONG_PTR)a3, 0LL, 0, v38, 1);
          v39 = MiGetPage(v36, v66, 0LL);
          *a8 = v39;
        }
        while ( v39 == -1 );
        v16 = v75;
        v19 = v76;
        v23 = v72;
        v20 = v67;
        v21 = v68;
        a10 = v35;
        v12 = a5;
      }
      v13 = (ULONG_PTR)a3;
      if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)a3) & 0x401) != 0 )
        goto LABEL_22;
    }
    *(_QWORD *)v12 = v30;
    v40 = MiPteInShadowRange(v12);
    v41 = 0x8000000000000000uLL;
    if ( v40 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v43 = v42 + 1;
        if ( HIBYTE(word_140C4E008) != (_BYTE)v42 )
          goto LABEL_36;
        v44 = ((unsigned __int8)v27 & (unsigned __int8)v43) == 0;
      }
      else
      {
        v43 = v42;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_36;
        v44 = (v27 & 1) == 0;
      }
      if ( !v44 )
        v27 |= v41;
    }
    else
    {
      v43 = 0;
    }
LABEL_36:
    *(_QWORD *)v12 = v27;
    if ( v43 )
      MiWritePteShadow(v12, v27, v41);
    MI_MAKE_PROTECT_WRITE_COPY((__int64 *)v12);
    *(_QWORD *)(v12 + 8) = v20;
    *(_QWORD *)(v12 + 24) = 2LL;
    if ( (a9 & 1) != 0 )
    {
      *(_QWORD *)(v12 + 16) = 1LL;
      if ( v21 )
        ++*a11;
      else
        ++a11[1];
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7624), 1uLL);
      v45 = *(_QWORD *)(v12 + 16);
    }
    else
    {
      v45 = 0LL;
    }
    *(_QWORD *)(v12 + 16) = v45 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v69 << 59);
    if ( (*(_QWORD *)(v26 + 16) & 2) != 0 )
    {
      v19 = *(_QWORD *)(v26 + 16);
      if ( (*(_BYTE *)(v26 + 34) & 7) == 3 )
      {
        MiUnlinkPageFromList(v26, 0);
        v46 = 1;
      }
      else
      {
        v46 = 0;
      }
      *(_QWORD *)(v26 + 16) &= ~2uLL;
      if ( v46 )
        MiInsertPageInList(v26, 8u);
    }
    *(_QWORD *)(v26 + 8) = v12;
    *(_QWORD *)(v26 + 40) |= 0x8000000000000000uLL;
    MI_MAKE_PROTECT_WRITE_COPY((__int64 *)(v26 + 16));
    v47 = *(_QWORD *)(v26 + 40);
    v72 = v47 & 0xFFFFFFFFFLL;
    v71 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *(_QWORD *)(v26 + 40) = v47 ^ (v47 ^ ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v71) >> 12)) & 0xFFFFFFFFFLL;
    v48 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v71) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    MiLockNestedPageAtDpcInline(v48, v49, v50, v51);
    *(_QWORD *)(v48 + 24) ^= (*(_QWORD *)(v48 + 24) ^ (*(_QWORD *)(v48 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v52 = v16;
    v53 = MiPteInShadowRange((unsigned __int64)a3);
    v55 = 0;
    if ( v53 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v56 = v55 + 1;
        if ( HIBYTE(word_140C4E008) == (_BYTE)v55 && ((unsigned __int8)v16 & (unsigned __int8)v56) != 0 )
          v52 = v16 | 0x8000000000000000uLL;
LABEL_59:
        *a3 = v52;
        if ( v56 )
          MiWritePteShadow((__int64)a3, v52, v54);
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v19 )
        {
          v57 = v19 & 0xFFFFFFFFFFFFFFFBuLL;
          if ( (v19 & 4) == 0 )
            v57 = v19;
          MiReleasePageFileInfo(v23, v57, 1);
        }
        if ( (a9 & 1) != 0 && v69 != 24 )
          v16 |= 8uLL;
        v58 = 0;
        if ( !MiPteInShadowRange((unsigned __int64)a4) )
          goto LABEL_76;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v58 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
            v60 = (v16 & 1) == 0;
            goto LABEL_74;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v60 = (v16 & 1) == 0;
LABEL_74:
          if ( !v60 )
            v16 |= 0x8000000000000000uLL;
        }
LABEL_76:
        *a4 = v16;
        if ( v58 )
          MiWritePteShadow((__int64)a4, v16, v59);
        MiLockAndDecrementShareCount(48 * v72 - 0x58000000000LL, 0LL, v59);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
        return 2LL;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v16 & 1) != 0 )
      {
        v52 = v16 | 0x8000000000000000uLL;
      }
    }
    v56 = v55;
    goto LABEL_59;
  }
  if ( (a9 & 1) == 0 )
  {
LABEL_7:
    if ( (unsigned int)MiGetCrossPartitionCloneCharges(v23, v15, v17, v18) )
    {
      v20 = 1;
      v67 = 1;
      goto LABEL_12;
    }
    MiWriteUselessChildPte(a4);
    *a12 = 1;
    if ( v21 )
      MiReturnCommit(v23, 1LL);
    return 1LL;
  }
  if ( (unsigned int)MiChargeCommit(v23, (unsigned int)(v18 + 1), 0) )
  {
    v21 = 1;
    v68 = 1;
    goto LABEL_7;
  }
  MiWriteUselessChildPte(a4);
  *a12 = 1;
  return 1LL;
}
