__int64 __fastcall MiUnlinkPageFromListEx(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  __int64 v2; // r9
  const signed __int64 *v3; // r15
  ULONG_PTR v4; // rdi
  int v5; // ebx
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // r12
  char v9; // cl
  __int64 SlabAllocatorStandbyList; // r14
  int v11; // r13d
  unsigned int v12; // ebx
  ULONG_PTR v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // cl
  char v17; // al
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  char v22; // al
  int v23; // eax
  char v24; // al
  int v25; // eax
  volatile signed __int64 *v26; // r11
  signed __int64 v27; // rax
  unsigned int v28; // r12d
  __int64 v29; // rcx
  int v30; // r9d
  ULONG_PTR v31; // r8
  char *v32; // rax
  char v33; // al
  int v34; // eax
  unsigned int v35; // eax
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // r10
  int v38; // ecx
  signed __int64 v39; // rax
  unsigned __int64 v40; // r11
  unsigned __int64 v41; // r10
  __int64 v42; // r9
  signed __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // r11
  signed __int64 v46; // rax
  volatile signed __int32 *v47; // rcx
  unsigned __int64 v48; // rdi
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r13
  __int64 v54; // rax
  char v55; // cl
  int v56; // eax
  __int64 v57; // r12
  unsigned int v58; // eax
  int v59; // r15d
  _QWORD *StandbyLookaside; // rax
  int v61; // ecx
  unsigned int v62; // r10d
  unsigned int v63; // r12d
  unsigned int v64; // ebx
  int v65; // r10d
  int v66; // ecx
  volatile signed __int64 *v67; // r12
  __int64 v68; // rdx
  unsigned int PfnPriority; // eax
  int v70; // r8d
  ULONG_PTR v71; // rdx
  unsigned int v72; // eax
  int v73; // r8d
  ULONG_PTR v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  signed __int64 v78; // rdx
  ULONG_PTR v79; // r10
  volatile signed __int32 *v80; // r9
  int v81; // esi
  unsigned __int64 v82; // rcx
  __int64 v83; // rax
  int v84; // ecx
  unsigned int v85; // [rsp+30h] [rbp-1A8h]
  unsigned int v86; // [rsp+34h] [rbp-1A4h]
  int v87; // [rsp+38h] [rbp-1A0h]
  unsigned int v88; // [rsp+38h] [rbp-1A0h]
  unsigned int v89; // [rsp+40h] [rbp-198h]
  unsigned __int64 v90; // [rsp+40h] [rbp-198h]
  unsigned int v91; // [rsp+48h] [rbp-190h]
  int v92; // [rsp+4Ch] [rbp-18Ch]
  const signed __int64 *v93; // [rsp+58h] [rbp-180h]
  ULONG_PTR v94; // [rsp+60h] [rbp-178h]
  _QWORD *v95; // [rsp+60h] [rbp-178h]
  unsigned __int64 v97; // [rsp+68h] [rbp-170h]
  __int64 v98; // [rsp+70h] [rbp-168h]
  __int64 v99; // [rsp+78h] [rbp-160h]
  __int64 v100; // [rsp+80h] [rbp-158h] BYREF
  unsigned int v101; // [rsp+88h] [rbp-150h]
  int v102; // [rsp+8Ch] [rbp-14Ch]
  __int64 v103; // [rsp+90h] [rbp-148h]
  int v104; // [rsp+98h] [rbp-140h]
  unsigned int v105; // [rsp+9Ch] [rbp-13Ch]
  __int64 v106; // [rsp+A0h] [rbp-138h]
  __int64 v107; // [rsp+A8h] [rbp-130h]
  __int64 v108; // [rsp+B0h] [rbp-128h]
  __int64 v109; // [rsp+B8h] [rbp-120h]
  __int128 v110; // [rsp+C0h] [rbp-118h]
  __int128 v111; // [rsp+D0h] [rbp-108h]
  __int128 v112; // [rsp+E0h] [rbp-F8h]
  __int128 v113; // [rsp+F0h] [rbp-E8h]
  __int128 v114; // [rsp+100h] [rbp-D8h]
  __int128 v115; // [rsp+110h] [rbp-C8h]
  __int128 v116; // [rsp+120h] [rbp-B8h]
  __int128 v117; // [rsp+130h] [rbp-A8h] BYREF
  __int128 v118; // [rsp+140h] [rbp-98h]
  __int128 v119; // [rsp+150h] [rbp-88h]
  __int128 v120; // [rsp+160h] [rbp-78h]
  __int128 v121; // [rsp+170h] [rbp-68h]
  __int128 v122; // [rsp+180h] [rbp-58h]
  __int64 v123; // [rsp+190h] [rbp-48h]
  void *retaddr; // [rsp+1D8h] [rbp+0h]

  v2 = 0LL;
  v3 = (const signed __int64 *)(BugCheckParameter2 + 40);
  v4 = BugCheckParameter2;
  v93 = (const signed __int64 *)(BugCheckParameter2 + 40);
  v5 = 0;
  if ( (a2 & 4) != 0 )
  {
    v93 = (const signed __int64 *)(BugCheckParameter2 + 40);
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * (((unsigned __int64)*v3 >> 43) & 0x3FF)) + 4LL) & 0x80u) != 0 )
  {
    KeBugCheckEx(0x1Au, 0x8889uLL, BugCheckParameter2, 0LL, 0LL);
  }
  BugCheckParameter4 = *(unsigned __int16 *)(BugCheckParameter2 + 32);
  v85 = 0;
  if ( (_WORD)BugCheckParameter4 )
  {
    if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(
        0x4Eu,
        2uLL,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(v4 + 0x220000000000LL) >> 4),
        qword_140C6F348,
        BugCheckParameter4);
    return 0LL;
  }
  v7 = (unsigned __int64)*v3 >> 43;
  v123 = 0LL;
  v8 = *(_QWORD *)(qword_140C67048 + 8 * (v7 & 0x3FF));
  v9 = *(_BYTE *)(v4 + 34);
  v98 = v8;
  v117 = 0LL;
  v118 = 0LL;
  SlabAllocatorStandbyList = *(_QWORD *)(v8 + 8LL * (v9 & 7) + 6824);
  v119 = 0LL;
  v120 = 0LL;
  v11 = *(_DWORD *)(SlabAllocatorStandbyList + 8);
  v92 = v11;
  v121 = 0LL;
  v122 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v5 = 320;
  }
  else if ( (a2 & 2) != 0 )
  {
    v5 = 384;
  }
  if ( (v9 & 7) == 5 )
  {
    MiUnlinkPageFromBadList(v4, 0LL);
    return 0LL;
  }
  v12 = v5 | 0x20;
  v13 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v4 + 0x220000000000LL) >> 4);
  if ( v13 < qword_140C67DE0 || v13 >= qword_140C67DE0 + 2048 )
  {
    if ( (unsigned int)MiCheckSlabPfnBitmap(v4, 1LL, 0LL) )
      v12 |= 8u;
    v2 = 0LL;
  }
  else
  {
    v12 |= 2u;
  }
  v14 = 5LL;
  v89 = 5;
  if ( v11 != 2 )
  {
    if ( v11 == 3 )
    {
      _InterlockedDecrement64((volatile signed __int64 *)SlabAllocatorStandbyList);
      v50 = 6976LL;
      a2 = 16000LL;
      if ( *v3 >= 0 )
        v50 = 16000LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v50 + v8));
      if ( (*(_DWORD *)(v4 + 16) & 0x400LL) != 0 )
      {
        v51 = *(_BYTE *)(v4 + 36) & 0xF;
        SlabAllocatorStandbyList = v8 + 88 * v51 + 5312;
        if ( v12 < 0x100 )
        {
          MiAcquirePageListLock(v8 + 88 * v51 + 5312, v4, 1LL, &v117);
          v12 |= 0x200u;
        }
        *(_BYTE *)(v4 + 36) &= 0xF0u;
      }
      else
      {
        if ( v12 >= 0x100 )
        {
          SlabAllocatorStandbyList = MiDetermineModifiedPageListHead(v4, v8, 0LL, 0LL);
        }
        else
        {
          SlabAllocatorStandbyList = MiDetermineModifiedPageListHead(v4, v8, 2LL, 0LL);
          MiAcquirePageListLock(SlabAllocatorStandbyList, v4, 1LL, &v117);
          v12 |= 0x200u;
        }
        _InterlockedDecrement64((volatile signed __int64 *)(v8 + 17824));
      }
    }
    else
    {
      if ( *v3 >= 0 )
        v67 = (volatile signed __int64 *)(v8 + 16000);
      else
        v67 = (volatile signed __int64 *)(v8 + 6976);
      _InterlockedDecrement64(v67);
      if ( v12 < 0x100 )
      {
        MiAcquirePageListLock(SlabAllocatorStandbyList, v4, 1LL, &v117);
        v12 |= 0x200u;
      }
    }
    v20 = *(_QWORD *)v4 & 0xFFFFFFFFFFLL;
    v21 = *(_QWORD *)(v4 + 24) & 0xFFFFFFFFFFLL;
    goto LABEL_45;
  }
  v15 = *v3;
  if ( (*v3 & 0x20000000000000LL) != 0 )
  {
    if ( (*(_BYTE *)(v4 + 35) & 0x10) != 0 )
    {
      v68 = 128LL;
      if ( v12 < 0x100 )
        v68 = 0LL;
      MiUnlinkPageFromBadList(v4, v68);
    }
    *(_QWORD *)v4 = 0LL;
    MiSetPfnBlink(v4, 0LL, 1LL);
    return 0LL;
  }
  v16 = *(_BYTE *)(v4 + 35);
  v17 = v16 & 8;
  if ( (v16 & 8) != 0 )
    v18 = 5;
  else
    v18 = v16 & 7;
  v12 |= 1u;
  v86 = v18;
  if ( (v12 & 2) != 0 )
  {
    v12 &= 0xFFFFFFDE;
  }
  else if ( v17 )
  {
    v12 |= 4u;
  }
  SlabAllocatorStandbyList = 88LL * v18 + v8 + 2944;
  if ( (v12 & 8) != 0 )
  {
    if ( (v15 & 0x800000000000000LL) != 0 )
    {
      SlabAllocatorStandbyList = MiGetSlabAllocatorStandbyList(v4, 2LL, 5LL, 0LL);
      v64 = v12 | 0x10;
    }
    else
    {
      v64 = v12 & 0xFFFFFFDF;
    }
    v12 = v64 & 0xFFFFFFFE;
  }
  if ( (v12 & 1) != 0 )
  {
    if ( *v3 >= 0 )
      _InterlockedDecrement64((volatile signed __int64 *)(v8 + 16000));
    else
      _InterlockedDecrement64((volatile signed __int64 *)(v8 + 6976));
  }
  if ( v12 < 0x100 )
  {
    v12 |= 0x200u;
    MiAcquirePageListLock(SlabAllocatorStandbyList, v4, 1LL, &v117);
  }
  if ( (v12 & 0x10) == 0 )
  {
    v87 = 0;
    if ( (v12 & 0x80u) != 0 || (_BYTE)v117 )
      v87 = 1;
    v100 = 0LL;
    v15 = 16 * ((__int64)(v4 + 0x220000000000LL) >> 4);
    v102 = 0;
    v14 = v15 - 0x220000000000LL;
    v99 = v15 - 0x220000000000LL;
    if ( v13 >= qword_140C67DE0 && v13 < qword_140C67DE0 + 2048 )
    {
LABEL_114:
      v52 = (*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL;
      v103 = 16 * ((__int64)(v4 + 0x220000000000LL) >> 4) - 0x220000000000LL;
      v53 = *(_QWORD *)(qword_140C67048 + 8 * v52);
      v100 = v53;
      v94 = 0xAAAAAAAAAAAAAAABuLL * (v15 >> 4);
      v54 = MiSearchNumaNodeTable(v94);
      v55 = *(_BYTE *)(v99 + 35);
      v91 = *(_DWORD *)(v54 + 8);
      v101 = v91;
      if ( (v55 & 8) != 0 )
      {
        v56 = 5;
        v57 = 5LL;
      }
      else
      {
        v56 = v55 & 7;
        v57 = v55 & 7;
      }
      v104 = v56;
      if ( qword_140C65750 )
        v58 = MiPageToChannel(v94);
      else
        v58 = 0;
      v105 = v58;
      v59 = 0;
      v106 = *(_QWORD *)(v53 + 16) + 25408LL * v91 + 88 * (v57 + 8LL * v58 + 37);
      do
      {
        StandbyLookaside = (_QWORD *)MiGetStandbyLookaside(&v100, (unsigned int)v59);
        v61 = (int)StandbyLookaside;
        v95 = StandbyLookaside;
        v63 = v62;
        while ( *StandbyLookaside != v13 )
        {
          if ( StandbyLookaside[1] == v13 )
          {
            ++v63;
            goto LABEL_125;
          }
          if ( StandbyLookaside[2] == v13 )
          {
            v63 += 2;
            goto LABEL_125;
          }
          if ( StandbyLookaside[3] == v13 )
          {
            v63 += 3;
LABEL_125:
            if ( v63 == 64 )
              goto LABEL_126;
            break;
          }
          StandbyLookaside += 4;
          v63 += 4;
          if ( v63 >= 0x40 )
            goto LABEL_125;
        }
        if ( !(unsigned int)MiFindSuitableLookasideReplacement(v59, v61, v63, v99, v87) )
          MiWriteStandbyLookasideEntry(&v95[v63], 3LL, -1LL);
LABEL_126:
        ++v59;
      }
      while ( v59 < 3 );
      v4 = BugCheckParameter2;
      v3 = v93;
      v11 = v92;
      v8 = v98;
      goto LABEL_32;
    }
    v19 = *(_QWORD *)(v14 + 16);
    if ( (v19 & 0x400) != 0 )
    {
      if ( (v19 & 8) != 0 )
        goto LABEL_114;
    }
    else if ( (v19 & 0x8000000) != 0 )
    {
      goto LABEL_114;
    }
  }
LABEL_32:
  if ( (v12 & 4) != 0 )
  {
    MiUnlinkProtectedStandbyPfn(v4, v15, v14, v2);
    v14 = v86;
    v20 = 0x3FFFFFFFFFLL;
    v21 = 0x3FFFFFFFFFLL;
  }
  else
  {
    a2 = 0x3FFFFFFFFFLL;
    v20 = *(_QWORD *)v4 & 0xFFFFFFFFFFLL;
    v21 = *(_QWORD *)(v4 + 24) & 0xFFFFFFFFFFLL;
    if ( v20 == 0x3FFFFFFFFFLL || v20 >= qword_140C67DE0 && v20 < qword_140C67DE0 + 2048 )
    {
      v14 = v86;
    }
    else
    {
      v22 = *(_BYTE *)(48 * v20 - 0x220000000000LL + 35);
      if ( (v22 & 8) != 0 )
        v23 = 5;
      else
        v23 = v22 & 7;
      v14 = v86;
      if ( v86 != v23 )
      {
        PfnPriority = MiGetPfnPriority(48 * v20 - 0x220000000000LL);
        KeBugCheckEx(0x1Au, 0x8886uLL, v4, v71, (unsigned int)(v70 << 8) | (unsigned __int64)PfnPriority);
      }
      a2 = 0x3FFFFFFFFFLL;
    }
    if ( v21 != 0x3FFFFFFFFFLL && (v21 < qword_140C67DE0 || v21 >= qword_140C67DE0 + 2048) )
    {
      a2 = 48 * v21 - 0x220000000000LL;
      v24 = *(_BYTE *)(a2 + 35);
      v25 = (v24 & 8) != 0 ? 5 : v24 & 7;
      if ( (_DWORD)v14 != v25 )
      {
        v72 = MiGetPfnPriority(48 * v21 - 0x220000000000LL);
        KeBugCheckEx(0x1Au, 0x8887uLL, v4, v74, (unsigned int)(v73 << 8) | (unsigned __int64)v72);
      }
    }
  }
  if ( (unsigned int)v14 < *(unsigned __int8 *)(v8 + 15780) && (v12 & 0x10) == 0 )
    v85 = 1;
LABEL_45:
  if ( v20 == 0x3FFFFFFFFFLL )
  {
    v28 = v12 >> 2;
    if ( (v12 & 4) == 0 )
      *(_QWORD *)(SlabAllocatorStandbyList + 24) = v21;
  }
  else
  {
    v26 = (volatile signed __int64 *)(48 * v20 - 0x21FFFFFFFFE8LL);
    a2 = *v26;
    v27 = _InterlockedCompareExchange64(v26, v21 | *v26 & 0xFFFFFF0000000000uLL, *v26);
    v14 = v27;
    if ( v11 == 2 )
    {
      if ( a2 != v27 )
      {
        do
        {
          v75 = v14;
          v14 = _InterlockedCompareExchange64(v26, v21 | v14 & 0xFFFFFF0000000000uLL, v14);
        }
        while ( v75 != v14 );
      }
    }
    else if ( a2 != v27 )
    {
      do
      {
        v76 = v14;
        v14 = _InterlockedCompareExchange64(v26, v21 | v14 & 0xFFFFFF0000000000uLL, v14);
      }
      while ( v76 != v14 );
    }
    v28 = v12 >> 2;
  }
  if ( v21 == 0x3FFFFFFFFFLL )
  {
    if ( (v28 & 1) == 0 )
      *(_QWORD *)(SlabAllocatorStandbyList + 16) = v20;
  }
  else
  {
    a2 = 48 * v21 - 0x220000000000LL;
    *(_QWORD *)a2 = v20 | *(_QWORD *)a2 & 0xFFFFFF0000000000uLL;
  }
  if ( (v12 & 0x20) != 0 )
    _InterlockedDecrement64((volatile signed __int64 *)SlabAllocatorStandbyList);
  if ( v11 != 2 || (v12 & 0xA) != 0 )
    goto LABEL_70;
  v108 = 0LL;
  v110 = 0LL;
  v29 = (*(_QWORD *)(48 * v13 - 0x220000000000LL + 40) >> 43) & 0x3FFLL;
  v109 = 48 * v13 - 0x220000000000LL;
  v107 = *(_QWORD *)(qword_140C67048 + 8 * v29);
  v30 = dword_140C65708;
  v31 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v13) >> 4);
  if ( dword_140C65704 <= (unsigned int)dword_140C65708 )
  {
    v32 = (char *)qword_140C65748 + 16 * dword_140C65704;
    if ( v31 >= *(_QWORD *)v32 && (dword_140C65704 == dword_140C65708 || v31 < *((_QWORD *)v32 + 2)) )
      goto LABEL_59;
  }
  v65 = 0;
  if ( dword_140C65708 < 0 )
LABEL_192:
    KeBugCheckEx(0x1Au, 0x6201uLL, v31, 0LL, 0LL);
  while ( 1 )
  {
    v66 = (v65 + v30) >> 1;
    v32 = (char *)qword_140C65748 + 16 * v66;
    if ( v31 < *(_QWORD *)v32 )
    {
      if ( !v66 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v31, (ULONG_PTR)qword_140C65748, 0LL);
      v30 = v66 - 1;
      goto LABEL_191;
    }
    if ( v66 == dword_140C65708 || v31 < *((_QWORD *)v32 + 2) )
      break;
    v65 = v66 + 1;
LABEL_191:
    if ( v30 < v65 )
      goto LABEL_192;
  }
  dword_140C65704 = (v65 + v30) >> 1;
LABEL_59:
  v88 = *((_DWORD *)v32 + 2);
  LODWORD(v108) = v88;
  v33 = *(_BYTE *)(48 * v13 - 0x220000000000LL + 35);
  if ( (v33 & 8) != 0 )
  {
    v34 = 5;
  }
  else
  {
    v34 = v33 & 7;
    v89 = v34;
  }
  LODWORD(v110) = v34;
  if ( qword_140C65750 )
    v35 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v13) >> 4));
  else
    v35 = 0;
  v36 = *(_QWORD *)v4;
  v37 = *(_QWORD *)(v4 + 24);
  DWORD1(v110) = v35;
  v14 = v89 + 8LL * v35;
  v38 = *(_DWORD *)(v4 + 36);
  v39 = *v3;
  *((_QWORD *)&v110 + 1) = *(_QWORD *)(v107 + 16) + 25408LL * v88 + 88 * (v14 + 37);
  v40 = (8LL * (v38 & 0xFFE00000)) | ((v39 & 0xF80000000000000LL | (v36 >> 20)) >> 20);
  v41 = ((unsigned __int64)(v38 & 0x1FFFFF) << 19) | (v37 >> 40) & 0x7FFFF;
  a2 = *((_QWORD *)&v110 + 1);
  v90 = *((_QWORD *)&v110 + 1);
  if ( v40 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(*((_QWORD *)&v110 + 1) + 24LL) = v41;
  }
  else
  {
    v42 = 48 * v40 - 0x220000000000LL;
    v43 = *(_QWORD *)(v42 + 24);
    v97 = (v41 & 0x7FFFF) << 40;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v42 + 24), v97 | v43 & 0xF80000FFFFFFFFFFuLL, v43);
    if ( v43 != v14 )
    {
      do
      {
        v77 = v14;
        v14 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v42 + 24),
                v97 | v14 & 0xF80000FFFFFFFFFFuLL,
                v14);
      }
      while ( v77 != v14 );
      v3 = v93;
    }
    a2 = v90;
    *(_DWORD *)(v42 + 36) = *(_DWORD *)(v42 + 36) & 0xFFE00000 | (v41 >> 19);
  }
  if ( v41 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(a2 + 16) = v40;
  }
  else
  {
    v14 = 48 * v41 - 0x220000000000LL;
    v113 = 0LL;
    v44 = *(_DWORD *)(v14 + 36);
    *(_QWORD *)v14 = (v40 << 40) | *(_QWORD *)v14 & 0xFFFFFFFFFFLL;
    *(_DWORD *)(v14 + 36) = v44 & 0x1FFFFF | ((unsigned int)(v40 >> 24) << 21);
    *((_QWORD *)&v113 + 1) = *(_QWORD *)(v14 + 40);
    v45 = (v40 & 0xF800000000LL) << 20;
    v111 = 0LL;
    v112 = 0LL;
    v114 = 0LL;
    v115 = 0LL;
    v116 = 0LL;
    v46 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v14 + 40),
            v45 | *((_QWORD *)&v113 + 1) & 0xF07FFFFFFFFFFFFFuLL,
            *((signed __int64 *)&v113 + 1));
    *((_QWORD *)&v116 + 1) = v46;
    if ( *((_QWORD *)&v113 + 1) != v46 )
    {
      do
      {
        *((_QWORD *)&v113 + 1) = v46;
        v78 = v46;
        v46 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v14 + 40),
                v45 | v46 & 0xF07FFFFFFFFFFFFFuLL,
                v46);
        *((_QWORD *)&v116 + 1) = v46;
      }
      while ( v78 != v46 );
      a2 = v90;
    }
  }
  _InterlockedDecrement64((volatile signed __int64 *)a2);
  if ( (v28 & 1) != 0 )
    *(_BYTE *)(v4 + 35) &= ~8u;
LABEL_70:
  *(_QWORD *)v4 = 0LL;
  if ( (v12 & 2) != 0 )
  {
    MiSetPfnBlink(v4, 0LL, 0LL);
    MiRemoveDecayClusterTimer(v4);
  }
  else
  {
    *(_QWORD *)(v4 + 24) &= 0xFFFFFF0000000000uLL;
    if ( !_bittest64(v3, 0x35u) && dword_140C67ACC == 1 )
    {
      v79 = v13 & 0x1F;
      v14 = 1LL;
      a2 = 1LL;
      v80 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (v13 >> 5));
      if ( v79 + 1 > 0x20 )
      {
        if ( (v13 & 0x1F) == 0 )
          goto LABEL_206;
        v81 = v13 & 0x1F;
        _InterlockedOr(v80++, ((1 << (32 - v81)) - 1) << v79);
        a2 = 1LL - (unsigned int)(32 - v81);
        if ( a2 >= 0x20 )
        {
          v82 = a2 >> 5;
          a2 += -32LL * (a2 >> 5);
          do
          {
            *v80++ = -1;
            --v82;
          }
          while ( v82 );
        }
        if ( a2 )
        {
LABEL_206:
          v14 = (unsigned int)((1 << a2) - 1);
          _InterlockedOr(v80, v14);
        }
      }
      else
      {
        v14 = (unsigned int)(1 << v79);
        _InterlockedOr(v80, v14);
      }
    }
  }
  if ( (v12 & 0x100) == 0 )
  {
    if ( (_BYTE)v117 && v12 >= 0x200 )
    {
      if ( BYTE8(v118) )
        _InterlockedAnd64((volatile signed __int64 *)(v118 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_BYTE)v120 )
        _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v119 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      if ( BYTE8(v121) )
        _InterlockedAnd64((volatile signed __int64 *)(v121 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_BYTE)v123 )
        _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v122 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      v47 = (volatile signed __int32 *)(SlabAllocatorStandbyList + 32);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v47, retaddr);
      }
      else
      {
        _InterlockedAnd(v47, 0xBFFFFFFF);
        _InterlockedDecrement(v47);
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(SlabAllocatorStandbyList + 32));
    }
  }
  if ( (v12 & 1) == 0 )
    return v85;
  v48 = _InterlockedDecrement64((volatile signed __int64 *)(v98 + 17216));
  if ( v48 == *(_QWORD *)(v98 + 16152) || v48 == *(_QWORD *)(v98 + 16160) )
    MiUpdateAvailableEvents(v98, a2, v14);
  if ( v48 <= 0x420 )
  {
    v83 = *(_QWORD *)(v98 + 16920);
    if ( !v83 || !*(_BYTE *)(v83 + 52) )
      MiObtainFreePages(v98, a2, v14);
    if ( v48 < 0xA0 && v48 + 1 >= 0xA0 && *(_DWORD *)(v98 + 1192) )
      KeSetEvent((PRKEVENT)(v98 + 1048), 0, 0);
  }
  if ( v48 >= 0x9F )
    return v85;
  v84 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
  if ( (v84 & 0xC) == 8 )
    return v85;
  if ( (v48 >= 0x20 || (_UNKNOWN *)v98 != &MiSystemPartition)
    && ((v84 & 2) != 0 && v48 >= 0x21 || (*(_DWORD *)(v98 + 4) & 0x10) != 0) )
  {
    return v85;
  }
  else
  {
    return v85 | 2;
  }
}
