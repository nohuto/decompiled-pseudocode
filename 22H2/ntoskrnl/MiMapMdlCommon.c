/*
 * XREFs of MiMapMdlCommon @ 0x1403C8614
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C8440 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x1408C4B10 (MmMapLockedRestartPages.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MiMakeProtectionPfnCompatible @ 0x14023B32C (MiMakeProtectionPfnCompatible.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiAssignInitialPageAttribute @ 0x1403C6590 (MiAssignInitialPageAttribute.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiShowBadMapper @ 0x14052D12C (MiShowBadMapper.c)
 */

__int64 __fastcall MiMapMdlCommon(__int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4, unsigned int a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 *v9; // r14
  __int16 v10; // cx
  unsigned __int64 v11; // rcx
  int v12; // r13d
  __int64 v13; // r8
  __int64 v14; // rbx
  unsigned __int64 v15; // r15
  unsigned __int8 v16; // di
  ULONG_PTR v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rax
  __int64 v22; // r11
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdi
  BOOL v25; // eax
  __int64 v26; // r8
  int v27; // edx
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int16 v32; // cx
  unsigned __int64 v34; // rax
  int HasShadow; // eax
  __int64 v36; // r13
  _QWORD *v37; // r15
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rdx
  __int64 v40; // rsi
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // r14
  char v43; // al
  unsigned __int64 v44; // r14
  unsigned __int64 v45; // r13
  BOOL v46; // eax
  unsigned __int64 v47; // r12
  BOOL v48; // r13d
  __int64 v49; // rsi
  unsigned __int64 v50; // rbx
  int v51; // r15d
  BOOL v52; // eax
  __int64 v53; // r8
  __int64 v54; // r11
  bool v55; // zf
  unsigned __int64 v56; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v58; // rax
  __int64 v59; // rdx
  _KPROCESS *v60; // rdx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // r13
  __int64 *v63; // r12
  int v64; // r14d
  unsigned __int64 v65; // rbx
  __int64 v66; // r8
  bool v67; // zf
  unsigned __int64 v68; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v72; // eax
  unsigned __int8 v73; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v74; // [rsp+20h] [rbp-E0h]
  __int64 v75; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v76; // [rsp+30h] [rbp-D0h]
  _QWORD *v77; // [rsp+38h] [rbp-C8h]
  __int64 v78; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v79; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v80; // [rsp+50h] [rbp-B0h]
  __int64 *v81; // [rsp+58h] [rbp-A8h]
  __int64 v82; // [rsp+60h] [rbp-A0h]
  __int64 v83; // [rsp+68h] [rbp-98h]
  unsigned __int64 v84; // [rsp+70h] [rbp-90h]
  unsigned __int64 v85; // [rsp+78h] [rbp-88h]
  __int64 v86; // [rsp+80h] [rbp-80h]
  __int64 v87; // [rsp+88h] [rbp-78h]
  _QWORD v88[24]; // [rsp+90h] [rbp-70h] BYREF

  v82 = a1;
  v5 = a2;
  v76 = a3;
  v6 = a3;
  LODWORD(v77) = (_DWORD)a4;
  v7 = *(unsigned int *)(a1 + 44);
  v8 = *(unsigned int *)(a1 + 40);
  v9 = (__int64 *)(a1 + 48);
  v10 = v7 + *(_QWORD *)(a1 + 32);
  v81 = v9;
  v80 = v10 & 0xFFF;
  v11 = (v8 + 4095 + v80) >> 12;
  v79 = v11;
  v86 = 0LL;
  v12 = 0;
  v87 = v7 + ((__int64)(a2 << 25) >> 16);
  v13 = 511LL;
  if ( (a2 & 0xFFF) == 0 && !v6 && (v11 & 0x1FF) == 0 )
    v12 = (*(_DWORD *)v9 & 0x1FFLL) == 0;
LABEL_2:
  v75 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( v6 )
  {
    v16 = MiLockWorkingSetShared(v6, 0LL, v13, a4);
    v73 = v16;
  }
  else
  {
    v16 = 17;
    v73 = 17;
  }
  while ( 1 )
  {
    if ( v16 != 17 )
    {
      if ( !v15 )
        goto LABEL_33;
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v6, v15);
LABEL_33:
        v15 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(v6, v15, 0LL);
      }
    }
    v17 = *v9;
    v18 = (unsigned int)v77;
    if ( (unsigned __int64)*v9 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v17 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v19 = 48 * v17 - 0x58000000000LL;
      if ( !*(_WORD *)(v19 + 32) && !dword_140C4E6CC )
        MiShowBadMapper(v17);
      if ( (*(_BYTE *)(v19 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v19, a5, v18, a4);
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible((char)v77, v19);
      v16 = v73;
      LODWORD(v18) = ProtectionPfnCompatible;
    }
    else if ( a5 )
    {
      if ( a5 == 2 )
        LODWORD(v18) = (unsigned int)v77 | 0x18;
    }
    else
    {
      LODWORD(v18) = (unsigned int)v77 | 8;
    }
    ValidPte = MiMakeValidPte(v5, *v9, (unsigned int)v18 | 0xA0000000, (__int64)a4);
    v22 = 1LL;
    v23 = ValidPte;
    if ( v12 != 1 )
      goto LABEL_12;
    if ( v9 == v81 )
    {
      v14 = ValidPte;
      v75 = ValidPte;
      goto LABEL_18;
    }
    v13 = 0xFFFFFFFFF000LL;
    v34 = v14 ^ (v14 ^ ((v14 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
    v75 = v34;
    v14 = v34;
    if ( v34 != v23 )
    {
      if ( (((unsigned int)v23 | (unsigned int)v34) & 0x1FF000) != 0 )
      {
        v6 = v76;
        if ( v16 != 17 )
        {
          if ( v15 )
            MiUnlockPageTableInternal(v76, v15);
          MiUnlockWorkingSetShared(v76, v16);
        }
        v12 = 0;
        v79 = (v80 + 4095 + *(unsigned int *)(v82 + 40)) >> 12;
        v5 -= 8 * (((__int64)v9 - v82 - 48) >> 3);
        v9 = v81;
        goto LABEL_2;
      }
      v14 = v34 ^ (v23 ^ v34) & 0xFFFFFFFFF000LL;
      v75 = v14;
LABEL_12:
      if ( v12 )
        goto LABEL_18;
      v24 = v23;
      v25 = MiPteInShadowRange(v5);
      v27 = 0;
      if ( !v25 )
      {
        v22 = 1LL;
        goto LABEL_15;
      }
      HasShadow = MiPteHasShadow();
      v22 = 1LL;
      if ( HasShadow )
      {
        v28 = 1;
        if ( HIBYTE(word_140C4E008) == (_BYTE)v27 && (v23 & 1) != 0 )
          v24 = v23 | 0x8000000000000000uLL;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v23 & 1) != 0 )
        {
          v24 = v23 | 0x8000000000000000uLL;
        }
        v14 = v75;
LABEL_15:
        v28 = v27;
      }
      *(_QWORD *)v5 = v24;
      if ( v28 )
        MiWritePteShadow(v5, v24, v26);
    }
LABEL_18:
    ++v9;
    v5 += 8LL;
    v79 -= v22;
    if ( !v79 )
      break;
    v16 = v73;
    v6 = v76;
  }
  if ( v73 == 17 )
  {
    v29 = v76;
  }
  else
  {
    if ( v15 )
      MiUnlockPageTableInternal(v76, v15);
    v29 = v76;
    MiUnlockWorkingSetShared(v76, v73);
    LODWORD(v22) = 1;
  }
  if ( v12 == (_DWORD)v22 )
  {
    memset(v88, 0, 0xB8uLL);
    v78 = 0LL;
    v36 = 0LL;
    v77 = 0LL;
    v37 = 0LL;
    v38 = (((v5 - 8 * ((*(unsigned int *)(v82 + 40) + v80 + 4095) >> 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v39 = (*(unsigned int *)(v82 + 40) + v80 + 4095) >> 21;
    v40 = v23 | 0x80;
    v79 = 0LL;
    v83 = v40;
    v41 = 0LL;
    v42 = v38 + 8 * v39;
    v84 = v42;
    if ( v29 )
      v43 = MiLockWorkingSetShared(v29, v39, 0LL, (_DWORD *)0x7FFFFFFFF8LL);
    else
      v43 = 17;
    v74 = v43;
    if ( v38 >= v42 )
    {
LABEL_117:
      if ( v74 != 17 )
        MiUnlockWorkingSetShared(v29, v74);
      v68 = ExAcquireSpinLockExclusive(&dword_140C4EBC0);
      *v37 = qword_140C4EBD0;
      qword_140C4EBD0 = v36;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EBC0);
      LOWORD(v22) = 1;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v68 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v72 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v68 + 1));
            v55 = (v72 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v72;
            if ( v55 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              LOWORD(v22) = 1;
            }
          }
        }
      }
      __writecr8(v68);
      goto LABEL_23;
    }
    v44 = v38;
LABEL_66:
    if ( v43 != 17 )
    {
      v41 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v79 = v41;
      MiLockPageTableInternal(v29, v41, 0LL);
    }
    v45 = 512 - ((v38 >> 3) & 0x1FF);
    if ( v45 > (__int64)(v84 - v44) >> 3 )
      v45 = (__int64)(v84 - v44) >> 3;
    v85 = v45;
    v80 = v44 + 8 * v45;
    if ( v44 < v80 )
    {
      v46 = MiPteInShadowRange((unsigned __int64)&v75);
      v47 = v80;
      v48 = v46;
      v49 = v78;
      while ( 1 )
      {
        v77 = v37;
        v50 = ZeroPte;
        v75 = MI_READ_PTE_LOCK_FREE(v38);
        v51 = 0;
        v52 = MiPteInShadowRange(v44);
        v54 = 0LL;
        if ( v52 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v51 = v54 + 1;
            if ( HIBYTE(word_140C4E008) == (_BYTE)v54 )
            {
              v55 = ((unsigned __int8)ZeroPte & (unsigned __int8)v51) == 0;
              goto LABEL_78;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v55 = (ZeroPte & 1) == 0;
LABEL_78:
            if ( !v55 )
              v50 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v38 = v50;
        if ( v51 )
          MiWritePteShadow(v38, v50, v53);
        v56 = v75;
        if ( v48
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v75 & 1) != 0
          && ((v75 & 0x20) == 0 || (v75 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v58 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v75 >> 3) & 0x1FF));
            if ( (v58 & 0x20) != 0 )
              v56 = v75 | 0x20;
            if ( (v58 & 0x42) != 0 )
              v56 |= 0x42uLL;
          }
          else
          {
            v56 = v75;
          }
        }
        v59 = (v56 >> 12) & 0xFFFFFFFFFLL;
        v37 = (_QWORD *)(48 * v59 - 0x58000000000LL);
        if ( v77 )
          v37 = v77;
        v38 += 8LL;
        v44 = v38;
        *(_QWORD *)(48 * v59 - 0x58000000000LL) = v49;
        v49 = 48 * v59 - 0x58000000000LL;
        if ( v38 >= v47 )
        {
          v40 = v83;
          v41 = v79;
          v45 = v85;
          v78 = 48 * v59 - 0x58000000000LL;
          v77 = v37;
          goto LABEL_99;
        }
      }
    }
    v54 = 0LL;
LABEL_99:
    WORD2(v88[0]) = 0;
    v88[1] = 20LL;
    LODWORD(v88[0]) = v54;
    v88[2] = v54;
    v88[3] = v54;
    MiInsertTbFlushEntry((__int64)v88, (__int64)((v44 << 25) - v86) >> 16, v45, 0);
    MiFlushTbList((__int64)v88, v60);
    v61 = v45;
    v62 = v80;
    v38 = v44 - 8 * v61;
    v44 = v38;
    if ( v38 >= v80 )
      goto LABEL_113;
    v63 = v81;
    while ( 1 )
    {
      v64 = 0;
      v40 ^= (v40 ^ (*v63 << 12)) & 0xFFFFFFFFF000LL;
      v65 = v40;
      if ( MiPteInShadowRange(v38) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v64 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
            v67 = (v40 & 1) == 0;
            goto LABEL_107;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v67 = (v40 & 1) == 0;
LABEL_107:
          if ( !v67 )
            v65 = v40 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v38 = v65;
      if ( v64 )
        MiWritePteShadow(v38, v65, v66);
      v38 += 8LL;
      v63 += 512;
      v44 = v38;
      if ( v38 >= v62 )
      {
        v37 = v77;
        v81 = v63;
        v41 = v79;
        v83 = v40;
LABEL_113:
        v29 = v76;
        if ( v41 )
          MiUnlockPageTableInternal(v76, v41);
        v43 = v74;
        if ( v38 >= v84 )
        {
          v36 = v78;
          goto LABEL_117;
        }
        goto LABEL_66;
      }
    }
  }
LABEL_23:
  v30 = v82;
  v31 = v87;
  v32 = v22 | *(_WORD *)(v82 + 10);
  *(_QWORD *)(v82 + 24) = v87;
  *(_WORD *)(v30 + 10) = v32;
  if ( (v32 & 0x10) != 0 )
    *(_WORD *)(v30 + 10) = v32 | 0x20;
  return v31;
}
