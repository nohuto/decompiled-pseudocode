/*
 * XREFs of MiProtectAweRegion @ 0x140648DF8
 * Callers:
 *     MmProtectVirtualMemory @ 0x1407C77B0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140210194 (MiInsertLargeTbFlushEntry.c)
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140228730 (MiCaptureWriteWatchDirtyBit.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiMakeTransitionPteValid @ 0x1402CD590 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14031F770 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x14032E660 (MiWriteValidPteNewProtection.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     MiRewritePteWithLockBit @ 0x140371830 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiFlushGraphicsPtes @ 0x140623FF8 (MiFlushGraphicsPtes.c)
 *     MiGetAweNode @ 0x1406482F8 (MiGetAweNode.c)
 *     MiGetAweViewPageSize @ 0x14064840C (MiGetAweViewPageSize.c)
 *     MiLockAweVadsShared @ 0x140648AC4 (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x14064989C (MiUnlockAweVadsShared.c)
 *     MiPageSizeToPteLevel @ 0x14064BCD4 (MiPageSizeToPteLevel.c)
 *     MiGetVadCacheAttribute @ 0x14065E5C4 (MiGetVadCacheAttribute.c)
 */

__int64 __fastcall MiProtectAweRegion(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4, int *a5)
{
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // r11
  _QWORD *AweNode; // r13
  __int64 v13; // rcx
  __int64 v14; // r15
  int v15; // r12d
  int VadCacheAttribute; // r8d
  int v17; // r9d
  int v18; // eax
  int *v19; // rbx
  unsigned int v20; // edi
  int v21; // r9d
  int v22; // r8d
  int v23; // eax
  int v24; // eax
  unsigned int v25; // r8d
  unsigned int v27; // ebx
  __int64 AweViewPageSize; // rax
  __int64 v29; // r9
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 v32; // r9
  int v33; // r15d
  unsigned __int64 v34; // r8
  int v35; // ecx
  __int64 v36; // r12
  unsigned __int64 v37; // r14
  unsigned __int8 v38; // r13
  int v39; // r13d
  unsigned __int64 valid; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  int v43; // edx
  int v44; // r8d
  int v45; // edi
  unsigned __int64 LeafVa; // rdi
  __int64 v47; // r11
  unsigned __int64 v48; // r15
  __int64 **v49; // r13
  __int64 v50; // r12
  __int64 v51; // rbx
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rdi
  __int64 v56; // r8
  unsigned __int64 ValidPte; // rax
  int v58; // ecx
  int v59; // edi
  __int64 v60; // rbx
  __int64 v61; // r8
  BOOL v62; // r14d
  __int64 v63; // rdx
  unsigned __int64 TransitionPteValid; // rax
  __int64 v65; // r8
  int v66; // r9d
  __int64 v67; // rdx
  unsigned __int8 v68; // r11
  bool v69; // zf
  unsigned __int8 v70; // [rsp+20h] [rbp-E0h]
  int v71; // [rsp+24h] [rbp-DCh]
  unsigned int v72; // [rsp+28h] [rbp-D8h]
  int v73; // [rsp+2Ch] [rbp-D4h]
  __int64 Process; // [rsp+30h] [rbp-D0h]
  int v75; // [rsp+38h] [rbp-C8h]
  int v76; // [rsp+3Ch] [rbp-C4h]
  int v77; // [rsp+40h] [rbp-C0h]
  int v78; // [rsp+44h] [rbp-BCh]
  int v79; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v80; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v81; // [rsp+58h] [rbp-A8h]
  __int64 v82; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v83; // [rsp+68h] [rbp-98h]
  __int64 v84; // [rsp+70h] [rbp-90h]
  unsigned __int64 v85; // [rsp+78h] [rbp-88h]
  __int64 **v86; // [rsp+80h] [rbp-80h]
  unsigned __int64 v87; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v88; // [rsp+90h] [rbp-70h]
  __int64 v89; // [rsp+A0h] [rbp-60h]
  int *v90; // [rsp+A8h] [rbp-58h]
  _QWORD v91[24]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = a3;
  v75 = a3;
  v90 = a5;
  v87 = 0LL;
  memset(v91, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  v71 = 1;
  v80 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v79 = 0;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v91[0]) = 1;
  v81 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v91[0]) = 0;
  v91[2] = 0LL;
  LODWORD(v91[1]) = 20;
  v91[3] = 0LL;
  MiLockAweVadsShared((__int64)CurrentThread);
  AweNode = MiGetAweNode(a1);
  v13 = AweNode[3];
  v14 = AweNode[4];
  v86 = (__int64 **)v13;
  if ( v5 != 24 )
  {
    v15 = v5 & 7;
    if ( v15 != 1 && v15 != 4 )
      goto LABEL_26;
    VadCacheAttribute = MiGetVadCacheAttribute();
    if ( VadCacheAttribute )
    {
      v18 = 0;
      if ( VadCacheAttribute == 2 )
        v18 = v17;
    }
    else
    {
      v18 = 8;
    }
    v13 = (__int64)v86;
    v5 = v18 | v15;
    v75 = v5;
  }
  v19 = (int *)(v13 + 48);
  if ( (*(_DWORD *)(v14 + 8) & 1) != 0 )
  {
    v20 = 4;
    v73 = 4;
    goto LABEL_30;
  }
  v21 = *v19;
  v73 = ((unsigned int)*v19 >> 7) & 0x1F;
  if ( (((unsigned int)*v19 >> 7) & 7) == 1 && (v5 & 7) != 1 )
    goto LABEL_26;
  if ( !a4 )
    goto LABEL_28;
  v22 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v13);
  v23 = a4 & 0x20000;
  if ( (v22 & 0x20000) != 0 )
  {
    if ( !v23 )
      goto LABEL_26;
  }
  else if ( v23 )
  {
    goto LABEL_26;
  }
  v24 = a4 & 0x40000;
  if ( (v22 & 0x40000) != 0 )
  {
    if ( v24 )
      goto LABEL_22;
LABEL_26:
    MiUnlockAweVadsShared(CurrentThread, v11);
    return 3221225496LL;
  }
  if ( v24 )
    goto LABEL_26;
LABEL_22:
  v25 = v22 & 0xFFF9FFFF;
  if ( (v25 & 0x1C000) == 0 && (a4 & 0x1C000) != 0
    || (v25 & 0x12000) == 0 && (a4 & 0x12000) != 0
    || v25 == 2048 && (a4 & 0xFFF9F7FF) != 0 )
  {
    goto LABEL_26;
  }
LABEL_28:
  v20 = v73;
  if ( (v21 & 0x2200000) == 0x2200000 )
    v79 = 1;
LABEL_30:
  MiUnlockAweVadsShared(CurrentThread, v11);
  v77 = *v19 & 0x600000;
  v85 = *(_QWORD *)(v14 + 16);
  v76 = 0;
  v27 = v77 != 6291456 ? 0x80000000 : 0;
  AweViewPageSize = MiGetAweViewPageSize((__int64)AweNode);
  v30 = v29;
  if ( AweViewPageSize )
    v30 = AweViewPageSize;
  v88 = v30;
  v78 = MiPageSizeToPteLevel(v30);
  v33 = v78;
  if ( v78 < 1 )
  {
    v84 = v32;
  }
  else
  {
    v84 = 1LL;
    v27 |= 0x4000000u;
  }
  v72 = v27;
  if ( v32 == 1 )
  {
    v34 = v81;
  }
  else
  {
    if ( ((v10 >> 3) & 0x1FF) % v31 )
      return 3221225496LL;
    v34 = v81;
    if ( (((__int64)(v81 - v10) >> 3) + 1) % v31 )
      return 3221225496LL;
  }
  v35 = v78;
  if ( v78 )
  {
    do
    {
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v34 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v35;
    }
    while ( v35 );
    v81 = v34;
  }
  v36 = 0LL;
  v83 = v10;
  v37 = 0LL;
  v38 = MiLockWorkingSetShared(Process + 1664);
  v70 = v38;
  if ( v10 <= v81 )
  {
    v39 = v75;
    valid = 0LL;
    while ( !valid || (v10 & 0xFFF) == 0 )
    {
      MiFlushTbList((int *)v91);
      v41 = v80;
      if ( v80 )
      {
        if ( v36 )
        {
          if ( v79 )
          {
            MiFlushGraphicsPtes(v36, ((__int64)(v37 - v36) >> 3) + 1);
            v41 = v80;
          }
          v36 = 0LL;
        }
        MiUnlockPageTableInternal(Process + 1664, v41);
        MiUnlockWorkingSetShared(Process + 1664, v70);
        MiLockWorkingSetShared(Process + 1664);
      }
      valid = MiLockLowestValidPageTable(Process + 1664, v10, &v87);
      v80 = valid;
      if ( valid == ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        break;
      v10 = v10 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
LABEL_126:
      v20 = v73;
      v10 += 8LL;
      if ( v10 > v81 )
      {
        v38 = v70;
        goto LABEL_128;
      }
    }
    if ( v77 == 6291456 && (v84 == 1 || !(((v10 >> 3) & 0x1FF) % v85)) )
      v76 = 0;
    v42 = MI_READ_PTE_LOCK_FREE(v10);
    v82 = v42;
    if ( !v42 )
    {
LABEL_125:
      valid = v80;
      goto LABEL_126;
    }
    if ( (v42 & 1) != 0 )
    {
      v37 = v10;
      if ( !v36 )
        v36 = v10;
      v89 = v36;
      if ( v10 == v83 )
      {
        v43 = (v42 & 0x800) != 0 ? 4 : 2;
        if ( v20 >> 3 == 1 )
        {
          v44 = v43 | 0x200;
LABEL_69:
          v71 = v44;
          goto LABEL_70;
        }
        v71 = (v42 & 0x800) != 0 ? 4 : 2;
        if ( v20 >> 3 == 3 )
        {
          v71 = (v42 & 0x800) != 0 ? 4 : 2;
          if ( (v20 & 7) != 0 )
          {
            v44 = v43 | 0x400;
            goto LABEL_69;
          }
        }
      }
LABEL_70:
      v45 = v77;
      if ( v77 == 6291456 && !v76 && (v42 & 0x42) != 0 )
      {
        LeafVa = MiGetLeafVa(v10);
        v48 = v88 / v85;
        if ( v88 / v85 )
        {
          v49 = v86;
          v50 = v47;
          v51 = v85 << 12;
          do
          {
            MiCaptureWriteWatchDirtyBit(Process, LeafVa, v49);
            LeafVa += v51;
            v48 -= v50;
          }
          while ( v48 );
          v36 = v89;
          LODWORD(v47) = 1;
          v39 = v75;
          v37 = v10;
          v27 = v72;
        }
        v33 = v78;
        v45 = 6291456;
        v76 = v47;
      }
      v52 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v82) >> 12) & 0xFFFFFFFFFFLL;
      if ( v39 == 24 )
      {
        v53 = MiSwizzleInvalidPte((v52 << 12) | 0xB00);
        v82 = v53;
        v54 = v53;
        if ( !v33 )
        {
          v55 = v53;
          if ( MiPteInShadowRange(v10) )
          {
            if ( MiPteHasShadow() )
            {
              v33 = 1;
              if ( !HIBYTE(word_140C6697C) )
              {
LABEL_85:
                if ( (v54 & 1) != 0 )
                  v55 |= 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              goto LABEL_85;
            }
          }
          *(_QWORD *)v10 = v55;
          if ( v33 )
            MiWritePteShadow(v10, v55, v56);
          v33 = v78;
LABEL_90:
          MiInsertTbFlushEntry((__int64)v91, (__int64)(v10 << 25) >> 16, 1LL, 0);
LABEL_98:
          v27 = v72;
          goto LABEL_125;
        }
      }
      else
      {
        ValidPte = MiMakeValidPte(v10, v52, v27 | v39);
        v54 = ValidPte;
        if ( !v33 )
          MiWriteValidPteNewProtection(v10, ValidPte);
        if ( (v39 & 4) != 0 && v45 != 6291456 )
          v54 |= 0x42uLL;
        if ( !v33 )
          goto LABEL_90;
      }
      MiRewritePteWithLockBit(Process + 1664, (__int64 *)v10, v54);
      MiInsertLargeTbFlushEntry((__int64)v91, v33, v10);
      goto LABEL_98;
    }
    v58 = v71;
    if ( v10 == v83 )
      v58 = 1;
    v71 = v58;
    if ( v39 == 24 )
      goto LABEL_125;
    v59 = 0;
    v60 = v42 ^ ((unsigned __int16)v42 ^ (unsigned __int16)(32 * v39)) & 0x3E0;
    v62 = MiPteInShadowRange(v10);
    v63 = v60;
    if ( v62 )
    {
      if ( MiPteHasShadow() )
      {
        v59 = 1;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_109;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_109;
      }
      if ( (v60 & 1) != 0 )
        v63 |= 0x8000000000000000uLL;
    }
LABEL_109:
    *(_QWORD *)v10 = v63;
    if ( v59 )
      MiWritePteShadow(v10, v63, v61);
    TransitionPteValid = MiMakeTransitionPteValid(v10);
    v27 = v72;
    v65 = TransitionPteValid;
    v82 = TransitionPteValid;
    if ( (v72 & 0x4000000) != 0 )
    {
      v65 = TransitionPteValid | 0x80;
      v82 = TransitionPteValid | 0x80;
    }
    v66 = 0;
    v67 = v65;
    if ( !v62 )
      goto LABEL_121;
    if ( MiPteHasShadow() )
    {
      v68 = ++v66;
      if ( !HIBYTE(word_140C6697C) )
      {
        v69 = ((unsigned __int8)v65 & v68) == 0;
        goto LABEL_119;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v69 = (v65 & 1) == 0;
LABEL_119:
      if ( !v69 )
        v67 |= 0x8000000000000000uLL;
    }
LABEL_121:
    *(_QWORD *)v10 = v67;
    if ( v66 )
      MiWritePteShadow(v10, v67, v65);
    v37 = v10;
    if ( !v36 )
      v36 = v10;
    goto LABEL_125;
  }
LABEL_128:
  MiFlushTbList((int *)v91);
  if ( v80 )
  {
    if ( v79 )
    {
      if ( v36 )
        MiFlushGraphicsPtes(v36, ((__int64)(v37 - v36) >> 3) + 1);
    }
    MiUnlockPageTableInternal(Process + 1664, v80);
  }
  MiUnlockWorkingSetShared(Process + 1664, v38);
  *v90 = v71;
  return 0LL;
}
