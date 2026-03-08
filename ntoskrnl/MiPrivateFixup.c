/*
 * XREFs of MiPrivateFixup @ 0x1402A180C
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiDereferenceControlAreaProbe @ 0x140214FAC (MiDereferenceControlAreaProbe.c)
 *     MiRelockFaultState @ 0x14022853C (MiRelockFaultState.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFreeInPageSupportBlock @ 0x140287B5C (MiFreeInPageSupportBlock.c)
 *     MiInitializeReadInProgressPfn @ 0x140289390 (MiInitializeReadInProgressPfn.c)
 *     MiGetInPageSupportBlock @ 0x14028A054 (MiGetInPageSupportBlock.c)
 *     MiGetEffectivePagePriorityThread @ 0x14028A260 (MiGetEffectivePagePriorityThread.c)
 *     MiReleaseFaultState @ 0x1402A2FD4 (MiReleaseFaultState.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiIsFaultPteIntact @ 0x1402A30FC (MiIsFaultPteIntact.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiReturnFaultCharges @ 0x1402F4480 (MiReturnFaultCharges.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiObtainFaultCharges @ 0x14031EEE0 (MiObtainFaultCharges.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiCopyPage @ 0x14032DC70 (MiCopyPage.c)
 *     MiGetPfnChannel @ 0x140334470 (MiGetPfnChannel.c)
 *     MiMakeProtectionPfnCompatible @ 0x14034A974 (MiMakeProtectionPfnCompatible.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRelocateImagePfn @ 0x1406EBA20 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x1407290FC (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(_QWORD *a1, ULONG_PTR *a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v10; // rdi
  __int64 Process; // rcx
  struct _KTHREAD *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // r15
  bool v15; // zf
  unsigned __int64 v16; // rsi
  ULONG_PTR v17; // rdi
  __int64 v18; // rdx
  int v19; // ebx
  int PfnChannel; // eax
  __int64 DriverPage; // rdi
  unsigned __int64 v22; // rbx
  __int64 v23; // rdi
  PSLIST_ENTRY v24; // r14
  char EffectivePagePriorityThread; // al
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v28; // r15
  ULONG_PTR v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int8 v32; // bl
  ULONG_PTR v33; // r15
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // ecx
  volatile signed __int64 *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // ebx
  int IsFaultPteIntact; // r12d
  unsigned __int64 v46; // r15
  __int64 v47; // rcx
  char v48; // al
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v51; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v54; // eax
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int8 v57; // cl
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // eax
  unsigned __int8 v61; // al
  struct _KPRCB *v62; // r9
  _DWORD *v63; // r8
  int v64; // eax
  int v65; // [rsp+30h] [rbp-61h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-41h] BYREF
  ULONG_PTR v67; // [rsp+58h] [rbp-39h]
  __int64 v68; // [rsp+60h] [rbp-31h]
  unsigned __int64 v69; // [rsp+68h] [rbp-29h]
  __int64 v70; // [rsp+70h] [rbp-21h]
  __int64 v71; // [rsp+78h] [rbp-19h] BYREF
  __int64 v72; // [rsp+80h] [rbp-11h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-9h]
  __int64 v74[9]; // [rsp+90h] [rbp-1h] BYREF
  unsigned __int8 v75; // [rsp+E8h] [rbp+57h] BYREF
  ULONG_PTR *v76; // [rsp+F0h] [rbp+5Fh]
  int v77; // [rsp+F8h] [rbp+67h]
  __int64 v78; // [rsp+100h] [rbp+6Fh]

  v78 = a4;
  v77 = a3;
  v76 = a2;
  v6 = a1[7];
  CurrentThread = KeGetCurrentThread();
  v10 = *a1;
  v75 = 0;
  v15 = (*(_BYTE *)(v6 + 184) & 7) == 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v70 = Process;
  v72 = v6;
  v69 = v10;
  if ( !v15 || (v12 = *(struct _KTHREAD **)(Process + 1248)) == 0LL )
  {
    v13 = (*(_DWORD *)(a4 + 16) >> 5) & 0x1F;
    v14 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v6 + 174));
    if ( v10 >= 0xFFFF800000000000uLL )
    {
      if ( (MiFlags & 0xA000) != 0xA000 )
        goto LABEL_6;
      v15 = ((*(_DWORD *)(a4 + 16) >> 5) & 2) == 0;
    }
    else
    {
      v15 = (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0;
    }
    if ( !v15 )
    {
      v16 = 0LL;
      goto LABEL_7;
    }
LABEL_6:
    v16 = MiReservePtes(&qword_140C695C0, 1LL);
    if ( !v16 )
      return 3221225626LL;
LABEL_7:
    v68 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v71 = MI_READ_PTE_LOCK_FREE(v68);
    v17 = 0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4);
    BugCheckParameter2 = v17;
    MiObtainFaultCharges(v14, 1LL, 2LL);
    if ( v16 || v69 < 0xFFFF800000000000uLL )
    {
      v19 = *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4)) + 8);
      PfnChannel = MiGetPfnChannel(a4);
      BugCheckParameter3 = MiGetPage(
                             v14,
                             (PfnChannel << byte_140C6570E) | (v19 << byte_140C6570D) | dword_140C65778 & (unsigned int)v17,
                             0);
      DriverPage = BugCheckParameter3;
      if ( BugCheckParameter3 == -1LL )
      {
        v44 = -1073741670;
        goto LABEL_56;
      }
      v22 = v68;
    }
    else
    {
      LOBYTE(v18) = 1;
      v67 = MiReleaseFaultState(a1 + 7, v18, &v75);
      if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
      {
        v51 = v75;
        if ( v75 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v51 = v75;
          v54 = ~(unsigned __int16)(-1LL << (v75 + 1));
          v15 = (v54 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v54;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v51 = v75;
      }
      __writecr8(v51);
      DriverPage = MiAllocateDriverPage(v14, v13, 0LL);
      BugCheckParameter3 = DriverPage;
      MiRelockFaultState(a1 + 7, v67, v55, v56);
      v22 = v68;
      if ( !(unsigned int)MiIsFaultPteIntact(a1, *a1, v68, &v71) )
      {
        v44 = -1073740748;
LABEL_56:
        if ( DriverPage != -1 )
          MiReleaseFreshPage(48 * DriverPage - 0x220000000000LL);
        MiReturnFaultCharges(v14, 1LL, 2LL);
        if ( v16 )
          MiReleasePtes((__int64)&qword_140C695C0, (__int64 *)v16, 1u);
        return v44;
      }
    }
    v23 = 48 * DriverPage - 0x220000000000LL;
    v24 = MiGetInPageSupportBlock(2u, 0LL);
    if ( v24 )
    {
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
      v26 = v69;
      v28 = (unsigned int)(v27 + 1);
      LODWORD(v24[12].Next) |= 0x20u;
      LODWORD(v24[5].Next) = v27;
      *((_QWORD *)&v24[5].Next + 1) = v27;
      *((_QWORD *)&v24[15].Next + 1) = v23;
      MiInitializeReadInProgressPfn(
        v26,
        &BugCheckParameter3,
        v27 + 1,
        v22,
        (__int64)v24,
        EffectivePagePriorityThread & 7 | 0x48);
      if ( (*(_BYTE *)(v72 + 184) & 7) == 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v70 + 1272), (unsigned int)v28);
      v74[0] = MI_READ_PTE_LOCK_FREE(v22);
      v67 = *v76;
      v29 = v67;
      v24[13].Next = (_SLIST_ENTRY *)v76;
      _InterlockedAdd64((volatile signed __int64 *)(v29 + 112), v28);
      LOBYTE(v30) = v28;
      v31 = MiReleaseFaultState(a1 + 7, v30, &v75);
      CurrentThread->SpecialApcDisable -= v28;
      v70 = v31;
      if ( KiIrqlFlags
        && (v57 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v28) != 0)
        && v57 <= 0xFu )
      {
        v32 = v75;
        if ( v75 <= 0xFu && v57 >= 2u )
        {
          v58 = KeGetCurrentPrcb();
          v59 = v58->SchedulerAssist;
          v32 = v75;
          v60 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + v75));
          v15 = (v60 & v59[5]) == 0;
          v59[5] &= v60;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v58);
        }
      }
      else
      {
        v32 = v75;
      }
      __writecr8(v32);
      v33 = BugCheckParameter3;
      MiCopyPage(BugCheckParameter3, BugCheckParameter2);
      if ( !v16 )
      {
        v40 = (volatile signed __int64 *)v67;
LABEL_24:
        MiDereferenceControlAreaProbe(v40, 0);
        v44 = 0;
        KeGetCurrentIrql();
        __writecr8(1uLL);
        v15 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v15
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(1LL, v41, v42, v43);
        }
        MiRelockFaultState(a1 + 7, v70, v42, v43);
        IsFaultPteIntact = MiIsFaultPteIntact(a1, *a1, v68, v74);
        v46 = (unsigned __int8)MiLockPageInline(v23);
        *(_BYTE *)(v23 + 34) &= ~0x20u;
        v47 = *(_QWORD *)(v23 + 24);
        *(_QWORD *)v23 = 0LL;
        if ( (v47 & 0x4000000000000000LL) == 0 )
          *(_BYTE *)(v23 + 34) |= 0x10u;
        if ( IsFaultPteIntact )
        {
          MiAddLockedPageCharge(v23, 3LL);
          v48 = *(_BYTE *)(v23 + 34) & 0xFE;
          *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_BYTE *)(v23 + 34) = v48 | 6;
          if ( !v16 && v69 >= 0xFFFF800000000000uLL )
            *(_BYTE *)(v23 + 35) |= 8u;
        }
        else
        {
          v44 = -1073740748;
        }
        MiRemoveLockedPageChargeAndDecRef(v23);
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v61 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v61 <= 0xFu && (unsigned __int8)v46 <= 0xFu && v61 >= 2u )
          {
            v62 = KeGetCurrentPrcb();
            v63 = v62->SchedulerAssist;
            v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
            v15 = (v64 & v63[5]) == 0;
            v63[5] &= v64;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(v62);
          }
        }
        __writecr8(v46);
        LODWORD(v24[12].Next) &= ~0x20u;
        if ( SLODWORD(v24[11].Next) > 1 )
          KeSetEvent((PRKEVENT)(&v24[3].Next + 1), 0, 0);
        MiFreeInPageSupportBlock(v24);
        return v44;
      }
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v23);
      ValidPte = MiMakeValidPte(v16, v33, ProtectionPfnCompatible | 0xA0000000);
      if ( (unsigned int)MiPteInShadowRange(v16) )
      {
        if ( (unsigned int)MiPteHasShadow(v37, v36, v38) )
        {
          v39 = 1;
          if ( !HIBYTE(word_140C6697C) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
          goto LABEL_18;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          ValidPte |= 0x8000000000000000uLL;
        }
      }
      v39 = 0;
LABEL_18:
      *(_QWORD *)v16 = ValidPte;
      if ( v39 )
        MiWritePteShadow(v16, ValidPte);
      if ( _bittest64((const signed __int64 *)(v78 + 40), 0x28u) || *(__int64 *)(v78 + 8) <= 0 )
      {
        v40 = (volatile signed __int64 *)v67;
        MiRelocateImagePfn(v67, (__int64)(v16 << 25) >> 16, a5, v65, a6 | 0x24);
      }
      else
      {
        v40 = (volatile signed __int64 *)v67;
      }
      MiReleasePtes((__int64)&qword_140C695C0, (__int64 *)v16, 1u);
      goto LABEL_24;
    }
    if ( v16 )
      MiReleasePtes((__int64)&qword_140C695C0, (__int64 *)v16, 1u);
    MiReleaseFreshPage(v23);
    MiReturnFaultCharges(v14, 1LL, 2LL);
    return 3221225626LL;
  }
  if ( v12 != CurrentThread )
    *((_DWORD *)a1 + 20) |= 4u;
  return 297LL;
}
