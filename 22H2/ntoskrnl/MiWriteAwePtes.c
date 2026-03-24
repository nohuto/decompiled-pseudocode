/*
 * XREFs of MiWriteAwePtes @ 0x14054E1D8
 * Callers:
 *     MiDeleteVadAwePtes @ 0x14054BA74 (MiDeleteVadAwePtes.c)
 *     NtMapUserPhysicalPages @ 0x1408D6D30 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D6FF0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x14025B070 (MiLocateAddress.c)
 *     MiPageTableLockIsContended @ 0x140288AE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402EDDE0 (MiInsertLargeTbFlushEntry.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4610 (MiDeleteEmptyPageTables.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiDecrementAweMapCount @ 0x14054B928 (MiDecrementAweMapCount.c)
 *     MiGetAweNode @ 0x14054C320 (MiGetAweNode.c)
 *     MiGetAweViewPageSize @ 0x14054C418 (MiGetAweViewPageSize.c)
 *     MiUpdateAwePageTable @ 0x14054DF74 (MiUpdateAwePageTable.c)
 *     MiWriteAweClusterPte @ 0x14054E124 (MiWriteAweClusterPte.c)
 */

__int64 __fastcall MiWriteAwePtes(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        char a6)
{
  ULONG_PTR v6; // r12
  unsigned __int64 *v8; // rdi
  __int64 AweViewPageSize; // rax
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r10
  unsigned __int64 v14; // r13
  __int64 v15; // r15
  unsigned int v16; // edx
  unsigned int v17; // ebx
  int v18; // eax
  unsigned int v19; // esi
  unsigned __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  unsigned __int8 v24; // al
  __int64 v25; // r10
  BOOL v26; // eax
  unsigned __int64 LeafVa; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rcx
  _QWORD *v30; // r9
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  unsigned int v33; // ecx
  __int64 v34; // r9
  unsigned int v35; // r11d
  unsigned int v36; // esi
  unsigned __int8 v37; // r10
  int v38; // eax
  unsigned __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rcx
  unsigned __int64 v42; // r15
  int updated; // ebx
  _KPROCESS *v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r9
  char v47; // r10
  __int64 v48; // rdx
  __int64 v49; // r8
  _DWORD *v50; // r9
  ULONG_PTR v51; // rax
  __int64 v52; // rbx
  int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // rcx
  unsigned __int64 v56; // rdi
  __int64 v57; // r15
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rbx
  unsigned __int64 v62; // r15
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned __int64 v65; // r14
  __int64 v66; // r9
  __int64 v67; // r8
  unsigned __int64 v68; // rbx
  __int64 v69; // r15
  int IsContended; // eax
  ULONG_PTR v71; // rdi
  __int64 v72; // rdi
  bool v73; // cf
  int v74; // ebx
  _KPROCESS *v75; // rdx
  ULONG_PTR v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r8
  _DWORD *v79; // r9
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // r9
  char v82; // r10
  _KPROCESS *v83; // rdx
  int v84; // ebx
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // r9
  char v87; // r10
  unsigned __int8 v89; // [rsp+30h] [rbp-D0h]
  int v90; // [rsp+34h] [rbp-CCh]
  __int64 v91; // [rsp+38h] [rbp-C8h]
  __int64 v92; // [rsp+40h] [rbp-C0h]
  unsigned int v93; // [rsp+48h] [rbp-B8h]
  __int64 v94; // [rsp+50h] [rbp-B0h]
  __int64 v95; // [rsp+58h] [rbp-A8h]
  BOOL v96; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v97; // [rsp+68h] [rbp-98h]
  __int64 v98; // [rsp+70h] [rbp-90h]
  unsigned int v99; // [rsp+78h] [rbp-88h]
  _QWORD *v100; // [rsp+80h] [rbp-80h]
  unsigned __int64 ValidPte; // [rsp+88h] [rbp-78h]
  __int64 v102; // [rsp+90h] [rbp-70h]
  int v103; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v104; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v105; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v106; // [rsp+B0h] [rbp-50h]
  __int64 v107; // [rsp+B8h] [rbp-48h]
  _QWORD *v108; // [rsp+C0h] [rbp-40h]
  __int64 v109; // [rsp+C8h] [rbp-38h]
  __int64 v110; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v111; // [rsp+D8h] [rbp-28h]
  __int64 v112; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v113; // [rsp+E8h] [rbp-18h]
  __int64 v114; // [rsp+F0h] [rbp-10h]
  _QWORD v115[24]; // [rsp+100h] [rbp+0h] BYREF

  v6 = a5;
  v106 = a3;
  v108 = a2;
  v109 = a4;
  memset(v115, 0, 0xB8uLL);
  v111 = *(_QWORD *)(a1 + 32);
  v8 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v98 = (__int64)v8;
  v102 = *(_QWORD *)(v111 + 8);
  AweViewPageSize = MiGetAweViewPageSize(a1);
  LODWORD(v115[1]) = 20;
  v97 = 0LL;
  v95 = 0LL;
  v12 = v10;
  v90 = 0;
  if ( AweViewPageSize )
    v12 = AweViewPageSize;
  v110 = 0LL;
  v94 = v12;
  WORD2(v115[0]) = 0;
  v115[2] = 0LL;
  v99 = v12 == 512;
  LODWORD(v115[0]) = 1;
  v13 = v10;
  v115[3] = 0LL;
  v14 = 0LL;
  if ( v12 == 512 )
    v13 = 1LL;
  v91 = v13;
  if ( (a6 & 1) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 24);
    v92 = v15;
    v16 = (v99 << 26) | 0x80000000;
    v17 = *(_DWORD *)(v15 + 48);
    if ( (v17 & 0x300000) == 0x300000 )
      v16 = v99 << 26;
    if ( (*v11 & 1) != 0 )
      v18 = 4;
    else
      v18 = (v17 >> 7) & 0x1F;
    ValidPte = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v18 | v16, (__int64)v11);
    v19 = (v17 >> 12) & 0x3F;
    v20 = ValidPte;
    v93 = v19;
    v24 = MiLockWorkingSetShared((__int64)v8, v21, v22, v23);
    v25 = v91;
    v89 = v24;
    v26 = (v17 & 0x1100000) == 17825792;
  }
  else
  {
    v15 = 0LL;
    v92 = 0LL;
    v20 = 0LL;
    ValidPte = 0LL;
    v19 = 0;
    v93 = 0;
    v89 = 17;
    LeafVa = MiGetLeafVa(a5);
    v26 = ((_DWORD)MiLocateAddress(LeafVa)[6] & 0x1100000) == 17825792;
  }
  v96 = v26;
  v105 = 0LL;
  if ( !v106 )
  {
    v72 = v92;
    goto LABEL_116;
  }
  v28 = v108;
  v29 = v109;
  v30 = v108;
  v113 = 8 * v25;
  v31 = v109 - (_QWORD)v108;
  v107 = 0LL;
  v114 = v109 - (_QWORD)v108;
  v100 = v108;
  while ( 1 )
  {
    if ( v29 )
    {
      v32 = *(_QWORD *)((char *)v30 + v31);
      v33 = v99;
      v6 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v94 == 512 )
      {
        do
        {
          v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v33;
        }
        while ( v33 );
      }
      if ( v32 < (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) << 12
        || v32 > (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF) )
      {
        v15 = MiGetAweNode(v32)[3];
        v92 = v15;
        v36 = *(_DWORD *)(v15 + 48);
        if ( ((unsigned __int8)*(_DWORD *)v111 & v37) != 0 )
          v38 = 4;
        else
          v38 = (v36 >> 7) & 0x1F;
        v39 = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v38 | v35, v34);
        v30 = v100;
        v20 = v39;
        v19 = (v36 >> 12) & 0x3F;
        ValidPte = v39;
        v93 = v19;
      }
      if ( !v28 || (v40 = v20, !*v30) )
        v40 = ZeroPte;
    }
    else
    {
      v40 = ZeroPte;
      if ( v28 )
        v40 = v20;
    }
    if ( (v40 & 1) != 0 )
      v40 ^= (v40 ^ (*v30 << 12)) & 0xFFFFFFFFF000LL;
    v41 = (v6 >> 9) & 0x7FFFFFFFF8LL;
    if ( v15 )
    {
      v42 = v41 - 0x98000000000LL;
      if ( v14 != v41 - 0x98000000000LL )
      {
        if ( v14 )
        {
          updated = MiUpdateAwePageTable(v14, v95, v90);
          MiFlushTbList((__int64)v115, v44);
          if ( v96 )
            v97 = 0LL;
          MiUnlockPageTableInternal(v98, v14);
          if ( updated )
          {
            MiUnlockWorkingSetShared(v98, v89);
            MiGetLeafVa(v14 + 8);
            v45 = MiGetLeafVa(v14);
            MiDeleteEmptyPageTables(v45, v46, v47);
            v89 = MiLockWorkingSetShared(v98, v48, v49, v50);
          }
          v95 = 0LL;
          v90 = 0;
        }
        MiMakeSystemAddressValid(v6, 0LL, v19, v89, 0);
        v14 = v42;
      }
      v15 = v92;
    }
    else
    {
      v14 = v41 - 0x98000000000LL;
    }
    v51 = v6;
    v52 = *(_QWORD *)v6;
    v53 = 0;
    v112 = *(_QWORD *)v6;
    if ( v97 )
      v51 = v97;
    v97 = v51;
    v104 = v51;
    if ( (v40 & 1) == 0 )
    {
      if ( v52 )
      {
        v90 -= v91;
        v95 -= v91;
        if ( (v52 & 1) == 0 || (v53 = 3, v94 != 512) )
          v53 = 4;
      }
      goto LABEL_57;
    }
    if ( (v52 & 1) != 0 )
    {
      if ( v40 != v52 )
      {
        LOBYTE(v53) = v94 == 512;
        ++v53;
      }
LABEL_57:
      v54 = v91;
      goto LABEL_58;
    }
    v54 = v91;
    v53 = 5;
    if ( (v52 & 0x800) == 0 )
    {
      v95 += v91;
      if ( !v52 )
        v90 += v91;
    }
LABEL_58:
    MiWriteAweClusterPte(v98, (__int64 *)v6, v40, v53, v54);
    if ( v52 )
    {
      if ( (v52 & 1) != 0 )
      {
        if ( v15 )
        {
          if ( v94 == 512 )
          {
            if ( v91 )
            {
              v56 = v6;
              v57 = v91;
              do
              {
                MiInsertLargeTbFlushEntry((__int64)v115, v99, v56);
                v56 += 8LL;
                --v57;
              }
              while ( v57 );
              v19 = v93;
              v20 = ValidPte;
            }
          }
          else
          {
            MiInsertTbFlushEntry((__int64)v115, (__int64)(v6 << 25) >> 16, v91, 0);
          }
        }
        v58 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v112) >> 12;
      }
      else
      {
        v59 = v52;
        if ( qword_140C4DF40 && (v52 & 0x10) == 0 )
          v59 = v52 & ~qword_140C4DF40;
        v58 = v59 >> 12;
      }
      v55 = 0xFFFFFFFFFLL;
      v60 = v58 & 0xFFFFFFFFFLL;
    }
    else
    {
      v60 = -1LL;
    }
    if ( !v52 )
    {
      v64 = v102;
LABEL_90:
      v63 = v94;
      goto LABEL_91;
    }
    v61 = 48 * v60 - 0x58000000000LL;
    v62 = 0LL;
    v63 = v94;
    v64 = v102;
    if ( v94 )
    {
      v65 = v94;
      v66 = 0x3FFFFFFFFFFFFFFFLL;
      v67 = 1LL;
      do
      {
        if ( (*(_QWORD *)(v61 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          goto LABEL_86;
        v103 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v103, v64, v67, v66);
            while ( *(__int64 *)(v61 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) );
          v65 = v94;
          v66 = 0x3FFFFFFFFFFFFFFFLL;
          v67 = 1LL;
        }
        v55 = *(_QWORD *)(v61 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( v55 == 1 )
          v55 = 1LL;
        else
          *(_QWORD *)(v61 + 24) ^= (*(_QWORD *)(v61 + 24) ^ (v55 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v55 == 1 )
        {
LABEL_86:
          MiDecrementAweMapCount(v55, v61, &v110, 0LL);
          v67 = 1LL;
          v66 = 0x3FFFFFFFFFFFFFFFLL;
        }
        v64 = v102;
        v61 += 48 * v102;
        v62 += v102;
      }
      while ( v62 < v65 );
      v19 = v93;
      v20 = ValidPte;
      goto LABEL_90;
    }
LABEL_91:
    v68 = v105 + 1;
    v30 = v100 + 1;
    v6 += v113;
    ++v105;
    ++v100;
    v107 += v91;
    if ( (v107 & 0x3F) == 0 || v63 != v64 )
      break;
    v72 = v92;
    v69 = v98;
LABEL_98:
    v73 = v68 < v106;
    v28 = v108;
    v31 = v114;
    v29 = v109;
    if ( !v73 )
      goto LABEL_112;
    v15 = v92;
  }
  v69 = v98;
  if ( MiWorkingSetIsContended(v98) )
  {
    v71 = v104;
  }
  else
  {
    IsContended = MiPageTableLockIsContended(v98, v14);
    v71 = v104;
    if ( !IsContended )
    {
      v97 = v104;
      if ( !KeShouldYieldProcessor() )
      {
        v72 = v92;
LABEL_97:
        v30 = v100;
        goto LABEL_98;
      }
    }
  }
  if ( v68 != v106 )
  {
    v74 = MiUpdateAwePageTable(v14, v95, v90);
    MiFlushTbList((__int64)v115, v75);
    v97 = v71;
    if ( v96 )
    {
      v76 = v71;
      if ( v71 )
        v76 = 0LL;
      v97 = v76;
    }
    MiUnlockPageTableInternal(v98, v14);
    MiUnlockWorkingSetShared(v98, v89);
    v72 = v92;
    if ( v74 && v92 )
    {
      MiGetLeafVa(v14 + 8);
      v80 = MiGetLeafVa(v14);
      MiDeleteEmptyPageTables(v80, v81, v82);
    }
    v95 = 0LL;
    v14 = 0LL;
    v90 = 0;
    MiLockWorkingSetShared(v98, v77, v78, v79);
    v68 = v105;
    goto LABEL_97;
  }
  v72 = v92;
LABEL_112:
  if ( v14 )
  {
    v84 = MiUpdateAwePageTable(v14, v95, v90);
    if ( v72 )
    {
      MiFlushTbList((__int64)v115, v83);
      MiUnlockPageTableInternal(v69, v14);
      goto LABEL_117;
    }
    return v110;
  }
LABEL_116:
  v69 = v98;
  v84 = 0;
LABEL_117:
  MiUnlockWorkingSetShared(v69, v89);
  if ( v84 && v72 )
  {
    MiGetLeafVa(v14 + 8);
    v85 = MiGetLeafVa(v14);
    MiDeleteEmptyPageTables(v85, v86, v87);
  }
  return v110;
}
