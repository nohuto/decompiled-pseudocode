__int64 MiResolvePageFileFault(unsigned __int64 *a1, unsigned __int64 a2, ...)
{
  unsigned __int64 v3; // r15
  unsigned int v4; // r14d
  unsigned __int64 v5; // rdi
  __int64 v7; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // rcx
  char v14; // r12
  unsigned __int64 v15; // r15
  __int64 v16; // r12
  int v17; // eax
  int SystemRegionType; // ecx
  __int64 v19; // rax
  _QWORD *v20; // r12
  unsigned __int16 *v21; // rcx
  unsigned __int64 v22; // r15
  _QWORD *v23; // rax
  int v24; // r8d
  bool v25; // zf
  unsigned int v26; // edi
  __int64 Process; // r13
  __int64 v28; // rax
  int v29; // eax
  __int64 **v30; // r9
  int v31; // r15d
  unsigned __int64 v32; // r11
  unsigned __int64 v33; // r8
  __int64 v34; // rax
  __int64 **v35; // r13
  char v36; // dl
  int v37; // eax
  int v38; // ecx
  int v39; // r14d
  __int64 v40; // rax
  __int64 v41; // r8
  PSLIST_ENTRY v42; // r13
  unsigned int v43; // ebx
  unsigned int v44; // edi
  unsigned __int64 v45; // r8
  unsigned int v46; // r12d
  __int64 **v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // ecx
  __int64 v51; // rbx
  unsigned int PagingFileOffset; // eax
  unsigned int v53; // r12d
  __int64 v54; // rdi
  __int64 updated; // rbx
  unsigned __int64 v56; // rsi
  __int64 v57; // r13
  __int64 v58; // rax
  unsigned __int64 v59; // r12
  unsigned int v60; // ecx
  unsigned __int64 v61; // rbx
  unsigned int v62; // eax
  unsigned int v63; // ecx
  __int64 v64; // rsi
  unsigned int v65; // ebx
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // r9
  int v70; // r10d
  unsigned __int64 v71; // rdx
  __int64 v72; // r11
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // rdi
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rdx
  __int64 v77; // rdi
  unsigned __int64 v78; // rdx
  __int64 v79; // rdx
  unsigned int v80; // r9d
  unsigned int v81; // r11d
  volatile signed __int32 *v82; // rdi
  unsigned __int64 AvailablePagesBelowPriority; // rsi
  unsigned int v84; // r11d
  __int64 v85; // rcx
  __int64 PageChain; // r12
  unsigned int v87; // ecx
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // r9
  unsigned __int64 v91; // rsi
  unsigned __int64 *v92; // r12
  _QWORD *v93; // rbx
  signed __int32 v94; // eax
  __int64 SlabPage; // rax
  __int64 v96; // rsi
  unsigned int v97; // eax
  unsigned __int64 v98; // rdi
  unsigned __int64 v99; // rdx
  unsigned __int64 v100; // r8
  unsigned __int64 v101; // rdx
  __int64 v102; // rdx
  unsigned int v103; // edx
  __int64 v104; // rsi
  struct _SLIST_ENTRY *v105; // r15
  unsigned int v106; // edi
  unsigned __int64 v107; // r10
  unsigned __int64 v108; // rax
  __int64 v109; // r11
  unsigned __int64 v110; // rdx
  __int64 v111; // rcx
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rcx
  struct _SLIST_ENTRY *v114; // rbx
  unsigned int v115; // esi
  unsigned __int64 v116; // rax
  int v117; // edx
  __int64 v118; // rdi
  unsigned __int64 v119; // rdx
  __int64 v120; // rax
  unsigned __int64 v121; // rdi
  __int64 v122; // r15
  char v123; // bl
  __int64 v124; // r9
  __int64 v125; // r8
  int v126; // esi
  __int64 v127; // rax
  unsigned __int64 v128; // rbx
  _QWORD *v129; // rbx
  __int64 v130; // rax
  _QWORD *v131; // rsi
  int v132; // edx
  unsigned int v133; // eax
  __int64 v134; // rbx
  __int64 v135; // r8
  int v136; // ecx
  unsigned __int8 v137; // [rsp+48h] [rbp-C0h]
  char v138; // [rsp+48h] [rbp-C0h]
  char v139; // [rsp+48h] [rbp-C0h]
  unsigned int v140; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v141; // [rsp+50h] [rbp-B8h]
  unsigned int v142; // [rsp+54h] [rbp-B4h]
  __int64 v143; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v144; // [rsp+60h] [rbp-A8h]
  __int64 v145; // [rsp+68h] [rbp-A0h]
  unsigned __int16 *v146; // [rsp+70h] [rbp-98h]
  unsigned __int64 v147; // [rsp+78h] [rbp-90h]
  _QWORD *v148; // [rsp+80h] [rbp-88h]
  __int64 **Address; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v150; // [rsp+90h] [rbp-78h] BYREF
  __int64 v151; // [rsp+98h] [rbp-70h]
  unsigned __int64 v152; // [rsp+A0h] [rbp-68h]
  int v153; // [rsp+A8h] [rbp-60h]
  int v154; // [rsp+ACh] [rbp-5Ch]
  __int64 v155; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v156; // [rsp+B8h] [rbp-50h] BYREF
  PSLIST_ENTRY v157; // [rsp+C0h] [rbp-48h]
  __int64 v158; // [rsp+C8h] [rbp-40h]
  __int64 v159; // [rsp+D0h] [rbp-38h]
  __int64 v160; // [rsp+D8h] [rbp-30h]
  __int64 v161; // [rsp+E0h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E8h] [rbp-20h]
  __int128 v163; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v165; // [rsp+158h] [rbp+50h]
  _SLIST_ENTRY *v167; // [rsp+168h] [rbp+60h] BYREF
  va_list va; // [rsp+168h] [rbp+60h]
  PSLIST_ENTRY *v169; // [rsp+170h] [rbp+68h]
  va_list va1; // [rsp+178h] [rbp+70h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v167 = va_arg(va1, _SLIST_ENTRY *);
  v169 = va_arg(va1, PSLIST_ENTRY *);
  v147 = *a1;
  v161 = 0LL;
  v3 = a1[2];
  v4 = 0;
  v158 = a1[7];
  v160 = 0LL;
  v163 = 0LL;
  v5 = MI_READ_PTE_LOCK_FREE(a2);
  v156 = v5;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v167 )
      MiUnlockProtoPoolPage((__int64)v167, 0x11u);
    return 3221225633LL;
  }
  v7 = (__int64)v167;
  v8 = v156;
  v9 = v5 & 0x800;
  v151 = v9;
  if ( (v5 & 0x800) != 0 )
  {
    if ( qword_140C657C0 )
    {
      if ( (v5 & 0x10) != 0 )
        v5 &= ~0x10uLL;
      else
        v5 &= ~qword_140C657C0;
    }
    v4 = 16;
    v152 = 48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v10 = *(_QWORD *)(v152 + 16);
    LOWORD(v5) = v10;
    v9 = v151;
    v11 = (*(_QWORD *)(v152 + 40) >> 43) & 0x3FFLL;
    v155 = v10;
  }
  else
  {
    v152 = 0LL;
    v10 = v156;
    v155 = v156;
    if ( v167 )
    {
      v12 = (unsigned __int16 *)MiSharedVaToPartition(v158, v147, a2);
      v9 = v151;
      v13 = v12;
      goto LABEL_15;
    }
    v11 = *(unsigned __int16 *)(v158 + 174);
  }
  v13 = *(unsigned __int16 **)(qword_140C67048 + 8 * v11);
LABEL_15:
  v148 = 0LL;
  v14 = v3;
  v157 = 0LL;
  v15 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  v146 = v13;
  v142 = 2;
  v16 = v14 & 1;
  if ( v16 )
  {
    switch ( *(_BYTE *)v15 )
    {
      case 5:
        v17 = *(_DWORD *)(v15 + 56);
        if ( (v17 & 4) != 0
          && ((v17 & 0x10) != 0 || (v5 & 4) == 0 || (unsigned __int16)v5 >> 12 != *((_DWORD *)v13 + 297)) )
        {
          if ( v7 )
            MiUnlockProtoPoolPage(v7, 0x11u);
          return 3221225495LL;
        }
        v148 = 0LL;
        break;
      case 2:
        v148 = (_QWORD *)v15;
        break;
      case 1:
        v148 = (_QWORD *)v15;
        if ( v9 || !(unsigned int)MiGetPagingFileOffset(&v156) )
          return 0LL;
        v142 = 0;
        v4 |= 0x20u;
        v157 = *(PSLIST_ENTRY *)(v15 + 96);
        break;
    }
  }
  SystemRegionType = MiGetSystemRegionType(v147);
  if ( v16 && *(_BYTE *)v15 == 4 )
  {
    v19 = *(_QWORD *)(v15 + 48);
    v142 |= 8u;
    v20 = (_QWORD *)v15;
    LODWORD(v145) = 8;
    v148 = (_QWORD *)v15;
    v21 = *(unsigned __int16 **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v19 + 544) + 1838LL));
    v146 = v21;
LABEL_41:
    v22 = v147;
    goto LABEL_42;
  }
  if ( ((v8 >> 5) & 0x1F) != 0x1F )
  {
    v20 = v148;
    v24 = 0;
    v25 = SystemRegionType == 12;
    v21 = v146;
    if ( v25 )
      v24 = 8;
    LODWORD(v145) = v24;
    goto LABEL_41;
  }
  v22 = v147;
  LODWORD(v145) = 8;
  v23 = MiKernelStackVaToStackNode(v147);
  if ( v23 )
    v21 = *(unsigned __int16 **)(qword_140C67048 + 8LL * *((unsigned __int16 *)v23 + 20));
  else
    v21 = MiSystemPartition;
  v142 |= 8u;
  v20 = v148;
  v146 = v21;
LABEL_42:
  if ( v4 >= 0x20 && (v20[10] & 0x200) != 0 && (v8 & 4) != 0 && (unsigned __int16)v8 >> 12 == *((_DWORD *)v21 + 297) )
  {
    if ( v7 )
      MiUnlockProtoPoolPage(v7, 0x11u);
    return 0LL;
  }
  v26 = 16;
  v153 = 0;
  v141 = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  v144 = a2;
  LODWORD(v143) = 2;
  v140 = 16;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v137 = v153;
    goto LABEL_56;
  }
  v137 = 16;
  v28 = MI_READ_PTE_LOCK_FREE(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( MI_PROTO_FORMAT_COMBINED(v28) )
  {
    v137 = 48;
  }
  else if ( !*(_QWORD *)(Process + 1264) )
  {
    goto LABEL_56;
  }
  v26 = 1;
  v140 = 1;
LABEL_56:
  v159 = (v8 >> 5) & 0x1F;
  Address = (__int64 **)a1[11];
  v29 = MiComputeFaultNode((__int64)a1, 0LL, &Address);
  v30 = Address;
  v31 = v29;
  LODWORD(v150) = v29;
  if ( Address )
  {
    v35 = Address;
  }
  else
  {
    v32 = 0xFFFFF68000000000uLL;
    if ( a2 > 0xFFFFF6BFFFFFFF78uLL || a2 < 0xFFFFF68000000000uLL || !(unsigned int)MiIsStoreProcess(Process) )
    {
      v33 = v147;
      if ( (*(_BYTE *)(v158 + 184) & 7) != 0 )
        goto LABEL_66;
      if ( v147 >= 0xFFFF800000000000uLL )
        goto LABEL_66;
      v34 = *(_QWORD *)(Process + 1680);
      if ( !*(_QWORD *)(v34 + 408) && !*(_QWORD *)(v34 + 416) )
        goto LABEL_66;
    }
    MiLockVadTree(1);
    Address = MiLocateAddress(v147);
    v35 = Address;
    MiUnlockVadTree(1, 0x11u);
    if ( !v35 )
    {
      v33 = v147;
      v30 = 0LL;
      v32 = 0xFFFFF68000000000uLL;
LABEL_66:
      v36 = v137;
LABEL_67:
      v37 = v143;
      goto LABEL_68;
    }
  }
  v40 = *((unsigned int *)v35 + 13);
  LODWORD(v40) = v40 & 0x7FFFFFFF;
  v36 = v137;
  v30 = Address;
  v33 = v147;
  v32 = 0xFFFFF68000000000uLL;
  if ( (v40 | ((unsigned __int64)*((unsigned __int8 *)v35 + 34) << 31)) != 0x7FFFFFFFELL )
    goto LABEL_67;
  v36 = v137 | 0x80;
  v37 = 7;
  v137 |= 0x80u;
  LODWORD(v143) = 7;
LABEL_68:
  if ( v151 )
  {
    v140 = 1;
    LODWORD(v143) = v37 | 1;
    v26 = 1;
  }
  v38 = 0;
  if ( (v10 & 4) != 0 )
    LOBYTE(v38) = (unsigned __int16)v10 >> 12 == *((_DWORD *)v146 + 297);
  v39 = v38 | v4;
  if ( v26 != 1 )
  {
    if ( dword_140C692D8 )
    {
      v140 = 1;
      --dword_140C692D8;
      v26 = 1;
    }
    else if ( v20 )
    {
      if ( (v36 & 0x10) != 0 )
      {
        if ( !v30 )
        {
          MiLockVadTree(1);
          Address = MiLocateAddress(v147);
          MiUnlockVadTree(1, 0x11u);
          v30 = Address;
        }
        v41 = (__int64)v30;
      }
      else
      {
        v41 = 0LL;
      }
      v26 = MiComputeFaultCluster((__int64)v146, v20, v41, v39 & 1);
      v140 = v26;
    }
    else if ( v33 > 0x7FFFFFFEFFFFLL )
    {
      v140 = 1;
      v26 = 1;
      if ( (v36 & 0x10) == 0 && (v33 < v32 || v33 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v26 = 16;
        v39 |= 4u;
        v140 = 16;
      }
    }
  }
  v154 = v39 & 1;
  if ( (v39 & 1) != 0 )
  {
    if ( v26 > *((_DWORD *)v146 + 299) )
      v26 = *((_DWORD *)v146 + 299);
    v140 = v26;
  }
  v157 = MiAllocateInPageSupport(
           a2,
           v142,
           &v140,
           (__int64 *)((unsigned __int64)va & -(__int64)(v167 != 0LL)),
           (__int64)v157);
  v42 = v157;
  if ( !v157 )
  {
    v43 = -1073741670;
LABEL_105:
    if ( v20 )
      *((_BYTE *)v20 + 1) = (v43 == -1073741670) + 1;
    return v43;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v8
    || v151
    && ((*(_BYTE *)(v152 + 34) & 0x28) == 0x28
     || (*(_BYTE *)(v152 + 34) & 0x20) == 0
     || v10 != *(_QWORD *)(v152 + 16)
     || (*(_DWORD *)(*(_QWORD *)v152 + 160LL) & 0x20) != 0) )
  {
    v43 = -1073740748;
    if ( v167 )
      MiUnlockProtoPoolPage((__int64)v167, 0x11u);
    MiFreeInPageSupportBlock(v42);
    goto LABEL_105;
  }
  if ( v20 && *(_BYTE *)v20 == 1 )
    MiSetInPagePrefetchPriority((__int64)v20, (__int64)v42);
  v44 = v140;
  if ( v140 <= 1 || !(unsigned int)MiSufficientAvailablePages((__int64)v146, 0x140uLL) )
    goto LABEL_163;
  v45 = a2;
  v46 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
  v142 = ((unsigned int)a2 >> 3) & 0x1FF;
  if ( (v137 & 0x10) != 0 )
  {
    v47 = Address;
    if ( (Address
       || (MiLockVadTree(1), Address = MiLocateAddress(v147), MiUnlockVadTree(1, 0x11u), (v47 = Address) != 0LL))
      && ((_DWORD)v47[6] & 0x200000) == 0
      && (MiGetProtoPteAddress((__int64)v47, v147 >> 12, 4, &v161), v161)
      && (*(_BYTE *)(v161 + 34) & 2) == 0 )
    {
      v48 = *(_QWORD *)(v161 + 8);
      v45 = a2;
      v49 = (__int64)(a2 - v48) >> 3;
      v50 = ((__int64)(v48 + 8LL * *(unsigned int *)(v161 + 44) - a2) >> 3) - 1;
      if ( v50 >= v46 )
        v50 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
      v46 = v50;
      if ( (unsigned int)v49 >= v142 )
        LODWORD(v49) = v142;
      v142 = v49;
    }
    else
    {
      v45 = a2;
      v44 = 1;
      v140 = 1;
    }
  }
  if ( v148 || (v39 & 4) != 0 )
  {
    v142 = 0;
    if ( !v46 )
      v44 = 1;
    v140 = v44;
  }
  if ( v44 <= 1 )
  {
    v20 = v148;
LABEL_163:
    v71 = v141;
    v73 = v144;
    goto LABEL_164;
  }
  v155 = v8;
  v141 = v44 - 1;
  v140 = v44 - 1;
  v51 = v44 - 1;
  v152 = v45 + 8;
  if ( v46 <= v44 - 1 )
    v51 = v46;
  PagingFileOffset = MiGetPagingFileOffset(&v155);
  v53 = -3 - PagingFileOffset;
  v151 = PagingFileOffset;
  if ( (unsigned __int64)PagingFileOffset + v51 < 0xFFFFFFFE )
    v53 = v51;
  if ( v154 || v148 )
    v39 |= 8u;
  v54 = v8 & 0xFFFFFFFFFC00FF1DuLL;
  updated = v8 & 0xFFFFFFFFFC00FF1DuLL;
  if ( v53 )
  {
    v56 = v152;
    v57 = v151;
    do
    {
      updated = MiUpdatePageFileHighInPte(updated, ++v57);
      v58 = MI_READ_PTE_LOCK_FREE(v56);
      if ( (v58 & 0x3E0) != 0 && (v58 & 0xFFFFFFFFFC00FF1DuLL) == updated )
      {
        v144 = v56;
      }
      else if ( (v39 & 8) != 0 )
      {
        break;
      }
      v56 += 8LL;
      --v53;
    }
    while ( v53 );
    v8 = v156;
    v31 = v150;
    v42 = v157;
  }
  v59 = a2;
  v60 = v141 - ((__int64)(v144 - a2) >> 3);
  v144 = (__int64)(v144 - a2) >> 3;
  v155 = v8;
  if ( v142 <= v60 )
    v60 = v142;
  v61 = v60;
  v152 = a2;
  v62 = MiGetPagingFileOffset(&v155);
  v151 = v62;
  v63 = v62 - 1;
  if ( v61 <= (unsigned __int64)v62 - 1 )
    v63 = v61;
  if ( v63 )
  {
    v64 = v151;
    v65 = v63;
    do
    {
      --v64;
      v59 -= 8LL;
      v54 = MiUpdatePageFileHighInPte(v54, v64);
      v66 = MI_READ_PTE_LOCK_FREE(v59);
      if ( (v66 & 0x3E0) != 0 && (v66 & 0xFFFFFFFFFC00FF1DuLL) == v54 )
      {
        v152 = v59;
      }
      else if ( (v39 & 8) != 0 )
      {
        break;
      }
      --v65;
    }
    while ( v65 );
    v8 = v156;
    v42 = v157;
  }
  v67 = v8;
  if ( qword_140C657C0 && (v8 & 0x10) == 0 )
    v67 = v8 & ~qword_140C657C0;
  v68 = MiUpdatePageFileHighInPte(v8, HIDWORD(v67) - (unsigned int)((__int64)(a2 - v152) >> 3));
  v20 = v148;
  v71 = (unsigned int)(v70 + v144 + 1);
  v155 = v68;
  v141 = v70 + v144 + 1;
  v73 = v72 - 8 * v69;
  v10 = v68;
  v144 = v73;
LABEL_164:
  v74 = (unsigned int)v71;
  v75 = MiObtainFaultCharges(v146, v71, v143);
  v152 = v75;
  if ( v74 <= v75 )
  {
    v81 = v141;
  }
  else
  {
    v76 = v10;
    if ( qword_140C657C0 && (v10 & 0x10) == 0 )
      v76 = v10 & ~qword_140C657C0;
    v77 = v74 - v75;
    v78 = HIDWORD(v76);
    if ( v73 + 8 * v77 <= a2 )
    {
      v79 = v77 + v78;
      v144 = v73 + 8 * v77;
    }
    else
    {
      v144 = a2;
      v79 = ((__int64)(a2 - v73) >> 3) + v78;
    }
    v10 = MiUpdatePageFileHighInPte(v10, v79);
    v155 = v10;
    v81 = v80;
    v141 = v80;
  }
  if ( v20 && *(_BYTE *)v20 == 1 )
  {
    v82 = (volatile signed __int32 *)v146;
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v146, ((*((_DWORD *)v20 + 20) >> 3) & 7u) + 1);
    v150 = AvailablePagesBelowPriority;
    v151 = v84;
    if ( AvailablePagesBelowPriority > v84 )
    {
      AvailablePagesBelowPriority = v84;
      v150 = v84;
      v151 = v84;
    }
  }
  else
  {
    v82 = (volatile signed __int32 *)v146;
    AvailablePagesBelowPriority = v81;
    v150 = v81;
    v151 = v81;
  }
  if ( !AvailablePagesBelowPriority )
  {
    v96 = (__int64)v146;
LABEL_309:
    v92 = a1;
    goto LABEL_310;
  }
  if ( !v20
    || *(_BYTE *)v20 != 1
    || (v85 = v20[11]) == 0
    || (_DWORD)v145
    || v147 > 0x7FFFFFFEFFFFLL
    || v167
    || *(volatile signed __int32 **)(qword_140C67048 + 8 * ((*(_QWORD *)(v85 + 40) >> 43) & 0x3FFLL)) != v82
    || *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v85 + 0x220000000000LL) >> 4)) + 2) != v31 - 1
    || (PageChain = v20[11],
        *(unsigned __int8 *)(PageChain + 34) >> 6 != (unsigned int)MiProtectionToCacheAttribute(v159)) )
  {
    if ( (v137 & 0x20) == 0 )
      goto LABEL_204;
    if ( v82 == *(volatile signed __int32 **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v158 + 174))
      || v82 == (volatile signed __int32 *)MiSystemPartition )
    {
      MiInitializePageColorBase(v158, v31, (__int64)&v163);
      v94 = _InterlockedExchangeAdd((volatile signed __int32 *)v163, 1u);
      v92 = a1;
      v93 = a1 + 15;
      SlabPage = MiGetSlabPage(
                   (__int64)v82,
                   5u,
                   HIDWORD(v163) | (unsigned int)v94 & DWORD2(v163),
                   4LL,
                   (__int64 *)a1 + 15);
      if ( SlabPage != -1 )
      {
        PageChain = 48 * SlabPage - 0x220000000000LL;
        MiSetPfnBlink(PageChain, 0x3FFFFFFFFFLL, 0);
        v91 = v150;
        v10 = v155;
        goto LABEL_203;
      }
    }
    else
    {
      v92 = a1;
      v93 = a1 + 15;
    }
    if ( *v93 )
    {
      v92[16] = 1LL;
      v96 = (__int64)v146;
LABEL_310:
      if ( v167 )
        MiUnlockProtoPoolPage((__int64)v167, 0x11u);
      MiFreeInPageSupportBlock(v42);
      if ( v148 )
        *((_BYTE *)v148 + 1) = 2 - (v92[15] != 0);
      MiReturnFaultCharges(v96, v152, (struct _KPRCB *)(unsigned int)v143);
      return 3221225495LL;
    }
    _InterlockedAdd(v82 + 4229, 1u);
    v10 = v155;
    goto LABEL_204;
  }
  v87 = 0;
  v88 = PageChain;
  while ( 1 )
  {
    ++v87;
    v89 = *(_QWORD *)(v88 + 24) & 0xFFFFFFFFFFLL;
    v90 = v88;
    if ( v89 == 0x3FFFFFFFFFLL )
      break;
    v88 = 48 * v89 - 0x220000000000LL;
    if ( v87 >= AvailablePagesBelowPriority )
      goto LABEL_193;
  }
  v88 = 0LL;
LABEL_193:
  v91 = v87;
  v150 = v87;
  MiSetPfnBlink(v90, 0x3FFFFFFFFFLL, 0);
  v148[11] = v88;
LABEL_203:
  if ( !PageChain )
  {
LABEL_204:
    v97 = MiProtectionToCacheAttribute(v159);
    v98 = v144;
    v96 = (__int64)v146;
    PageChain = MiGetPageChain(
                  (__int64)v146,
                  v158,
                  (__int64)(v144 << 25) >> 16,
                  v31,
                  v97,
                  v145,
                  0xFFFFFFFFFFFFFFFFuLL,
                  &v150);
    if ( PageChain )
    {
      v91 = v150;
      goto LABEL_207;
    }
    goto LABEL_309;
  }
  v98 = v144;
LABEL_207:
  if ( v91 == v151 )
  {
    v103 = v141;
  }
  else
  {
    if ( v98 + 8 * v91 <= a2 )
    {
      v99 = v10;
      if ( qword_140C657C0 && (v10 & 0x10) == 0 )
        v99 = v10 & ~qword_140C657C0;
      v100 = v151 - v91;
      v101 = HIDWORD(v99);
      if ( v98 + 8 * (v151 - v91) > a2 )
      {
        v144 = a2;
        v102 = ((__int64)(a2 - v98) >> 3) + v101;
      }
      else
      {
        v102 = v100 + v101;
        v144 = v98 + 8 * v100;
      }
      v10 = MiUpdatePageFileHighInPte(v10, v102);
    }
    v103 = v91;
  }
  v104 = (__int64)&v42[17];
  v105 = v42 + 20;
  v106 = 0;
  LODWORD(v150) = LODWORD(v42[12].Next) >> 9;
  LODWORD(v145) = 0;
  v165 = 0;
  while ( 2 )
  {
    v107 = v144;
    while ( 1 )
    {
      v141 = v103;
      v108 = MI_READ_PTE_LOCK_FREE(v107);
      v109 = 1LL;
      if ( (v39 & 0x10) != 0
        || (v108 & 1) == 0
        && (v108 & 0x400) == 0
        && (v108 & 0x800) == 0
        && ((v110 = v108, !qword_140C657C0)
          ? (v111 = v10)
          : ((v108 & 0x10) != 0 ? (v110 = v108 & 0xFFFFFFFFFFFFFFEFuLL) : (v110 = v108 & ~qword_140C657C0),
             (v10 & 0x10) != 0 ? (v111 = v10) : (v111 = v10 & ~qword_140C657C0)),
            ((v110 ^ v111) & 0xFFFFFFFF00000000uLL) == 0
         && (v108 & 4) != 0
         && (v112 = v108 >> 12, (((unsigned __int8)v112 ^ (unsigned __int8)(v10 >> 12)) & 0xF) == 0)
         && ((v112 & 0xF) == *((_DWORD *)v146 + 297)) == (v39 & 1)) )
      {
        ++v165;
        v116 = v144;
        v105->Next = (_SLIST_ENTRY *)(0xAAAAAAAAAAAAAAABuLL * ((PageChain + 0x220000000000LL) >> 4));
        if ( v116 == a2 )
          LOBYTE(v117) = v150;
        else
          v117 = LODWORD(v42[12].Next) >> 12;
        MiLockSetPfnPriority(PageChain, v117 & 7);
        v118 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFFLL;
        MiSetPfnBlink(PageChain, 0LL, 0);
        if ( v118 == 0x3FFFFFFFFFLL )
          PageChain = 0LL;
        else
          PageChain = 48 * v118 - 0x220000000000LL;
        v106 = v145;
        v109 = 1LL;
        goto LABEL_253;
      }
      if ( (v39 & 8) != 0 )
        break;
      v39 |= 2u;
      v105->Next = (_SLIST_ENTRY *)qword_140C69388;
LABEL_253:
      v105 = (struct _SLIST_ENTRY *)((char *)v105 + 8);
      if ( v148 )
        MiAdvanceFaultList(v148);
      v119 = v10;
      v144 += 8LL;
      if ( qword_140C657C0 && (v10 & 0x10) == 0 )
        v119 = v10 & ~qword_140C657C0;
      v120 = MiUpdatePageFileHighInPte(v10, v109 + HIDWORD(v119));
      v103 = v141;
      v106 += v109;
      LODWORD(v145) = v106;
      v10 = v120;
      if ( v106 >= v141 )
      {
        v113 = a2;
        goto LABEL_260;
      }
    }
    v107 = v144;
    v113 = a2;
    if ( v144 <= a2 )
    {
      v105 = v42 + 20;
      v114 = v42 + 20;
      if ( v106 )
      {
        v115 = v165;
        do
        {
          if ( v114->Next != (_SLIST_ENTRY *)qword_140C69388 )
          {
            MiReleaseFreshPage(48 * (__int64)v114->Next - 0x220000000000LL);
            --v115;
          }
          v114 = (struct _SLIST_ENTRY *)((char *)v114 + 8);
          --v106;
        }
        while ( v106 );
        v42 = v157;
        v113 = a2;
        v165 = v115;
        LODWORD(v145) = 0;
        v104 = (__int64)&v157[17];
      }
      v39 &= ~2u;
      v144 = v113;
      v10 = MI_READ_PTE_LOCK_FREE(v113);
      v103 = 1;
      continue;
    }
    break;
  }
  v103 = v106;
  v141 = v106;
LABEL_260:
  v121 = v107 - 8LL * v103;
  v122 = *((_QWORD *)&v42[20].Next + ((__int64)(v113 - v121) >> 3));
  v123 = v109 & (v137 >> 4);
  if ( v123 )
    v124 = 0LL;
  else
    v124 = (__int64)(v121 << 25) >> 16;
  *(_QWORD *)v104 = 0LL;
  v125 = v103 << 12;
  *(_DWORD *)(v104 + 40) = v125;
  *(_QWORD *)(v104 + 32) = v124 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v104 + 44) = v124 & 0xFFF;
  *(_WORD *)(v104 + 10) = 66;
  *(_WORD *)(v104 + 8) = 8 * ((((unsigned __int64)(v124 & 0xFFF) + v125 + 4095) >> 12) + 6);
  if ( (v39 & 2) != 0 )
  {
    v127 = MiReduceMdl(v104);
    if ( v127 )
    {
      v121 += 8 * v127;
      if ( !v123 )
        *(_QWORD *)(v104 + 32) += v127 << 12;
    }
    v126 = *(_DWORD *)(v104 + 40) >> 12;
  }
  else
  {
    *(_WORD *)(v104 + 10) = 16450;
    v126 = v141;
  }
  v128 = MI_READ_PTE_LOCK_FREE(v121);
  v156 = v128;
  if ( v126 == 1 )
    v138 = v137 & 0xF8 | (LODWORD(v42[12].Next) >> 9) & 7 | 8;
  else
    v138 = v137 & 0xDF;
  LOBYTE(v153) = v138;
  MiInitializeReadInProgressPfn(v147, &v42[20].Next, v126, v121, (__int64)v42, v138);
  if ( (v39 & 0x10) != 0 )
  {
    if ( qword_140C657C0 )
    {
      if ( (v128 & 0x10) != 0 )
        v128 &= ~0x10uLL;
      else
        v128 &= ~qword_140C657C0;
    }
    v129 = (_QWORD *)(48 * ((v128 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    MiFlowThroughInsertNode((__int64)v42, v129);
    v128 = v129[2];
    v156 = v128;
  }
  v139 = v138 & 0x10;
  if ( v139 )
    MiObtainProtoReference((__int64)v167, 0);
  v130 = MI_READ_PTE_LOCK_FREE(a2);
  *((_QWORD *)&v42[14].Next + 1) = a2;
  v131 = v148;
  *((_QWORD *)&v42[10].Next + 1) = v130;
  if ( v131 )
  {
    if ( *(_BYTE *)v131 == 1 )
    {
      v132 = LODWORD(v42[12].Next) | 8;
      LODWORD(v42[12].Next) = v132;
      if ( (v131[10] & 0x2000) != 0 )
        LODWORD(v42[12].Next) = v132 | 0x20;
    }
  }
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    LODWORD(v42[12].Next) |= 0x80u;
  if ( Address && MiVadPageSizes[(*((_DWORD *)Address + 12) >> 19) & 3] == 16 )
    LODWORD(v42[12].Next) |= 0x100000u;
  if ( v167 )
    MiUnlockProtoPoolPage((__int64)v167, 0x11u);
  MiFreePageChain(PageChain);
  if ( v165 != v152 )
    MiReturnFaultCharges((__int64)v146, v152 - v165, (struct _KPRCB *)(unsigned int)v143);
  *v169 = v42;
  v133 = MiGetPagingFileOffset(&v156);
  v134 = (unsigned __int16)v128 >> 12;
  LODWORD(v160) = v133;
  v135 = *(_QWORD *)&v146[4 * v134 + 8528];
  if ( v139 )
    v42[10].Next = v167;
  if ( (v39 & 1) != 0 )
  {
    LODWORD(v42[12].Next) |= 0x100u;
    v42[6].Next = (_SLIST_ENTRY *)(v133 | (unsigned __int64)(v134 << 60));
  }
  else
  {
    HIDWORD(v160) = 0;
    v42[6].Next = (_SLIST_ENTRY *)((unsigned __int64)(unsigned int)v160 << 12);
  }
  v136 = LODWORD(v42[12].Next) | 0x200000;
  *((_QWORD *)&v42[12].Next + 1) = v135;
  LODWORD(v42[12].Next) = v136;
  if ( *(_QWORD *)(v135 + 216)
    && (!v131 || *(_BYTE *)v131 != 1 || (v131[10] & 0x1000) == 0 || (dword_140D1D1D0 & 1) != 0) )
  {
    LODWORD(v42[12].Next) = v136 | 0x400000;
  }
  v42[15].Next = (_SLIST_ENTRY *)v121;
  *((_QWORD *)&v42[15].Next + 1) = 48 * v122 - 0x220000000000LL;
  if ( _bittest16((const signed __int16 *)(v135 + 204), 0xBu) )
    MiReadFromMemoryPagefile(v135, (__int64)v42);
  return 3221435187LL;
}
