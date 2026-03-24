/*
 * XREFs of MiMakePageAvoidRead @ 0x1402A4700
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B1B90 (MmCopyToCachedPage.c)
 * Callees:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x140218D20 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140230F30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPfnZeroingNeeded @ 0x1402384D0 (MiPfnZeroingNeeded.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiWriteValidPteVolatile @ 0x140240CE0 (MiWriteValidPteVolatile.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x140284864 (MiChangePageAttribute.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiLockOwnedProtoPage @ 0x14029A9B0 (MiLockOwnedProtoPage.c)
 *     MiIsAddressGlobal @ 0x14029F1A0 (MiIsAddressGlobal.c)
 *     MiAreChargesNeededToLockPage @ 0x1402A3AC0 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A6480 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x1402A6820 (MiPfnShareCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x1402A7960 (MiIsPfnCommitNotCharged.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiIdentifyPfn @ 0x1402C9940 (MiIdentifyPfn.c)
 *     KiSetVpThreadSpinLockCount @ 0x1402CBCA0 (KiSetVpThreadSpinLockCount.c)
 *     MiUserPdeOrAbove @ 0x140303E44 (MiUserPdeOrAbove.c)
 *     MiChargePartitionResidentAvailable @ 0x140308418 (MiChargePartitionResidentAvailable.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiZeroPhysicalPage @ 0x1403578E0 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B6EAC (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F3F5C (MiBadRefCount.c)
 *     MiBadShareCount @ 0x1403F3FB4 (MiBadShareCount.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiWaitForFreePage @ 0x14055C13C (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5AE8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5CCC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapCacheExceptionFilter @ 0x1408C843C (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MiMakePageAvoidRead(
        unsigned __int64 a1,
        void *a2,
        unsigned int a3,
        size_t a4,
        char a5,
        unsigned __int64 a6,
        _DWORD *a7)
{
  size_t v8; // r13
  __int64 v9; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  int NodeShiftedColor; // r9d
  int v16; // eax
  signed __int32 v17; // edx
  __int64 v18; // r8
  __int64 Page; // rax
  _DWORD *v20; // r9
  __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  struct _LIST_ENTRY *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // esi
  unsigned int v28; // ebx
  BOOL v29; // r15d
  signed __int64 i; // rdx
  signed __int64 v31; // rax
  __int64 v32; // rdx
  ULONG_PTR v33; // r14
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rbx
  _DWORD *SchedulerAssist; // r8
  __int64 v37; // r9
  int v38; // r15d
  struct _LIST_ENTRY *v39; // rdx
  char v40; // dl
  int v41; // eax
  ULONG_PTR v42; // rbx
  unsigned __int64 v43; // rdi
  int v44; // eax
  unsigned __int64 v45; // rdi
  int v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  char *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 *v57; // r13
  unsigned __int64 v58; // rax
  struct _LIST_ENTRY *v59; // r8
  __int64 v60; // rcx
  __int64 v61; // rdx
  unsigned __int64 Process; // rcx
  __int64 v63; // r8
  ULONG_PTR *v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  char v68; // r14
  int IsPfnCommitNotCharged; // eax
  char v70; // r10
  __int64 v71; // rcx
  ULONG_PTR *v72; // r15
  signed __int32 v73; // eax
  signed __int32 v74; // ett
  int v75; // ebx
  volatile signed __int64 *v76; // rbx
  char v77; // al
  unsigned __int8 v78; // al
  int v79; // ecx
  bool v80; // zf
  unsigned __int64 v81; // rbx
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // r11
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rdx
  unsigned __int64 v87; // r10
  struct _LIST_ENTRY *v88; // r8
  __int64 v89; // rax
  __int64 v90; // r8
  __int64 v91; // rax
  __int64 v92; // r9
  unsigned int v93; // esi
  unsigned __int64 v94; // r8
  struct _LIST_ENTRY *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // r8
  __int64 v99; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v101; // eax
  unsigned __int8 v102; // cl
  char v103; // cl
  char v104; // cl
  volatile signed __int32 *v105; // rbx
  unsigned __int8 v106; // r14
  struct _KPRCB *v107; // rsi
  _DWORD *v108; // rcx
  int v109; // eax
  __int64 v110; // r8
  _DWORD *v111; // r9
  __int64 v112; // rdx
  unsigned __int32 v113; // eax
  struct _KPRCB *v114; // rcx
  _DWORD *v115; // rdx
  int v116; // eax
  unsigned __int8 v117; // al
  struct _KPRCB *v118; // r10
  int v119; // eax
  __int64 v120; // rcx
  ULONG_PTR v121; // rbx
  unsigned __int64 v122; // rbx
  int v123; // edx
  _QWORD *v124; // r8
  unsigned __int64 v125; // r11
  unsigned __int64 v126; // rdx
  int v127; // r8d
  _QWORD *v128; // r9
  __int64 v129; // r8
  __int64 v130; // rdx
  __int16 v131; // bx
  __int16 v132; // bx
  __int64 v133; // r8
  __int64 v134; // rax
  unsigned __int64 v135; // r9
  char v136; // al
  int v137; // edx
  unsigned __int64 v138; // r8
  unsigned __int64 v139; // r9
  __int64 v140; // r10
  unsigned __int64 v141; // r11
  __int64 v142; // r8
  __int64 v143; // rsi
  unsigned __int64 v144; // r8
  struct _KPRCB *v145; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v147; // eax
  unsigned __int8 v148; // bl
  unsigned __int8 v149; // al
  struct _KPRCB *v150; // r9
  _DWORD *v151; // r8
  int v152; // eax
  unsigned __int8 v153; // al
  struct _KPRCB *v154; // r9
  _DWORD *v155; // r8
  int v156; // eax
  unsigned __int8 v157; // [rsp+30h] [rbp-148h]
  int v158; // [rsp+34h] [rbp-144h]
  int v159; // [rsp+38h] [rbp-140h]
  __int64 v160; // [rsp+40h] [rbp-138h]
  unsigned __int64 v161; // [rsp+48h] [rbp-130h] BYREF
  int v162; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v163; // [rsp+54h] [rbp-124h]
  int v164; // [rsp+58h] [rbp-120h] BYREF
  unsigned int v165; // [rsp+5Ch] [rbp-11Ch]
  unsigned __int64 *v166; // [rsp+60h] [rbp-118h]
  unsigned __int64 v167; // [rsp+68h] [rbp-110h]
  ULONG_PTR v168; // [rsp+70h] [rbp-108h]
  unsigned int v169; // [rsp+78h] [rbp-100h]
  int v170; // [rsp+7Ch] [rbp-FCh] BYREF
  int v171; // [rsp+80h] [rbp-F8h] BYREF
  int v172; // [rsp+84h] [rbp-F4h] BYREF
  int v173; // [rsp+88h] [rbp-F0h] BYREF
  unsigned __int64 v174; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v175; // [rsp+98h] [rbp-E0h]
  __int64 v176; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v177; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v178; // [rsp+B0h] [rbp-C8h]
  _DWORD *v179; // [rsp+B8h] [rbp-C0h]
  __int64 v180; // [rsp+C0h] [rbp-B8h]
  volatile signed __int64 *v181; // [rsp+C8h] [rbp-B0h]
  void *Src; // [rsp+D0h] [rbp-A8h]
  __int64 v183; // [rsp+D8h] [rbp-A0h]
  ULONG_PTR v184; // [rsp+E0h] [rbp-98h]
  __int64 v185; // [rsp+E8h] [rbp-90h]
  __int64 v186; // [rsp+F0h] [rbp-88h]
  __int64 v187; // [rsp+F8h] [rbp-80h]
  __int128 v188; // [rsp+100h] [rbp-78h] BYREF
  __int128 v189; // [rsp+110h] [rbp-68h]
  _QWORD v190[2]; // [rsp+128h] [rbp-50h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  v8 = a3;
  Src = a2;
  v167 = a1;
  v178 = a6;
  v180 = a1;
  v181 = (volatile signed __int64 *)a6;
  v179 = a7;
  v157 = 0;
  v188 = 0LL;
  v189 = 0LL;
  *a7 = 0;
  v9 = *(_QWORD *)a6;
  if ( a6 >= 0xFFFFF6FB7DBED000uLL
    && a6 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 = *((_QWORD *)&Flink->Flink + ((a6 >> 3) & 0x1FF));
      v12 = v9 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = *(_QWORD *)a6;
      v9 = v12;
      if ( (v11 & 0x42) != 0 )
        v9 = v12 | 0x42;
    }
  }
  v177 = v9;
  if ( qword_140C4DF40 )
  {
    if ( (v9 & 0x10) != 0 )
      v9 &= ~0x10uLL;
    else
      v9 &= ~qword_140C4DF40;
  }
  v176 = v9 >> 16;
  v186 = v9 >> 16;
  v175 = *(_QWORD *)(v9 >> 16);
  v185 = v175;
  v13 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v175 + 60) & 0x3FF));
  if ( ((*(_DWORD *)(v175 + 56) >> 20) & 0x3F) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (((*(_DWORD *)(v175 + 56) >> 20) & 0x3F) - 1) << byte_140C4DE8C;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v16 = (1 << byte_140C4DE8D) - 1;
  v17 = v16 & _InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->PageColor, 1u);
  v18 = 0LL;
  if ( a4 != 4096 )
    v18 = 2LL;
  Page = MiGetPage(v13, NodeShiftedColor | (unsigned int)v17, v18);
  v168 = Page;
  v187 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v13);
    return 1LL;
  }
  v22 = 48 * Page - 0x58000000000LL;
  v160 = v22;
  v183 = v22;
  v23 = *(_QWORD *)a6;
  if ( v178 >= 0xFFFFF6FB7DBED000uLL
    && v178 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v23 & 1) != 0
    && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
  {
    v24 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v24 )
    {
      v25 = *((_QWORD *)&v24->Flink + ((v178 >> 3) & 0x1FF));
      v26 = v23 | 0x20;
      if ( (v25 & 0x20) == 0 )
        v26 = *(_QWORD *)a6;
      v23 = v26;
      if ( (v25 & 0x42) != 0 )
        v23 = v26 | 0x42;
    }
  }
  v27 = (v23 >> 5) & 0x1F;
  v169 = v27;
  v165 = v27;
  if ( v27 )
  {
    if ( v27 == 31 )
    {
      v28 = 1;
    }
    else if ( v27 >> 3 == 3 && (v27 & 7) != 0 )
    {
      v28 = 2;
    }
    else
    {
      v28 = v27 >> 3 != 1;
    }
  }
  else
  {
    v28 = 3;
  }
  v29 = 0;
  v158 = 0;
  if ( a4 != 4096 )
    v29 = MiPfnZeroingNeeded(v22, v28);
  if ( *(unsigned __int8 *)(v22 + 34) >> 6 != v28 )
    MiChangePageAttribute(v22, v28, 0LL, v20);
  for ( i = *(_QWORD *)(v22 + 24); ; i = v31 )
  {
    v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 24), i & 0xF0FFFFFFFFFFFFFFuLL, i);
    if ( i == v31 )
      break;
  }
  v33 = MiReservePtes((__int64)&qword_140C4EF40, 1u, 0xF0FFFFFFFFFFFFFFuLL, (unsigned __int64)v20);
  v184 = v33;
  if ( v33 )
  {
    v40 = 4;
    if ( v168 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v168 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v41 = *(unsigned __int8 *)(48 * v168 - 0x57FFFFFFFDELL) >> 6;
      if ( !v41 || v41 == 3 )
      {
        v40 = 12;
      }
      else if ( v41 == 2 )
      {
        v40 = 28;
      }
    }
    v42 = ((v168 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v40 & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v33 >= 0xFFFFF68000000000uLL && v33 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v43 = (__int64)(v33 << 25) >> 16;
      if ( v33 >= 0xFFFFF6FB40000000uLL && v33 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        v42 = v33 == 0xFFFFF6FB7DBEDF68uLL
            ? ((v168 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v40 & 0x1F] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
            : ((v168 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v40 & 0x1F] & 0x7FFF000000000E7FLL | 0x21;
        if ( (unsigned int)MiUserPdeOrAbove(v33, 0xFFFFF68000000000uLL, 0x140000000uLL, 0xFFFFF6FFFFFFFFFFuLL) )
          v42 |= 4uLL;
      }
      if ( v33 <= 0xFFFFF6BFFFFFFF78uLL )
        v42 |= 4uLL;
      if ( v43 >= 0xFFFF800000000000uLL )
      {
        if ( byte_140C4F9C8[((v43 >> 39) & 0x1FF) - 256] == 1
          || v43 >= 0xFFFFF68000000000uLL && v43 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
LABEL_94:
          v45 = v42 & 0xFAFFFFFFFFFFFEFFuLL | ((unsigned __int64)(word_140C4E008 & 1) << 8) | 0xA00000000000042LL;
          v46 = 0;
          if ( (unsigned int)MiPteInShadowRange(v33, 0xFFFFF68000000000uLL) )
          {
            if ( (unsigned int)MiPteHasShadow(v48, v47, v49, v50) )
            {
              v46 = 1;
              if ( !HIBYTE(word_140C4E008) )
                goto LABEL_99;
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
LABEL_99:
              v45 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v33 = v45;
          if ( v46 )
            MiWritePteShadow(v33, v45);
          v51 = (__int64)(v33 << 25) >> 16;
          v52 = (char *)(v51 + v8);
          if ( v29 )
          {
            if ( (_DWORD)v8 )
              memset((void *)v51, 0, v8);
            if ( 4096 - v8 != a4 )
              memset(&v52[a4], 0, 4096 - v8 - a4);
          }
          memmove(v52, Src, a4);
          MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v33, 1u);
          goto LABEL_56;
        }
        if ( v43 < qword_140C4FB38 || (v44 = HIBYTE(word_140C4E008), v43 > qword_140C4E368) )
          v44 = (unsigned __int8)word_140C4E008;
      }
      else
      {
        v44 = HIBYTE(word_140C4E008);
      }
      if ( !v44 )
        goto LABEL_94;
    }
    v42 |= 0x100uLL;
    goto LABEL_94;
  }
  if ( (a5 & 1) == 0 )
  {
    MiReleaseFreshPage(v22);
    return 4LL;
  }
  if ( v29 )
    MiZeroPhysicalPage(v168);
  v158 = 1;
LABEL_56:
  v159 = BYTE4(PerfGlobalGroupMask) & 1;
  v166 = (unsigned __int64 *)(((v167 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v161 = *v166;
  v34 = v161 & 1;
  do
  {
    if ( !v34 )
      goto LABEL_375;
    v35 = v161;
    if ( (v161 & 0x200) != 0 )
      goto LABEL_375;
    v38 = MiPteInShadowRange(&v161, v32);
    if ( v38
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
    {
      v39 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v39 )
      {
        v53 = *((_QWORD *)&v39->Flink + (((unsigned __int64)&v161 >> 3) & 0x1FF));
        if ( (v53 & 0x20) != 0 )
          v35 |= 0x20uLL;
        if ( (v53 & 0x42) != 0 )
          v35 |= 0x42uLL;
      }
      else
      {
        v35 = v161;
      }
    }
    v54 = (v35 >> 12) & 0xFFFFFFFFFLL;
    v32 = 48 * v54;
    v180 = 48 * v54;
  }
  while ( (*(_QWORD *)(48 * v54 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v55 = v32 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v32 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v32;
  }
  v170 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v55 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v170, v32, (__int64)SchedulerAssist, v37);
    while ( *(__int64 *)(v55 + 24) < 0 );
  }
  v57 = v166;
  v58 = *v166;
  v161 = v58;
  if ( (v58 & 1) == 0 || (v58 & 0x200) != 0 )
    goto LABEL_366;
  if ( v38
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v58 & 0x20) == 0 || (v58 & 0x42) == 0) )
  {
    v59 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v59 )
    {
      v60 = *((_QWORD *)&v59->Flink + (((unsigned __int64)&v161 >> 3) & 0x1FF));
      if ( (v60 & 0x20) != 0 )
        v58 |= 0x20uLL;
      if ( (v60 & 0x42) != 0 )
        v58 |= 0x42uLL;
    }
    else
    {
      v58 = v161;
    }
  }
  if ( v54 != ((v58 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_366:
    _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v153 = KeGetCurrentIrql();
          if ( v153 <= 0xFu && CurrentIrql <= 0xFu && v153 >= 2u )
          {
            v154 = KeGetCurrentPrcb();
            v155 = v154->SchedulerAssist;
            v156 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v80 = (v156 & v155[5]) == 0;
            v155[5] &= v156;
            if ( v80 )
              KiRemoveSystemWorkPriorityKick(v154);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    goto LABEL_375;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v55) )
    goto LABEL_152;
  if ( (unsigned int)MI_PFN_IS_PROTO(v55) && (*(_DWORD *)(v55 + 16) & 0x400LL) != 0 )
  {
    v68 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v66, v65, v67);
    v68 = v70;
    if ( IsPfnCommitNotCharged )
      v68 = 1;
  }
  v71 = (*(_QWORD *)(v55 + 40) >> 39) & 0x3FFLL;
  v72 = *(ULONG_PTR **)(qword_140C4E648 + 8 * v71);
  if ( !v68 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_140C4E648 + 8 * v71), 1uLL, 4u) )
  {
    v64 = &MiSystemPartition;
    if ( v72 == &MiSystemPartition )
    {
      v61 = (__int64)KeGetCurrentPrcb();
      v73 = *(_DWORD *)(v61 + 33564);
      if ( v73 )
      {
        v63 = 0xFFFFFFFFLL;
        do
        {
          if ( v73 == -1 )
            break;
          Process = (unsigned int)(v73 - 1);
          v74 = v73;
          v73 = _InterlockedCompareExchange((volatile signed __int32 *)(v61 + 33564), Process, v73);
          if ( v74 == v73 )
            goto LABEL_152;
        }
        while ( v73 );
      }
    }
    v75 = MiChargePartitionResidentAvailable(v72, 1LL, 0xFFFFFFFFLL, &MiSystemPartition);
    if ( !v75 && v68 )
      MiReturnCommit((__int64)v72, 1LL);
    if ( v75 )
LABEL_152:
      ++*(_WORD *)(v55 + 32);
  }
  if ( CurrentIrql == 17 )
  {
    LOBYTE(v61) = 17;
    MiLockOwnedProtoPage(v55, v61, v63, v64);
  }
  else
  {
    v157 = CurrentIrql;
    v162 = 0;
    v76 = (volatile signed __int64 *)(*(_QWORD *)(v55 + 8) | 0x8000000000000000uLL);
    v181 = v76;
    v77 = *(_BYTE *)(v55 + 34);
    if ( (v77 & 0x20) != 0 )
    {
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v78 = KeGetCurrentIrql();
            if ( v78 <= 0xFu && CurrentIrql <= 0xFu && v78 >= 2u )
            {
              v64 = (ULONG_PTR *)KeGetCurrentPrcb();
              v63 = v64[4247];
              v79 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v80 = (v79 & *(_DWORD *)(v63 + 20)) == 0;
              v61 = (unsigned int)v79 & *(_DWORD *)(v63 + 20);
              *(_DWORD *)(v63 + 20) = v61;
              if ( v80 )
                KiRemoveSystemWorkPriorityKick(v64);
            }
          }
        }
        __writecr8(CurrentIrql);
        v162 = 0;
        while ( (*(_BYTE *)(v55 + 34) & 0x20) != 0 )
          KeYieldProcessorEx(&v162, v61, v63, (__int64)v64);
        MiLockPageInline(v55, v61, v63, v64);
        v77 = *(_BYTE *)(v55 + 34);
      }
      while ( (v77 & 0x20) != 0 );
      v76 = v181;
      v57 = v166;
    }
    *(_BYTE *)(v55 + 34) = v77 | 0x20;
    if ( (*(_QWORD *)(v55 + 24) & 0x4000000000000000LL) == 0 && (*(_BYTE *)v76 & 0x20) == 0 )
      MiWriteValidPteVolatile(v76, 1, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v81 = v167;
  v82 = *(_QWORD *)v167;
  v83 = 0xFFFFF6FB7DBED000uLL;
  if ( v167 >= 0xFFFFF6FB7DBED000uLL
    && v167 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v82, v63, v64)
    && (v82 & 1) != 0
    && ((v82 & 0x20) == 0 || (v82 & 0x42) == 0) )
  {
    Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    v63 = *(_QWORD *)(Process + 1928);
    if ( v63 )
    {
      v84 = *(_QWORD *)(v63 + 8 * ((v81 >> 3) & 0x1FF));
      Process = (unsigned __int8)v84;
      v63 = v82 | 0x20;
      LOBYTE(Process) = v84 & 0x20;
      if ( (v84 & 0x20) == 0 )
        v63 = v82;
      v82 = v63;
      if ( (v84 & 0x42) != 0 )
        v82 = v63 | 0x42;
    }
  }
  v177 = v82;
  if ( (v82 & 1) != 0 || (v82 & 0x800) != 0 && (v82 & 0x400) == 0 || (v85 = (v82 >> 5) & 0x1F, v27 != (_DWORD)v85) )
  {
    MiUnlockProtoPoolPage(v55, v157);
LABEL_375:
    MiLockAndInsertPageInFreeList(v160);
    return 1LL;
  }
  v171 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v160 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v171, v85, v63, (__int64)v64);
      while ( *(__int64 *)(v160 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v160 + 24), 0x3FuLL) );
    v83 = 0xFFFFF6FB7DBED000uLL;
  }
  v86 = *(_QWORD *)v81;
  v87 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v81 >= v83
    && v81 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v86, v63, v64)
    && (v86 & 1) != 0
    && ((v86 & 0x20) == 0 || (v86 & 0x42) == 0) )
  {
    v88 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v88 )
    {
      v89 = *((_QWORD *)&v88->Flink + ((v81 >> 3) & 0x1FF));
      v90 = v86 | 0x20;
      if ( (v89 & 0x20) == 0 )
        v90 = v86;
      v86 = v90;
      if ( (v89 & 0x42) != 0 )
        v86 = v90 | 0x42;
    }
  }
  v91 = -9LL;
  if ( (v86 & 0x400) != 0 )
    v91 = -2049LL;
  *(_QWORD *)(v160 + 16) = v86 & v91;
  *(_QWORD *)(v160 + 40) |= 0x8000000000000000uLL;
  v92 = *(_QWORD *)(v160 + 40);
  if ( v27 )
  {
    if ( v27 == 31 )
    {
      v93 = 1;
    }
    else if ( v27 >> 3 == 3 && (v27 & 7) != 0 )
    {
      v93 = 2;
    }
    else
    {
      v93 = v27 >> 3 != 1;
    }
  }
  else
  {
    v93 = 3;
  }
  *(_WORD *)(v160 + 32) = 1;
  v94 = *v57;
  if ( (unsigned __int64)v57 >= v83
    && (unsigned __int64)v57 <= v87
    && (unsigned int)MiPteHasShadow(1LL, v86, v94, v92)
    && (v94 & 1) != 0
    && ((v94 & 0x20) == 0 || (v94 & 0x42) == 0) )
  {
    v95 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v95 )
    {
      v96 = *((_QWORD *)&v95->Flink + (((unsigned __int64)v57 >> 3) & 0x1FF));
      v86 = v94 | 0x20;
      if ( (v96 & 0x20) == 0 )
        v86 = v94;
      v94 = v86;
      if ( (v96 & 0x42) != 0 )
        v94 = v86 | 0x42;
    }
  }
  v174 = v94;
  if ( (unsigned __int64)&v174 >= v83
    && (unsigned __int64)&v174 <= v87
    && (unsigned int)MiPteHasShadow(&v174, v86, v94, v92)
    && (v94 & 1) != 0
    && ((v94 & 0x20) == 0 || (v94 & 0x42) == 0) )
  {
    v86 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v86 )
    {
      v97 = *(_QWORD *)(v86 + 8 * (((unsigned __int64)&v174 >> 3) & 0x1FF));
      v86 = v94 | 0x20;
      if ( (v97 & 0x20) == 0 )
        v86 = v94;
      v94 = v86;
      if ( (v97 & 0x42) != 0 )
        v94 = v86 | 0x42;
    }
  }
  v98 = (v94 >> 12) & 0xFFFFFFFFFLL;
  *(_QWORD *)(v160 + 40) = v92 ^ (v92 ^ v98) & 0xFFFFFFFFFLL;
  v99 = 48 * v98;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
  {
    v163 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  }
  else
  {
    v86 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v101 = 2;
      if ( (unsigned int)v86 < 2 )
        v101 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      v86 = v101;
    }
    v163 = v86;
  }
  v172 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v99 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v172, v86, v98, v92);
    while ( *(__int64 *)(v99 - 0x57FFFFFFFE8LL) < 0 );
  }
  *(_QWORD *)(v99 - 0x57FFFFFFFE8LL) ^= (*(_QWORD *)(v99 - 0x57FFFFFFFE8LL) ^ ((*(_QWORD *)(v99 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL)
                                                                             + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v99 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  v102 = *(_BYTE *)(v160 + 34);
  if ( v102 >> 6 != v93 )
  {
    MiChangePageAttribute(v160, v93, 1LL, (_DWORD *)v92);
    v102 = *(_BYTE *)(v160 + 34);
  }
  *(_QWORD *)(v160 + 24) = *(_QWORD *)(v160 + 24) & 0xC000000000000000uLL | 1;
  *(_BYTE *)(v160 + 35) = v163 | *(_BYTE *)(v160 + 35) & 0xF8;
  *(_QWORD *)(v160 + 8) = v167;
  v103 = v102 & 0xF8 | 6;
  *(_BYTE *)(v160 + 34) = v103;
  *(_BYTE *)(v160 + 34) = v103 | 0x10;
  if ( (a5 & 2) != 0 )
  {
    v104 = *(_BYTE *)(v160 + 35);
    if ( (v104 & 8) != 0 || (v104 & 7u) > 2 )
      *(_BYTE *)(v160 + 35) = v104 & 0xF8 | 2;
  }
  if ( (*(_DWORD *)(v175 + 56) & 0x20) != 0 || !*(_QWORD *)(v175 + 64) )
    v176 = 0LL;
  v105 = (volatile signed __int32 *)(v175 + 72);
  v106 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v106 <= 0xFu )
  {
    v92 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
    v98 = (-1 << (v106 + 1)) & 4u | *(_DWORD *)(v92 + 20);
    *(_DWORD *)(v92 + 20) = v98;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v105, v106);
  }
  else
  {
    v164 = 0;
    v107 = KeGetCurrentPrcb();
    v108 = v107->SchedulerAssist;
    if ( v108 )
    {
      if ( v107->NestingLevel <= 1u )
      {
        v109 = v108[6];
        v108[6] = v109 + 1;
        if ( v109 == -1 )
          KiRemoveSystemWorkPriorityKick(v107);
      }
    }
    if ( _interlockedbittestandset(v105, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount(v107, 0LL);
      v164 = ExpWaitForSpinLockExclusiveAndAcquire((unsigned __int64)v105, v106, v110, v111);
    }
    v112 = *(unsigned int *)v105;
    if ( (*v105 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v112 & 0x40000000) == 0 )
        {
          v113 = _InterlockedCompareExchange(v105, v112 | 0x40000000, v112);
          v80 = (_DWORD)v112 == v113;
          v112 = v113;
          if ( !v80 )
            continue;
        }
        KeYieldProcessorEx(&v164, v112, v98, v92);
        v112 = *(unsigned int *)v105;
      }
      while ( (v112 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  ++*(_QWORD *)(v175 + 32);
  if ( v176 )
    ++*(_DWORD *)(v176 + 104);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v105, retaddr);
  else
    *v105 = 0;
  v114 = KeGetCurrentPrcb();
  v115 = v114->SchedulerAssist;
  if ( v115 )
  {
    if ( v114->NestingLevel <= 1u )
    {
      v116 = v115[6] - 1;
      v115[6] = v116;
      if ( !v116 )
        KiRemoveSystemWorkPriorityKick(v114);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v117 = KeGetCurrentIrql();
      if ( v117 <= 0xFu && v106 <= 0xFu && v117 >= 2u )
      {
        v118 = KeGetCurrentPrcb();
        v92 = (__int64)v118->SchedulerAssist;
        v119 = ~(unsigned __int16)(-1LL << (v106 + 1));
        v80 = (v119 & *(_DWORD *)(v92 + 20)) == 0;
        *(_DWORD *)(v92 + 20) &= v119;
        if ( v80 )
          KiRemoveSystemWorkPriorityKick(v118);
      }
    }
  }
  __writecr8(v106);
  v120 = 0xFFFFFFFFFLL;
  v121 = ((v168 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v165 & 0x1F] & 0xFFFF000000000E7FuLL | 0x121;
  if ( (v165 & 5) == 4 )
    v121 = ((v168 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v165 & 0x1F] & 0xFFFF000000000E7FuLL | 0x163;
  v122 = v121 & 0xF0FFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
  v177 = v122;
  v123 = 0;
  v124 = (_QWORD *)v167;
  v125 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v167 >= 0xFFFFF6FB7DBED000uLL && v167 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(0xFFFFFFFFFLL, 0LL, v167, v92) )
    {
      v123 = 1;
      if ( !HIBYTE(word_140C4E008) )
        v122 |= 0x8000000000000000uLL;
    }
    else
    {
      v120 = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)(v120 + 2172) & 0x1000) != 0 )
        v122 |= 0x8000000000000000uLL;
    }
  }
  *v124 = v122;
  if ( v123 )
    MiWritePteShadow(v124, v122);
  v126 = v177;
  v127 = 0;
  v128 = (_QWORD *)v178;
  if ( v178 >= 0xFFFFF6FB7DBED000uLL && v178 <= v125 )
  {
    if ( (unsigned int)MiPteHasShadow(v120, v177, 0LL, v178) )
    {
      v127 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_304;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_304;
    }
    if ( (v126 & 1) != 0 )
      v126 |= 0x8000000000000000uLL;
  }
LABEL_304:
  *v128 = v126;
  if ( v127 )
    MiWritePteShadow(v128, v126);
  if ( v159 )
  {
    v188 = 0LL;
    v189 = 0LL;
    MiIdentifyPfn(v160, &v188);
  }
  if ( (*(_BYTE *)(v160 + 34) & 7) != 6 )
    MiBadShareCount(v160);
  v129 = 0x3FFFFFFFFFFFFFFFLL;
  v130 = (*(_QWORD *)(v160 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v160 + 24) ^= (v130 ^ *(_QWORD *)(v160 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v130 )
    MiPfnShareCountIsZero(v160);
  _InterlockedAnd64((volatile signed __int64 *)(v160 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v173 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v55 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v173, v130, v129, (__int64)v128);
    while ( *(__int64 *)(v55 + 24) < 0 );
  }
  *(_BYTE *)(v55 + 34) &= ~0x20u;
  v131 = *(_WORD *)(v55 + 32);
  if ( !v131 )
    MiBadRefCount(v55);
  v132 = v131 - 1;
  *(_WORD *)(v55 + 32) = v132;
  if ( v132 || !MiIsPfnFileOnly(v55) )
  {
    v133 = *(_QWORD *)(v55 + 40);
    if ( (v133 & 0x1000000000LL) != 0 || (v133 & 0x2000000000000LL) != 0 )
      goto LABEL_355;
    v134 = *(_QWORD *)(v55 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v132 )
    {
      if ( v132 == 1 )
      {
        if ( v134 )
          goto LABEL_326;
      }
      else if ( v132 != 2 || !v134 )
      {
        goto LABEL_355;
      }
      if ( (*(_BYTE *)(v55 + 34) & 8) == 0 )
        goto LABEL_355;
    }
LABEL_326:
    v135 = *(_QWORD *)(v55 + 8) | 0x8000000000000000uLL;
    if ( v135 > 0xFFFFF6BFFFFFFF78uLL || v135 < 0xFFFFF68000000000uLL )
    {
      v136 = *(_BYTE *)(v55 + 35);
      if ( (v136 & 0x20) != 0 )
      {
        *(_BYTE *)(v55 + 35) = v136 & 0xDF;
        goto LABEL_353;
      }
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v55) && (*(_DWORD *)(v55 + 16) & 0x400LL) != 0 )
    {
      v137 = 1;
    }
    else if ( v139 <= v141 && v139 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v55 + 35) & 0x20) != 0 )
    {
      v137 = 1;
    }
    else if ( !v132 && (v140 & 0x4000000000000000LL) != 0 )
    {
      v137 = 1;
    }
    v142 = (v138 >> 39) & 0x3FF;
    v143 = *(_QWORD *)(qword_140C4E648 + 8 * v142);
    if ( v137 == 1 )
      MiReturnCommit(*(_QWORD *)(qword_140C4E648 + 8 * v142), 1LL);
    v144 = 1LL;
    if ( (ULONG_PTR *)v143 == &MiSystemPartition )
    {
      v145 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v145->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v147 = _InterlockedCompareExchange(
                     (volatile signed __int32 *)&v145->CachedResidentAvailable,
                     CachedResidentAvailable + 1,
                     CachedResidentAvailable);
            v80 = (_DWORD)CachedResidentAvailable == v147;
            LODWORD(CachedResidentAvailable) = v147;
            if ( v80 )
              break;
            if ( v147 == -1 || (unsigned __int64)(v147 + 1LL) > 0x100 )
              goto LABEL_348;
          }
LABEL_353:
          if ( v132 )
            goto LABEL_355;
          goto LABEL_354;
        }
LABEL_348:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v145->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v144 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( !v144 )
          goto LABEL_353;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v143 + 7168), v144);
    goto LABEL_353;
  }
LABEL_354:
  MiPfnReferenceCountIsZero(v55, v180 / 48);
LABEL_355:
  _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v148 = v157;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v149 = KeGetCurrentIrql();
      if ( v149 <= 0xFu && v157 <= 0xFu && v149 >= 2u )
      {
        v150 = KeGetCurrentPrcb();
        v151 = v150->SchedulerAssist;
        v148 = v157;
        v152 = ~(unsigned __int16)(-1LL << (v157 + 1));
        v80 = (v152 & v151[5]) == 0;
        v151[5] &= v152;
        if ( v80 )
          KiRemoveSystemWorkPriorityKick(v150);
      }
    }
  }
  __writecr8(v148);
  *v179 = 0;
  if ( v159 )
  {
    *((_QWORD *)&v189 + 1) |= 4uLL;
    v190[0] = &v188;
    v190[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v190, 1, 536870913, 642, 289413890);
  }
  return v158 != 0 ? 4 : 0;
}
