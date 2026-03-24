/*
 * XREFs of MiPrivateFixup @ 0x1402E29C8
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14021BA50 (MiObtainFaultCharges.c)
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x14023B32C (MiMakeProtectionPfnCompatible.c)
 *     MiGetInPageSupportBlock @ 0x14023E894 (MiGetInPageSupportBlock.c)
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiDereferenceControlAreaProbe @ 0x140278130 (MiDereferenceControlAreaProbe.c)
 *     MiInitializeReadInProgressPfn @ 0x14027C5B0 (MiInitializeReadInProgressPfn.c)
 *     MiFreeInPageSupportBlock @ 0x14027CF5C (MiFreeInPageSupportBlock.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x140284844 (MiGetPfnChannel.c)
 *     MiRelockFaultState @ 0x140285928 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14028FB74 (MiReleaseFaultState.c)
 *     MiAddLockedPageCharge @ 0x14029AA98 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MiIsFaultPteIntact @ 0x1402E3214 (MiIsFaultPteIntact.c)
 *     MiReturnFaultCharges @ 0x1402E4184 (MiReturnFaultCharges.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiGetEffectivePagePriorityThread @ 0x140339E94 (MiGetEffectivePagePriorityThread.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRelocateImagePfn @ 0x1405FC260 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x1406FF348 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(unsigned __int64 *a1, ULONG_PTR a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // rsi
  __int64 Process; // rcx
  struct _KTHREAD *v12; // rax
  unsigned int v14; // ebx
  ULONG_PTR *v15; // r12
  bool v16; // zf
  _QWORD *v17; // r14
  __int64 v18; // rsi
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v20; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  __int64 DriverPage; // rsi
  __int64 v25; // r8
  _DWORD *v26; // r9
  unsigned int v27; // ebx
  int v28; // ebx
  int PfnChannel; // eax
  __int64 v30; // rsi
  PSLIST_ENTRY v31; // r15
  __int64 v32; // rbx
  char EffectivePagePriorityThread; // al
  unsigned __int64 v34; // r12
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int8 v38; // cl
  unsigned __int8 v39; // bl
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  __int64 v43; // r12
  int ProtectionPfnCompatible; // eax
  __int64 v45; // r9
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // ecx
  volatile signed __int64 *v53; // rbx
  __int64 v54; // r8
  _DWORD *v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  _DWORD *v58; // r9
  unsigned __int64 v59; // r12
  __int64 v60; // rcx
  char v61; // al
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r9
  int v64; // eax
  _DWORD *v65; // r8
  int v66; // [rsp+30h] [rbp-69h]
  char v67[8]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v68; // [rsp+50h] [rbp-49h]
  __int64 Page; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v70; // [rsp+60h] [rbp-39h]
  unsigned __int64 v71; // [rsp+68h] [rbp-31h]
  __int64 v72; // [rsp+70h] [rbp-29h]
  struct _KTHREAD *v73; // [rsp+78h] [rbp-21h]
  __int64 v74; // [rsp+80h] [rbp-19h]
  __int64 v75; // [rsp+88h] [rbp-11h] BYREF
  unsigned __int64 v76; // [rsp+90h] [rbp-9h]
  ULONG_PTR v77; // [rsp+98h] [rbp-1h]
  __int64 v78[9]; // [rsp+A0h] [rbp+7h] BYREF
  int IsFaultPteIntact; // [rsp+F8h] [rbp+5Fh]

  CurrentThread = KeGetCurrentThread();
  v6 = (__int64)(a1 + 7);
  v7 = a1[7];
  v9 = *a1;
  v67[0] = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v16 = (*(_BYTE *)(v7 + 184) & 7) == 0;
  v74 = v6;
  v76 = v7;
  v71 = v9;
  v73 = CurrentThread;
  v72 = Process;
  if ( !v16 || (v12 = *(struct _KTHREAD **)(Process + 1248)) == 0LL )
  {
    v14 = (*(_DWORD *)(a4 + 16) >> 5) & 0x1F;
    v15 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v7 + 174));
    if ( v9 < 0xFFFF800000000000uLL )
    {
      v16 = (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0;
    }
    else
    {
      if ( (MiFlags & 0x10000) == 0 || (MiFlags & 0x4000) == 0 )
        goto LABEL_22;
      v16 = ((*(_DWORD *)(a4 + 16) >> 5) & 2) == 0;
    }
    if ( !v16 )
    {
      v17 = 0LL;
      goto LABEL_13;
    }
LABEL_22:
    v17 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EF40, 1u, (__int64)CurrentThread, a4);
    if ( !v17 )
      return 3221225626LL;
LABEL_13:
    v70 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v75 = MI_READ_PTE_LOCK_FREE(v70);
    v18 = (__int64)(a4 + 0x58000000000LL) / 48;
    v77 = v18;
    MiObtainFaultCharges(v15, 1u, 2);
    if ( v17 || v71 < 0xFFFF800000000000uLL )
    {
      v28 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(a4 + 0x58000000000LL) / 48) + 2);
      PfnChannel = MiGetPfnChannel(a4);
      Page = MiGetPage(
               (__int64)v15,
               (PfnChannel << byte_140C4DE8D) | (v28 << byte_140C4DE8C) | dword_140C4DEF8 & (unsigned int)v18,
               0LL);
      DriverPage = Page;
      if ( Page == -1 )
      {
        v27 = -1073741670;
        goto LABEL_29;
      }
    }
    else
    {
      v68 = MiReleaseFaultState((__int64)(a1 + 7), 1u, v67);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v20 = v67[0];
        if ( v67[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = v67[0];
          v23 = ~(unsigned __int16)(-1LL << (v67[0] + 1));
          v16 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v20 = v67[0];
      }
      __writecr8(v20);
      DriverPage = MiAllocateDriverPage(v15, v14, 0LL);
      Page = DriverPage;
      MiRelockFaultState((__int64)(a1 + 7), v68, v25, v26);
      if ( !(unsigned int)MiIsFaultPteIntact(a1, *a1, v70, &v75) )
      {
        v27 = -1073740748;
LABEL_29:
        if ( DriverPage != -1 )
          MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
        MiReturnFaultCharges(v15, 1LL, 2LL);
        if ( v17 )
          MiReleasePtes((__int64)&qword_140C4EF40, v17, 1u);
        return v27;
      }
    }
    v30 = 48 * DriverPage - 0x58000000000LL;
    v31 = MiGetInPageSupportBlock(2);
    if ( !v31 )
    {
      if ( v17 )
        MiReleasePtes((__int64)&qword_140C4EF40, v17, 1u);
      MiReleaseFreshPage(v30);
      MiReturnFaultCharges(v15, 1LL, 2LL);
      return 3221225626LL;
    }
    v32 = (__int64)v73;
    LODWORD(v68) = 0;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v73, 0LL);
    v34 = v70;
    v35 = v71;
    LODWORD(v31[12].Next) |= 0x20u;
    LOBYTE(v68) = EffectivePagePriorityThread & 7 | 0x48;
    LODWORD(v31[5].Next) = v36;
    *((_QWORD *)&v31[5].Next + 1) = v36;
    *((_QWORD *)&v31[15].Next + 1) = v30;
    MiInitializeReadInProgressPfn(v35, &Page, 1, v34, (__int64)v31, EffectivePagePriorityThread & 7 | 0x48);
    if ( (*(_BYTE *)(v76 + 184) & 7) == 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v72 + 1272), 1uLL);
    v78[0] = MI_READ_PTE_LOCK_FREE(v34);
    v31[13].Next = (_SLIST_ENTRY *)a2;
    _InterlockedAdd64((volatile signed __int64 *)(a2 + 112), 1uLL);
    v37 = MiReleaseFaultState(v74, 1u, v67);
    --*(_WORD *)(v32 + 486);
    v72 = v37;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v38 = KeGetCurrentIrql(), v38 <= 0xFu) )
    {
      v39 = v67[0];
      if ( v67[0] <= 0xFu && v38 >= 2u )
      {
        v40 = KeGetCurrentPrcb();
        v41 = v40->SchedulerAssist;
        v39 = v67[0];
        v42 = ~(unsigned __int16)(-1LL << (v67[0] + 1));
        v16 = (v42 & v41[5]) == 0;
        v41[5] &= v42;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v40);
      }
    }
    else
    {
      v39 = v67[0];
    }
    __writecr8(v39);
    v43 = Page;
    MiCopyPage(Page, v77, 0LL, v17 != 0LL ? 73 : 17);
    if ( !v17 )
    {
      v53 = (volatile signed __int64 *)a2;
LABEL_65:
      MiDereferenceControlAreaProbe(v53, 0);
      v27 = 0;
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiLeaveGuardedRegionUnsafe((__int64)v73);
      MiRelockFaultState(v74, v72, v54, v55);
      IsFaultPteIntact = MiIsFaultPteIntact(a1, *a1, v70, v78);
      v59 = (unsigned __int8)MiLockPageInline(v30, v56, v57, v58);
      *(_BYTE *)(v30 + 34) &= ~0x20u;
      v60 = *(_QWORD *)(v30 + 24);
      *(_QWORD *)v30 = 0LL;
      if ( (v60 & 0x4000000000000000LL) == 0 )
        *(_BYTE *)(v30 + 34) |= 0x10u;
      if ( IsFaultPteIntact == 1 )
      {
        MiAddLockedPageCharge(v30, 3);
        v61 = *(_BYTE *)(v30 + 34) & 0xF8 | 6;
        *(_QWORD *)(v30 + 24) ^= ((*(_QWORD *)(v30 + 24) + 1LL) ^ *(_QWORD *)(v30 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(v30 + 34) = v61;
        if ( !v17 && v71 >= 0xFFFF800000000000uLL )
          *(_BYTE *)(v30 + 35) |= 8u;
      }
      else
      {
        v27 = -1073740748;
      }
      MiRemoveLockedPageChargeAndDecRef(v30);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v62 = KeGetCurrentIrql();
          if ( v62 <= 0xFu && (unsigned __int8)v59 <= 0xFu && v62 >= 2u )
          {
            v63 = KeGetCurrentPrcb();
            v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v59 + 1));
            v65 = v63->SchedulerAssist;
            v16 = (v64 & v65[5]) == 0;
            v65[5] &= v64;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v63);
          }
        }
      }
      __writecr8(v59);
      LODWORD(v31[12].Next) &= ~0x20u;
      if ( SLODWORD(v31[11].Next) > 1 )
        KeSetEvent((PRKEVENT)(&v31[3].Next + 1), 0, 0);
      MiFreeInPageSupportBlock(v31);
      return v27;
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v30);
    ValidPte = MiMakeValidPte((unsigned __int64)v17, v43, ProtectionPfnCompatible | 0xA0000000, v45);
    LODWORD(v68) = 0;
    v47 = ValidPte;
    if ( MiPteInShadowRange((unsigned __int64)v17) )
    {
      if ( (unsigned int)MiPteHasShadow(v49, v48, v50, v51) )
      {
        v52 = 1;
        if ( !HIBYTE(word_140C4E008) && (v47 & 1) != 0 )
          v47 |= 0x8000000000000000uLL;
        goto LABEL_57;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v47 & 1) != 0 )
      {
        v47 |= 0x8000000000000000uLL;
      }
    }
    v52 = v68;
LABEL_57:
    *v17 = v47;
    if ( v52 )
      MiWritePteShadow(v17, v47);
    if ( (*(_QWORD *)(a4 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(a4 + 8) <= 0 )
    {
      v53 = (volatile signed __int64 *)a2;
      MiRelocateImagePfn(a2, a5, v66, 2);
    }
    else
    {
      v53 = (volatile signed __int64 *)a2;
    }
    MiReleasePtes((__int64)&qword_140C4EF40, v17, 1u);
    goto LABEL_65;
  }
  if ( v12 != CurrentThread )
    *((_DWORD *)a1 + 20) |= 4u;
  return 297LL;
}
