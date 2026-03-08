/*
 * XREFs of MmProtectPool @ 0x14030B7D8
 * Callers:
 *     ExProtectPoolEx @ 0x14030B674 (ExProtectPoolEx.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiTbFlushType @ 0x140224BDC (MiTbFlushType.c)
 *     MiGetWsleContents @ 0x140229790 (MiGetWsleContents.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiMakeProtectionMask @ 0x140320CC0 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x14032B2B0 (MiFreeWsleList.c)
 *     MiCaptureDirtyBitToPfn @ 0x14032D790 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x14032E62C (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x14032E660 (MiWriteValidPteNewProtection.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140349598 (MI_WSLE_LOG_ACCESS.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFindLargeMapping @ 0x14063F10C (MiFindLargeMapping.c)
 *     MiLockNonPagedPoolPte @ 0x14063F214 (MiLockNonPagedPoolPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x140664840 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  __int64 v7; // r15
  int v8; // r12d
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  int v11; // edx
  char *AnyMultiplexedVm; // r13
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  unsigned __int8 v15; // di
  signed __int64 v16; // rbx
  char v17; // al
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  int v20; // ebx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 v24; // r14
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  __int64 v29; // rcx
  unsigned __int64 v30; // rbx
  int v31; // r15d
  __int64 v32; // r8
  __int64 v33; // r14
  __int64 v34; // rax
  signed __int64 v35; // rax
  __int64 v36; // rdi
  signed __int64 v37; // rax
  int v38; // ebx
  __int64 v39; // r8
  bool v40; // zf
  unsigned __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  int v45; // eax
  int v46; // eax
  unsigned int v47; // ebx
  bool v48; // zf
  int v49; // r12d
  unsigned int v50; // r12d
  unsigned __int64 v51; // rdx
  int v52; // r15d
  __int64 v53; // rdx
  __int64 v54; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v56; // rdi
  unsigned __int8 v57; // dl
  unsigned __int8 v58; // bl
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  signed __int64 v62; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v64; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v67; // eax
  unsigned __int8 v68; // al
  unsigned __int8 v69; // bl
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  int v73; // ebx
  __int64 v74; // r8
  bool v75; // zf
  char v76; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v77; // [rsp+21h] [rbp-DFh]
  unsigned __int64 v78; // [rsp+28h] [rbp-D8h] BYREF
  int v79; // [rsp+30h] [rbp-D0h]
  unsigned int v80; // [rsp+34h] [rbp-CCh]
  int v81; // [rsp+38h] [rbp-C8h] BYREF
  int v82; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v83; // [rsp+40h] [rbp-C0h]
  __int64 v84; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v85; // [rsp+50h] [rbp-B0h]
  _QWORD v86[24]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v87[24]; // [rsp+120h] [rbp+20h] BYREF

  v76 = 0;
  memset(v86, 0, 0xB8uLL);
  memset(v87, 0, 0xB8uLL);
  if ( (a3 & 0x10) != 0 && (MiFlags & 0x8000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  v80 = ProtectionMask;
  LODWORD(v7) = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v8 = 0;
  v9 = a1 + a2 - 1;
  v79 = 0;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiGetSystemRegionType(a1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( v11 == 6 )
    goto LABEL_5;
  if ( v11 != 5 || (unsigned int)MiFindLargeMapping(a1, v9) )
    return 0LL;
  v8 = 1;
  v79 = 1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
LABEL_5:
  v13 = 0LL;
  v83 = 0LL;
  v86[3] = 0LL;
  LODWORD(v86[1]) = 20;
  v14 = *((unsigned __int16 *)AnyMultiplexedVm + 87);
  v85 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v84 = *(_QWORD *)(qword_140C67048 + 8 * v14);
  v77 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v15 = v77;
  if ( v10 > v85 )
    goto LABEL_28;
  do
  {
    if ( !v13 )
      goto LABEL_7;
    if ( (v10 & 0xFFF) == 0 )
    {
      MiFlushTbList(v86);
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v13);
LABEL_7:
      v13 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v83 = v13;
      MiLockPageTableInternal((__int64)AnyMultiplexedVm, v13, 0);
    }
    v16 = MI_READ_PTE_LOCK_FREE(v10);
    v78 = v16;
    v17 = AnyMultiplexedVm[184] & 7;
    if ( (_DWORD)v7 == 24 )
    {
      if ( v17 != 7 )
      {
        if ( (v16 & 1) != 0 )
        {
          v41 = MI_READ_PTE_LOCK_FREE(&v78);
          v44 = 0xFFFFDE0000000028uLL;
          if ( *(__int64 *)(48 * ((v41 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0 )
          {
            MiFlushTbList(v86);
            v46 = MiCopyOnWrite((__int64)(v10 << 25) >> 16);
            v10 -= 8LL;
            v47 = v46;
            if ( v46 < 0 )
            {
              MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v13);
              MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v15);
              MiCopyOnWriteCheckConditions(AnyMultiplexedVm, v47);
              MiLockWorkingSetShared(AnyMultiplexedVm);
              MiLockPageTableInternal((__int64)AnyMultiplexedVm, v13, 0);
            }
            goto LABEL_27;
          }
          if ( dword_140C67C68 )
            MI_WSLE_LOG_ACCESS(AnyMultiplexedVm, v10, v42, v43);
          if ( (MiGetWsleContents(v44, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
            goto LABEL_27;
          v45 = MiTbFlushType((__int64)AnyMultiplexedVm);
          v87[2] = 0LL;
          v87[3] = 0LL;
          LODWORD(v87[0]) = v45;
          WORD2(v87[0]) = 4;
          v87[1] = 20LL;
          MiInsertTbFlushEntry(v87, (__int64)(v10 << 25) >> 16, 1LL);
          if ( MiFreeWsleList(AnyMultiplexedVm, v87, 0LL) )
            goto LABEL_27;
          goto LABEL_14;
        }
        if ( (v16 & 0x400) == 0 )
        {
          if ( (v16 & 0x800) == 0 )
          {
            v78 = v16 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
            *(_QWORD *)v10 = v78;
            goto LABEL_27;
          }
          v24 = MiLockTransitionLeafPageEx(v10, 0LL, 0);
          if ( v24 )
          {
            v25 = MI_READ_PTE_LOCK_FREE(v10);
            v27 = 768LL;
            v26 = -225LL;
LABEL_38:
            v28 = v27 | v26 & v25;
            v29 = v27 | v26 & *(_QWORD *)(v24 + 16);
            v78 = v28;
            *(_QWORD *)(v24 + 16) = v29;
            v30 = v28;
            v31 = 0;
            if ( !(unsigned int)MiPteInShadowRange(v10) )
            {
LABEL_39:
              *(_QWORD *)v10 = v30;
              if ( v31 )
                MiWritePteShadow(v10, v30, v32);
              _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              LODWORD(v7) = v80;
              goto LABEL_26;
            }
            if ( MiPteHasShadow() )
            {
              v31 = 1;
              if ( HIBYTE(word_140C6697C) )
                goto LABEL_39;
              v48 = (v28 & 1) == 0;
            }
            else
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                goto LABEL_39;
              v48 = (v28 & 1) == 0;
            }
            if ( !v48 )
              v30 = v28 | 0x8000000000000000uLL;
            goto LABEL_39;
          }
LABEL_14:
          v10 -= 8LL;
          goto LABEL_27;
        }
LABEL_88:
        MiFlushTbList(v86);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v13);
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v15);
        MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
        goto LABEL_90;
      }
      if ( v8 )
      {
        if ( (v16 & 1) == 0 )
          goto LABEL_27;
        v33 = MiLockNonPagedPoolPte(v10);
        v16 = MI_READ_PTE_LOCK_FREE(v10);
        v78 = v16;
      }
      else
      {
        if ( (v16 & 1) == 0 )
          goto LABEL_27;
        v33 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v78) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v76 = MiLockPageInline(v33);
      }
      *(_QWORD *)(v33 + 16) = *(_QWORD *)(v33 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
      while ( 1 )
      {
        v34 = MI_READ_PTE_LOCK_FREE(&v78);
        v35 = MiSwizzleInvalidPte(v34 & 0xFFFFFFFFFF000LL | 0xB00);
        v36 = v35;
        if ( !v8 )
          break;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v37 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v35, v16);
        v40 = v16 == v37;
        v16 = v37;
        if ( v40 )
        {
          if ( (v78 & 0x200) != 0 )
            *(_QWORD *)(v33 + 24) = *(_QWORD *)(v33 + 24) & 0xC000000000000000uLL | 0x10000;
LABEL_73:
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_74;
        }
        v78 = v37;
      }
      v38 = 0;
      if ( (unsigned int)MiPteInShadowRange(v10) )
      {
        if ( MiPteHasShadow() )
        {
          v38 = 1;
          if ( !HIBYTE(word_140C6697C) )
          {
            v40 = (v36 & 1) == 0;
            goto LABEL_69;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v40 = (v36 & 1) == 0;
LABEL_69:
          if ( !v40 )
            v36 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v10 = v36;
      if ( v38 )
        MiWritePteShadow(v10, v36, v39);
      goto LABEL_73;
    }
    if ( v17 != 7 )
    {
      if ( (v16 & 1) != 0 )
      {
        v18 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v78) >> 12) & 0xFFFFFFFFFFLL;
        v19 = 48 * v18 - 0x220000000000LL;
        if ( *(__int64 *)(v19 + 40) >= 0 )
        {
          v21 = v16 & 0x7000000000000000LL | v16 & 0xF00000000000000LL | MiMakeValidPte(
                                                                           v10,
                                                                           v18,
                                                                           (unsigned int)v7 | 0x80000000) & 0x80FFFFFFFFFFFFFFuLL;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          if ( v16 == _InterlockedCompareExchange64((volatile signed __int64 *)v10, v21, v16) )
          {
            if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v78, v21) )
              MiInsertTbFlushEntry(v86, (__int64)(v10 << 25) >> 16, 1LL);
            v22 = 0LL;
            v82 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v82);
              while ( *(__int64 *)(v19 + 24) < 0 );
            }
            *(_QWORD *)(v19 + 16) ^= (*(_DWORD *)(v19 + 16) ^ (32 * (_DWORD)v7)) & 0x3E0;
            if ( (v78 & 0x42) != 0 )
              v22 = MiCaptureDirtyBitToPfn(v19);
            _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v22 )
              MiReleasePageFileInfo(v84, v22, 1);
          }
          else
          {
            v10 -= 8LL;
          }
          goto LABEL_26;
        }
        MiFlushTbList(v86);
        v20 = MiCopyOnWrite((__int64)(v10 << 25) >> 16);
        if ( v20 >= 0 )
        {
          v15 = v77;
          goto LABEL_14;
        }
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v13);
        v15 = v77;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v77);
        MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v20);
LABEL_90:
        MiLockWorkingSetShared(AnyMultiplexedVm);
        MiLockPageTableInternal((__int64)AnyMultiplexedVm, v13, 0);
        goto LABEL_14;
      }
      if ( (v16 & 0x400) == 0 )
      {
        if ( (v16 & 0x800) == 0 )
        {
          v78 = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
          *(_QWORD *)v10 = v78;
          goto LABEL_27;
        }
        v24 = MiLockTransitionLeafPageEx(v10, 0LL, 0);
        if ( v24 )
        {
          v25 = MI_READ_PTE_LOCK_FREE(v10);
          v26 = -993LL;
          v27 = 32 * (v7 & 0x1F);
          goto LABEL_38;
        }
        goto LABEL_14;
      }
      goto LABEL_88;
    }
    v49 = v7;
    LOBYTE(v7) = v16;
    v50 = v49 | 0x80000000;
LABEL_100:
    v51 = v16;
    while ( 1 )
    {
      v52 = v7 & 1;
      if ( v52 )
      {
        v51 = MI_READ_PTE_LOCK_FREE(&v78);
      }
      else if ( qword_140C657C0 && (v51 & 0x10) == 0 )
      {
        v51 &= ~qword_140C657C0;
      }
      v53 = (v51 >> 12) & 0xFFFFFFFFFFLL;
      v54 = 48 * v53 - 0x220000000000LL;
      ValidPte = MiMakeValidPte(v10, v53, v50);
      v56 = ValidPte;
      if ( !v52 )
      {
        if ( (*(_QWORD *)(v54 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          v81 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v81);
            while ( *(__int64 *)(v54 + 24) < 0 );
          }
          *(_QWORD *)(v54 + 24) = *(_QWORD *)(v54 + 24) & 0xC000000000000000uLL | 1;
          _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v56 |= 0x200uLL;
        }
        LODWORD(v7) = v80;
        v73 = 0;
        *(_QWORD *)(v54 + 16) ^= (*(_DWORD *)(v54 + 16) ^ (32 * v80)) & 0x3E0;
        if ( !(unsigned int)MiPteInShadowRange(v10) )
          goto LABEL_160;
        if ( MiPteHasShadow() )
        {
          v73 = 1;
          if ( !HIBYTE(word_140C6697C) )
          {
            v75 = (v56 & 1) == 0;
            goto LABEL_158;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v75 = (v56 & 1) == 0;
LABEL_158:
          if ( !v75 )
            v56 |= 0x8000000000000000uLL;
        }
LABEL_160:
        *(_QWORD *)v10 = v56;
        if ( v73 )
          MiWritePteShadow(v10, v56, v74);
        v8 = v79;
        goto LABEL_26;
      }
      if ( !v79 )
        break;
      v54 = MiLockNonPagedPoolPte(v10);
      v7 = MI_READ_PTE_LOCK_FREE(v10);
      if ( v7 == v16 )
      {
        if ( (v16 & 0x200) != 0 )
          v56 |= 0x200uLL;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v62 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v56, v16);
        v40 = v16 == v62;
        v16 = v62;
        LOBYTE(v7) = v62;
        if ( !v40 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
          {
            v64 = v76;
            if ( (unsigned __int8)v76 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v64 = v76;
              v67 = ~(unsigned __int16)(-1LL << (v76 + 1));
              v40 = (v67 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v67;
              if ( v40 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          else
          {
            v64 = v76;
          }
          __writecr8(v64);
          v78 = v16;
          goto LABEL_100;
        }
        v16 = v78;
        goto LABEL_134;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (v57 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v57 <= 0xFu )
      {
        v58 = v76;
        if ( (unsigned __int8)v76 <= 0xFu && v57 >= 2u )
        {
          v59 = KeGetCurrentPrcb();
          v60 = v59->SchedulerAssist;
          v58 = v76;
          v61 = ~(unsigned __int16)(-1LL << (v76 + 1));
          v40 = (v61 & v60[5]) == 0;
          v60[5] &= v61;
          if ( v40 )
            KiRemoveSystemWorkPriorityKick(v59);
        }
      }
      else
      {
        v58 = v76;
      }
      __writecr8(v58);
      v16 = v7;
      v51 = v7;
      v78 = v7;
    }
    v76 = 17;
    MiWriteValidPteNewProtection(v10, ValidPte);
LABEL_134:
    LODWORD(v7) = v80;
    v8 = v79;
    *(_QWORD *)(v54 + 16) ^= (*(_DWORD *)(v54 + 16) ^ (32 * v80)) & 0x3E0;
    if ( v8 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (v68 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v68 <= 0xFu )
      {
        v69 = v76;
        if ( (unsigned __int8)v76 <= 0xFu && v68 >= 2u )
        {
          v70 = KeGetCurrentPrcb();
          v71 = v70->SchedulerAssist;
          v69 = v76;
          v72 = ~(unsigned __int16)(-1LL << (v76 + 1));
          v40 = (v72 & v71[5]) == 0;
          v71[5] &= v72;
          if ( v40 )
            KiRemoveSystemWorkPriorityKick(v70);
        }
      }
      else
      {
        v69 = v76;
      }
      __writecr8(v69);
      v16 = v78;
    }
    if ( (MiFlags & 0x100) != 0 && !(unsigned int)MI_TIGHTER_PERMISSIONS(v16, v56) )
      goto LABEL_26;
LABEL_74:
    MiInsertTbFlushEntry(v86, (__int64)(v10 << 25) >> 16, 1LL);
LABEL_26:
    v15 = v77;
LABEL_27:
    v13 = v83;
    v10 += 8LL;
  }
  while ( v10 <= v85 );
LABEL_28:
  MiFlushTbList(v86);
  if ( v13 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v13);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v15);
  return 1LL;
}
