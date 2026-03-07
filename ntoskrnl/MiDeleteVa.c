__int64 __fastcall MiDeleteVa(__int64 a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR v3; // rbx
  ULONG_PTR v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r10
  __int64 v9; // r15
  int v10; // ebp
  unsigned __int64 v11; // r12
  bool v12; // zf
  __int64 v13; // r14
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  __int64 *v16; // rdi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  char v19; // bl
  __int64 v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // rax
  BOOL v23; // ebp
  __int64 v24; // rcx
  __int64 v25; // rbp
  int v26; // edx
  unsigned __int64 v27; // rdx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rsi
  int i; // r13d
  unsigned __int64 v32; // r8
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // r13
  BOOL v36; // r14d
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // r8
  struct _LIST_ENTRY *v39; // r9
  volatile unsigned __int64 v40; // rax
  int v41; // edx
  unsigned __int8 WsleContents; // bp
  volatile unsigned __int64 v43; // rbx
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rbx
  volatile unsigned __int64 v46; // rdx
  unsigned int v47; // ecx
  int v48; // edi
  int v49; // r9d
  unsigned __int64 v50; // r8
  __int64 v51; // rax
  unsigned __int64 *v52; // rbx
  unsigned int v53; // r9d
  char v54; // al
  __int64 v55; // r10
  __int64 v56; // rax
  unsigned __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // rdx
  unsigned __int64 v61; // rax
  int v62; // r8d
  __int64 v63; // r9
  int v64; // r10d
  __int64 v65; // rbx
  unsigned __int64 v66; // r8
  __int64 v67; // rax
  ULONG_PTR v68; // rbx
  __int64 v69; // rcx
  unsigned int v70; // eax
  __int64 v71; // r8
  char v72; // al
  int v73; // edx
  __int64 v74; // rcx
  __int64 v75; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v77; // rax
  __int64 v78; // rdx
  struct _LIST_ENTRY *v79; // r8
  __int64 v80; // rax
  __int64 v81; // r8
  __int64 v82; // rax
  struct _LIST_ENTRY *v83; // rax
  __int64 v84; // rax
  char v85; // r8^7
  struct _LIST_ENTRY *v86; // rax
  __int64 v87; // rax
  char v88; // r8^7
  struct _LIST_ENTRY *v89; // rax
  __int64 v90; // rax
  __int64 v91; // r8
  struct _LIST_ENTRY *v92; // r8
  __int64 v93; // rax
  __int64 v94; // r8
  __int64 v95; // rcx
  struct _LIST_ENTRY *v96; // r8
  __int64 v97; // rax
  __int64 v99; // r8
  struct _LIST_ENTRY *v100; // rcx
  __int64 v101; // rcx
  char v102; // cl
  unsigned __int64 v103; // rcx
  struct _LIST_ENTRY *v104; // rdx
  __int64 v105; // rax
  unsigned __int64 v106; // rdi
  __int64 v107; // r8
  int v108; // eax
  __int64 v109; // r8
  unsigned __int64 v110; // r9
  _QWORD *CloneAddress; // rax
  ULONG_PTR v112; // rdx
  __int64 v114; // r8
  struct _LIST_ENTRY *v115; // rcx
  __int64 v116; // rcx
  int v117; // [rsp+30h] [rbp-B8h] BYREF
  int v118; // [rsp+34h] [rbp-B4h]
  __int64 v119; // [rsp+38h] [rbp-B0h]
  __int64 v120; // [rsp+40h] [rbp-A8h]
  __int64 v121; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v122; // [rsp+50h] [rbp-98h]
  int v123; // [rsp+58h] [rbp-90h]
  __int64 v124; // [rsp+60h] [rbp-88h]
  __int64 v125; // [rsp+68h] [rbp-80h] BYREF
  __int64 v126; // [rsp+70h] [rbp-78h] BYREF
  __int64 v127; // [rsp+78h] [rbp-70h] BYREF
  _OWORD v128[2]; // [rsp+80h] [rbp-68h] BYREF

  v3 = *(_QWORD *)a2;
  v117 = a3;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v77 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v78 = v3 | 0x20;
      if ( (v77 & 0x20) == 0 )
        v78 = v3;
      v3 = v78;
      if ( (v77 & 0x42) != 0 )
        v3 = v78 | 0x42;
    }
  }
  v6 = v3;
  v121 = v3;
  if ( v3 )
  {
    v7 = *(_QWORD *)(a1 + 168);
    v8 = *(_QWORD *)(a1 + 24);
    v9 = *(_QWORD *)(a1 + 16);
    v119 = v7;
    v10 = *(_DWORD *)(v7 + 120);
    v120 = v8;
    v11 = (__int64)(a2 << 25) >> 16;
    if ( (v3 & 1) != 0 )
    {
      if ( a3 < 1 )
        goto LABEL_5;
      if ( (v3 & 0x80u) == 0LL )
      {
        if ( !(unsigned int)MiIsPageTableDeletable(a1, a2) )
          return 0LL;
        a3 = v117;
        v8 = v120;
LABEL_5:
        v12 = (*(_BYTE *)(v8 + 184) & 7) == 0;
        v122 = 0LL;
        if ( !v12 )
        {
          MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL);
          if ( (v10 & 0x100) == 0 )
          {
            v34 = v117;
            if ( v117 >= 1 )
            {
              if ( !(unsigned int)MiEvictPageTableLock(v120, a2, v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400, v117 > 1) )
                return 0LL;
              goto LABEL_32;
            }
            goto LABEL_202;
          }
LABEL_201:
          v34 = v117;
LABEL_202:
          v25 = v120;
          goto LABEL_56;
        }
        if ( a3 )
        {
LABEL_17:
          if ( (v10 & 0x100) == 0 )
          {
            if ( a3 )
              goto LABEL_59;
            v14 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v15 = *(_QWORD *)v14;
            if ( v14 >= 0xFFFFF6FB7DBED000uLL
              && v14 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v15 & 1) != 0
              && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
            {
              v86 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v86 )
              {
                v87 = *((_QWORD *)&v86->Flink + ((v14 >> 3) & 0x1FF));
                v88 = HIBYTE(*(_QWORD *)v14);
                if ( (v87 & 0x20) == 0 )
                  v88 = HIBYTE(v15);
                HIBYTE(v15) = v88;
                if ( (v87 & 0x42) != 0 )
                  HIBYTE(v15) = v88;
              }
            }
            if ( (HIBYTE(v15) & 0xF) == 8 )
              goto LABEL_59;
            v16 = (__int64 *)(v7 + 136);
            v17 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v18 = *(_QWORD *)v17;
            if ( v17 >= 0xFFFFF6FB7DBED000uLL
              && v17 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v18 & 1) != 0
              && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
            {
              v89 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v89 )
              {
                v90 = *((_QWORD *)&v89->Flink + ((v17 >> 3) & 0x1FF));
                v91 = v18 | 0x20;
                if ( (v90 & 0x20) == 0 )
                  v91 = v18;
                v18 = v91;
                if ( (v90 & 0x42) != 0 )
                  v18 = v91 | 0x42;
              }
            }
            v19 = HIBYTE(v18) & 0xF | (16 * ((v18 >> 60) & 7));
            v20 = *(_QWORD *)a2;
            if ( a2 >= 0xFFFFF6FB7DBED000uLL
              && a2 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v20 & 1) != 0
              && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
            {
              v92 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v92 )
              {
                v93 = *((_QWORD *)&v92->Flink + ((a2 >> 3) & 0x1FF));
                v94 = v20 | 0x20;
                if ( (v93 & 0x20) == 0 )
                  v94 = *(_QWORD *)a2;
                v20 = v94;
                if ( (v93 & 0x42) != 0 )
                  v20 = v94 | 0x42;
              }
            }
            v125 = v20;
            v21 = *(_QWORD *)(48
                            * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v125) >> 12) & 0xFFFFFFFFFFLL)
                            - 0x21FFFFFFFFD8LL);
            v22 = *(_QWORD *)(v7 + 144);
            v23 = v21 >= 0;
            if ( v22 )
            {
              v24 = *(_QWORD *)(v7 + 152);
              if ( a2 == v22 + 8 * v24 && v19 == *(_BYTE *)(v7 + 164) && v23 == (*(_DWORD *)(v7 + 160) & 1) )
              {
                *(_QWORD *)(v7 + 152) = v24 + 1;
LABEL_28:
                v25 = v120;
                v26 = 1;
                v122 = 1LL;
                goto LABEL_29;
              }
              if ( (*(_DWORD *)(v7 + 160) & 2) != 0 )
              {
LABEL_59:
                v35 = 1LL;
                v123 = 0;
                v36 = 1;
                v37 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v38 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v37) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
                if ( v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL )
                {
                  v40 = *(_QWORD *)v37;
                  v41 = 1;
                  v118 = 1;
                  if ( v37 >= 0xFFFFF6FB7DBED000uLL && v37 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
                  {
                    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                      && (v40 & 1) != 0
                      && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
                    {
                      v39 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                      if ( v39 )
                      {
                        v95 = *((_QWORD *)&v39->Flink + ((v37 >> 3) & 0x1FF));
                        if ( (v95 & 0x20) != 0 )
                          v40 |= 0x20uLL;
                        if ( (v95 & 0x42) != 0 )
                          v40 |= 0x42uLL;
                      }
                    }
                    v41 = 1;
                  }
                  WsleContents = HIBYTE(v40) & 0xF | (16 * ((v40 >> 60) & 7));
                  v36 = *(_QWORD *)(v38 + 40) >= 0LL;
                  if ( (HIBYTE(v40) & 0xF) == 8 )
                  {
                    MiUnlockWsle(v120, (__int64)(a2 << 25) >> 16, v38, v39);
                    WsleContents = MiGetWsleContents(v74, (__int64)(a2 << 25) >> 16);
                    v41 = 1;
                  }
                }
                else
                {
                  v41 = 0;
                  WsleContents = (*(_BYTE *)v38 >> 1) & 7;
                  v118 = 0;
                }
                v43 = *(_QWORD *)v37;
                if ( v37 >= 0xFFFFF6FB7DBED000uLL
                  && v37 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0x600000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v43 & 1) != 0
                  && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
                {
                  v96 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v96 )
                  {
                    v97 = *((_QWORD *)&v96->Flink + ((v37 >> 3) & 0x1FF));
                    if ( (v97 & 0x20) != 0 )
                      v43 |= 0x20uLL;
                    if ( (v97 & 0x42) != 0 )
                      v43 |= 0x42uLL;
                  }
                }
                v44 = 0xFFFFF6FB40000000uLL;
                v45 = v43 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
                if ( !v41 )
                {
                  if ( !(unsigned int)MiEvictPageTableLock(v120, v37, v45, 0LL) )
                    return 0LL;
                  goto LABEL_72;
                }
                v46 = *(_QWORD *)v37;
                if ( v37 >= 0xFFFFF6FB7DBED000uLL && v37 <= 0xFFFFF6FB7DBED7F8uLL && MiPteHasShadow() )
                  goto LABEL_70;
                v47 = ((unsigned int)MiFlags >> 26) & 3;
                if ( v47 <= 1 )
                {
                  if ( !v47 )
                    goto LABEL_70;
                  if ( v37 >= v44 && v37 <= 0xFFFFF6FB7FFFFFFFuLL && (v46 & 0x80u) == 0LL )
                    LOBYTE(v46) = 32;
                }
                else if ( (MiFlags & 0x2000000) != 0 )
                {
                  _mm_lfence();
                }
                if ( (v46 & 0x20) == 0 )
                {
                  if ( (MiFlags & 0x2000000) != 0 )
                    _mm_lfence();
                  v121 = _InterlockedExchange64((volatile __int64 *)v37, v45);
                  if ( MiPteInShadowRange(v37) )
                    MiWritePteShadow(v37, v45, v71);
                  if ( (v121 & 0x20) == 0 )
                  {
                    v48 = v123;
                    goto LABEL_73;
                  }
LABEL_72:
                  v48 = 1;
LABEL_73:
                  v49 = WsleContents;
                  v25 = v120;
                  MiRemoveWsle(v120, (__int64)(a2 << 25) >> 16, 1, v49, 10, v36);
                  if ( v118 )
                  {
                    v50 = ((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
                    v51 = *(_QWORD *)v50;
                    if ( v50 >= 0xFFFFF6FB7DBED000uLL
                      && v50 <= 0xFFFFF6FB7DBED7F8uLL
                      && (MiFlags & 0x600000) != 0
                      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                      && (v51 & 1) != 0
                      && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
                    {
                      v100 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                      if ( v100 )
                      {
                        v101 = *((_QWORD *)&v100->Flink + ((v50 >> 3) & 0x1FF));
                        if ( (v101 & 0x20) != 0 )
                          v51 |= 0x20uLL;
                        if ( (v101 & 0x42) != 0 )
                          v51 |= 0x42uLL;
                      }
                    }
                    v126 = v51;
                    v52 = (unsigned __int64 *)(48
                                             * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v126) >> 12) & 0xFFFFFFFFFFLL)
                                             - 0x220000000000LL);
                    if ( ((*(_DWORD *)v52 >> 4) & 0x3FF) == 0 )
                    {
                      MiCountWslesInPageTable(0xFFFFFFFFFFLL, (__int64)(a2 << 25) >> 16, v128);
                      v72 = 8;
                      while ( 1 )
                      {
                        v73 = *((_DWORD *)v128 + (unsigned __int8)--v72);
                        if ( v73 )
                          break;
                        if ( !v72 )
                          goto LABEL_76;
                      }
                      *v52 = *v52 & 0xFFFFFFFFFFFE000FuLL | (16 * (v73 & 0x3FF | ((unsigned __int64)(v72 & 7) << 10)));
                    }
                  }
LABEL_76:
                  if ( !v48 )
                    goto LABEL_85;
                  if ( *(_DWORD *)v9 != 1 )
                  {
                    v102 = *(_BYTE *)(v9 + 4);
                    if ( (v102 & 8) == 0 && v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
                      *(_BYTE *)(v9 + 4) = v102 | 8;
                  }
                  v53 = *(_DWORD *)(v9 + 12);
                  v54 = *(_BYTE *)(v9 + 4);
                  if ( !v53 || (v54 & 4) != 0 )
                  {
                    v55 = v53 - 1;
                    if ( !v53 || (v54 & 4) != 0 )
                      goto LABEL_92;
                  }
                  else
                  {
                    v55 = v53 - 1;
                    v56 = *(_QWORD *)(v9 + 8 * v55 + 24);
                    if ( (v56 & 0xC00) == 0 )
                    {
                      v57 = *(_QWORD *)(v9 + 8 * v55 + 24) & 0x3FFLL;
                      if ( (v56 & 0xFFFFFFFFFFFFF000uLL) + ((v57 + 1) << 12) == v11
                        && v57 + 1 >= v57
                        && v57 + 1 <= 0x3FF )
                      {
                        ++*(_QWORD *)(v9 + 16);
                        *(_QWORD *)(v9 + 8 * v55 + 24) = v56 ^ ((unsigned __int16)v56 ^ (unsigned __int16)(v56 + 1)) & 0x3FF;
LABEL_85:
                        v26 = 0;
LABEL_29:
                        v6 = *(_QWORD *)a2;
                        if ( a2 >= 0xFFFFF6FB7DBED000uLL
                          && a2 <= 0xFFFFF6FB7DBED7F8uLL
                          && (MiFlags & 0x600000) != 0
                          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                          && (v6 & 1) != 0
                          && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
                        {
                          v104 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                          if ( v104 )
                          {
                            v105 = *((_QWORD *)&v104->Flink + ((a2 >> 3) & 0x1FF));
                            if ( (v105 & 0x20) != 0 )
                              v6 |= 0x20uLL;
                            if ( (v105 & 0x42) != 0 )
                              v6 |= 0x42uLL;
                          }
                          v26 = v122;
                        }
                        if ( v26 )
                          goto LABEL_31;
                        v34 = v117;
LABEL_56:
                        if ( (v6 & 1) != 0 )
                        {
                          v106 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
                          v121 = v106;
                          if ( v34 == 3 && (*(_BYTE *)(v25 + 184) & 7) != 0 )
                          {
                            MiWriteTopLevelPxe((_QWORD *)a2, v106);
                          }
                          else if ( MiPteInShadowRange(a2) && MiPteHasShadow() )
                          {
                            *(_QWORD *)a2 = v106;
                            MiWritePteShadow(a2, v106, v107);
                          }
                          else
                          {
                            *(_QWORD *)a2 = v106;
                          }
                        }
LABEL_31:
                        v7 = v119;
                        goto LABEL_32;
                      }
                    }
                  }
                  v58 = *(_QWORD *)(v9 + 8 * v55 + 24);
                  if ( (v58 & 0xC00) == 0 && (v58 & 0xFFFFFFFFFFFFF000uLL) == v11 + 4096 )
                  {
                    v103 = *(_QWORD *)(v9 + 8 * v55 + 24) & 0x3FFLL;
                    if ( v103 + 1 >= v103 && v103 + 1 <= 0x3FF )
                    {
                      ++*(_QWORD *)(v9 + 16);
                      *(_QWORD *)(v9 + 8 * v55 + 24) = (v58 - 4096) ^ ((unsigned __int16)(v58 - 4096) ^ (unsigned __int16)(v58 - 4096 + 1)) & 0x3FF;
                      goto LABEL_85;
                    }
                  }
LABEL_92:
                  if ( v53 < *(_DWORD *)(v9 + 8) )
                  {
                    LODWORD(v59) = *(_DWORD *)(v9 + 12);
                    while ( 1 )
                    {
                      v60 = (unsigned __int64)(v35 - 1) > 0x3FF ? 1024LL : v35;
                      v61 = v11 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v60 - 1) & 0x3FF;
                      v35 -= v60;
                      v11 += v60 << 12;
                      *(_QWORD *)(v9 + 8LL * (unsigned int)v59 + 24) = v61;
                      v62 = *(_DWORD *)(v9 + 12);
                      *(_QWORD *)(v9 + 16) += v60;
                      LODWORD(v59) = v62 + 1;
                      *(_DWORD *)(v9 + 12) = v59;
                      if ( (_DWORD)v59 == *(_DWORD *)(v9 + 8) && (*(_BYTE *)(v9 + 4) & 4) == 0 )
                      {
                        qsort(
                          (void *)(v9 + 24),
                          (unsigned int)v59,
                          8uLL,
                          (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
                        MiCompressTbFlushList(v9);
                        v59 = *(unsigned int *)(v9 + 12);
                        if ( (_DWORD)v59 == *(_DWORD *)(v9 + 8) )
                          break;
                      }
                      if ( !v35 )
                        goto LABEL_85;
                    }
                    v26 = 0;
                    if ( v35 )
                    {
                      *(_BYTE *)(v9 + 5) = 1;
                      *(_QWORD *)(v9 + 16) = v59;
                    }
                    goto LABEL_29;
                  }
                  *(_BYTE *)(v9 + 5) = 1;
                  goto LABEL_85;
                }
LABEL_70:
                if ( MiPteInShadowRange(v37) && MiPteHasShadow() )
                {
                  *(_QWORD *)v37 = v45;
                  MiWritePteShadow(v37, v45, v99);
                }
                else
                {
                  *(_QWORD *)v37 = v45;
                }
                goto LABEL_72;
              }
              MiTerminateWsleCluster(v16);
            }
            v70 = v23 | *(_DWORD *)(v7 + 160) & 0xFFFFFFFE;
            *v16 = v120;
            *(_DWORD *)(v7 + 160) = v70;
            *(_QWORD *)(v7 + 144) = a2;
            *(_QWORD *)(v7 + 152) = 1LL;
            *(_BYTE *)(v7 + 164) = v19;
            goto LABEL_28;
          }
          MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL);
          goto LABEL_201;
        }
        if ( (v10 & 0x800) != 0 )
        {
          MiDeleteLargeUserPde(a1, a2);
          MiFlushTbListEarly(v9, 0);
          return 0LL;
        }
        if ( (v10 & 0x10) != 0 )
        {
          v82 = MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL), a2, v7 + 128);
          MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, v82);
        }
        else if ( (v10 & 0x60) != 0 )
        {
          MiDeletePhysmemPte(a1, a2);
        }
        else
        {
          if ( (v10 & 8) == 0 )
            goto LABEL_11;
          if ( !(unsigned int)MiRotatedToFrameBuffer(a2) )
          {
            a3 = v117;
            v8 = v120;
LABEL_11:
            if ( (v10 & 0x90) == 0x80 )
            {
              if ( (v10 & 2) != 0 && (*(_BYTE *)(v8 + 187) & 1) == 0 && dword_140C67C68 )
              {
                if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
                  goto LABEL_53;
                v32 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v33 = *(_QWORD *)v32;
                if ( v32 >= 0xFFFFF6FB7DBED000uLL && v32 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
                {
                  if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                    && (v33 & 1) != 0
                    && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
                  {
                    v83 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                    if ( v83 )
                    {
                      v84 = *((_QWORD *)&v83->Flink + ((v32 >> 3) & 0x1FF));
                      v85 = HIBYTE(*(_QWORD *)v32);
                      if ( (v84 & 0x20) == 0 )
                        v85 = HIBYTE(v33);
                      HIBYTE(v33) = v85;
                      if ( (v84 & 0x42) != 0 )
                        HIBYTE(v33) = v85;
                    }
                  }
                  v6 = v121;
                }
                if ( (HIBYTE(v33) & 0xF) != 7 )
                {
LABEL_53:
                  if ( (*(_BYTE *)a2 & 0x20) != 0 )
                    MiLogPageAccess(v8, a2);
                }
              }
              v13 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v121) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x220000000000LL;
              if ( (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
              {
                if ( (v10 & 1) != 0 && (unsigned int)MiGetPfnPriority(v13) - 3 <= 2 )
                  MiLockSetPfnPriority(v75, 2);
                if ( (v10 & 4) != 0
                  && !*(_QWORD *)(v7 + 104)
                  && (v3 & 0x42) == 0
                  && *(__int64 *)(v13 + 40) < 0
                  && (*(_BYTE *)(v13 + 34) & 0x10) == 0
                  && (unsigned int)MiGetPfnPriority(v13) < 5 )
                {
                  *(_QWORD *)(v7 + 104) = MiCreateDecayPfn();
                }
              }
              a3 = v117;
            }
            goto LABEL_17;
          }
          v124 = 0LL;
          MiUnmapFrameBuffer(a2);
          MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL);
        }
LABEL_32:
        v27 = qword_140C65810;
        if ( (*(_BYTE *)(v9 + 4) & 2) == 0
          && *(_DWORD *)v9 == 1
          && KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5] )
        {
          v27 = -1LL;
        }
        if ( (*(_DWORD *)(v9 + 12) >= *(_DWORD *)(v9 + 8) || *(_BYTE *)(v9 + 5) || *(_QWORD *)(v9 + 16) > v27)
          && v27 >= 0x400
          && !*(_BYTE *)(v9 + 5) )
        {
          MiFlushTbList((int *)v9);
        }
LABEL_39:
        if ( !*(_QWORD *)v7 )
          *(_QWORD *)v7 = a2;
        *(_QWORD *)(v7 + 8) = a2;
        return 0LL;
      }
LABEL_373:
      MiDeleteLargeUserPde(a1, a2);
      return 0LL;
    }
    if ( (v3 & 0x400) == 0 )
    {
      if ( (v3 & 0x800) != 0 )
      {
        if ( (v10 & 0x800) == 0 )
        {
          v7 = v119;
          if ( (v10 & 0x10) != 0 && (v3 & 0x3E0) == 0x300 )
            MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v119 + 32) + 40LL), a2, v119 + 128);
          goto LABEL_39;
        }
        goto LABEL_373;
      }
      if ( (v3 & 0x3E0) == 0 )
        KeBugCheckEx(0x1Au, 0x41792uLL, a2, v3, 0LL);
      MiReleasePageFileSpace(*(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v8 + 174)), v3, 1LL);
      if ( (*(_BYTE *)(v120 + 184) & 7) != 0 || (v10 & 0x80u) != 0 && (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v3) )
        ++*(_QWORD *)(*(_QWORD *)(v119 + 32) + 32LL);
      v65 = ZeroPte;
      if ( !MiPteInShadowRange(a2) )
        goto LABEL_103;
      if ( MiPteHasShadow() )
      {
        if ( HIBYTE(word_140C6697C) || (ZeroPte & 1) == 0 )
          goto LABEL_343;
LABEL_342:
        v65 |= 0x8000000000000000uLL;
LABEL_343:
        *(_QWORD *)a2 = v65;
        MiWritePteShadow(a2, v65, v114);
        goto LABEL_104;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
        || (ZeroPte & 1) == 0 )
      {
        goto LABEL_103;
      }
LABEL_355:
      v65 |= 0x8000000000000000uLL;
      goto LABEL_103;
    }
    if ( (unsigned int)MiIsPrototypePteVadLookup(v3) || (v3 & 0x800) == 0 )
    {
      if ( !KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[12]
        || (unsigned int)MiIsPrototypePteVadLookup(v3)
        || (CloneAddress = MiLocateCloneAddress(v109, v110)) == 0LL )
      {
LABEL_102:
        v65 = ZeroPte;
        if ( !MiPteInShadowRange(a2) )
        {
LABEL_103:
          *(_QWORD *)a2 = v65;
LABEL_104:
          if ( (v10 & 0x80u) != 0 && (a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL) )
          {
            v66 = ((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v67 = *(_QWORD *)v66;
            if ( v66 >= 0xFFFFF6FB7DBED000uLL
              && v66 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v67 & 1) != 0
              && ((v67 & 0x20) == 0 || (v67 & 0x42) == 0) )
            {
              v115 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v115 )
              {
                v116 = *((_QWORD *)&v115->Flink + ((v66 >> 3) & 0x1FF));
                if ( (v116 & 0x20) != 0 )
                  v67 |= 0x20uLL;
                if ( (v116 & 0x42) != 0 )
                  v67 |= 0x42uLL;
              }
            }
            v127 = v67;
            v68 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v127) >> 12) & 0xFFFFFFFFFFLL)
                - 0x220000000000LL;
            if ( (*(_DWORD *)(v68 + 16) & 0x3FF0000) == 0 )
              KeBugCheckEx(0x1Au, 0x41790uLL, v68, 0LL, 1uLL);
            v117 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v68 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v117);
              while ( *(__int64 *)(v68 + 24) < 0 );
            }
            *(_QWORD *)(v68 + 16) ^= ((unsigned int)*(_QWORD *)(v68 + 16) ^ (((unsigned int)(*(_QWORD *)(v68 + 16) >> 16)
                                                                            - 1) << 16)) & 0x3FF0000;
            _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          return 0LL;
        }
        if ( MiPteHasShadow() )
        {
          if ( HIBYTE(word_140C6697C) || (ZeroPte & 1) == 0 )
            goto LABEL_343;
          goto LABEL_342;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
          || (ZeroPte & 1) == 0 )
        {
          goto LABEL_103;
        }
        goto LABEL_355;
      }
      v108 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v112);
    }
    else
    {
      v108 = MiDecrementCombinedPteEx(v64, v63, 0);
    }
    if ( v108 == 3 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v119 + 32) + 8LL);
    }
    else if ( v108 == 5 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v119 + 32) + 24LL);
    }
    goto LABEL_102;
  }
  if ( !a3 )
  {
    v29 = *(_QWORD *)(a1 + 88);
    if ( v29 > (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
      v29 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    v30 = a2 + 8;
    for ( i = 1; v30 <= v29; v30 += 8LL )
    {
      v69 = *(_QWORD *)v30;
      if ( v30 >= 0xFFFFF6FB7DBED000uLL
        && v30 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v69 & 1) != 0
        && ((v69 & 0x20) == 0 || (v69 & 0x42) == 0) )
      {
        v79 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v79 )
        {
          v80 = *((_QWORD *)&v79->Flink + ((v30 >> 3) & 0x1FF));
          v81 = v69 | 0x20;
          if ( (v80 & 0x20) == 0 )
            v81 = *(_QWORD *)v30;
          v69 = v81;
          if ( (v80 & 0x42) != 0 )
            v69 = v81 | 0x42;
        }
      }
      if ( v69 )
        break;
      if ( !++i )
        break;
    }
    *(_DWORD *)(a1 + 8) = i - 1;
  }
  return 0LL;
}
