/*
 * XREFs of MmProtectPool @ 0x140362438
 * Callers:
 *     ExProtectPoolEx @ 0x1403622B8 (ExProtectPoolEx.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14021A9E0 (MiMakeProtectionMask.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140289700 (MI_WSLE_LOG_ACCESS.c)
 *     MiWriteValidPteNewProtection @ 0x140290080 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x140290190 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSessionVm @ 0x14029281C (MiGetSessionVm.c)
 *     MiFreeWsleList @ 0x1402A79B0 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x1402AF040 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x1402B7898 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140358424 (MI_TIGHTER_PERMISSIONS.c)
 *     MiFindLargeMapping @ 0x140363370 (MiFindLargeMapping.c)
 *     MiLockTransitionLeafPage @ 0x140363DD4 (MiLockTransitionLeafPage.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiLockNonPagedPoolPte @ 0x1405449B0 (MiLockNonPagedPoolPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BE38 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  unsigned int v7; // r12d
  unsigned __int64 v8; // r14
  int v9; // ebx
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 AnyMultiplexedVm; // r13
  int v15; // r14d
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  _KPROCESS *v18; // rdx
  unsigned __int8 v19; // bl
  __int64 v20; // rax
  __int64 v21; // r9
  signed __int64 v22; // rsi
  char v23; // cl
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  unsigned __int64 v29; // rax
  __int64 TransitionPte; // rax
  int v31; // edx
  __int64 v32; // r15
  signed __int64 v33; // rbx
  signed __int64 v34; // rcx
  signed __int64 v35; // rax
  unsigned __int64 v36; // rax
  int v37; // esi
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int64 v41; // rax
  _KPROCESS *v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  unsigned int v45; // ebx
  __int64 v46; // rdx
  __int64 v47; // r8
  _DWORD *v48; // r9
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  _DWORD *v52; // r9
  __int64 v53; // r14
  __int64 v54; // rsi
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rsi
  int v57; // r15d
  unsigned __int64 v58; // rbx
  __int64 v59; // r8
  bool v60; // zf
  int v61; // r14d
  unsigned __int64 v62; // rsi
  unsigned __int64 v63; // rbx
  __int64 v64; // r8
  bool v65; // zf
  bool v66; // zf
  unsigned int v67; // r12d
  signed __int64 v68; // r15
  int v69; // esi
  unsigned __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  unsigned __int8 v77; // al
  unsigned __int8 v78; // bl
  struct _KPRCB *v79; // r10
  int v80; // eax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v82; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v85; // eax
  int v86; // esi
  bool v87; // zf
  __int64 v88; // r14
  _KPROCESS *v89; // rdx
  __int64 v90; // r9
  int v91; // ebx
  __int64 v92; // rdx
  __int64 v93; // r8
  _DWORD *v94; // r9
  __int64 v95; // r8
  __int64 v96; // r8
  __int64 v97; // r9
  unsigned __int64 v98; // rbx
  __int64 v99; // rsi
  __int64 v100; // rcx
  char v101; // r14
  unsigned __int8 v103; // [rsp+20h] [rbp-E0h]
  char v104; // [rsp+21h] [rbp-DFh]
  unsigned __int64 v105; // [rsp+28h] [rbp-D8h] BYREF
  int v106; // [rsp+30h] [rbp-D0h]
  unsigned int v107; // [rsp+34h] [rbp-CCh]
  int v108; // [rsp+38h] [rbp-C8h] BYREF
  int v109; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v110; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v111; // [rsp+48h] [rbp-B8h]
  __int64 v112; // [rsp+50h] [rbp-B0h]
  _QWORD v113[24]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v114[24]; // [rsp+120h] [rbp+20h] BYREF

  v104 = 0;
  memset(v113, 0, 0xB8uLL);
  memset(v114, 0, 0xB8uLL);
  if ( (a3 & 0x10) != 0 && (MiFlags & 0x10000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  v107 = ProtectionMask;
  v7 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v106 = 0;
  v8 = a1 + a2 - 1;
  v110 = v8;
  v9 = 0;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiGetSystemRegionType(a1);
  AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(2);
  if ( (_DWORD)v11 == 6 )
    goto LABEL_13;
  if ( (_DWORD)v11 != 5 )
  {
    if ( (_DWORD)v11 != 1 )
      return 0LL;
    v9 = v12;
    AnyMultiplexedVm = MiGetSessionVm();
LABEL_13:
    v15 = v106;
    goto LABEL_14;
  }
  if ( (unsigned int)MiFindLargeMapping(a1, v8) )
    return 0LL;
  v15 = 1;
  v106 = 1;
  AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(5);
LABEL_14:
  v16 = 0LL;
  v111 = 0LL;
  LODWORD(v113[0]) = v9;
  LODWORD(v113[1]) = 20;
  WORD2(v113[0]) = 0;
  v113[2] = 0LL;
  v113[3] = 0LL;
  v17 = *(unsigned __int16 *)(AnyMultiplexedVm + 174);
  v110 = ((v110 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v112 = *(_QWORD *)(qword_140C4E648 + 8 * v17);
  v103 = MiLockWorkingSetShared(AnyMultiplexedVm, v11, v12, v13);
  v19 = v103;
  while ( v10 <= v110 )
  {
    if ( v16 )
    {
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_19;
      MiFlushTbList((__int64)v113, v18);
      MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
    }
    v16 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v111 = v16;
    MiLockPageTableInternal(AnyMultiplexedVm, v16, 0LL);
LABEL_19:
    v20 = MI_READ_PTE_LOCK_FREE(v10);
    v22 = v20;
    v23 = *(_BYTE *)(AnyMultiplexedVm + 184) & 7;
    v105 = v20;
    if ( v7 != 24 )
    {
      if ( v23 == 7 )
      {
        v67 = v7 | 0x80000000;
        while ( 1 )
        {
          v68 = v22;
          v69 = v22 & 1;
          if ( v69 )
          {
            v70 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v105);
          }
          else
          {
            v70 = v68;
            if ( qword_140C4DF40 && (v68 & 0x10) == 0 )
              v70 = ~qword_140C4DF40 & v68;
          }
          v71 = (v70 >> 12) & 0xFFFFFFFFFLL;
          v72 = 48 * v71 - 0x58000000000LL;
          ValidPte = MiMakeValidPte(v10, v71, v67, v21);
          v63 = ValidPte;
          if ( !v69 )
            break;
          if ( v106 != 1 )
          {
            v104 = 17;
            MiWriteValidPteNewProtection(v10, ValidPte);
LABEL_100:
            v7 = v107;
            *(_QWORD *)(v72 + 16) ^= (*(_DWORD *)(v72 + 16) ^ (32 * v107)) & 0x3E0;
            if ( v106 == 1 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
              {
                v82 = v104;
                if ( (unsigned __int8)v104 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v82 = v104;
                  v85 = ~(unsigned __int16)(-1LL << (v104 + 1));
                  v60 = (v85 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v85;
                  if ( v60 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              else
              {
                v82 = v104;
              }
              __writecr8(v82);
            }
            if ( (MiFlags & 0x100) == 0 || MI_TIGHTER_PERMISSIONS(v105, v63) )
            {
              v39 = v10 << 25;
              v40 = 1LL;
              goto LABEL_41;
            }
            goto LABEL_155;
          }
          v72 = MiLockNonPagedPoolPte(v10);
          v22 = MI_READ_PTE_LOCK_FREE(v10);
          if ( v22 == v68 )
          {
            if ( (v68 & 0x200) != 0 )
              v63 |= 0x200uLL;
            v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v63, v68);
            if ( v22 == v68 )
              goto LABEL_100;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v77 = KeGetCurrentIrql(), v77 <= 0xFu) )
          {
            v78 = v104;
            if ( (unsigned __int8)v104 <= 0xFu && v77 >= 2u )
            {
              v79 = KeGetCurrentPrcb();
              v21 = (__int64)v79->SchedulerAssist;
              v78 = v104;
              v80 = ~(unsigned __int16)(-1LL << (v104 + 1));
              v60 = (v80 & *(_DWORD *)(v21 + 20)) == 0;
              *(_DWORD *)(v21 + 20) &= v80;
              if ( v60 )
                KiRemoveSystemWorkPriorityKick(v79);
            }
          }
          else
          {
            v78 = v104;
          }
          __writecr8(v78);
          v105 = v22;
        }
        if ( (*(_QWORD *)(v72 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          v108 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v72 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v108, v74, v75, v76);
            while ( *(__int64 *)(v72 + 24) < 0 );
          }
          *(_QWORD *)(v72 + 24) = *(_QWORD *)(v72 + 24) & 0xC000000000000000uLL | 1;
          _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v63 |= 0x200uLL;
        }
        v7 = v107;
        v86 = 0;
        *(_QWORD *)(v72 + 16) ^= (*(_DWORD *)(v72 + 16) ^ (32 * v107)) & 0x3E0;
        if ( !MiPteInShadowRange(v10) )
          goto LABEL_152;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v86 = 1;
          if ( HIBYTE(word_140C4E008) )
            goto LABEL_152;
          v87 = (v63 & 1) == 0;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_152;
          v87 = (v63 & 1) == 0;
        }
LABEL_150:
        if ( !v87 )
          v63 |= 0x8000000000000000uLL;
        goto LABEL_152;
      }
      if ( (v20 & 1) != 0 )
      {
        v88 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v105) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        if ( (unsigned int)MI_PFN_IS_PROTO(v88) )
        {
          MiFlushTbList((__int64)v113, v89);
          v91 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, (ULONG_PTR *)v10, -1LL, 0);
          if ( v91 < 0 )
          {
            MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
            MiUnlockWorkingSetShared(AnyMultiplexedVm, v103);
            MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v91);
            MiLockWorkingSetShared(AnyMultiplexedVm, v92, v93, v94);
            MiLockPageTableInternal(AnyMultiplexedVm, v16, 0LL);
          }
          v10 -= 8LL;
          goto LABEL_155;
        }
        v95 = v7;
        LODWORD(v95) = v7 | 0x80000000;
        v18 = (_KPROCESS *)(v22 & 0xF00000000000000LL | v22 & 0x7000000000000000LL | MiMakeValidPte(
                                                                                       v10,
                                                                                       (__int64)v89,
                                                                                       v95,
                                                                                       v90) & 0x80FFFFFFFFFFFFFFuLL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, (signed __int64)v18, v22) == v22 )
        {
          if ( (MiFlags & 0x100) == 0 || MI_TIGHTER_PERMISSIONS(v105, (__int64)v18) )
            MiInsertTbFlushEntry((__int64)v113, (__int64)(v10 << 25) >> 16, 1LL, 0);
          v98 = 0LL;
          v109 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v88 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v109, (__int64)v18, v96, v97);
            while ( *(__int64 *)(v88 + 24) < 0 );
          }
          *(_QWORD *)(v88 + 16) ^= (*(_DWORD *)(v88 + 16) ^ (32 * v7)) & 0x3E0;
          if ( (v105 & 0x42) != 0 )
            v98 = MiCaptureDirtyBitToPfn(v88);
          _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v98 )
            MiReleasePageFileInfo(v112, v98, 1);
          goto LABEL_155;
        }
      }
      else if ( (v20 & 0x400) != 0 )
      {
LABEL_52:
        MiFlushTbList((__int64)v113, v18);
        MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
        MiUnlockWorkingSetShared(AnyMultiplexedVm, v19);
        MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
        MiLockWorkingSetShared(AnyMultiplexedVm, v50, v51, v52);
        MiLockPageTableInternal(AnyMultiplexedVm, v16, 0LL);
      }
      else
      {
        if ( (v20 & 0x800) == 0 )
        {
          v101 = v20 ^ (v20 ^ (32 * v7)) & 0xE0;
          v86 = 0;
          v105 = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
          v63 = v105;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v86 = 1;
              if ( !HIBYTE(word_140C4E008) )
              {
                v87 = (v101 & 1) == 0;
                goto LABEL_150;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v87 = (v101 & 1) == 0;
              goto LABEL_150;
            }
          }
LABEL_152:
          v66 = v86 == 0;
LABEL_153:
          *(_QWORD *)v10 = v63;
          if ( !v66 )
            MiWritePteShadow(v10, v63, v64);
          goto LABEL_155;
        }
        v53 = MiLockTransitionLeafPage(v10);
        if ( v53 )
        {
          v99 = MI_READ_PTE_LOCK_FREE(v10);
          v100 = 32LL * (v7 & 0x1F);
          v55 = v100 | *(_QWORD *)(v53 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
          v56 = v100 | v99 & 0xFFFFFFFFFFFFFC1FuLL;
LABEL_56:
          *(_QWORD *)(v53 + 16) = v55;
          v105 = v56;
          v57 = 0;
          v58 = v56;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v57 = 1;
              if ( !HIBYTE(word_140C4E008) )
              {
                v60 = (v56 & 1) == 0;
LABEL_62:
                if ( !v60 )
                  v58 = v56 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v60 = (v56 & 1) == 0;
              goto LABEL_62;
            }
          }
          *(_QWORD *)v10 = v58;
          if ( v57 )
            MiWritePteShadow(v10, v58, v59);
          _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_155:
          v19 = v103;
          goto LABEL_156;
        }
      }
LABEL_50:
      v10 -= 8LL;
      goto LABEL_156;
    }
    v24 = v20 & 1;
    if ( v23 == 7 )
    {
      if ( v15 == 1 )
      {
        if ( v24 )
        {
          v25 = MiLockNonPagedPoolPte(v10);
          v22 = MI_READ_PTE_LOCK_FREE(v10);
          v105 = v22;
          goto LABEL_26;
        }
      }
      else if ( v24 )
      {
        v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v105) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        v104 = MiLockPageInline(v25, v26, v27, v28);
LABEL_26:
        *(_QWORD *)(v25 + 16) = *(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
        v29 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v105);
        TransitionPte = MiMakeTransitionPte((v29 >> 12) & 0xFFFFFFFFFLL, 24);
        v32 = (unsigned int)(v31 - 23);
        v33 = TransitionPte;
        if ( v106 == (_DWORD)v32 )
        {
          while ( 1 )
          {
            v34 = v22;
            v35 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v33, v22);
            v22 = v35;
            if ( v35 == v34 )
              break;
            v105 = v35;
            v36 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v105);
            v33 = MiMakeTransitionPte((v36 >> 12) & 0xFFFFFFFFFLL, 24);
          }
          v7 = v107;
          if ( (v34 & 0x200) != 0 )
            *(_QWORD *)(v25 + 24) = *(_QWORD *)(v25 + 24) & 0xC000000000000000uLL | 0x10000;
          goto LABEL_40;
        }
        v37 = 0;
        if ( MiPteInShadowRange(v10) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v37 = v32;
            if ( !HIBYTE(word_140C4E008) )
              goto LABEL_36;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_36:
            if ( ((unsigned __int8)v33 & (unsigned __int8)v32) != 0 )
              v33 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v10 = v33;
        if ( v37 )
          MiWritePteShadow(v10, v33, v38);
LABEL_40:
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v39 = v10 << 25;
        v40 = v32;
LABEL_41:
        MiInsertTbFlushEntry((__int64)v113, v39 >> 16, v40, 0);
        goto LABEL_155;
      }
    }
    else
    {
      if ( !v24 )
      {
        if ( (v22 & 0x400) != 0 )
          goto LABEL_52;
        if ( (v22 & 0x800) == 0 )
        {
          v61 = 0;
          v62 = v22 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v105 = v62;
          v63 = v62;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v61 = 1;
              if ( !HIBYTE(word_140C4E008) )
              {
                v65 = (v62 & 1) == 0;
LABEL_73:
                if ( !v65 )
                  v63 = v62 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v65 = (v62 & 1) == 0;
              goto LABEL_73;
            }
          }
          v66 = v61 == 0;
          goto LABEL_153;
        }
        v53 = MiLockTransitionLeafPage(v10);
        if ( v53 )
        {
          v54 = MI_READ_PTE_LOCK_FREE(v10);
          v55 = *(_QWORD *)(v53 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v56 = v54 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          goto LABEL_56;
        }
        goto LABEL_50;
      }
      v41 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v105);
      if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v41 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
      {
        MiFlushTbList((__int64)v113, v42);
        v44 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, (ULONG_PTR *)v10, -1LL, 0);
        v10 -= 8LL;
        v45 = v44;
        if ( v44 < 0 )
        {
          MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
          MiUnlockWorkingSetShared(AnyMultiplexedVm, v103);
          MiCopyOnWriteCheckConditions(AnyMultiplexedVm, v45);
          MiLockWorkingSetShared(AnyMultiplexedVm, v46, v47, v48);
          MiLockPageTableInternal(AnyMultiplexedVm, v16, 0LL);
        }
        goto LABEL_155;
      }
      if ( dword_140C4E828 )
        MI_WSLE_LOG_ACCESS(AnyMultiplexedVm, (_BYTE *)v10);
      if ( (MiGetWsleContents(v43, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
        goto LABEL_155;
      v49 = MiTbFlushType(AnyMultiplexedVm);
      v114[2] = 0LL;
      v114[3] = 0LL;
      LODWORD(v114[0]) = v49;
      WORD2(v114[0]) = 4;
      v114[1] = 20LL;
      MiInsertTbFlushEntry((__int64)v114, (__int64)(v10 << 25) >> 16, 1LL, 0);
      v19 = v103;
      if ( !MiFreeWsleList(AnyMultiplexedVm, (__int64)v114, 0) )
        goto LABEL_50;
    }
LABEL_156:
    v16 = v111;
    v10 += 8LL;
    v15 = v106;
  }
  MiFlushTbList((__int64)v113, v18);
  if ( v16 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v19);
  return 1LL;
}
