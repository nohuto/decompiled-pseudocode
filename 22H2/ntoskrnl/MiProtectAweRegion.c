/*
 * XREFs of MiProtectAweRegion @ 0x14054D2A4
 * Callers:
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14025A9BC (MiCaptureWriteWatchDirtyBit.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14025AB70 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiLockLowestValidPageTable @ 0x140285C40 (MiLockLowestValidPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x140290080 (MiWriteValidPteNewProtection.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x1402AF040 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402EDDE0 (MiInsertLargeTbFlushEntry.c)
 *     MiMakeTransitionPteValid @ 0x1403096E0 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiRewritePteWithLockBit @ 0x1403B65B8 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiGetAweNode @ 0x14054C320 (MiGetAweNode.c)
 *     MiGetAweViewPageSize @ 0x14054C418 (MiGetAweViewPageSize.c)
 *     MiLockAweVadsShared @ 0x14054CF78 (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x14054DF0C (MiUnlockAweVadsShared.c)
 *     MiGetVadCacheAttribute @ 0x14055BCC0 (MiGetVadCacheAttribute.c)
 */

__int64 __fastcall MiProtectAweRegion(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4, int *a5)
{
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r13
  __int64 v12; // r10
  _QWORD *AweNode; // r15
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // r12d
  int VadCacheAttribute; // r8d
  int v18; // r9d
  int v19; // eax
  __int64 AweViewPageSize; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  unsigned __int64 v24; // r15
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rbx
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  unsigned __int8 v32; // r14
  unsigned __int64 valid; // r14
  __int64 v34; // rdx
  __int64 v35; // r8
  _DWORD *v36; // r9
  int v37; // r9d
  int v38; // eax
  int v39; // eax
  unsigned int v40; // r9d
  int v42; // r14d
  __int64 v43; // rax
  unsigned __int64 v44; // rbx
  int v45; // ecx
  int v46; // edx
  __int64 v47; // r11
  unsigned __int64 LeafVa; // r14
  unsigned __int64 v49; // r15
  __int64 v50; // r12
  __int64 v51; // rsi
  __int64 v52; // r13
  __int64 v53; // rdi
  unsigned __int64 v54; // rdi
  __int64 v55; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 TransitionPte; // rax
  __int64 v60; // rbx
  int v61; // r14d
  __int64 v62; // rdi
  __int64 v63; // r8
  unsigned __int64 ValidPte; // rax
  __int64 v65; // r8
  int v66; // eax
  __int64 v67; // rdi
  int v68; // ebx
  __int64 v69; // r8
  BOOL v70; // r14d
  __int64 v71; // rdx
  unsigned __int64 TransitionPteValid; // rax
  __int64 v73; // r8
  int v74; // r9d
  unsigned __int8 v75; // r11
  bool v76; // zf
  unsigned __int8 v77; // [rsp+20h] [rbp-E0h]
  int v78; // [rsp+24h] [rbp-DCh]
  __int64 v79; // [rsp+28h] [rbp-D8h] BYREF
  int v80; // [rsp+30h] [rbp-D0h]
  int v81; // [rsp+34h] [rbp-CCh]
  unsigned __int64 *v82; // [rsp+38h] [rbp-C8h]
  unsigned int v83; // [rsp+40h] [rbp-C0h]
  int v84; // [rsp+44h] [rbp-BCh]
  unsigned int v85; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v86; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v87; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v88; // [rsp+60h] [rbp-A0h]
  unsigned int v89; // [rsp+68h] [rbp-98h]
  __int64 v90; // [rsp+70h] [rbp-90h]
  unsigned __int64 v91; // [rsp+78h] [rbp-88h]
  unsigned __int64 v92; // [rsp+80h] [rbp-80h]
  unsigned __int64 v93; // [rsp+88h] [rbp-78h] BYREF
  __int64 v94; // [rsp+90h] [rbp-70h]
  _KPROCESS *Process; // [rsp+98h] [rbp-68h]
  unsigned __int64 v96; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v97; // [rsp+A8h] [rbp-58h]
  int *v98; // [rsp+B0h] [rbp-50h]
  _QWORD v99[24]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = a3;
  v84 = a3;
  v98 = a5;
  v93 = 0LL;
  memset(v99, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  v78 = 1;
  v88 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v82 = &Process[1].ActiveProcessorsPadding[6];
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v87 = v10;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v99[0]) = 1;
  v86 = v11;
  WORD2(v99[0]) = 0;
  v99[2] = 0LL;
  LODWORD(v99[1]) = 20;
  v99[3] = 0LL;
  MiLockAweVadsShared((__int64)CurrentThread);
  AweNode = MiGetAweNode(a1);
  v14 = AweNode[3];
  v15 = AweNode[4];
  v90 = v14;
  if ( v5 != 24 )
  {
    v16 = v5 & 7;
    if ( v16 != 1 && v16 != 4 )
      goto LABEL_47;
    VadCacheAttribute = MiGetVadCacheAttribute();
    if ( VadCacheAttribute )
    {
      v19 = 0;
      if ( VadCacheAttribute == 2 )
        v19 = v18;
    }
    else
    {
      v19 = 8;
    }
    v14 = v90;
    v5 = v19 | v16;
    v84 = v5;
  }
  if ( (*(_DWORD *)v15 & 1) != 0 )
  {
    v83 = 4;
    goto LABEL_11;
  }
  v83 = (*(_DWORD *)(v14 + 48) >> 7) & 0x1F;
  if ( (v83 & 7) == 1 && (v5 & 7) != 1 )
    goto LABEL_47;
  if ( !a4 )
    goto LABEL_11;
  v37 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v14);
  v38 = a4 & 0x20000;
  if ( (v37 & 0x20000) != 0 )
  {
    if ( !v38 )
      goto LABEL_47;
  }
  else if ( v38 )
  {
    goto LABEL_47;
  }
  v39 = a4 & 0x40000;
  if ( (v37 & 0x40000) != 0 )
  {
    if ( !v39 )
      goto LABEL_47;
    goto LABEL_43;
  }
  if ( v39 )
  {
LABEL_47:
    MiUnlockAweVadsShared(CurrentThread, v12);
    return 3221225496LL;
  }
LABEL_43:
  v40 = v37 & 0xFFF9FFFF;
  if ( (v40 & 0x1C000) == 0 && (a4 & 0x1C000) != 0
    || (v40 & 0x12000) == 0 && (a4 & 0x12000) != 0
    || v40 == 2048 && (a4 & 0xFFF9F7FF) != 0 )
  {
    goto LABEL_47;
  }
LABEL_11:
  MiUnlockAweVadsShared(CurrentThread, v12);
  v92 = *(_QWORD *)(v15 + 8);
  v81 = *(_DWORD *)(v90 + 48) & 0x300000;
  v80 = 0;
  AweViewPageSize = MiGetAweViewPageSize((__int64)AweNode);
  v24 = (unsigned __int64)v23;
  if ( AweViewPageSize )
    v24 = AweViewPageSize;
  v25 = (__int64)v23;
  v97 = v24;
  if ( v24 == 512 )
    v25 = 1LL;
  v94 = v25;
  v26 = v22 | 0x4000000;
  if ( v24 != 512 )
    v26 = v22;
  v85 = v26;
  v27 = v24 == 512;
  v89 = v27;
  if ( v23 != (_DWORD *)1 )
  {
    if ( ((v10 >> 3) & 0x1FF) % v24 )
      return 3221225496LL;
    v21 = (((__int64)(v11 - v10) >> 3) + 1) % v24;
    if ( v21 )
      return 3221225496LL;
  }
  if ( v24 == 512 )
  {
    v21 = 0xFFFFF68000000000uLL;
    v22 = 0x7FFFFFFFF8LL;
    do
    {
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v27;
    }
    while ( v27 );
    v86 = v11;
    v87 = v10;
  }
  v28 = (__int64)v82;
  v29 = 0LL;
  v91 = v10;
  v30 = v86;
  v32 = MiLockWorkingSetShared((__int64)v82, v21, v22, v23);
  v77 = v32;
  if ( v10 <= v86 )
  {
    valid = 0LL;
    while ( !valid || (v10 & 0xFFF) == 0 )
    {
      MiFlushTbList((__int64)v99, (_KPROCESS *)v31);
      if ( valid )
      {
        MiUnlockPageTableInternal(v28, valid);
        MiUnlockWorkingSetShared(v28, v77);
        MiLockWorkingSetShared(v28, v34, v35, v36);
        v29 = 0LL;
      }
      valid = MiLockLowestValidPageTable(v28, v10, &v93);
      v88 = valid;
      if ( valid == ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        break;
      v10 = v10 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
LABEL_134:
      v10 += 8LL;
      v87 = v10;
      if ( v10 > v30 )
      {
        v32 = v77;
        goto LABEL_136;
      }
    }
    if ( v81 == 3145728 && (v94 == 1 || !(((v10 >> 3) & 0x1FF) % v92)) )
    {
      v42 = 0;
      v80 = 0;
    }
    else
    {
      v42 = v80;
    }
    v43 = MI_READ_PTE_LOCK_FREE(v10);
    v79 = v43;
    v44 = v43;
    if ( !v43 )
      goto LABEL_132;
    if ( (v43 & 1) != 0 )
    {
      if ( !v29 )
        v29 = v10;
      v96 = v29;
      if ( v10 != v91 )
        goto LABEL_65;
      v45 = (v43 & 0x800) != 0 ? 4 : 2;
      if ( v83 >> 3 == 1 )
      {
        v46 = v45 | 0x200;
      }
      else
      {
        v78 = (v43 & 0x800) != 0 ? 4 : 2;
        if ( v83 >> 3 != 3 )
          goto LABEL_65;
        v78 = (v43 & 0x800) != 0 ? 4 : 2;
        if ( (v83 & 7) == 0 )
          goto LABEL_65;
        v46 = v45 | 0x400;
      }
      v78 = v46;
LABEL_65:
      if ( v81 == 3145728 && !v42 && (v43 & 0x42) != 0 )
      {
        LeafVa = MiGetLeafVa(v10);
        v49 = v24 / v92;
        if ( v49 )
        {
          v50 = v90;
          v51 = (__int64)Process;
          v52 = v47;
          v53 = v92 << 12;
          do
          {
            MiCaptureWriteWatchDirtyBit(v51, LeafVa, v50);
            LeafVa += v53;
            v49 -= v52;
          }
          while ( v49 );
          v10 = v87;
          LODWORD(v47) = 1;
          v5 = v84;
          v29 = v96;
        }
        v24 = v97;
        v80 = v47;
      }
      v54 = v44;
      if ( MiPteInShadowRange((unsigned __int64)&v79)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v44 |= 0x20uLL;
          v57 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v79 >> 3) & 0x1FF));
          if ( (v57 & 0x20) == 0 )
            v44 = v54;
          if ( (v57 & 0x42) != 0 )
            v44 |= 0x42uLL;
        }
        else
        {
          v44 = v79;
        }
      }
      v58 = (v44 >> 12) & 0xFFFFFFFFFLL;
      if ( v5 == 24 )
      {
        TransitionPte = MiMakeTransitionPte(v58, 24);
        v79 = TransitionPte;
        v60 = TransitionPte;
        if ( v24 != 512 )
        {
          v61 = 0;
          v62 = TransitionPte;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v61 = 1;
              if ( !HIBYTE(word_140C4E008) && (v60 & 1) != 0 )
                v62 |= 0x8000000000000000uLL;
            }
            else
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (v60 & 1) != 0 )
              {
                v62 |= 0x8000000000000000uLL;
              }
              v60 = v79;
            }
          }
          *(_QWORD *)v10 = v62;
          if ( v61 )
            MiWritePteShadow(v10, v62, v63);
        }
      }
      else
      {
        ValidPte = MiMakeValidPte(v10, v58, v5 | v85, v55);
        v60 = ValidPte;
        if ( v24 != 512 )
          MiWriteValidPteNewProtection(v10, ValidPte);
      }
      if ( (v5 & 4) != 0 && v81 != 3145728 )
        v60 |= 0x42uLL;
      if ( v24 == 512 )
      {
        v65 = v60;
        v28 = (__int64)v82;
        MiRewritePteWithLockBit((__int64)v82, (volatile __int64 *)v10, v65);
        MiInsertLargeTbFlushEntry((__int64)v99, v89, v10);
        v30 = v86;
LABEL_133:
        valid = v88;
        goto LABEL_134;
      }
      MiInsertTbFlushEntry((__int64)v99, (__int64)(v10 << 25) >> 16, 1LL, 0);
      goto LABEL_131;
    }
    v66 = v78;
    if ( v10 == v91 )
      v66 = 1;
    v78 = v66;
    if ( v5 == 24 )
      goto LABEL_132;
    v67 = v44 ^ ((unsigned __int16)v44 ^ (unsigned __int16)(32 * v5)) & 0x3E0;
    v68 = 0;
    v79 = v67;
    v70 = MiPteInShadowRange(v10);
    v71 = v67;
    if ( v70 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v68 = 1;
        if ( !HIBYTE(word_140C4E008) && (v67 & 1) != 0 )
LABEL_112:
          v71 |= 0x8000000000000000uLL;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
             && (v67 & 1) != 0 )
      {
        goto LABEL_112;
      }
    }
    *(_QWORD *)v10 = v71;
    if ( v68 )
      MiWritePteShadow(v10, v71, v69);
    TransitionPteValid = MiMakeTransitionPteValid(v10);
    v73 = TransitionPteValid;
    v79 = TransitionPteValid;
    if ( (v85 & 0x4000000) != 0 )
    {
      v73 = TransitionPteValid | 0x80;
      v79 = TransitionPteValid | 0x80;
    }
    v74 = 0;
    v31 = v73;
    if ( !v70 )
      goto LABEL_127;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v75 = ++v74;
      if ( !HIBYTE(word_140C4E008) )
      {
        v76 = ((unsigned __int8)v73 & v75) == 0;
        goto LABEL_125;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v76 = (v73 & 1) == 0;
LABEL_125:
      if ( !v76 )
        v31 |= 0x8000000000000000uLL;
    }
LABEL_127:
    *(_QWORD *)v10 = v31;
    if ( v74 )
      MiWritePteShadow(v10, v31, v73);
    if ( !v29 )
      v29 = v10;
LABEL_131:
    v30 = v86;
LABEL_132:
    v28 = (__int64)v82;
    goto LABEL_133;
  }
LABEL_136:
  MiFlushTbList((__int64)v99, (_KPROCESS *)v31);
  if ( v88 )
    MiUnlockPageTableInternal(v28, v88);
  MiUnlockWorkingSetShared(v28, v32);
  *v98 = v78;
  return 0LL;
}
