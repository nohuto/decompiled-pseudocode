/*
 * XREFs of MiIdealClusterPage @ 0x140555D54
 * Callers:
 *     MiHandleTransitionFault @ 0x140217410 (MiHandleTransitionFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14023A820 (MiRemoveLockedPageCharge.c)
 *     MiInitializePageColorBase @ 0x14023EBF0 (MiInitializePageColorBase.c)
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     MiProtectionToCacheAttribute @ 0x1402417B0 (MiProtectionToCacheAttribute.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiFindContiguousPages @ 0x140281D60 (MiFindContiguousPages.c)
 *     MiGetLargePage @ 0x1402840B4 (MiGetLargePage.c)
 *     MiRelockFaultState @ 0x140285928 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14028FB74 (MiReleaseFaultState.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiObtainProtoReference @ 0x14029A69C (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x14029A708 (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14029AA98 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B11D0 (MiGetProtoPteAddress.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiIsFaultPteIntact @ 0x1402E3214 (MiIsFaultPteIntact.c)
 *     MiReturnPfnReferenceCount @ 0x140328468 (MiReturnPfnReferenceCount.c)
 *     MiAcquireNonPagedResources @ 0x1403571F0 (MiAcquireNonPagedResources.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memcmp @ 0x1403D22E0 (memcmp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F52A8 (MiConvertEntireLargePageToSmall.c)
 *     MiArePageContentsZero @ 0x14054EB08 (MiArePageContentsZero.c)
 *     MiSwapHardFaultPage @ 0x1405636B0 (MiSwapHardFaultPage.c)
 */

unsigned __int8 *__fastcall MiIdealClusterPage(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 *a5,
        void *a6,
        _BYTE *a7)
{
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r13
  bool v14; // zf
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 *v20; // r15
  __int64 v21; // rdi
  unsigned __int64 v22; // rsi
  __int64 v23; // r12
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  ULONG_PTR v26; // r15
  __int64 v27; // rdx
  unsigned __int64 *v28; // rax
  unsigned int v29; // ebx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r15
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v33; // rax
  unsigned int v34; // ebx
  signed __int32 v35; // r13d
  __int64 v37; // r8
  __int64 v38; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v41; // eax
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  unsigned int v48; // eax
  __int64 v49; // r9
  unsigned int v50; // r11d
  __int64 LargePage; // rax
  __int64 v52; // rdi
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  struct _KPRCB *v57; // r9
  __int64 v58; // r8
  __int64 v59; // rdx
  signed __int32 v60; // eax
  __int64 v61; // rdx
  unsigned __int64 v62; // rdi
  __int64 v63; // rdx
  ULONG_PTR v64; // rcx
  __int64 v65; // rax
  unsigned __int8 v66; // al
  int v67; // eax
  __int64 v68; // rdi
  int v69; // eax
  bool v70; // bl
  __int64 v71; // rdx
  __int64 v72; // r8
  _DWORD *v73; // r9
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  void *v77; // rax
  void *v78; // r13
  void *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  _DWORD *v82; // r9
  __int64 v83; // rbx
  unsigned __int64 v84; // r8
  struct _KPRCB *v85; // r9
  __int64 v86; // rdx
  signed __int32 v87; // eax
  __int64 v88; // rdx
  struct _KPRCB *v89; // r8
  __int64 v90; // r9
  signed __int32 v91; // eax
  char v92; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v93[7]; // [rsp+61h] [rbp-9Fh] BYREF
  __int64 v94; // [rsp+68h] [rbp-98h]
  __int64 v95; // [rsp+70h] [rbp-90h]
  __int64 v96; // [rsp+78h] [rbp-88h]
  void *Buf2; // [rsp+80h] [rbp-80h]
  ULONG_PTR v98; // [rsp+88h] [rbp-78h] BYREF
  int v99; // [rsp+90h] [rbp-70h] BYREF
  int v100; // [rsp+94h] [rbp-6Ch] BYREF
  int v101; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v102; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v103; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v104; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v106; // [rsp+C0h] [rbp-40h]
  __int64 v107; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v108; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v109; // [rsp+D8h] [rbp-28h]
  _BYTE *v110; // [rsp+E0h] [rbp-20h]
  __int128 v111; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v112; // [rsp+F8h] [rbp-8h]
  __int64 v113; // [rsp+100h] [rbp+0h]
  __int128 Buf1; // [rsp+108h] [rbp+8h] BYREF
  __int128 v115; // [rsp+118h] [rbp+18h]
  __int128 v116; // [rsp+128h] [rbp+28h]
  _OWORD v117[3]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v118[128]; // [rsp+170h] [rbp+70h] BYREF

  v94 = a2;
  v103 = a1;
  v104 = a4;
  Buf2 = a6;
  v10 = *((_DWORD *)a1 + 20);
  v11 = a1[7];
  v12 = *a1;
  LODWORD(v95) = v10 >> 6;
  *a7 = 0;
  v110 = a7;
  v113 = a3;
  v13 = ((v12 & 0xFFFFFFFFFFFFF000uLL) - (v12 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v14 = (*(_DWORD *)(a2 + 48) & 0x100000) == 0;
  v93[0] = 0;
  v107 = 0LL;
  v98 = 0LL;
  Buf1 = 0LL;
  v105 = v11;
  v115 = 0LL;
  v106 = v13;
  v116 = 0LL;
  v108 = 16LL;
  v111 = 0LL;
  if ( v14 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a2, v12 >> 12, 4, &v107);
    if ( !ProtoPteAddress || !v107 || ProtoPteAddress != a3 )
      return a5;
    v16 = *(_QWORD *)(v107 + 8);
    v17 = v16 + 8 * (*(unsigned int *)(v107 + 44) - (unsigned __int64)(*(_DWORD *)(v107 + 52) & 0x3FFFFFFF));
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) > v16 )
      v16 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v17 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v17 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v16 >= v17 || a3 - 8 * v13 < v16 || a3 + 8 * (16 - v13) > v17 )
      return a5;
    v18 = *(_WORD *)(*(_QWORD *)v107 + 60LL) & 0x3FF;
  }
  else
  {
    v19 = *((_QWORD *)a5 + 1) | 0x8000000000000000uLL;
    if ( v19 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
      return a5;
    v18 = *(unsigned __int16 *)(v11 + 174);
  }
  v20 = (__int64 *)v118;
  v21 = 16LL;
  v22 = 1LL;
  v23 = *(_QWORD *)(qword_140C4E648 + 8 * v18);
  v24 = a3 - 8 * v13;
  do
  {
    v25 = MI_READ_PTE_LOCK_FREE(v24);
    v24 += 8LL;
    *v20++ = v25;
    --v21;
  }
  while ( v21 );
  v26 = -1LL;
  v27 = (__int64)(a5 + 0x58000000000LL) / 48;
  v28 = (unsigned __int64 *)v118;
  v109 = v27;
  v29 = 0;
  while ( 1 )
  {
    v30 = *v28;
    v96 = v30;
    v102 = v30;
    if ( (v30 & 1) != 0 )
      break;
    ++v29;
    ++v28;
    if ( v29 >= 0x10 )
      goto LABEL_36;
  }
  v31 = v30;
  if ( MiPteInShadowRange((unsigned __int64)&v102)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v31 & 1) != 0
    && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v33 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v102 >> 3) & 0x1FF));
      if ( (v33 & 0x20) != 0 )
        v31 = v96 | 0x20;
      if ( (v33 & 0x42) != 0 )
        v31 |= 0x42uLL;
    }
    else
    {
      v31 = v102;
    }
  }
  v26 = (v31 >> 12) & 0xFFFFFFFFFLL;
  if ( (v26 & 0xF) != v29 )
    return a5;
  LOBYTE(v27) = v109;
LABEL_36:
  v96 = 0LL;
  v92 = 0;
  if ( v29 != 16 )
  {
    v26 += v13 - v29;
    if ( v26 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v26 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      return a5;
    v96 = 48 * v26 - 0x58000000000LL;
    if ( (unsigned __int8 *)v96 != a5 )
    {
      v34 = *((_DWORD *)MiSearchNumaNodeTable(v26) + 2);
      LODWORD(v94) = dword_140C4DEF8 & v26;
      goto LABEL_46;
    }
LABEL_43:
    *v110 = 1;
    return a5;
  }
  if ( (v27 & 0xF) == v13 )
    goto LABEL_43;
  if ( (int)MiAcquireNonPagedResources((ULONG_PTR *)v23, 1uLL, 0LL, 0) < 0 )
    return a5;
  v92 = 1;
  MiInitializePageColorBase(v105, (*(_DWORD *)(v94 + 48) >> 12) & 0x3F, (__int64)&v111);
  v34 = HIDWORD(v111) >> byte_140C4DE8C;
  v35 = _InterlockedExchangeAdd((volatile signed __int32 *)v111, 1u);
  LODWORD(v94) = HIDWORD(v111) | DWORD2(v111) & v35;
LABEL_46:
  *(_BYTE *)(*(_QWORD *)(v23 + 16) + 4544LL * v34 + 3251) = 1;
  *((_QWORD *)a5 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a5, 0) )
  {
    if ( v92 == 1 )
    {
      MiReturnCommit(v23, 1LL);
      if ( (ULONG_PTR *)v23 != &MiSystemPartition )
        goto LABEL_58;
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_58;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v41 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v14 = (_DWORD)CachedResidentAvailable == v41;
          LODWORD(CachedResidentAvailable) = v41;
          if ( v14 )
            return a5;
        }
        while ( v41 != -1 && (unsigned __int64)(v41 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v22 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v22 )
LABEL_58:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v22);
    }
    return a5;
  }
  v42 = *((_OWORD *)a5 + 1);
  v117[0] = *(_OWORD *)a5;
  v43 = *((_OWORD *)a5 + 2);
  v117[1] = v42;
  v117[2] = v43;
  _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( Buf2 )
  {
    MiObtainProtoReference((__int64)Buf2, 0LL, v37, v38);
    v44 = *((_OWORD *)Buf2 + 1);
    Buf1 = *(_OWORD *)Buf2;
    v45 = *((_OWORD *)Buf2 + 2);
    v115 = v44;
    v116 = v45;
    MiUnlockProtoPoolPage((__int64)Buf2, 0x11u);
  }
  v112 = MiReleaseFaultState((__int64)(v103 + 7), 1u, v93);
  if ( v92 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v93[0] = CurrentIrql;
    v48 = MiProtectionToCacheAttribute((v104 >> 5) & 0x1F);
    LargePage = MiGetLargePage(v23, v50, v48, v94, 4, v49);
    v95 = LargePage;
    v52 = LargePage;
    if ( LargePage )
    {
      MiConvertEntireLargePageToSmall(LargePage, 2, 2LL, 1LL, 0LL, 0LL);
      v61 = v52;
      v62 = v106;
      v63 = (unsigned __int128)((v61 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v64 = ((unsigned __int64)v63 >> 63) + (v63 >> 3);
      v65 = v96;
      v98 = v64;
      do
      {
        v105 = v65;
        if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E7CC & MmPageValidationFrequency) == 0 )
        {
          MiArePageContentsZero(v64, 1uLL);
          v64 = v98;
        }
        v106 = v64 & 0xF;
        if ( v106 == v62 )
        {
          v26 = v64;
        }
        else
        {
          MiReleaseFreshPage(v95, v63, v58, v57);
          v64 = v98;
        }
        v65 = v95;
        if ( v106 != v62 )
          v65 = v105;
        ++v64;
        v63 = v95 + 48;
        v98 = v64;
        v14 = v108-- == 1;
        v95 += 48LL;
      }
      while ( !v14 );
      v96 = v65;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v66 = KeGetCurrentIrql();
          if ( v66 <= 0xFu && CurrentIrql <= 0xFu && v66 >= 2u )
          {
            v57 = KeGetCurrentPrcb();
            v58 = (__int64)v57->SchedulerAssist;
            v67 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v14 = (v67 & *(_DWORD *)(v58 + 20)) == 0;
            *(_DWORD *)(v58 + 20) &= v67;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v57);
          }
        }
      }
      __writecr8(CurrentIrql);
      LODWORD(v94) = 0;
      goto LABEL_104;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v53 = KeGetCurrentIrql();
        if ( v53 <= 0xFu && CurrentIrql <= 0xFu && v53 >= 2u )
        {
          v54 = KeGetCurrentPrcb();
          v55 = v54->SchedulerAssist;
          v56 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v56 & v55[5]) == 0;
          v55[5] &= v56;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v54);
        }
      }
    }
    __writecr8(CurrentIrql);
    MiReturnCommit(v23, 1LL);
    v58 = 1LL;
    if ( (ULONG_PTR *)v23 != &MiSystemPartition )
      goto LABEL_84;
    v57 = KeGetCurrentPrcb();
    v59 = (int)v57->CachedResidentAvailable;
    if ( (_DWORD)v59 == -1 )
      goto LABEL_84;
    if ( (unsigned __int64)(v59 + 1) <= 0x100 )
    {
      do
      {
        v60 = _InterlockedCompareExchange((volatile signed __int32 *)&v57->CachedResidentAvailable, v59 + 1, v59);
        v14 = (_DWORD)v59 == v60;
        LODWORD(v59) = v60;
        if ( v14 )
          goto LABEL_85;
      }
      while ( v60 != -1 && (unsigned __int64)(v60 + 1LL) <= 0x100 );
    }
    if ( (int)v59 > 192
      && (_DWORD)v59 == _InterlockedCompareExchange((volatile signed __int32 *)&v57->CachedResidentAvailable, 192, v59) )
    {
      v58 = (int)v59 - 192 + 1LL;
    }
    if ( v58 )
LABEL_84:
      v58 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v58);
LABEL_85:
    LODWORD(v94) = -1073741801;
LABEL_104:
    v68 = v96;
    goto LABEL_108;
  }
  v68 = 48 * v26 - 0x58000000000LL;
  v69 = ((((v95 & 1) == 0) + 0x2000) << 17) | 8;
  if ( (void (__noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink != KeSwapProcessOrStack )
    v69 = (((v95 & 1) == 0) + 0x2000) << 17;
  LODWORD(v94) = MiFindContiguousPages(
                   v23,
                   v26,
                   v26,
                   0LL,
                   1uLL,
                   a5[34] >> 6,
                   v34,
                   0x80000000,
                   v69,
                   0LL,
                   (__int64 *)&v98);
LABEL_108:
  v70 = 0;
  MiRelockFaultState((__int64)(v103 + 7), v112, v58, v57);
  if ( Buf2 )
  {
    *((_QWORD *)&v115 + 1) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)Buf2, 0LL, v72, v73);
    v77 = Buf2;
    v99 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)Buf2 + 6, 0x3FuLL) )
    {
      v78 = v77;
      do
      {
        do
          KeYieldProcessorEx(&v99, v74, v75, v76);
        while ( *((__int64 *)v78 + 3) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v78 + 6, 0x3FuLL) );
      v77 = Buf2;
    }
    v14 = memcmp(&Buf1, v77, 0x30uLL) == 0;
    v79 = Buf2;
    v70 = !v14;
    _InterlockedAnd64((volatile signed __int64 *)Buf2 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCount((__int64)v79, v80, v81, v82);
  }
  v100 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)a5 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v100, v71, v72, (__int64)v73);
    while ( *((__int64 *)a5 + 3) < 0 );
  }
  if ( !v70 && !memcmp(v117, a5, 0x30uLL) && (*((_QWORD *)a5 + 3) & 0x4000000000000000LL) == 0 )
  {
    v83 = v113;
    if ( (unsigned int)MiIsFaultPteIntact((__int64)v103, *v103, v113, &v104) )
    {
      if ( (int)v94 < 0 )
      {
        MiRemoveLockedPageCharge((__int64)a5);
        return a5;
      }
      MiCopyPage(v26, v109, 0LL, (v104 & 0x40) != 0 ? 16 : 8);
      MiSwapHardFaultPage(v83, a5, v68);
      *(_WORD *)(v68 + 32) = 0;
      v84 = 1LL;
      if ( (ULONG_PTR *)v23 != &MiSystemPartition )
        goto LABEL_135;
      v85 = KeGetCurrentPrcb();
      v86 = (int)v85->CachedResidentAvailable;
      if ( (_DWORD)v86 == -1 )
        goto LABEL_135;
      if ( (unsigned __int64)(v86 + 1) <= 0x100 )
      {
        do
        {
          v87 = _InterlockedCompareExchange((volatile signed __int32 *)&v85->CachedResidentAvailable, v86 + 1, v86);
          v14 = (_DWORD)v86 == v87;
          LODWORD(v86) = v87;
          if ( v14 )
            goto LABEL_136;
        }
        while ( v87 != -1 && (unsigned __int64)(v87 + 1LL) <= 0x100 );
      }
      if ( (int)v86 > 192
        && (_DWORD)v86 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v85->CachedResidentAvailable,
                            192,
                            v86) )
      {
        v84 = (int)v86 - 192 + 1LL;
      }
      if ( v84 )
LABEL_135:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v84);
LABEL_136:
      *v110 = 1;
      return (unsigned __int8 *)v68;
    }
  }
  if ( (int)v94 >= 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReleaseFreshPage(v68, v71, v72, v73);
    MiReturnCommit(v23, 1LL);
    if ( (ULONG_PTR *)v23 != &MiSystemPartition )
      goto LABEL_148;
    v89 = KeGetCurrentPrcb();
    v88 = (int)v89->CachedResidentAvailable;
    if ( (_DWORD)v88 == -1 )
      goto LABEL_148;
    v90 = 256LL;
    if ( (unsigned __int64)(v88 + 1) <= 0x100 )
    {
      do
      {
        v91 = _InterlockedCompareExchange((volatile signed __int32 *)&v89->CachedResidentAvailable, v88 + 1, v88);
        v14 = (_DWORD)v88 == v91;
        v88 = v91;
        if ( v14 )
          goto LABEL_149;
      }
      while ( v91 != -1 && (unsigned __int64)(v91 + 1LL) <= 0x100 );
    }
    if ( (int)v88 > 192
      && (_DWORD)v88 == _InterlockedCompareExchange((volatile signed __int32 *)&v89->CachedResidentAvailable, 192, v88) )
    {
      v22 = (int)v88 - 192 + 1LL;
    }
    if ( v22 )
LABEL_148:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v22);
LABEL_149:
    v101 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a5 + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v101, v88, (__int64)v89, v90);
      while ( *((__int64 *)a5 + 3) < 0 );
    }
  }
  MiRemoveLockedPageChargeAndDecRef((__int64)a5);
  return 0LL;
}
