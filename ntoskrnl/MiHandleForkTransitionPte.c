/*
 * XREFs of MiHandleForkTransitionPte @ 0x140662368
 * Callers:
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     MiFinalizePageAttribute @ 0x14028A354 (MiFinalizePageAttribute.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiTransferPageFileOwnership @ 0x14029D878 (MiTransferPageFileOwnership.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14029D8A0 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x14029DD9C (MiReturnCrossPartitionCloneCharges.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1402E9820 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MiWaitForFreePage @ 0x140651458 (MiWaitForFreePage.c)
 *     MiDuplicateCloneLeaf @ 0x140661AA8 (MiDuplicateCloneLeaf.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14066222C (MiGetCrossPartitionCloneCharges.c)
 *     MiWriteUselessChildPte @ 0x14066333C (MiWriteUselessChildPte.c)
 */

__int64 __fastcall MiHandleForkTransitionPte(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6,
        int *a7,
        ULONG_PTR *a8,
        char a9,
        unsigned __int8 a10,
        _QWORD *a11,
        _DWORD *a12)
{
  __int64 v12; // r14
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // r9d
  volatile signed __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 v23; // rbp
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // r12
  __int64 v30; // r12
  signed __int32 v31; // eax
  unsigned int v32; // ebp
  __int64 Page; // rax
  unsigned __int8 v34; // bl
  volatile signed __int64 *v35; // rsi
  volatile LONG *v36; // rdi
  KIRQL v37; // al
  __int64 v38; // rax
  __int64 v39; // rdi
  int v40; // r15d
  BOOL v41; // eax
  __int64 v42; // r8
  int v43; // edx
  bool v44; // zf
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // eax
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdi
  unsigned __int64 v51; // rdi
  __int64 v52; // r8
  int v53; // edx
  int v54; // eax
  unsigned __int64 v55; // rdx
  int v56; // esi
  __int64 v57; // r8
  bool v58; // zf
  __int64 v59; // rbx
  __int64 v60; // r9
  volatile LONG *SharedVm; // rbx
  char v62; // [rsp+30h] [rbp-88h]
  __int64 v63; // [rsp+38h] [rbp-80h]
  unsigned int v64; // [rsp+40h] [rbp-78h]
  __int64 v65; // [rsp+48h] [rbp-70h] BYREF
  volatile signed __int64 *v66; // [rsp+50h] [rbp-68h]
  __int128 v67; // [rsp+58h] [rbp-60h] BYREF
  __int64 v68; // [rsp+68h] [rbp-50h]
  __int64 v69; // [rsp+70h] [rbp-48h]
  int v71; // [rsp+C8h] [rbp+10h]
  __int64 v72; // [rsp+C8h] [rbp+10h]

  v12 = a5;
  v65 = 0LL;
  v67 = 0LL;
  v15 = MiSwizzleInvalidPte((a5 << 16) | 0x400);
  v16 = ZeroPte;
  v68 = v15;
  v18 = *(unsigned __int16 *)(v17 + 1838);
  v69 = ZeroPte;
  v62 = v19;
  v71 = v19;
  v20 = *(volatile signed __int64 **)(qword_140C67048 + 8 * v18);
  v63 = (__int64)v20;
  v66 = *(volatile signed __int64 **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v21 + 1838));
  if ( v66 != v20 )
  {
    v62 = (a9 & 1) + 2;
    if ( (unsigned int)MiGetCrossPartitionCloneCharges(v20, v62) )
    {
      v71 = 1;
      goto LABEL_6;
    }
    MiWriteUselessChildPte(a4);
    *a12 = 1;
    return 1LL;
  }
  while ( 1 )
  {
LABEL_6:
    v23 = MiLockTransitionLeafPageEx((ULONG_PTR)a3, 0LL, 0);
    if ( !v23 )
    {
LABEL_16:
      v39 = v63;
LABEL_17:
      if ( v71 )
        MiReturnCrossPartitionCloneCharges(v39, v62, v24);
      return 0LL;
    }
    v25 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
    LODWORD(v27) = 0;
    v28 = v25;
    v29 = (v25 >> 5) & 0x1F;
    if ( !*(_WORD *)(v23 + 32)
      && ((v25 >> 5) & 0x18) != 0x10
      && !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v23 + 16)) )
    {
      break;
    }
    v30 = a1 + 1664;
    v64 = *(unsigned __int8 *)(v23 + 34) >> 6;
    if ( *a8 != -1LL )
    {
      v39 = v63;
      if ( v71 != (_DWORD)v27 )
      {
        MiReturnCrossPartitionCloneCharges(v63, v62, v26);
        v71 = 0;
      }
      v59 = 48 * *a8 - 0x220000000000LL;
      MiLockNestedPageAtDpcInline(v59);
      MiFinalizePageAttribute(v59, v64, 1u, v60);
      _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v23 + 34) & 0x20) != 0 && (MiFlushTbList(a7), (*(_BYTE *)(v23 + 34) & 8) != 0) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockWorkingSetExclusive(v30, a10);
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        SharedVm = (volatile LONG *)MiGetSharedVm(v30);
        ExAcquireSpinLockExclusive(SharedVm);
        *((_DWORD *)SharedVm + 1) = 0;
      }
      else if ( (unsigned int)MiDuplicateCloneLeaf((unsigned __int64)a3, a4, *a8, a10, 2u) )
      {
        *a8 = -1LL;
        ++*a6;
        return 1LL;
      }
      goto LABEL_17;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiInitializePageColorBase(v30, v27, (__int64)&v67);
    v31 = _InterlockedExchangeAdd((volatile signed __int32 *)v67, 1u);
    v32 = HIDWORD(v67) | v31 & DWORD2(v67);
    Page = MiGetPage((__int64)v66, v32, 0);
    *a8 = Page;
    if ( Page == -1 )
    {
      v34 = a10;
      v35 = v66;
      do
      {
        MiFlushTbList(a7);
        MiUnlockWorkingSetExclusive(v30, v34);
        MiWaitForFreePage(v35);
        v36 = (volatile LONG *)MiGetSharedVm(v30);
        v37 = ExAcquireSpinLockExclusive(v36);
        *((_DWORD *)v36 + 1) = 0;
        v34 = v37;
        MiMakeSystemAddressValid((ULONG_PTR)a3, 0LL, 0, v37, 1);
        v38 = MiGetPage((__int64)v35, v32, 0);
        *a8 = v38;
      }
      while ( v38 == -1 );
      v16 = v69;
      v12 = a5;
      a10 = v34;
      v15 = v68;
    }
    if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)a3) & 0x401) != 0 )
      goto LABEL_16;
  }
  *(_QWORD *)v12 = v27;
  v40 = v27;
  v41 = MiPteInShadowRange(v12);
  v42 = 0x8000000000000000uLL;
  if ( v41 )
  {
    if ( MiPteHasShadow() )
    {
      v40 = v43 + 1;
      if ( HIBYTE(word_140C6697C) == (_BYTE)v43 )
      {
        v44 = ((unsigned __int8)v28 & (unsigned __int8)v40) == 0;
LABEL_26:
        if ( !v44 )
          v28 |= v42;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v44 = (v28 & 1) == 0;
      goto LABEL_26;
    }
  }
  *(_QWORD *)v12 = v28;
  if ( v40 )
    MiWritePteShadow(v12, v28, v42);
  MI_MAKE_PROTECT_WRITE_COPY((__int64 *)v12);
  v45 = 0LL;
  *(_QWORD *)(v12 + 16) = 0LL;
  if ( v71 )
  {
    v45 = 0x1000000000000000LL;
    v46 = 1LL;
    *(_QWORD *)(v12 + 16) = 0x1000000000000000LL;
  }
  else
  {
    v46 = 0LL;
  }
  *(_QWORD *)(v12 + 8) = v46;
  *(_QWORD *)(v12 + 24) = 2LL;
  if ( (a9 & 1) != 0 )
  {
    *(_QWORD *)(v12 + 16) = v45 & 0xDF80000000000000uLL | 0x2000000000000001LL;
    _InterlockedIncrement64((volatile signed __int64 *)(v63 + 17848));
    if ( (v62 & 1) != 0 )
      ++*a11;
    else
      ++a11[1];
  }
  *(_QWORD *)(v12 + 16) = *(_QWORD *)(v12 + 16) & 0xF07FFFFFFFFFFFFFuLL | ((unsigned __int64)(unsigned int)v29 << 55);
  if ( (*(_QWORD *)(v23 + 16) & 2) != 0 )
  {
    v16 = *(_QWORD *)(v23 + 16);
    if ( (*(_BYTE *)(v23 + 34) & 7) == 3 )
    {
      MiUnlinkPageFromListEx(v23, 0LL);
      v47 = 1;
    }
    else
    {
      v47 = 0;
    }
    *(_QWORD *)(v23 + 16) &= ~2uLL;
    if ( v47 )
      MiInsertPageInList(v23, 8u);
  }
  *(_QWORD *)(v23 + 8) = v12;
  *(_QWORD *)(v23 + 40) |= 0x8000000000000000uLL;
  MI_MAKE_PROTECT_WRITE_COPY((__int64 *)(v23 + 16));
  v72 = *(_QWORD *)(v23 + 40) & 0xFFFFFFFFFFLL;
  v65 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v48 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v65);
  MiSetPfnPteFrame(v23, (v48 >> 12) & 0xFFFFFFFFFFLL);
  MiTransferPageFileOwnership(v49, (__int64)a3);
  v50 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v65) >> 12) & 0xFFFFFFFFFFLL)
      - 0x220000000000LL;
  MiLockNestedPageAtDpcInline(v50);
  *(_QWORD *)(v50 + 24) ^= (*(_QWORD *)(v50 + 24) ^ (*(_QWORD *)(v50 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v51 = v15;
  if ( !MiPteInShadowRange((unsigned __int64)a3) )
  {
LABEL_51:
    v54 = 0;
    goto LABEL_52;
  }
  if ( !MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v15 & 1) != 0 )
      v51 = v15 | 0x8000000000000000uLL;
    goto LABEL_51;
  }
  v54 = v53 + 1;
  if ( HIBYTE(word_140C6697C) == (_BYTE)v53 && ((unsigned __int8)v15 & (unsigned __int8)v54) != 0 )
    v51 = v15 | 0x8000000000000000uLL;
LABEL_52:
  *a3 = v51;
  if ( v54 )
    MiWritePteShadow((__int64)a3, v51, v52);
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v16 )
  {
    v55 = v16 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v16 & 4) == 0 )
      v55 = v16;
    MiReleasePageFileInfo(v63, v55, 1);
  }
  if ( (a9 & 1) != 0 && (_DWORD)v29 != 24 )
    v15 |= 8uLL;
  v56 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a4) )
  {
    if ( MiPteHasShadow() )
    {
      v56 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v58 = (v15 & 1) == 0;
LABEL_67:
        if ( !v58 )
          v15 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v58 = (v15 & 1) == 0;
      goto LABEL_67;
    }
  }
  *a4 = v15;
  if ( v56 )
    MiWritePteShadow((__int64)a4, v15, v57);
  MiLockAndDecrementShareCount(48 * v72 - 0x220000000000LL, 0);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
  return 2LL;
}
