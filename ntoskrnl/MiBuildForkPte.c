/*
 * XREFs of MiBuildForkPte @ 0x14065FC20
 * Callers:
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140228730 (MiCaptureWriteWatchDirtyBit.c)
 *     MiFlushTbListEarly @ 0x140229404 (MiFlushTbListEarly.c)
 *     MiSetWsleProtection @ 0x1402296A0 (MiSetWsleProtection.c)
 *     MiGetWsleContents @ 0x140229790 (MiGetWsleContents.c)
 *     MiGetWsleProtection @ 0x140229ECC (MiGetWsleProtection.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageTablePage @ 0x14026A4D0 (MiLockPageTablePage.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     MiFinalizePageAttribute @ 0x14028A354 (MiFinalizePageAttribute.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiTransferPageFileOwnership @ 0x14029D878 (MiTransferPageFileOwnership.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14029D8A0 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14029DA1C (MiUpdateWorkingSetPrivateSize.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x14029DD9C (MiReturnCrossPartitionCloneCharges.c)
 *     MiIncreaseUsedPtesCount @ 0x14029F850 (MiIncreaseUsedPtesCount.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402B0EB0 (MI_PROTO_FORMAT_COMBINED.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402CF5DC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1402E9820 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiIsPrototypePteVadLookup @ 0x140327240 (MiIsPrototypePteVadLookup.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiCaptureDirtyBitToPfn @ 0x14032D790 (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x14032E660 (MiWriteValidPteNewProtection.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x14032F630 (MiTransferSoftwarePte.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MiIsVadLargePrivate @ 0x1403316C0 (MiIsVadLargePrivate.c)
 *     MiIncrementCombinedPte @ 0x14034A354 (MiIncrementCombinedPte.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiPrefetchVirtualMemory @ 0x140363970 (MiPrefetchVirtualMemory.c)
 *     MiLockAndInsertPageInFreeList @ 0x140387CB4 (MiLockAndInsertPageInFreeList.c)
 *     MiWaitForFreePage @ 0x140651458 (MiWaitForFreePage.c)
 *     MiDuplicateCloneLeaf @ 0x140661AA8 (MiDuplicateCloneLeaf.c)
 *     MiFindZeroCloneBlock @ 0x140661EE4 (MiFindZeroCloneBlock.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14066222C (MiGetCrossPartitionCloneCharges.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 *     MiMakePerSessionProtoPte @ 0x140662CD4 (MiMakePerSessionProtoPte.c)
 *     MiReferenceExistingCloneProto @ 0x140662DCC (MiReferenceExistingCloneProto.c)
 *     MiWriteSharedDemandZeroPte @ 0x140663178 (MiWriteSharedDemandZeroPte.c)
 *     MiWriteUselessChildPte @ 0x14066333C (MiWriteUselessChildPte.c)
 *     MiUpdatePageFileBlockOwner @ 0x1406646BC (MiUpdatePageFileBlockOwner.c)
 */

__int64 __fastcall MiBuildForkPte(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7,
        __int64 a8,
        int *a9,
        __int64 a10,
        __int64 a11,
        int a12,
        unsigned __int8 a13,
        _QWORD *a14,
        _DWORD *a15)
{
  unsigned int v15; // r14d
  ULONG_PTR v17; // rsi
  unsigned __int64 v19; // rbx
  __int64 ZeroCloneBlock; // rax
  int v21; // ebx
  int v22; // edx
  __int64 v24; // r10
  __int64 v25; // r12
  int v26; // r8d
  unsigned __int64 v27; // rsi
  __int64 v28; // r9
  __int64 *v29; // rax
  volatile LONG *SharedVm; // rbx
  KIRQL v31; // al
  unsigned __int8 WsleContents; // al
  __int64 v33; // r10
  unsigned __int8 v34; // bl
  __int64 *v35; // r9
  __int64 v36; // r12
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // r8
  int v40; // eax
  int v41; // edx
  char v42; // r8
  __int64 v43; // r10
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // r12
  volatile signed __int32 *v47; // rbx
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  __int64 *v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rbx
  int v54; // esi
  _KPROCESS *Process; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rax
  unsigned __int64 v61; // rbx
  int v62; // edi
  __int64 v63; // r8
  int WsleProtection; // eax
  __int64 v65; // r10
  __int64 v66; // r9
  __int64 v67; // r10
  __int64 v68; // r11
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // edi
  __int64 v72; // r8
  int v73; // ebx
  int v74; // r9d
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rax
  unsigned __int16 v78; // cx
  __int64 v79; // rbx
  unsigned __int64 *v80; // rsi
  __int64 v81; // r8
  int v82; // eax
  __int64 v83; // rax
  __int64 v84; // rax
  char v85; // di
  __int64 v86; // rbx
  __int64 v87; // r8
  unsigned int v88; // eax
  __int64 v89; // rbx
  int v90; // edi
  __int64 v91; // r8
  __int64 v92; // rdx
  __int64 v93; // rax
  int v94; // edx
  __int64 v95; // r11
  __int64 v96; // r10
  int v97; // r11d
  __int64 v98; // rcx
  __int64 PerSessionProtoPte; // rax
  int v100; // [rsp+50h] [rbp-B1h]
  unsigned __int64 v101; // [rsp+68h] [rbp-99h] BYREF
  int v102; // [rsp+70h] [rbp-91h]
  int v103; // [rsp+74h] [rbp-8Dh]
  __int64 v104; // [rsp+78h] [rbp-89h]
  unsigned int v105; // [rsp+80h] [rbp-81h]
  __int64 *v106; // [rsp+88h] [rbp-79h]
  __int64 v107; // [rsp+90h] [rbp-71h] BYREF
  unsigned __int64 v108; // [rsp+98h] [rbp-69h]
  unsigned __int64 v109; // [rsp+A0h] [rbp-61h]
  __int64 v110; // [rsp+A8h] [rbp-59h] BYREF
  __int64 Page; // [rsp+B0h] [rbp-51h] BYREF
  unsigned __int64 v112; // [rsp+B8h] [rbp-49h]
  __int64 v113; // [rsp+C0h] [rbp-41h]
  int v114; // [rsp+C8h] [rbp-39h] BYREF
  int v115; // [rsp+CCh] [rbp-35h] BYREF
  __int64 *v116; // [rsp+D0h] [rbp-31h]
  __int64 v117; // [rsp+D8h] [rbp-29h] BYREF
  __int128 v118; // [rsp+E0h] [rbp-21h] BYREF
  _QWORD v119[9]; // [rsp+F0h] [rbp-11h] BYREF

  v15 = 0;
  v117 = 0LL;
  v110 = 0LL;
  v118 = 0LL;
  v17 = a3;
  v101 = MI_READ_PTE_LOCK_FREE(a3);
  v19 = v101;
  if ( !v101 )
  {
    if ( a5 && *(int *)(a11 + 52) < 0 )
    {
      ZeroCloneBlock = MiFindZeroCloneBlock(a5, (*(_DWORD *)(a10 + 48) >> 7) & 0x1F);
      v21 = ZeroCloneBlock;
      if ( ZeroCloneBlock )
      {
        MiIncreaseUsedPtesCount(a8, 1u);
        MiWriteSharedDemandZeroPte(a2, v22, v21, (_DWORD)a4, (__int64)a14);
      }
    }
    return 0LL;
  }
  MiIncreaseUsedPtesCount(a8, 1u);
  v24 = a1;
  v25 = a2 + 1664;
  Page = -1LL;
  v107 = a2 + 1664;
  v113 = a1 + 1664;
  v26 = a12;
  v103 = a12;
  LODWORD(v104) = 0;
  while ( 1 )
  {
    v102 = 0;
    v105 = 0;
    if ( (v19 & 1) != 0 )
      break;
    if ( (v19 & 0x400) != 0 )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v19) )
      {
        if ( (unsigned int)MiIncrementCombinedPte(v25, v96) )
          goto LABEL_164;
      }
      else if ( (unsigned int)MiReferenceExistingCloneProto(v25, v96, v103, v97, (__int64)&v110) )
      {
        if ( v110 )
        {
          if ( ((*(_QWORD *)(v110 + 16) >> 55) & 0x1F) == 0x18 )
            goto LABEL_164;
          v19 |= 8uLL;
        }
        else
        {
          if ( MiIsPrototypePteVadLookup(v19) || (*(_BYTE *)(a10 + 48) & 0x70) != 0x20 || MiIsVadLargePrivate(a10) )
            goto LABEL_164;
          PerSessionProtoPte = MiMakePerSessionProtoPte(a1, a2, v17, v98);
          if ( PerSessionProtoPte )
            v19 = PerSessionProtoPte;
        }
LABEL_163:
        v101 = v19;
        goto LABEL_164;
      }
LABEL_91:
      MiWriteUselessChildPte(a4);
      *a15 = 1;
      goto LABEL_192;
    }
    if ( (v19 & 0x800) == 0 )
    {
      v106 = (__int64 *)((v19 >> 5) & 0x1F);
      if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v19) )
      {
        if ( (v19 & 2) != 0 )
        {
          v19 &= ~2uLL;
          v101 = v19;
        }
        if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v101) )
          goto LABEL_164;
        if ( !a5 )
          goto LABEL_164;
        v93 = MiFindZeroCloneBlock(a5, v92);
        v110 = v93;
        if ( !v93 )
          goto LABEL_164;
        MiWriteSharedDemandZeroPte(a2, v94, v93, (_DWORD)a4, v95);
        goto LABEL_192;
      }
      if ( v41 == 16 )
      {
        if ( (v19 & 2) != 0 )
        {
          v19 &= ~2uLL;
          goto LABEL_163;
        }
LABEL_164:
        v71 = 0;
        if ( MiPteInShadowRange((unsigned __int64)a4) )
        {
          if ( MiPteHasShadow() )
          {
            v71 = 1;
            if ( !HIBYTE(word_140C6697C) )
            {
LABEL_188:
              if ( (v19 & 1) != 0 )
                goto LABEL_189;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            goto LABEL_188;
          }
        }
        goto LABEL_190;
      }
      if ( (v41 & 0xFFFFFFF8) != 0x10 && !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v101) )
      {
        v75 = *(unsigned __int16 *)(v43 + 1838);
        v102 = 0;
        v76 = *(_QWORD *)(qword_140C67048 + 8 * v75);
        v77 = *(unsigned __int16 *)(v25 + 174);
        v112 = v76;
        if ( *(_QWORD *)(qword_140C67048 + 8 * v77) == v76 )
          goto LABEL_115;
        v105 = (v42 & 1) + 2;
        if ( (unsigned int)MiGetCrossPartitionCloneCharges(v76, v105) )
        {
          v102 = 1;
LABEL_115:
          if ( (v19 & 4) != 0 )
          {
            v78 = v19;
            if ( qword_140C657C0 && (v19 & 0x10) == 0 )
              v19 &= ~qword_140C657C0;
            MiUpdatePageFileBlockOwner(*(_QWORD *)(v76 + 8LL * (v78 >> 12) + 17056), HIDWORD(v19), a6, a3, 0);
          }
          MI_MAKE_PROTECT_WRITE_COPY((__int64 *)&v101);
          v79 = v101;
          if ( (v101 & 2) != 0 )
          {
            MiReleasePageFileInfo(v76, v101 & 0xFFFFFFFFFFFFFFFBuLL, 1);
            v79 &= ~2uLL;
            v101 = v79;
          }
          v80 = (unsigned __int64 *)(a6 + 16);
          *(_QWORD *)a6 = 0LL;
          *(_QWORD *)(a6 + 16) = 0LL;
          if ( MiPteInShadowRange(a6) )
          {
            if ( MiPteHasShadow() )
            {
              v82 = 1;
              if ( !HIBYTE(word_140C6697C) )
              {
LABEL_125:
                if ( (v79 & 1) != 0 )
                  v79 |= 0x8000000000000000uLL;
              }
            }
            else
            {
              v82 = 0;
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                goto LABEL_125;
            }
          }
          else
          {
            v82 = 0;
          }
          *(_QWORD *)a6 = v79;
          if ( v82 )
            MiWritePteShadow(a6, v79, v81);
          if ( v102 )
          {
            *v80 |= 0x1000000000000000uLL;
            v83 = 1LL;
          }
          else
          {
            v83 = 0LL;
          }
          *(_QWORD *)(a6 + 8) = v83;
          *(_QWORD *)(a6 + 24) = 2LL;
          v84 = MiSwizzleInvalidPte((a6 << 16) | 0x400);
          v85 = v84;
          v101 = v84;
          v86 = v84;
          v102 = 0;
          if ( MiPteInShadowRange(a3) )
          {
            if ( MiPteHasShadow() )
            {
              v102 = 1;
              if ( !HIBYTE(word_140C6697C) )
                goto LABEL_140;
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
LABEL_140:
              if ( (v85 & 1) != 0 )
                v86 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)a3 = v86;
          if ( v102 )
            MiWritePteShadow(a3, v86, v87);
          if ( (v103 & 1) != 0 )
          {
            *v80 = *v80 & 0xDF80000000000000uLL | 0x2000000000000001LL;
            _InterlockedAdd64((volatile signed __int64 *)(v112 + 17848), 1uLL);
            if ( (v105 & 1) != 0 )
              ++*a14;
            else
              ++a14[1];
            v88 = (unsigned int)v106;
            if ( (_DWORD)v106 != 24 )
              v101 |= 8uLL;
          }
          else
          {
            v88 = (unsigned int)v106;
          }
          v89 = v101;
          v90 = 0;
          *v80 = *v80 & 0xF07FFFFFFFFFFFFFuLL | ((unsigned __int64)v88 << 55);
          if ( MiPteInShadowRange((unsigned __int64)a4) )
          {
            if ( MiPteHasShadow() )
            {
              v90 = 1;
              if ( !HIBYTE(word_140C6697C) )
                goto LABEL_156;
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
LABEL_156:
              if ( (v89 & 1) != 0 )
                v89 |= 0x8000000000000000uLL;
            }
          }
          *a4 = v89;
          if ( v90 )
            MiWritePteShadow((__int64)a4, v89, v91);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
          goto LABEL_85;
        }
        goto LABEL_91;
      }
      MiFlushTbList(a9);
      v44 = v113;
      MiUnlockWorkingSetExclusive(v113, a13);
      v119[1] = 4096LL;
      v119[0] = (__int64)(v17 << 25) >> 16;
      MiPrefetchVirtualMemory(1uLL, (__int64)v119, v44, 45);
      SharedVm = (volatile LONG *)MiGetSharedVm(v44);
      v31 = ExAcquireSpinLockExclusive(SharedVm);
      goto LABEL_33;
    }
    LOBYTE(v100) = a13;
    v40 = MiHandleForkTransitionPte(v24, a2, v17, a4, a6, a7, a9, &Page, v26, v100, a14, a15);
    if ( v40 )
    {
      LOBYTE(v15) = v40 != 1;
      goto LABEL_192;
    }
LABEL_34:
    MiMakeSystemAddressValid(v17, 0LL, 0, a13, 1);
    v45 = MI_READ_PTE_LOCK_FREE(v17);
    v24 = a1;
    v19 = v45;
    v26 = v103;
    v101 = v45;
  }
  v27 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v101) >> 12) & 0xFFFFFFFFFFLL)
      - 0x220000000000LL;
  v109 = v27;
  if ( (_DWORD)v104 )
    goto LABEL_12;
  v116 = (__int64 *)(v27 + 40);
  if ( *(_WORD *)(v27 + 32) <= 1u )
  {
    v116 = (__int64 *)(v27 + 40);
  }
  else if ( *(__int64 *)(v27 + 40) >= 0 )
  {
    goto LABEL_12;
  }
  v106 = (__int64 *)(v27 + 16);
  if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v27 + 16)) )
  {
LABEL_12:
    MiInitializePageColorBase(v113, 0, (__int64)&v118);
    v28 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v118, 1u);
    v29 = *(__int64 **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v25 + 174));
    v106 = v29;
    if ( Page != -1 || (Page = MiGetPage((__int64)v29, HIDWORD(v118) | (unsigned int)v28 & DWORD2(v118), 0), Page != -1) )
    {
      v73 = Page;
      MiFinalizePageAttribute(48 * Page - 0x220000000000LL, *(unsigned __int8 *)(v27 + 34) >> 6, 0, v28);
      LOBYTE(v74) = a13;
      MiDuplicateCloneLeaf(a3, (_DWORD)a4, v73, v74, 17);
      ++*a7;
      return 0LL;
    }
    MiFlushTbList(a9);
    MiUnlockWorkingSetExclusive(v113, a13);
    MiWaitForFreePage(v106);
    SharedVm = (volatile LONG *)MiGetSharedVm(v113);
    v31 = ExAcquireSpinLockExclusive(SharedVm);
    v17 = a3;
LABEL_33:
    *((_DWORD *)SharedVm + 1) = 0;
    a13 = v31;
    goto LABEL_34;
  }
  v104 = (__int64)(a3 << 25) >> 16;
  WsleContents = MiGetWsleContents(v104, v104);
  v34 = WsleContents;
  v108 = *v35;
  if ( (v108 & 0x8000000000000000uLL) == 0LL )
  {
    v117 = MI_READ_PTE_LOCK_FREE(v33 + ((a6 >> 9) & 0x7FFFFFFFF8LL));
    v36 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v117) >> 12) & 0xFFFFFFFFFFLL)
        - 0x220000000000LL;
    v37 = ZeroPte;
    v38 = *(_QWORD *)(qword_140C67048 + 8 * ((v108 >> 43) & 0x3FF));
    v108 = v38;
    if ( *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v107 + 174)) != v38 )
    {
      v105 = (v103 & 1) + 2;
      if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v38, v105) )
        goto LABEL_91;
      v102 = 1;
    }
    if ( (v34 & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v36, 3) )
    {
      v114 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v114);
        while ( *(__int64 *)(v36 + 24) < 0 );
      }
      *(_QWORD *)(v36 + 24) ^= (*(_QWORD *)(v36 + 24) ^ (*(_QWORD *)(v36 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v101 & 0x42) != 0 )
      {
        if ( (*(_DWORD *)(a10 + 48) & 0x600000) == 0x600000 && *v116 >= 0 )
          MiCaptureWriteWatchDirtyBit(a1, v104, (__int64 **)a10);
        v46 = v109;
        v115 = 0;
        v47 = (volatile signed __int32 *)(v109 + 24);
        while ( _interlockedbittestandset64(v47, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v115);
          while ( *(__int64 *)v47 < 0 );
        }
        v48 = MiCaptureDirtyBitToPfn(v46);
        v101 &= 0xFFFFFFFFFFFFFFBDuLL;
        v37 = v48;
      }
      else
      {
        v46 = v109;
        LODWORD(v107) = 0;
        v47 = (volatile signed __int32 *)(v109 + 24);
        while ( _interlockedbittestandset64(v47, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v107);
          while ( *(__int64 *)v47 < 0 );
        }
      }
      v49 = *(_QWORD *)(v46 + 16);
      v112 = v49;
      if ( (v49 & 2) != 0 )
      {
        HIDWORD(v50) = HIDWORD(v49);
        if ( qword_140C657C0 && (v49 & 0x10) == 0 )
          v50 = ~qword_140C657C0 & v49;
        v37 = MiTransferSoftwarePte(
                *(_QWORD *)(v46 + 16),
                *(_QWORD *)(v108 + 8LL * ((unsigned __int16)v49 >> 12) + 17056),
                HIDWORD(v50),
                (v37 != 0) + 2);
        *(_QWORD *)(v46 + 16) = v112 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      v51 = v116;
      *(_QWORD *)(v46 + 8) = a6;
      *v51 |= 0x8000000000000000uLL;
      v52 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v117);
      MiSetPfnPteFrame(v109, (v52 >> 12) & 0xFFFFFFFFFFLL);
      MI_MAKE_PROTECT_WRITE_COPY(v106);
      v112 = (unsigned __int64)*v106 >> 5;
      MiTransferPageFileOwnership(v109, a3);
      _InterlockedAnd64((volatile signed __int64 *)v47, 0x7FFFFFFFFFFFFFFFuLL);
      if ( v37 )
        MiReleasePageFileInfo(v108, v37, 1);
      v53 = v101;
      if ( (v101 & 0x800) != 0 )
      {
        v53 = v101 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
        v101 = v53;
      }
      MiWriteValidPteNewProtection(a3, v53);
      MiInsertTbFlushEntry((__int64)a9, v104, 1LL, 0);
      MiFlushTbListEarly((__int64)a9, 0);
      *(_QWORD *)(a6 + 16) = 0LL;
      *(_QWORD *)a6 = 0LL;
      v54 = 0;
      if ( MiPteInShadowRange(a6) )
      {
        if ( MiPteHasShadow() )
        {
          v54 = 1;
          if ( !HIBYTE(word_140C6697C) )
            goto LABEL_63;
        }
        else
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_63:
            if ( (v53 & 1) != 0 )
              v53 |= 0x8000000000000000uLL;
          }
        }
      }
      *(_QWORD *)a6 = v53;
      if ( v54 )
        MiWritePteShadow(a6, v53, v56);
      if ( v102 )
      {
        *(_QWORD *)(a6 + 16) |= 0x1000000000000000uLL;
        v57 = 1LL;
      }
      else
      {
        v57 = 0LL;
      }
      v58 = v104;
      *(_QWORD *)(a6 + 8) = v57;
      *(_QWORD *)(a6 + 24) = 2LL;
      MiSetWsleProtection((__int64)Process, v58);
      v59 = MiSwizzleInvalidPte((*(_QWORD *)(v109 + 8) << 16) | 0x400LL);
      if ( (v103 & 1) != 0 )
      {
        v60 = v108;
        *(_QWORD *)(a6 + 16) = *(_QWORD *)(a6 + 16) & 0xDF80000000000000uLL | 0x2000000000000001LL;
        _InterlockedAdd64((volatile signed __int64 *)(v60 + 17848), 1uLL);
        if ( (v105 & 1) != 0 )
          ++*a14;
        else
          ++a14[1];
        v59 |= 8uLL;
        v101 = v59;
      }
      v61 = v59;
      *(_QWORD *)(a6 + 16) ^= (*(_QWORD *)(a6 + 16) ^ ((unsigned __int64)(unsigned int)v112 << 55)) & 0xF80000000000000LL;
      v62 = 0;
      if ( MiPteInShadowRange((unsigned __int64)a4) )
      {
        if ( MiPteHasShadow() )
        {
          v62 = 1;
          if ( !HIBYTE(word_140C6697C) )
            goto LABEL_80;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_80:
          if ( (v59 & 1) != 0 )
            v61 = v59 | 0x8000000000000000uLL;
        }
      }
      *a4 = v61;
      if ( v62 )
        MiWritePteShadow((__int64)a4, v61, v63);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      MiUpdateWorkingSetPrivateSize(v113, v104, 0xFFFFFFFFFFFFFFFFuLL, 0LL);
LABEL_85:
      v15 = 1;
      goto LABEL_192;
    }
    MiReturnCrossPartitionCloneCharges(v108, v105, v39);
    v25 = v107;
    v17 = a3;
    LODWORD(v104) = 1;
    goto LABEL_34;
  }
  WsleProtection = MiGetWsleProtection(v104, WsleContents);
  if ( WsleProtection )
  {
    v19 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
    v101 = v19;
LABEL_88:
    if ( v66 >= 0 && (v68 & 0x10000000000LL) == 0 && v66 )
    {
LABEL_90:
      if ( !(unsigned int)MiIncrementCombinedPte(v107, v67) )
        goto LABEL_91;
      goto LABEL_104;
    }
  }
  else
  {
    v101 = MiSwizzleInvalidPte((v65 << 16) | 0x400);
    v19 = v101;
    if ( v66 < 0 || (v68 & 0x10000000000LL) != 0 )
      goto LABEL_88;
    if ( v66 )
    {
      v19 = v101 | 0x800;
      v101 |= 0x800uLL;
      goto LABEL_90;
    }
  }
  if ( !(unsigned int)MiReferenceExistingCloneProto(v107, v67, v103, (_DWORD)a14, (__int64)&v110) )
    goto LABEL_91;
  if ( v110 )
  {
    v19 |= 8uLL;
  }
  else
  {
    if ( MiIsPrototypePteVadLookup(*(_QWORD *)(v27 + 16))
      || (*(_BYTE *)(a10 + 48) & 0x70) != 0x20
      || MiIsVadLargePrivate(a10) )
    {
      goto LABEL_104;
    }
    v70 = MiMakePerSessionProtoPte(a1, a2, a3, v69);
    if ( v70 )
      v19 = v70;
  }
  v101 = v19;
LABEL_104:
  v71 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a4) )
  {
    if ( MiPteHasShadow() )
    {
      v71 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_190;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_190;
    }
    if ( (v19 & 1) != 0 )
LABEL_189:
      v19 |= 0x8000000000000000uLL;
  }
LABEL_190:
  *a4 = v19;
  if ( v71 )
    MiWritePteShadow((__int64)a4, v19, v72);
LABEL_192:
  if ( Page != -1 )
    MiLockAndInsertPageInFreeList(48 * Page - 0x220000000000LL);
  return v15;
}
