__int64 __fastcall MiWriteAwePtes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        char a6)
{
  __int64 v8; // r10
  __int64 v9; // r15
  __int64 AweViewPageSize; // rax
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // r10
  __int64 v14; // r11
  int v15; // r9d
  int v16; // ecx
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // ebx
  unsigned int v21; // edx
  int v22; // r13d
  unsigned __int64 ValidPte; // r14
  int v24; // esi
  unsigned __int8 v25; // al
  __int64 v26; // r8
  int v27; // eax
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  int v30; // ecx
  unsigned int v31; // r11d
  unsigned int *v32; // rbx
  int v33; // eax
  unsigned __int64 v34; // rax
  unsigned int v35; // esi
  __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // r13
  int updated; // edi
  unsigned __int64 v42; // r10
  unsigned __int64 LeafVa; // rax
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  int v46; // r9d
  __int64 v47; // rdi
  unsigned __int64 v48; // r13
  __int64 v49; // rbx
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rbx
  __int64 v52; // r12
  __int64 *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  unsigned __int64 v57; // r8
  __int64 v58; // r8
  int v59; // ebx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r9
  char v62; // r10
  __int64 v63; // rsi
  int v64; // ebx
  unsigned __int64 v65; // r13
  __int64 v66; // rdi
  __int64 v67; // r15
  __int64 v68; // rcx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // r9
  char v71; // r10
  unsigned __int8 v73; // [rsp+30h] [rbp-D0h]
  signed int v74; // [rsp+34h] [rbp-CCh]
  int v75; // [rsp+38h] [rbp-C8h]
  int v76; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 *v77; // [rsp+40h] [rbp-C0h]
  unsigned int v78; // [rsp+48h] [rbp-B8h]
  BOOL v79; // [rsp+4Ch] [rbp-B4h]
  __int64 v80; // [rsp+50h] [rbp-B0h]
  __int64 v81; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v82; // [rsp+60h] [rbp-A0h]
  __int64 v83; // [rsp+68h] [rbp-98h]
  __int64 v84; // [rsp+70h] [rbp-90h]
  __int64 v85; // [rsp+78h] [rbp-88h]
  unsigned __int64 v86; // [rsp+80h] [rbp-80h]
  unsigned __int64 v87; // [rsp+88h] [rbp-78h]
  __int64 v88; // [rsp+90h] [rbp-70h]
  int v89; // [rsp+98h] [rbp-68h] BYREF
  __int64 v90; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v91; // [rsp+A8h] [rbp-58h]
  __int64 v92; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v93; // [rsp+B8h] [rbp-48h]
  __int64 v94; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v95; // [rsp+C8h] [rbp-38h]
  __int64 v96; // [rsp+D0h] [rbp-30h]
  __int64 v97; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v98; // [rsp+E0h] [rbp-20h]
  _QWORD v99[24]; // [rsp+F0h] [rbp-10h] BYREF

  v93 = a3;
  v95 = a2;
  v96 = a4;
  memset(v99, 0, 0xB8uLL);
  v8 = *(_QWORD *)(a1 + 32);
  v9 = 0LL;
  v92 = 0LL;
  v90 = v8;
  v77 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v84 = *(_QWORD *)(v8 + 16);
  AweViewPageSize = MiGetAweViewPageSize(a1);
  v12 = v11;
  if ( AweViewPageSize )
    v12 = AweViewPageSize;
  v85 = v12;
  v75 = MiPageSizeToPteLevel(v12);
  v82 = 0LL;
  v15 = v75;
  v83 = 0LL;
  v16 = 0x4000000;
  v86 = 0LL;
  if ( v75 < 1 )
    v16 = 0;
  v80 = 0LL;
  v74 = 0;
  v17 = 1LL;
  v94 = 0LL;
  if ( v12 == 16 )
    v17 = v14;
  LODWORD(v99[0]) = 1;
  v18 = 0LL;
  v88 = v17;
  v19 = *(_QWORD *)(a1 + 24);
  WORD2(v99[0]) = 0;
  v99[2] = 0LL;
  LODWORD(v99[1]) = 20;
  v99[3] = 0LL;
  if ( (a6 & 1) != 0 )
  {
    v20 = *(_DWORD *)(v19 + 48);
    v81 = v19;
    v21 = v16 | 0x80000000;
    if ( (v20 & 0x600000) == 0x600000 )
      v21 = v16;
    v78 = v21;
    if ( (*(_DWORD *)(v13 + 8) & 1) != 0 )
      v22 = 4;
    else
      v22 = (v20 >> 7) & 0x1F;
    v76 = v22;
    ValidPte = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v22 | v21);
    v24 = (v20 >> 12) & 0x7F;
    v91 = ValidPte;
    v25 = MiLockWorkingSetShared((__int64)v77);
    v26 = v81;
    v15 = v75;
    v73 = v25;
    v79 = (v20 & 0x2200000) == 35651584;
  }
  else
  {
    v27 = *(_DWORD *)(v19 + 48);
    v81 = 0LL;
    v91 = 0LL;
    v76 = 24;
    v73 = 17;
    v78 = v16 | 0x80000000;
    v26 = 0LL;
    ValidPte = 0LL;
    v79 = (v27 & 0x2200000) == 35651584;
    v24 = 0;
  }
  v28 = 0LL;
  v87 = 0LL;
  if ( !v93 )
    goto LABEL_120;
  while ( 1 )
  {
    if ( v96 )
    {
      v29 = *(_QWORD *)(v96 + 8 * v28);
      a5 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v30 = v15;
      if ( v15 )
      {
        do
        {
          a5 = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v30;
        }
        while ( v30 );
        v9 = v92;
      }
      if ( v29 < (*(unsigned int *)(v26 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 32) << 32)) << 12
        || v29 > (((*(unsigned int *)(v26 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 33) << 32)) << 12) | 0xFFF) )
      {
        v81 = MiGetAweNode(v29)[3];
        v32 = (unsigned int *)(v81 + 48);
        if ( (*(_DWORD *)(v90 + 8) & 1) != 0 )
          v33 = 4;
        else
          v33 = (*v32 >> 7) & 0x1F;
        v76 = v33;
        v34 = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v33 | v31);
        v35 = *v32;
        ValidPte = v34;
        v28 = v87;
        v24 = (v35 >> 12) & 0x7F;
        v91 = v34;
      }
      v36 = v95;
      if ( v95 && *(_QWORD *)(v95 + 8 * v28) )
        v37 = ValidPte;
      else
        v37 = ZeroPte;
    }
    else
    {
      v36 = v95;
      v37 = ZeroPte;
      if ( v95 )
        v37 = ValidPte;
    }
    if ( (v37 & 1) != 0 )
    {
      v38 = *(_QWORD *)(v36 + 8 * v87);
      if ( v38 >= 0 )
        v37 ^= (v37 ^ (v38 << 12)) & 0xFFFFFFFFFF000LL;
      else
        v37 = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, v38 & 0x7FFFFFFFFFFFFFFFLL, v78 | v76 & 0xFFFFFFF9 | 1);
    }
    v39 = (a5 >> 9) & 0x7FFFFFFFF8LL;
    if ( v81 )
    {
      v40 = v39 - 0x98000000000LL;
      if ( v18 != v39 - 0x98000000000LL )
      {
        if ( v18 )
        {
          updated = MiUpdateAwePageTable(v18, v80, v74);
          MiFlushTbList((int *)v99);
          if ( v79 && v83 )
          {
            MiFlushGraphicsPtes(v83, ((__int64)(v86 - v83) >> 3) + 1);
            v83 = 0LL;
          }
          MiUnlockPageTableInternal((__int64)v77, v82);
          if ( updated )
          {
            MiUnlockWorkingSetShared((__int64)v77, v73);
            MiGetLeafVa(v82 + 8);
            LeafVa = MiGetLeafVa(v42);
            MiDeleteEmptyPageTables(LeafVa, v44 - 1, 1);
            v73 = MiLockWorkingSetShared((__int64)v77);
          }
          v80 = 0LL;
          v74 = 0;
        }
        MiMakeSystemAddressValid(a5, 0LL, v24, v73, 0);
        v82 = v40;
      }
    }
    else
    {
      v82 = v39 - 0x98000000000LL;
    }
    v45 = v83;
    v46 = 0;
    v47 = *(_QWORD *)a5;
    if ( !v83 )
      v45 = a5;
    v97 = *(_QWORD *)a5;
    v83 = v45;
    v98 = a5 + 8 * v88;
    v48 = v98 - 8;
    v86 = v98 - 8;
    if ( (v37 & 1) != 0 )
    {
      if ( (v47 & 1) != 0 )
      {
        if ( v37 != v47 )
          v46 = (v75 != 0) + 1;
      }
      else
      {
        v46 = 5;
        if ( (v47 & 0x800) == 0 )
        {
          v80 += v88;
          if ( !v47 )
            v74 += v88;
        }
      }
    }
    else if ( v47 )
    {
      v74 -= v88;
      v80 -= v88;
      if ( (v47 & 1) == 0 || (v46 = 3, !v75) )
        v46 = 4;
    }
    MiWriteAweClusterPte((__int64)v77, (__int64 *)a5, v37, v46, v88);
    if ( v47 )
    {
      if ( (v47 & 1) != 0 )
      {
        if ( v81 )
        {
          if ( v75 )
          {
            if ( v88 )
            {
              v49 = v88;
              do
              {
                MiInsertLargeTbFlushEntry((__int64)v99, v75, a5);
                a5 += 8LL;
                --v49;
              }
              while ( v49 );
              v48 = v86;
            }
          }
          else
          {
            MiInsertTbFlushEntry((__int64)v99, (__int64)(a5 << 25) >> 16, v88, 0);
          }
        }
        v50 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v97);
      }
      else
      {
        v50 = v47;
        if ( qword_140C657C0 && (v47 & 0x10) == 0 )
          v50 = v47 & ~qword_140C657C0;
      }
      v51 = (v50 >> 12) & 0xFFFFFFFFFFLL;
    }
    else
    {
      v51 = -1LL;
    }
    if ( !v47 )
      goto LABEL_84;
    v52 = v90;
    if ( (*(_DWORD *)(v90 + 8) & 8) != 0 )
    {
      v9 ^= (v9 ^ (v51 >> 18)) & 0x3FFFFF;
      v92 = v9;
      v53 = (__int64 *)(qword_140C67A70 + 8 * (v9 & 0x3FFFFF));
      if ( (((unsigned __int64)*v53 >> 17) & 0x3FFFFF) == 1 )
        goto LABEL_83;
      MiLockHugePfnInternal(qword_140C67A70 + 8 * (v9 & 0x3FFFFF), 0);
      v54 = *v53;
      v55 = ((unsigned __int64)*v53 >> 17) & 0x3FFFFF;
      if ( v55 != 1 )
        v54 ^= (v54 ^ ((((unsigned __int64)*v53 >> 17) - 1) << 17)) & 0x7FFFFE0000LL;
      *v53 = v54;
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140C67A78 + 4 * (((((__int64)v53 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)v53 - qword_140C67A70) >> 3) & 0x1F)));
      if ( v55 == 1 )
LABEL_83:
        MiDecrementAweMapCount(v52, v51, &v94, 0);
LABEL_84:
      v56 = v84;
      v57 = v85;
      goto LABEL_85;
    }
    v57 = v85;
    v65 = 0LL;
    v56 = v84;
    v66 = 48 * v51 - 0x220000000000LL;
    if ( v85 )
    {
      v67 = v90;
      do
      {
        if ( (*(_QWORD *)(v66 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          goto LABEL_115;
        v89 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v66 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v89);
            while ( *(__int64 *)(v66 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v66 + 24), 0x3FuLL) );
          v57 = v85;
        }
        v68 = *(_QWORD *)(v66 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( v68 != 1 )
          *(_QWORD *)(v66 + 24) ^= (*(_QWORD *)(v66 + 24) ^ (v68 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v68 == 1 )
        {
LABEL_115:
          MiDecrementAweMapCount(v67, v51, &v94, 0);
          v57 = v85;
        }
        v56 = v84;
        v66 += 48 * v84;
        v51 += v84;
        v65 += v84;
      }
      while ( v65 < v57 );
      ValidPte = v91;
      v9 = v92;
    }
    v48 = v86;
LABEL_85:
    v28 = v87 + 1;
    a5 = v98;
    if ( (((_BYTE)++v87 * (_BYTE)v88) & 0x3F) != 0 && v57 == v56 )
    {
      v18 = v82;
    }
    else
    {
      v18 = v82;
      if ( MiWorkingSetIsContended((__int64)v77)
        || (unsigned int)MiPageTableLockIsContended(v58, v82)
        || KeShouldYieldProcessor() )
      {
        if ( v28 == v93 )
          break;
        v59 = MiUpdateAwePageTable(v82, v80, v74);
        MiFlushTbList((int *)v99);
        if ( v79 && v83 )
        {
          MiFlushGraphicsPtes(v83, ((__int64)(v48 - v83) >> 3) + 1);
          v83 = 0LL;
        }
        MiUnlockPageTableInternal((__int64)v77, v82);
        MiUnlockWorkingSetShared((__int64)v77, v73);
        if ( v59 && v81 )
        {
          MiGetLeafVa(v82 + 8);
          v60 = MiGetLeafVa(v82);
          MiDeleteEmptyPageTables(v60, v61, v62);
        }
        v18 = 0LL;
        v80 = 0LL;
        v74 = 0;
        v82 = 0LL;
        MiLockWorkingSetShared((__int64)v77);
        v28 = v87;
      }
    }
    v15 = v75;
    if ( v28 >= v93 )
      break;
    v26 = v81;
  }
  if ( !v18 )
  {
LABEL_120:
    v63 = v81;
    v64 = 0;
    goto LABEL_121;
  }
  v63 = v81;
  v64 = MiUpdateAwePageTable(v18, v80, v74);
  if ( v81 )
  {
    MiFlushTbList((int *)v99);
    if ( v79 && v83 )
      MiFlushGraphicsPtes(v83, ((__int64)(v48 - v83) >> 3) + 1);
    MiUnlockPageTableInternal((__int64)v77, v18);
LABEL_121:
    MiUnlockWorkingSetShared((__int64)v77, v73);
    if ( v64 && v63 )
    {
      MiGetLeafVa(v18 + 8);
      v69 = MiGetLeafVa(v18);
      MiDeleteEmptyPageTables(v69, v70, v71);
    }
  }
  return v94;
}
