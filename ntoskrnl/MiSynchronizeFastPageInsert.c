/*
 * XREFs of MiSynchronizeFastPageInsert @ 0x140319210
 * Callers:
 *     MiInsertPagesInList @ 0x140287DB0 (MiInsertPagesInList.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 * Callees:
 *     MiReleasePageListLock @ 0x140288360 (MiReleasePageListLock.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140305AB0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiGetStandbyLookaside @ 0x140319E70 (MiGetStandbyLookaside.c)
 *     MiIsDecayPfn @ 0x140319ED0 (MiIsDecayPfn.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPageToChannel @ 0x140370C10 (MiPageToChannel.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __fastcall MiSynchronizeFastPageInsert(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r13d
  ULONG_PTR v9; // r14
  char v10; // al
  __int64 v11; // rbx
  unsigned int v12; // edi
  _QWORD *v13; // rsi
  unsigned int Number; // r12d
  unsigned int v15; // eax
  unsigned int v16; // r15d
  __int64 v17; // rbx
  ULONG_PTR v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r14
  char v22; // al
  unsigned int v23; // ebx
  unsigned int v24; // eax
  _BYTE *v25; // r11
  unsigned int v26; // r9d
  __int64 v27; // rdx
  unsigned int v28; // r14d
  __int64 v29; // rdx
  __int64 v30; // r10
  unsigned __int64 v31; // rbx
  __int64 v32; // rsi
  _BYTE *v33; // rdi
  __int64 v34; // rcx
  _BYTE *v35; // rax
  volatile signed __int64 *v36; // r15
  __int64 v37; // rax
  _BYTE *v38; // r13
  volatile signed __int64 *v39; // rcx
  unsigned __int64 v40; // r8
  __int64 v41; // rdx
  __int64 i; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // r14
  __int64 v47; // r10
  __int64 v48; // r9
  __int64 v49; // r8
  int v50; // esi
  __int64 v51; // rdx
  __int64 v52; // r11
  __int64 v53; // rcx
  __int64 v54; // rax
  ULONG_PTR v55; // rbx
  unsigned __int64 v56; // rcx
  __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // r13
  __int64 v60; // r13
  ULONG_PTR v61; // r8
  int v62; // ecx
  char *v63; // r9
  char v64; // al
  __int64 v65; // rsi
  unsigned int v66; // edi
  unsigned int v67; // eax
  __int64 v68; // r11
  __int64 v69; // r8
  __int64 v70; // rdi
  __int64 v71; // r10
  int v72; // edx
  _QWORD *v73; // rax
  unsigned int v74; // ecx
  ULONG_PTR v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rax
  int v78; // edx
  int v79; // eax
  __int64 v80; // rcx
  char v81; // al
  signed __int32 v82; // [rsp+30h] [rbp-F8h]
  int v83; // [rsp+34h] [rbp-F4h]
  unsigned int v84; // [rsp+38h] [rbp-F0h]
  unsigned int v85; // [rsp+3Ch] [rbp-ECh]
  unsigned __int64 v86; // [rsp+40h] [rbp-E8h]
  unsigned int v87; // [rsp+48h] [rbp-E0h]
  int v88; // [rsp+4Ch] [rbp-DCh]
  int v89; // [rsp+50h] [rbp-D8h]
  __int64 v90; // [rsp+58h] [rbp-D0h]
  __int64 v91; // [rsp+58h] [rbp-D0h]
  __int64 StandbyLookaside; // [rsp+60h] [rbp-C8h]
  ULONG_PTR v93; // [rsp+68h] [rbp-C0h]
  unsigned __int64 v94; // [rsp+70h] [rbp-B8h]
  __int64 j; // [rsp+70h] [rbp-B8h]
  int v96; // [rsp+78h] [rbp-B0h]
  __int64 v97; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v98; // [rsp+88h] [rbp-A0h]
  __int64 v99; // [rsp+90h] [rbp-98h]
  unsigned int v100; // [rsp+98h] [rbp-90h]
  unsigned int v101; // [rsp+9Ch] [rbp-8Ch]
  __int64 v102; // [rsp+A0h] [rbp-88h]
  __int64 v103; // [rsp+A8h] [rbp-80h]
  _DWORD v104[2]; // [rsp+B0h] [rbp-78h]
  __int64 v105; // [rsp+B8h] [rbp-70h]
  __int64 v106; // [rsp+C0h] [rbp-68h]
  __int64 v107; // [rsp+C8h] [rbp-60h]
  __int64 v108; // [rsp+D0h] [rbp-58h]
  __int64 v109; // [rsp+D8h] [rbp-50h]
  __int128 v110; // [rsp+E0h] [rbp-48h]
  signed __int32 v113; // [rsp+140h] [rbp+18h]
  __int64 v114; // [rsp+140h] [rbp+18h]
  signed __int32 v115; // [rsp+140h] [rbp+18h]
  __int64 v117; // [rsp+148h] [rbp+20h]

  v5 = 0;
  v97 = 0LL;
  v98 = 0LL;
  v88 = 0;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4);
  v96 = 1;
  v93 = v9;
  if ( (v9 < qword_140C67DE0 || v9 >= qword_140C67DE0 + 2048) && (unsigned int)MiCheckSlabPfnBitmap(a3, 1LL, 0) )
    v88 = 1;
  if ( a4 )
  {
    v87 = 1;
    v86 = 0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4);
    goto LABEL_12;
  }
  v10 = *(_BYTE *)(a3 + 35);
  if ( (v10 & 8) != 0 )
    v11 = 5LL;
  else
    v11 = v10 & 7;
  v12 = 0;
  v13 = (_QWORD *)(a1 + 15616 + 8 * v11);
  while ( 1 )
  {
    if ( *v13 < 0x1000uLL )
      goto LABEL_9;
    if ( *v13 >= 0x2000uLL )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      goto LABEL_10;
LABEL_9:
    ++v12;
    v13 += 8;
    if ( v12 >= 2 )
      goto LABEL_10;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(88 * v11 + 2976 + a1));
LABEL_10:
  if ( v12 != 2 )
  {
    v80 = v11 + 8LL * v12;
    if ( *(_QWORD *)(a1 + 8 * v80 + 15616) >= 0x1000uLL )
    {
      *(_QWORD *)(a1 + 8 * v80 + 15616) = 0LL;
      *(_WORD *)(a5 + 1) = 257;
      v81 = *(_BYTE *)(a5 + 2);
      if ( v12 )
        v81 = 2;
      *(_BYTE *)(a5 + 2) = v81;
    }
    return;
  }
  v86 = -1LL;
  v87 = 64;
LABEL_12:
  Number = KeGetPcr()->Prcb.Number;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x40 )
  {
    Number &= 0x3Fu;
  }
  else
  {
    if ( (_DWORD)KeNumberProcessors_0 == 4 )
      v15 = 16;
    else
      v15 = 0x40 / (unsigned int)KeNumberProcessors_0;
    if ( v15 > 1 )
      Number *= v15;
  }
  v16 = 0;
  v83 = 0;
  v84 = 0;
  v89 = 0;
  v17 = 48 * v9 - 0x220000000000LL;
  v18 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v9) >> 4);
  v19 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL));
  v105 = v17;
  v99 = v17;
  v97 = v19;
  v20 = MiSearchNumaNodeTable(v18);
  v21 = *(unsigned int *)(v20 + 8);
  LODWORD(v98) = *(_DWORD *)(v20 + 8);
  if ( a4 )
  {
    v23 = 5;
  }
  else
  {
    v22 = *(_BYTE *)(v17 + 35);
    if ( (v22 & 8) != 0 )
      v23 = 5;
    else
      v23 = v22 & 7;
  }
  v100 = v23;
  if ( qword_140C65750 )
    v24 = MiPageToChannel(v18);
  else
    v24 = 0;
  v25 = (_BYTE *)a5;
  v26 = 0;
  v27 = 25408 * v21;
  v101 = v24;
  v28 = Number;
  v106 = v23;
  v103 = v23 + 8LL * v24;
  v94 = (unsigned __int64)v23 << 9;
  v102 = *(_QWORD *)(v19 + 16) + 88 * (v103 + 37) + v27;
  v29 = v19 + v94 + 11520;
  v30 = 0LL;
  StandbyLookaside = v29;
  v90 = 0LL;
  while ( 2 )
  {
    v85 = 0;
LABEL_24:
    if ( v86 == -1LL || v5 )
    {
      v31 = *(_QWORD *)(v29 + 8LL * v28);
      if ( v31 != -1LL )
      {
        v32 = 48 * v31 - 0x220000000000LL;
        goto LABEL_27;
      }
      v84 = ++v16;
    }
    else
    {
      v32 = a4;
      v31 = v86;
LABEL_27:
      v33 = v25 + 16;
      v34 = 0LL;
      v35 = v25 + 16;
      do
      {
        if ( v35[8] && v32 == *(_QWORD *)v35 )
        {
          v37 = 24 * v30;
          v36 = (volatile signed __int64 *)(v32 + 24);
          goto LABEL_33;
        }
        ++v34;
        v35 += 24;
      }
      while ( v34 < 4 );
      v36 = (volatile signed __int64 *)(v32 + 24);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
        goto LABEL_157;
      if ( v86 != -1LL && !v5 && (*(_BYTE *)(v32 + 35) & 8) == 0 )
      {
        _InterlockedAnd64(v36, 0x7FFFFFFFFFFFFFFFuLL);
        v85 = ++v26;
        goto LABEL_54;
      }
      v37 = 24 * v30;
      v25[24 * v30 + 24] = 1;
LABEL_33:
      v38 = &v25[v37];
      *((_QWORD *)v38 + 1) = v31;
      v39 = v36;
      *((_QWORD *)v38 + 2) = v32;
      if ( !v89 )
      {
        v89 = 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          LOBYTE(v29) = -1;
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a2 + 32, v29);
          v30 = v90;
          v39 = (volatile signed __int64 *)(v32 + 24);
          v26 = v85;
          v29 = StandbyLookaside;
          v25 = (_BYTE *)a5;
        }
        else
        {
          _m_prefetchw((const void *)(a2 + 32));
          v113 = *(_DWORD *)(a2 + 32) & 0x7FFFFFFF;
          v82 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v113 + 1, v113);
          if ( v82 != v113 )
          {
            while ( v82 >= 0 )
            {
              v115 = v82;
              v82 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v82 + 1, v82);
              if ( v82 == v115 )
                goto LABEL_36;
            }
            ExpWaitForSpinLockSharedAndAcquire(a2 + 32, 0xFFu);
            v30 = v90;
            v26 = v85;
            v29 = StandbyLookaside;
            v25 = (_BYTE *)a5;
          }
LABEL_36:
          v39 = v36;
        }
      }
      if ( v86 != -1LL )
      {
        v39 = v36;
        if ( !v83 )
          goto LABEL_122;
      }
      if ( *(_QWORD *)(v29 + 8LL * v28) != v31 )
      {
        if ( v38[24] )
        {
          _InterlockedAnd64(v39, 0x7FFFFFFFFFFFFFFFuLL);
          v38[24] = 0;
        }
        --v26;
        LOBYTE(v28) = v28 - 1;
LABEL_156:
        v5 = v83;
LABEL_157:
        v16 = v84;
        break;
      }
      if ( v86 == -1LL || v83 )
      {
        if ( v30 )
          v40 = (8LL * (*(_DWORD *)(v32 + 36) & 0xFFE00000)) | (((*(_QWORD *)v32 >> 20) | *(_QWORD *)(v32 + 40) & 0xF80000000000000uLL) >> 20);
        else
          v40 = *(_QWORD *)v32 & 0xFFFFFFFFFFLL;
      }
      else
      {
LABEL_122:
        v40 = *(_QWORD *)(v32 + 40) & 0xFFFFFFFFFFLL;
      }
      if ( v40 == 0x3FFFFFFFFFLL )
      {
        v41 = a2 + 40;
        if ( v30 )
          v41 = v102 + 40;
      }
      else
      {
        v41 = 48 * v40 - 0x220000000000LL;
      }
      for ( i = 0LL; i < 4; ++i )
      {
        if ( v33[8] && v41 == *(_QWORD *)v33 )
          goto LABEL_49;
        v33 += 24;
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
      {
        v25[24 * v30 + 48] = 1;
LABEL_49:
        v5 = v83;
        v104[v83] = v28;
        v43 = 3 * (v30 + 1);
        *(_QWORD *)&v25[8 * v43 + 8] = v40;
        *(_QWORD *)&v25[8 * v43 + 16] = v41;
        v90 = v30 + 2;
        if ( !v83 && !v88 )
        {
          v83 = 1;
          v5 = 1;
          v16 = 0;
          StandbyLookaside = MiGetStandbyLookaside(&v97, 2LL);
          v26 = 0;
          v84 = 0;
          v87 = 64;
          v28 = Number & 0x3F;
          v29 = StandbyLookaside;
          continue;
        }
        goto LABEL_54;
      }
      v29 = StandbyLookaside;
      if ( !v38[24] )
        goto LABEL_156;
      _InterlockedAnd64(v36, 0x7FFFFFFFFFFFFFFFuLL);
      v16 = v84;
      v38[24] = 0;
      v5 = v83;
    }
    break;
  }
  v85 = ++v26;
  v28 = ((_BYTE)v28 + 1) & 0x3F;
  if ( v26 < v87 )
    goto LABEL_24;
LABEL_54:
  v44 = v86;
  if ( v26 != 64 && (v26 != 1 || v86 == -1LL || v5) )
  {
    v45 = v97;
    v46 = 0LL;
    v47 = 0x8000000LL;
    v48 = v97 + v94;
    v49 = 25408LL * (unsigned int)v98;
    *v25 = 1;
    v50 = 1;
    v51 = v48 + 11520;
    v117 = v49;
    v91 = v45;
    v52 = -134217729LL;
    v114 = v48;
    for ( j = v48 + 11520; ; v51 = j )
    {
      if ( v44 == -1LL || v50 != 1 )
      {
        if ( v50 )
        {
          if ( v50 == 1 )
            v53 = v51;
          else
            v53 = *(_QWORD *)(v45 + 16) + (v103 << 9) + v49 + 6080;
        }
        else
        {
          v53 = v48 + 7424;
        }
        v54 = (unsigned int)v104[v46];
        v55 = *(_QWORD *)(v53 + 8 * v54);
        *(_QWORD *)(v53 + 8 * v54) = v93;
        if ( v55 != -1LL && (v55 < qword_140C67DE0 || v55 >= qword_140C67DE0 + 2048) )
        {
          v108 = 0LL;
          v110 = 0LL;
          v56 = *(_QWORD *)(48 * v55 - 0x220000000000LL + 40);
          v57 = 48 * v55 - 0x220000000000LL;
          v58 = *(_QWORD *)(v57 + 16);
          v59 = -9LL;
          v109 = v57;
          if ( (v58 & 0x400) == 0 )
            v59 = v52;
          v60 = v58 & v59;
          v61 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v55) >> 4);
          v107 = *(_QWORD *)(qword_140C67048 + 8 * ((v56 >> 43) & 0x3FF));
          v62 = dword_140C65708;
          if ( dword_140C65704 > (unsigned int)dword_140C65708
            || (v63 = (char *)qword_140C65748 + 16 * dword_140C65704, v61 < *(_QWORD *)v63)
            || dword_140C65704 != dword_140C65708 && v61 >= *((_QWORD *)v63 + 2) )
          {
            v78 = 0;
            if ( dword_140C65708 < 0 )
LABEL_176:
              KeBugCheckEx(0x1Au, 0x6201uLL, v61, 0LL, 0LL);
            while ( 1 )
            {
              v79 = (v78 + v62) >> 1;
              v63 = (char *)qword_140C65748 + 16 * v79;
              if ( v61 < *(_QWORD *)v63 )
              {
                if ( !v79 )
                  KeBugCheckEx(0x1Au, 0x6200uLL, v61, (ULONG_PTR)v63, 0LL);
                v62 = v79 - 1;
              }
              else
              {
                if ( v79 == dword_140C65708 || v61 < *((_QWORD *)v63 + 2) )
                {
                  dword_140C65704 = (v78 + v62) >> 1;
                  break;
                }
                v78 = v79 + 1;
              }
              if ( v62 < v78 )
                goto LABEL_176;
            }
          }
          v64 = *(_BYTE *)(v57 + 35);
          v65 = *((unsigned int *)v63 + 2);
          LODWORD(v108) = *((_DWORD *)v63 + 2);
          if ( (v64 & 8) != 0 )
            v66 = 5;
          else
            v66 = v64 & 7;
          LODWORD(v110) = v66;
          if ( qword_140C65750 )
            v67 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v55) >> 4));
          else
            v67 = 0;
          v68 = 25408 * v65;
          v50 = v96;
          DWORD1(v110) = v67;
          v69 = v66;
          v70 = *(_QWORD *)(v107 + 16);
          v71 = v69 + 8LL * v67;
          *((_QWORD *)&v110 + 1) = v68 + v70 + 88 * (v71 + 37);
          if ( v96 == 3 )
          {
LABEL_83:
            *(_QWORD *)(v57 + 16) = v60;
          }
          else
          {
            v72 = 0;
            while ( 1 )
            {
              if ( v72 )
                v73 = (_QWORD *)(v72 == 1 ? v107 + (v69 << 9) + 11520 : v68 + v70 + (v71 << 9) + 6080);
              else
                v73 = (_QWORD *)(v107 + (v69 << 9) + 7424);
              if ( v72 != v96 )
                break;
LABEL_82:
              if ( ++v72 >= 3 )
                goto LABEL_83;
            }
            v74 = 0;
            while ( v55 != *v73 )
            {
              ++v74;
              ++v73;
              if ( v74 >= 0x40 )
                goto LABEL_82;
            }
          }
          v44 = v86;
          v52 = -134217729LL;
          v48 = v114;
          v47 = 0x8000000LL;
          v49 = v117;
        }
        v75 = v93;
        if ( v93 != -1LL && (v93 < qword_140C67DE0 || v93 >= qword_140C67DE0 + 2048) )
        {
          v76 = 8LL;
          v77 = *(_QWORD *)(v105 + 16);
          if ( (v77 & 0x400) == 0 )
            v76 = v47;
          *(_QWORD *)(v105 + 16) = v77 | v76;
          v75 = v93;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * (v106 + 8 * v46) + 15616));
        if ( v50 == 1 && (v88 || (unsigned int)MiIsDecayPfn(v75, a1, v49, v48)) )
          return;
        v45 = v91;
      }
      ++v50;
      v46 = (unsigned int)(v46 + 1);
      v96 = v50;
      if ( (unsigned int)v46 >= 2 )
        return;
    }
  }
  if ( v89 )
  {
    *v25 = 1;
    MiReleasePageListLock(a2, (__int64)v25);
    v25 = (_BYTE *)a5;
    v26 = v85;
    *(_BYTE *)a5 = 0;
  }
  if ( v26 != 1 || v86 == -1LL || v5 )
  {
    v25[2] = 1;
    if ( v5 )
      v25[2] = 2;
    if ( v84 >= 0x20 )
      v25[1] = 1;
  }
  else
  {
    v25[2] = 3;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 32));
}
