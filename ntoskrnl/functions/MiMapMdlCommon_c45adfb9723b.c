__int64 __fastcall MiMapMdlCommon(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, int a5)
{
  unsigned __int64 v5; // r13
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // rdi
  unsigned __int64 v12; // r11
  int v13; // esi
  BOOL v14; // ebx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r10
  int v17; // r12d
  _QWORD *v18; // r9
  int v19; // r13d
  unsigned __int64 v20; // r14
  __int64 v21; // rdi
  int ProtectionPfnCompatible; // edx
  unsigned __int64 v23; // rbx
  unsigned __int8 v24; // r14
  unsigned __int64 *v25; // rsi
  unsigned __int64 v26; // rsi
  int v27; // r12d
  int v28; // eax
  unsigned __int64 ValidPte; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int16 v32; // cx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v36; // rdx
  unsigned __int8 v37; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v39; // r9
  int v40; // eax
  bool v41; // zf
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r8
  unsigned __int64 *v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r14
  _QWORD *v48; // rsi
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // r13
  unsigned __int64 v52; // rbx
  char v53; // al
  unsigned __int64 v54; // r14
  __int64 v55; // r12
  unsigned __int64 v56; // rbx
  _QWORD *v57; // r12
  unsigned __int64 v58; // r13
  _QWORD *v59; // r15
  unsigned __int64 v60; // rbx
  int v61; // esi
  __int64 v62; // r8
  _QWORD *v63; // rcx
  unsigned __int64 *v64; // r12
  unsigned __int64 v65; // rsi
  int v66; // r14d
  int v67; // eax
  unsigned __int8 v68; // bl
  _DWORD *v69; // r9
  __int64 v70; // rdx
  unsigned __int8 v71; // r11
  unsigned __int8 v72; // cl
  struct _KPRCB *v73; // r10
  _DWORD *v74; // r9
  int v75; // eax
  int v76; // ecx
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rbx
  unsigned __int8 v79; // al
  struct _KPRCB *v80; // r9
  _DWORD *v81; // r8
  int v82; // eax
  unsigned __int8 v83; // di
  _DWORD *v84; // r9
  __int64 v85; // rdx
  unsigned __int8 v86; // r11
  unsigned __int8 v87; // cl
  struct _KPRCB *v88; // r10
  _DWORD *v89; // r9
  int v90; // eax
  int v91; // ecx
  unsigned __int64 v92; // rdx
  __int64 v93; // rbx
  unsigned __int8 v94; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v96; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v97; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v98; // [rsp+40h] [rbp-C0h]
  _QWORD *v99; // [rsp+40h] [rbp-C0h]
  _QWORD *v100; // [rsp+48h] [rbp-B8h]
  _QWORD *v101; // [rsp+48h] [rbp-B8h]
  _QWORD *v102; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v103; // [rsp+50h] [rbp-B0h]
  __int128 v104; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v105; // [rsp+68h] [rbp-98h]
  __int64 v106; // [rsp+70h] [rbp-90h]
  __int64 v107; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v108; // [rsp+80h] [rbp-80h]
  unsigned __int64 v109; // [rsp+88h] [rbp-78h]
  unsigned __int64 v110; // [rsp+90h] [rbp-70h]
  __int64 v111; // [rsp+98h] [rbp-68h] BYREF
  __int64 v112; // [rsp+A0h] [rbp-60h]
  __int64 v113; // [rsp+A8h] [rbp-58h]
  __int64 v114; // [rsp+B0h] [rbp-50h]
  _QWORD v115[24]; // [rsp+C0h] [rbp-40h] BYREF

  v110 = a2;
  v112 = a1;
  v5 = a2;
  v106 = a3;
  v7 = *(unsigned int *)(a1 + 44);
  v8 = a3;
  v105 = 0LL;
  v9 = 0LL;
  v107 = 0LL;
  v10 = *(unsigned int *)(a1 + 40);
  v11 = (v7 + *(_QWORD *)(a1 + 32)) & 0xFFF;
  v108 = (unsigned __int64 *)(a1 + 48);
  v111 = v11;
  v12 = (unsigned __int64)(v11 + v10 + 4095) >> 12;
  v98 = v12;
  v104 = 0LL;
  v113 = 0LL;
  v114 = v7 + ((__int64)(v5 << 25) >> 16);
  LODWORD(v109) = 1;
  v13 = 1;
  v14 = 0;
  v15 = 0LL;
  if ( (v5 & 0xFFF) == 0 && !v8 && (v12 & 0x1FF) == 0 )
    v14 = (*(_DWORD *)(a1 + 48) & 0x1FFLL) == 0;
  v96 = 0LL;
  v16 = 0LL;
  if ( v12 )
  {
    v17 = HIDWORD(v105);
    v18 = (_QWORD *)(a1 + 40);
    v19 = 24;
    v102 = (_QWORD *)(a1 + 40);
    while ( 1 )
    {
      v20 = v18[1];
      v100 = v18 + 1;
      if ( v20 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v20 - 0x21FFFFFFFFD8LL), 0x36u) )
        break;
      v21 = 48 * v20 - 0x220000000000LL;
      if ( !*(_WORD *)(v21 + 32) && !dword_140C67ACC )
        MiShowBadMapper(v20, 2uLL);
      if ( (*(_BYTE *)(v21 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(48 * v20 - 0x220000000000LL, a5);
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(a4, 48 * v20 - 0x220000000000LL);
LABEL_10:
      if ( v14 )
      {
        if ( (v96 & 0x1FF) != 0 )
        {
          if ( v20 == *v102 + 1LL && ProtectionPfnCompatible == v19 )
          {
            if ( v13 != (_DWORD)v109 )
              v14 = 0;
          }
          else
          {
            v14 = 0;
          }
        }
        else
        {
          LODWORD(v109) = v13;
          v19 = ProtectionPfnCompatible;
          if ( (v20 & 0x1FF) != 0 )
            v14 = 0;
        }
      }
      v12 = v98;
      v16 = v96 + 1;
      v18 = v100;
      v96 = v16;
      v102 = v100;
      if ( v16 >= v98 )
      {
        v5 = v110;
        v11 = v111;
        v8 = v106;
        goto LABEL_13;
      }
    }
    if ( !v15 )
    {
      if ( !v17 || v20 < (unsigned __int64)v104 || v20 > *((_QWORD *)&v104 + 1) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 2 )
            LODWORD(v36) = 4;
          else
            v36 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v36;
        }
        MiIoSpaceGetBounds((__int64)&v104, v20);
        if ( KiIrqlFlags )
        {
          v37 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v39 = CurrentPrcb->SchedulerAssist;
            v40 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v41 = (v40 & v39[5]) == 0;
            v39[5] &= v40;
            if ( v41 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v12 = v98;
            }
          }
        }
        __writecr8(CurrentIrql);
        v17 = HIDWORD(v105);
        v9 = v107;
        v18 = v102;
        v16 = v96;
      }
      if ( v17 != 3 )
      {
        v13 = v105;
        goto LABEL_66;
      }
      v42 = v12 - v16;
      v15 = 1LL;
      if ( v12 - v16 > 1 )
      {
        v43 = v42 - 1;
        v44 = v18 + 2;
        if ( v42 != 1 )
        {
          do
          {
            v45 = *v44;
            if ( *v44 != *(v44 - 1) + 1
              || (v45 & 0x1FF) == 0
              || v45 <= qword_140C65820 && _bittest64((const signed __int64 *)(48 * v45 - 0x21FFFFFFFFD8LL), 0x36u) )
            {
              break;
            }
            ++v15;
            ++v44;
            --v43;
          }
          while ( v43 );
          v17 = HIDWORD(v105);
        }
      }
      if ( (int)MiReferenceIoPages(1, v20, v15, a5, 0LL, &v107) < 0 )
      {
        v14 = 0;
        v15 = 1LL;
      }
      v9 = v107;
    }
    v46 = (v20 & ((1LL << ((unsigned __int8)dword_140C65760 - 12)) - 1)) - *(_QWORD *)(v9 + 24);
    v13 = (*(_DWORD *)(v9 + 4LL * ((unsigned int)(2 * v46) >> 5) + 44) >> ((2 * v46) & 0x1F)) & 3;
    --v15;
LABEL_66:
    ProtectionPfnCompatible = a4 & 7;
    if ( v13 )
    {
      if ( v13 == 2 )
        ProtectionPfnCompatible |= 0x18u;
    }
    else
    {
      ProtectionPfnCompatible |= 0x10u;
    }
    goto LABEL_10;
  }
LABEL_13:
  HIDWORD(v105) = 0;
  if ( !v14 )
  {
    v23 = 0LL;
    if ( v8 )
      v24 = MiLockWorkingSetShared(v8);
    else
      v24 = 17;
    v25 = (unsigned __int64 *)((char *)v108 - v5);
    v108 = (unsigned __int64 *)((char *)v108 - v5);
    while ( 1 )
    {
      if ( v24 != 17 )
      {
        if ( !v23 )
          goto LABEL_161;
        if ( (v5 & 0xFFF) == 0 )
          break;
      }
LABEL_18:
      v26 = *(unsigned __int64 *)((char *)v25 + v5);
      v27 = 0;
      if ( v26 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v26 - 0x21FFFFFFFFD8LL), 0x36u) )
      {
        if ( !HIDWORD(v105) || v26 < (unsigned __int64)v104 || v26 > *((_QWORD *)&v104 + 1) )
        {
          if ( v24 == 17 )
          {
            v83 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v83 <= 0xFu )
            {
              v84 = KeGetCurrentPrcb()->SchedulerAssist;
              if ( v83 == 2 )
                LODWORD(v85) = 4;
              else
                v85 = (-1LL << (v83 + 1)) & 4;
              v84[5] |= v85;
            }
          }
          else
          {
            v83 = 17;
          }
          MiIoSpaceGetBounds((__int64)&v104, v26);
          if ( v83 != 17 )
          {
            if ( KiIrqlFlags )
            {
              v87 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v87 <= 0xFu && v83 <= 0xFu && v87 >= v86 )
              {
                v88 = KeGetCurrentPrcb();
                v89 = v88->SchedulerAssist;
                v90 = ~(unsigned __int16)(-1LL << (v83 + 1));
                v41 = (v90 & v89[5]) == 0;
                v89[5] &= v90;
                if ( v41 )
                  KiRemoveSystemWorkPriorityKick(v88);
              }
            }
            __writecr8(v83);
          }
        }
        if ( HIDWORD(v105) != 3 )
        {
          v91 = v105;
          goto LABEL_187;
        }
        v91 = MiLookupIoPageNode(v26);
        if ( v91 == 3 )
        {
          v91 = a5;
LABEL_187:
          v27 = 1;
        }
        v28 = a4 & 7;
        if ( v91 )
        {
          if ( v91 == 2 )
            v28 |= 0x18u;
        }
        else
        {
          v28 |= 0x10u;
        }
        goto LABEL_21;
      }
      v28 = MiMakeProtectionPfnCompatible(a4, 48 * v26 - 0x220000000000LL);
LABEL_21:
      ValidPte = MiMakeValidPte(v5, v26, v28 | 0xA0000000);
      if ( v27 )
        ValidPte |= 0x200uLL;
      v8 = v106;
      v25 = v108;
      *(_QWORD *)v5 = ValidPte;
      v5 += 8LL;
      if ( !--v98 )
      {
        if ( v24 != 17 )
        {
          if ( v23 )
          {
            v92 = v23;
            v93 = v8;
            MiUnlockPageTableInternal(v8, v92);
          }
          else
          {
            v93 = v8;
          }
          MiUnlockWorkingSetShared(v93, v24);
        }
        goto LABEL_25;
      }
    }
    MiUnlockPageTableInternal(v8, v23);
LABEL_161:
    v23 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v8, v23, 0);
    goto LABEL_18;
  }
  memset(v115, 0, 0xB8uLL);
  v47 = 0LL;
  v101 = 0LL;
  v48 = 0LL;
  v99 = 0LL;
  v49 = (v11 + (unsigned __int64)*(unsigned int *)(v112 + 40) + 4095) >> 21;
  v50 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v103 = 0LL;
  v51 = 0LL;
  v52 = v50 + 8 * v49;
  v109 = v52;
  if ( v8 )
    v53 = MiLockWorkingSetShared(v8);
  else
    v53 = 17;
  v94 = v53;
  if ( v50 >= v52 )
    goto LABEL_147;
  do
  {
    if ( v53 != 17 )
    {
      v51 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v103 = v51;
      MiLockPageTableInternal(v8, v51, 0);
    }
    v54 = 512 - ((v50 >> 3) & 0x1FF);
    if ( v54 > (__int64)(v52 - v50) >> 3 )
      v54 = (__int64)(v52 - v50) >> 3;
    v110 = v54;
    v55 = 8 * v54;
    v56 = 8 * v54 + v50;
    v97 = v56;
    if ( v50 < v56 )
    {
      v57 = v99;
      v58 = 8 * v54 + v50;
      v59 = v101;
      while ( 1 )
      {
        v60 = ZeroPte;
        v111 = MI_READ_PTE_LOCK_FREE(v50);
        v61 = 0;
        if ( MiPteInShadowRange(v50) )
        {
          if ( MiPteHasShadow() )
          {
            v61 = 1;
            if ( !HIBYTE(word_140C6697C) )
              goto LABEL_95;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_95:
            if ( (ZeroPte & 1) != 0 )
              v60 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v50 = v60;
        if ( v61 )
          MiWritePteShadow(v50, v60, v62);
        v63 = (_QWORD *)(48
                       * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v111) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL);
        if ( !v57 )
          v57 = v63;
        v50 += 8LL;
        *v63 = v59;
        v59 = v63;
        if ( v50 >= v58 )
        {
          v54 = v110;
          v51 = v103;
          v56 = v97;
          v99 = v57;
          v55 = 8 * v110;
          v101 = v63;
          break;
        }
      }
    }
    v115[1] = 20LL;
    v50 -= v55;
    LODWORD(v115[0]) = 0;
    WORD2(v115[0]) = 0;
    v115[2] = 0LL;
    v115[3] = 0LL;
    MiInsertTbFlushEntry((__int64)v115, (__int64)((v50 << 25) - v113) >> 16, v54, 0);
    MiFlushTbList((int *)v115);
    if ( v50 >= v56 )
      goto LABEL_143;
    v64 = v108;
    do
    {
      v65 = *v64;
      v66 = 0;
      if ( *v64 <= qword_140C65820 && _bittest64((const signed __int64 *)(48 * v65 - 0x21FFFFFFFFD8LL), 0x36u) )
      {
        v67 = MiMakeProtectionPfnCompatible(a4, 48 * v65 - 0x220000000000LL);
        goto LABEL_139;
      }
      if ( !HIDWORD(v105) || v65 < (unsigned __int64)v104 || v65 > *((_QWORD *)&v104 + 1) )
      {
        if ( v94 == 17 )
        {
          v68 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v68 <= 0xFu )
          {
            v69 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v68 == 2 )
              LODWORD(v70) = 4;
            else
              v70 = (-1LL << (v68 + 1)) & 4;
            v69[5] |= v70;
          }
        }
        else
        {
          v68 = 17;
        }
        MiIoSpaceGetBounds((__int64)&v104, v65);
        if ( v68 != 17 )
        {
          if ( KiIrqlFlags )
          {
            v72 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v72 <= 0xFu && v68 <= 0xFu && v72 >= v71 )
            {
              v73 = KeGetCurrentPrcb();
              v74 = v73->SchedulerAssist;
              v75 = ~(unsigned __int16)(-1LL << (v68 + 1));
              v41 = (v75 & v74[5]) == 0;
              v74[5] &= v75;
              if ( v41 )
                KiRemoveSystemWorkPriorityKick(v73);
            }
          }
          __writecr8(v68);
        }
        v56 = v97;
      }
      if ( HIDWORD(v105) == 3 )
      {
        v76 = MiLookupIoPageNode(v65);
        if ( v76 != 3 )
          goto LABEL_135;
        v76 = a5;
      }
      else
      {
        v76 = v105;
      }
      v66 = 1;
LABEL_135:
      v67 = a4 & 7;
      if ( v76 )
      {
        if ( v76 == 2 )
          v67 |= 0x18u;
      }
      else
      {
        v67 |= 0x10u;
      }
LABEL_139:
      v77 = MiMakeValidPte(v50, v65, v67 | 0xA4000000);
      if ( v66 )
        v77 |= 0x200uLL;
      *(_QWORD *)v50 = v77;
      v64 += 512;
      v50 += 8LL;
    }
    while ( v50 < v56 );
    v51 = v103;
    v108 = v64;
LABEL_143:
    v8 = v106;
    if ( v51 )
      MiUnlockPageTableInternal(v106, v51);
    v52 = v109;
    v53 = v94;
  }
  while ( v50 < v109 );
  v48 = v99;
  v47 = (__int64)v101;
LABEL_147:
  if ( v94 != 17 )
    MiUnlockWorkingSetShared(v8, v94);
  v78 = ExAcquireSpinLockExclusive(&dword_140C68140);
  *v48 = qword_140C68150;
  qword_140C68150 = v47;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68140);
  if ( KiIrqlFlags )
  {
    v79 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v79 <= 0xFu && (unsigned __int8)v78 <= 0xFu && v79 >= 2u )
    {
      v80 = KeGetCurrentPrcb();
      v81 = v80->SchedulerAssist;
      v82 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v78 + 1));
      v41 = (v82 & v81[5]) == 0;
      v81[5] &= v82;
      if ( v41 )
        KiRemoveSystemWorkPriorityKick(v80);
    }
  }
  __writecr8(v78);
LABEL_25:
  v30 = v112;
  v31 = v114;
  v32 = *(_WORD *)(v112 + 10) | 1;
  *(_QWORD *)(v112 + 24) = v114;
  *(_WORD *)(v30 + 10) = v32;
  if ( (v32 & 0x10) != 0 )
    *(_WORD *)(v30 + 10) = v32 | 0x20;
  return v31;
}
