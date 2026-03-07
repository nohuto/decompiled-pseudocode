__int64 __fastcall MiStealPage(
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        ULONG_PTR *a6)
{
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int64 v12; // r8
  unsigned __int64 LeafVa; // r9
  ULONG_PTR v14; // r11
  unsigned __int64 v15; // r10
  int v16; // r10d
  ULONG_PTR v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r15
  unsigned int v20; // ebx
  int v21; // edx
  unsigned int v22; // r8d
  char v23; // al
  int v24; // ecx
  unsigned int v25; // r13d
  int v26; // ebx
  unsigned int v27; // ebx
  int v28; // edi
  ULONG_PTR v29; // r14
  ULONG_PTR Page; // rax
  __int64 PageChain; // r15
  unsigned __int64 v32; // r12
  int v33; // ebx
  signed __int64 v34; // rdi
  int v35; // r14d
  __int64 v36; // r9
  int v37; // r14d
  __int64 v38; // r8
  int v39; // r11d
  __int64 *v40; // rax
  unsigned int v41; // eax
  unsigned __int64 v42; // r14
  int v43; // eax
  __int64 v44; // r9
  ULONG_PTR v45; // rbx
  __int16 v46; // cx
  int v47; // eax
  __int16 v48; // ax
  __int16 v49; // bx
  __int16 v50; // r13
  ULONG_PTR v51; // rbx
  __int64 *v52; // r13
  int v53; // edi
  BOOL v54; // eax
  __int64 v55; // r8
  int v56; // r11d
  char v57; // al
  unsigned int v58; // edi
  int v60; // r10d
  unsigned __int64 v61; // rbx
  unsigned int v62; // eax
  int v63; // ecx
  volatile LONG *SharedVm; // rbx
  _KPROCESS *v65; // rax
  char v66; // al
  __int64 v67; // rcx
  __int64 v68; // rcx
  int v69; // eax
  _QWORD *v70; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v74; // eax
  bool v75; // zf
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r10
  _DWORD *v78; // r9
  int v79; // eax
  unsigned __int8 v80; // al
  bool v81; // cf
  struct _KPRCB *v82; // r10
  _DWORD *v83; // r9
  int v84; // eax
  BOOL HasShadow; // eax
  __int64 IsPageFileHash; // rax
  KIRQL v87; // r13
  unsigned __int8 v88; // al
  struct _KPRCB *v89; // r10
  _DWORD *v90; // r9
  int v91; // eax
  unsigned __int8 v92; // al
  unsigned __int8 v93; // al
  bool v94; // cf
  unsigned __int8 v95; // cl
  struct _KPRCB *v96; // r10
  _DWORD *v97; // r9
  int v98; // eax
  __int64 v99; // rbx
  unsigned __int64 v100; // rax
  unsigned __int8 v101; // al
  struct _KPRCB *v102; // r10
  _DWORD *v103; // r9
  int v104; // eax
  signed __int64 v105; // rbx
  unsigned __int8 v106; // al
  struct _KPRCB *v107; // r10
  _DWORD *v108; // r9
  int v109; // eax
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int64 v111; // rax
  char v112; // dl
  unsigned __int8 v113; // al
  KIRQL v114; // di
  struct _KPRCB *v115; // r10
  _DWORD *v116; // r9
  int v117; // eax
  unsigned __int8 v118; // al
  struct _KPRCB *v119; // r9
  _DWORD *v120; // r8
  int v121; // eax
  unsigned __int8 v122; // al
  struct _KPRCB *v123; // r10
  _DWORD *v124; // r9
  int v125; // eax
  unsigned __int64 v126; // rbx
  unsigned __int8 v127; // al
  struct _KPRCB *v128; // r9
  _DWORD *v129; // r8
  int v130; // eax
  unsigned __int8 v131; // [rsp+40h] [rbp-C0h] BYREF
  KIRQL v132; // [rsp+41h] [rbp-BFh]
  int v133; // [rsp+44h] [rbp-BCh]
  unsigned int v134; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-B0h]
  __int64 *v136; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v137; // [rsp+60h] [rbp-A0h]
  __int64 v138; // [rsp+68h] [rbp-98h]
  ULONG_PTR BugCheckParameter2a; // [rsp+70h] [rbp-90h]
  __int64 v140; // [rsp+78h] [rbp-88h]
  __int64 v141; // [rsp+80h] [rbp-80h]
  __int64 v142; // [rsp+88h] [rbp-78h]
  _KPROCESS *Process; // [rsp+90h] [rbp-70h]
  int v144; // [rsp+98h] [rbp-68h]
  int v145; // [rsp+A0h] [rbp-60h] BYREF
  int v146; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned __int64 v147; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v148; // [rsp+B0h] [rbp-50h]
  ULONG_PTR *v149; // [rsp+B8h] [rbp-48h]
  _QWORD v150[5]; // [rsp+C0h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E8h] [rbp-18h]
  _KPROCESS *v152; // [rsp+F0h] [rbp-10h]
  __int64 v153; // [rsp+F8h] [rbp-8h]
  struct _LIST_ENTRY *v154; // [rsp+100h] [rbp+0h]
  _QWORD v155[15]; // [rsp+110h] [rbp+10h] BYREF
  ULONG_PTR v156; // [rsp+188h] [rbp+88h]
  _QWORD v157[24]; // [rsp+190h] [rbp+90h] BYREF

  v141 = a4;
  v149 = a6;
  v131 = 0;
  v132 = 0;
  ++MiCont;
  memset((char *)v155 + 4, 0, 0x74uLL);
  v9 = *(_QWORD *)(BugCheckParameter2 + 8);
  v10 = 0LL;
  v148 = 0LL;
  v142 = 0LL;
  v144 = 0;
  LODWORD(v155[0]) = a3;
  v156 = -1LL;
  v136 = (__int64 *)(v9 | 0x8000000000000000uLL);
  v11 = (__int64)((v9 | 0x8000000000000000uLL) << 25) >> 16;
  v137 = v11;
  LeafVa = MiGetLeafVa(v11);
  if ( v11 < v15 || v11 > 0xFFFFF6FFFFFFFFFFuLL )
    v16 = LODWORD(v155[1]) | 1;
  else
    v16 = LODWORD(v155[1]) | 8;
  LODWORD(v155[1]) = v16;
  BugCheckParameter3 = v14;
  v17 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
  BugCheckParameter2a = v17;
  if ( a6 )
    *a6 = v14;
  v18 = (*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL;
  Process = 0LL;
  v19 = *(_QWORD *)(qword_140C67048 + 8 * v18);
  v140 = v19;
  if ( LeafVa < 0xFFFF800000000000uLL )
    goto LABEL_106;
  if ( LeafVa <= qword_140C66CF0 && LeafVa >= qword_140C6A1D8 )
  {
    v60 = v16 | 8;
    LODWORD(v155[1]) = v60;
    if ( (v60 & 1) != 0 )
    {
      v16 = v60 | 2;
      if ( v11 >= qword_140C66CE8 && v11 < qword_140C66CE8 + MiHyperSpaceSize() )
        v16 |= 0x100u;
    }
    else
    {
      v16 = v60 | 4;
    }
LABEL_106:
    v16 |= 0x1000u;
    LODWORD(v155[1]) = v16;
  }
  if ( (v16 & 0x1000) != 0 )
  {
    LOBYTE(v12) = a2;
    v20 = MiLockStealUserVm(v19, BugCheckParameter2, v12, v136, v155);
    if ( v20 == 1 )
    {
      v21 = v155[6];
      v133 = 0;
      v134 = 0;
      Process = KeGetCurrentThread()->ApcState.Process;
      v138 = v155[3];
      goto LABEL_12;
    }
  }
  else
  {
    v20 = MiLockStealSystemVm(BugCheckParameter2, a2, (unsigned __int64)v136, (__int64)v155);
    if ( v20 == 1 )
    {
      v21 = v155[6];
      v22 = 1;
      v133 = 0;
      v138 = v155[3];
      v23 = *(_BYTE *)(v155[3] + 184LL) & 7;
      v134 = 1;
      if ( v23 == 7 )
      {
        if ( (a3 & 0x10000000) != 0 )
        {
          ++dword_140C135EC;
          v58 = 0;
          goto LABEL_93;
        }
        v134 = 2;
      }
      else if ( ((v23 - 1) & 0xFD) != 0 )
      {
        if ( LODWORD(v155[6]) == 1 )
          v22 = 2;
        v134 = v22;
      }
      if ( LODWORD(v155[6]) == 3 )
      {
        if ( (v155[1] & 1) != 0 )
          v24 = LODWORD(v155[1]) | 0xA;
        else
          v24 = LODWORD(v155[1]) | 0xC;
        LODWORD(v155[1]) = v24;
LABEL_13:
        if ( (a3 & 0x10000000) == 0 )
        {
          v25 = *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6;
          if ( a5 == -1 )
          {
            v26 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2
                                                                                     + 0x220000000000LL) >> 4))
                  + 2);
            v27 = ((unsigned int)MiGetPfnChannel(BugCheckParameter2) << byte_140C6570E) | dword_140C65778 & v17 | (v26 << byte_140C6570D);
            v28 = (a3 >> 8) & 0x10000;
            if ( (a3 & 0x2000000) != 0 )
              v28 |= 0x20000u;
          }
          else
          {
            v69 = dword_140C65778 & v17;
            v28 = 48;
            v27 = v69 | a5 & ~dword_140C65778;
          }
          v29 = -1LL;
          if ( v156 == -1LL )
          {
            Page = MiGetPage(v19, v27, v28);
            BugCheckParameter3 = Page;
            if ( Page != -1LL )
            {
              PageChain = 48 * Page - 0x220000000000LL;
LABEL_20:
              if ( PageChain != BugCheckParameter2 )
              {
                v32 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
                if ( (MiFlags & 0x4000) != 0 && (unsigned int)MiGetPagePrivilege(BugCheckParameter2, 1, 0LL) )
                {
                  v33 = LODWORD(v155[1]) | 0x2000;
                  LODWORD(v155[1]) |= 0x2000u;
                }
                else
                {
                  v33 = v155[1];
                }
                v34 = 0LL;
                if ( *(_WORD *)(BugCheckParameter2 + 32) != 1 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( KiIrqlFlags )
                  {
                    CurrentIrql = KeGetCurrentIrql();
                    if ( (KiIrqlFlags & 1) != 0
                      && CurrentIrql <= 0xFu
                      && (unsigned __int8)v32 <= 0xFu
                      && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      SchedulerAssist = CurrentPrcb->SchedulerAssist;
                      v74 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
                      v75 = (v74 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v74;
                      if ( v75 )
                        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                    }
                  }
                  __writecr8(v32);
                  ++dword_140C13564;
                  goto LABEL_330;
                }
                v35 = v155[6];
                if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 || (*(_BYTE *)BugCheckParameter2 & 1) == 0 )
                {
                  v36 = 2LL;
                  if ( LODWORD(v155[6]) != 2 && (v33 & 0x26) == 0 )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    if ( KiIrqlFlags )
                    {
                      v76 = KeGetCurrentIrql();
                      if ( (KiIrqlFlags & 1) != 0 && v76 <= 0xFu && (unsigned __int8)v32 <= 0xFu && v76 >= 2u )
                      {
                        v77 = KeGetCurrentPrcb();
                        v78 = v77->SchedulerAssist;
                        v79 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
                        v75 = (v79 & v78[5]) == 0;
                        v78[5] &= v79;
                        if ( v75 )
                          KiRemoveSystemWorkPriorityKick(v77);
                      }
                    }
                    __writecr8(v32);
                    ++dword_140C13568;
                    goto LABEL_330;
                  }
                }
                else
                {
                  v36 = 2LL;
                }
                if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) != 6
                  || v140 != *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)) )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( KiIrqlFlags )
                  {
                    v122 = KeGetCurrentIrql();
                    if ( (KiIrqlFlags & 1) != 0 && v122 <= 0xFu && (unsigned __int8)v32 <= 0xFu && v122 >= 2u )
                    {
                      v123 = KeGetCurrentPrcb();
                      v124 = v123->SchedulerAssist;
                      v125 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
                      v75 = (v125 & v124[5]) == 0;
                      v124[5] &= v125;
                      if ( v75 )
                        KiRemoveSystemWorkPriorityKick(v123);
                    }
                  }
                  __writecr8(v32);
                  ++dword_140C13570;
                  goto LABEL_330;
                }
                if ( (v33 & 0x20) == 0 )
                  v34 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v136);
                if ( v35 != 3 && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v134 == 1 )
                {
                  if ( (v33 & 0x10) == 0 )
                  {
                    ++dword_140C1357C;
                    goto LABEL_202;
                  }
                  v33 |= 0x208u;
                  LODWORD(v155[1]) = v33;
                }
                if ( v35 != 2 )
                {
                  if ( (v33 & 0x20) != 0 )
                  {
                    v34 = MiPrepareToStealNonPagedPool(BugCheckParameter2, v136, 0LL, v36);
                    if ( !v34 )
                    {
LABEL_202:
                      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      if ( !KiIrqlFlags
                        || (v80 = KeGetCurrentIrql(), (KiIrqlFlags & 1) == 0)
                        || v80 > 0xFu
                        || (unsigned __int8)v32 > 0xFu )
                      {
LABEL_210:
                        __writecr8(v32);
LABEL_330:
                        v10 = PageChain;
LABEL_331:
                        if ( v10 )
                        {
                          v126 = (unsigned __int8)MiLockPageInline(v10);
                          *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 5;
                          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          if ( KiIrqlFlags )
                          {
                            v127 = KeGetCurrentIrql();
                            if ( (KiIrqlFlags & 1) != 0 && v127 <= 0xFu && (unsigned __int8)v126 <= 0xFu && v127 >= 2u )
                            {
                              v128 = KeGetCurrentPrcb();
                              v129 = v128->SchedulerAssist;
                              v130 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v126 + 1));
                              v75 = (v130 & v129[5]) == 0;
                              v129[5] &= v130;
                              if ( v75 )
                                KiRemoveSystemWorkPriorityKick(v128);
                            }
                          }
                          __writecr8(v126);
                        }
                        goto LABEL_340;
                      }
                      v81 = v80 < 2u;
LABEL_207:
                      if ( !v81 )
                      {
                        v82 = KeGetCurrentPrcb();
                        v83 = v82->SchedulerAssist;
                        v84 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
                        v75 = (v84 & v83[5]) == 0;
                        v83[5] &= v84;
                        if ( v75 )
                          KiRemoveSystemWorkPriorityKick(v82);
                      }
                      goto LABEL_210;
                    }
                  }
                  else if ( ((v33 & 8) == 0 || (v33 & 0x100) != 0) && ((v34 & 0x42) != 0 || (v33 & 0x2000) != 0) )
                  {
                    if ( (v33 & 0x100) != 0 )
                    {
                      MiWriteValidPteNewProtection((unsigned __int64)v136, v34 & 0xFFFFFFFFFFFFFFBDuLL);
                    }
                    else
                    {
                      v37 = 0;
                      LODWORD(v155[1]) = v33 | 0x40;
                      if ( MiPteInShadowRange((unsigned __int64)v136) )
                      {
                        HasShadow = MiPteHasShadow();
                        v39 = 1;
                        if ( HasShadow )
                          v37 = 1;
                      }
                      else
                      {
                        v39 = 1;
                      }
                      v40 = v136;
                      *v136 = v34 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
                      if ( v37 )
                        MiWritePteShadow((__int64)v40, v34 & 0xFFFFFFFFFFFFFBFEuLL | 0x400, v38);
                      v144 = v39;
                    }
                    v41 = MiTbFlushType(v138);
                    v42 = v137;
                    KeFlushSingleTb(v137, v41, v134);
LABEL_44:
                    v43 = v134;
                    if ( v134 == 1 )
                    {
                      if ( (v155[1] & 4) != 0 )
                        v43 = 2;
                      v134 = v43;
                    }
                    MiLockNestedPageAtDpcInline(PageChain);
                    MiFinalizePageAttribute(PageChain, v25, 1u, v44);
                    if ( LODWORD(v155[6]) != 2 )
                    {
                      v45 = BugCheckParameter2a;
LABEL_50:
                      MiCopyPfnEntryEx(PageChain, (__int128 *)BugCheckParameter2);
                      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) == v45 )
                        MiSetPfnPteFrame(PageChain, BugCheckParameter3);
                      _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      v46 = v155[1];
                      if ( (v155[1] & 0x20) == 0 && LODWORD(v155[6]) != 2 )
                      {
                        if ( (v155[1] & 0x200) != 0 )
                          goto LABEL_108;
                        if ( (v155[1] & 8) == 0 && !v134 || (v47 = v155[1] & 0xA, v47 == 10) || (v155[1] & 0x100) != 0 )
                        {
                          *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
                          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          if ( KiIrqlFlags )
                          {
                            v93 = KeGetCurrentIrql();
                            if ( (KiIrqlFlags & 1) != 0 && v93 <= 0xFu && (unsigned __int8)v32 <= 0xFu )
                            {
                              v94 = v93 < 2u;
LABEL_247:
                              if ( !v94 )
                              {
                                v96 = KeGetCurrentPrcb();
                                v97 = v96->SchedulerAssist;
                                v98 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
                                v75 = (v98 & v97[5]) == 0;
                                v97[5] &= v98;
                                if ( v75 )
                                  KiRemoveSystemWorkPriorityKick(v96);
                              }
                            }
                          }
LABEL_109:
                          __writecr8(v32);
                          v46 = v155[1];
                          LOBYTE(v32) = 17;
                          goto LABEL_61;
                        }
                        if ( v47 == 8 && !v134 || LODWORD(v155[6]) == 3 && (v155[1] & 4) != 0 )
                        {
LABEL_108:
                          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          if ( KiIrqlFlags )
                          {
                            v95 = KeGetCurrentIrql();
                            if ( (KiIrqlFlags & 1) != 0 && v95 <= 0xFu && (unsigned __int8)v32 <= 0xFu )
                            {
                              v94 = v95 < 2u;
                              goto LABEL_247;
                            }
                          }
                          goto LABEL_109;
                        }
                      }
LABEL_61:
                      if ( (v46 & 0x200) == 0 )
                      {
                        v131 = 17;
                        v140 = 0LL;
                        goto LABEL_63;
                      }
                      v140 = MiLockProtoPoolPage(v137, &v131);
                      v99 = v140;
                      if ( !v140 )
                      {
                        ++dword_140C13580;
LABEL_254:
                        MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(PageChain + 16));
                        goto LABEL_330;
                      }
                      if ( *(_WORD *)(v140 + 32) <= 2u )
                      {
                        v34 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v136);
                        if ( (v34 & 0x42) != 0 )
                        {
                          v145 = 0;
                          while ( _interlockedbittestandset64((volatile signed __int32 *)(v99 + 24), 0x3FuLL) )
                          {
                            do
                              KeYieldProcessorEx(&v145);
                            while ( *(__int64 *)(v99 + 24) < 0 );
                          }
                          if ( *(_WORD *)(v99 + 32) > 2u )
                          {
                            ++dword_140C13584;
                            _InterlockedAnd64((volatile signed __int64 *)(v99 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                            goto LABEL_253;
                          }
                          MiWriteValidPteNewProtection((unsigned __int64)v136, v34 & 0xFFFFFFFFFFFFFFBDuLL);
                          KeFlushSingleTb(v137, 0, 1u);
                          v100 = MiCaptureDirtyBitToPfn(v99);
                          _InterlockedAnd64((volatile signed __int64 *)(v99 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          if ( v100 )
                            MiReleasePageFileInfo(
                              *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v99 + 40) >> 43) & 0x3FFLL)),
                              v100,
                              1);
                          v146 = 0;
                          while ( _interlockedbittestandset64((volatile signed __int32 *)(PageChain + 24), 0x3FuLL) )
                          {
                            do
                              KeYieldProcessorEx(&v146);
                            while ( *(__int64 *)(PageChain + 24) < 0 );
                          }
                          MiCaptureDirtyBitToPfn(PageChain);
                          _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                        }
                        v46 = v155[1];
                        v45 = BugCheckParameter2a;
LABEL_63:
                        if ( (v46 & 0x200) != 0 )
                        {
                          if ( (unsigned int)MiReplacePageOfProtoPool(v137, v45, BugCheckParameter3, v141) )
                            goto LABEL_114;
                        }
                        else
                        {
                          if ( (LODWORD(v155[6]) != 3 || (v46 & 4) == 0) && ((v46 & 0xA) != 8 || v134) )
                          {
                            if ( (_BYTE)v32 == 17 )
                            {
                              v48 = 0;
                            }
                            else
                            {
                              LODWORD(v141) = 4;
                              MiLockNestedPageAtDpcInline(PageChain);
                              v46 = v155[1];
                              v48 = v141;
                            }
                            v49 = v48 | 2;
                            if ( (v46 & 0x2000) == 0 )
                              v49 = v48;
                            MiCopyPage(BugCheckParameter3, BugCheckParameter2a, v49);
                            if ( (v49 & 4) != 0 )
                              _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                            v50 = v155[1];
                            if ( (v155[1] & 0x20) == 0 && (_BYTE)v32 != 17 )
                              *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
LABEL_75:
                            v51 = v34 ^ (v34 ^ (BugCheckParameter3 << 12)) & 0xFFFFFFFFFF000LL;
                            if ( (v50 & 0x20) != 0 )
                            {
                              v105 = v51 | 0x20;
                              MiLockNestedPageAtDpcInline(PageChain);
                              if ( (MiFlags & 0x2000000) != 0 )
                                _mm_lfence();
                              if ( v34 != _InterlockedCompareExchange64(v136, v105, v34) )
                              {
                                MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(PageChain + 16));
                                *(_BYTE *)(PageChain + 34) = *(_BYTE *)(PageChain + 34) & 0xF8 | 5;
                                _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                _InterlockedAnd64(
                                  (volatile signed __int64 *)(BugCheckParameter2 + 24),
                                  0x7FFFFFFFFFFFFFFFuLL);
                                if ( KiIrqlFlags )
                                {
                                  v106 = KeGetCurrentIrql();
                                  if ( (KiIrqlFlags & 1) != 0
                                    && v106 <= 0xFu
                                    && (unsigned __int8)v32 <= 0xFu
                                    && v106 >= 2u )
                                  {
                                    v107 = KeGetCurrentPrcb();
                                    v108 = v107->SchedulerAssist;
                                    v109 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
                                    v75 = (v109 & v108[5]) == 0;
                                    v108[5] &= v109;
                                    if ( v75 )
                                      KiRemoveSystemWorkPriorityKick(v107);
                                  }
                                }
                                __writecr8((unsigned __int8)v32);
                                goto LABEL_330;
                              }
                              _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                              v50 = v155[1];
                              *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
LABEL_84:
                              if ( (v50 & 0x200) != 0 )
                              {
                                _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                                _InterlockedAnd64(
                                  (volatile signed __int64 *)(BugCheckParameter2 + 24),
                                  0x7FFFFFFFFFFFFFFFuLL);
                                MiUnlockProtoPoolPage(v140, v131);
                                LOBYTE(v32) = 17;
                              }
                              else if ( (v50 & 0x50) == 0x10 )
                              {
                                _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                              }
                              if ( ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 3 )
                              {
                                v112 = 12;
                                if ( (_BYTE)v32 == 17 )
                                  v112 = 8;
                                MiClearPfnImageVerified(BugCheckParameter2, v112);
                              }
                              if ( LODWORD(v155[6]) == 2 )
                              {
                                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v142 + 232));
                                if ( KiIrqlFlags && (v113 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v113 <= 0xFu )
                                {
                                  v114 = v132;
                                  if ( v132 <= 0xFu && v113 >= 2u )
                                  {
                                    v115 = KeGetCurrentPrcb();
                                    v116 = v115->SchedulerAssist;
                                    v117 = ~(unsigned __int16)(-1LL << (v132 + 1));
                                    v75 = (v117 & v116[5]) == 0;
                                    v116[5] &= v117;
                                    if ( v75 )
                                      KiRemoveSystemWorkPriorityKick(v115);
                                  }
                                }
                                else
                                {
                                  v114 = v132;
                                }
                                __writecr8(v114);
                              }
                              if ( (_BYTE)v32 == 17 )
                                LOBYTE(v32) = MiLockPageInline(BugCheckParameter2);
                              MiSetPfnIdentity(BugCheckParameter2, 0);
                              v57 = *(_BYTE *)(BugCheckParameter2 + 34);
                              *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
                              *(_BYTE *)(BugCheckParameter2 + 34) = v57 & 0xC7;
                              *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
                              *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
                              *(_WORD *)(BugCheckParameter2 + 32) = 0;
                              _InterlockedAnd64(
                                (volatile signed __int64 *)(BugCheckParameter2 + 24),
                                0x7FFFFFFFFFFFFFFFuLL);
                              if ( KiIrqlFlags )
                              {
                                v118 = KeGetCurrentIrql();
                                if ( (KiIrqlFlags & 1) != 0
                                  && v118 <= 0xFu
                                  && (unsigned __int8)v32 <= 0xFu
                                  && v118 >= 2u )
                                {
                                  v119 = KeGetCurrentPrcb();
                                  v120 = v119->SchedulerAssist;
                                  v121 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
                                  v75 = (v121 & v120[5]) == 0;
                                  v120[5] &= v121;
                                  if ( v75 )
                                    KiRemoveSystemWorkPriorityKick(v119);
                                }
                              }
                              __writecr8((unsigned __int8)v32);
                              v10 = v148;
                              v58 = 1;
                              goto LABEL_93;
                            }
                            if ( (v50 & 0x400) != 0 )
                            {
                              if ( (v50 & 0x4000) != 0 )
                              {
                                Flink = Process[1].ProcessListEntry.Flink;
                                if ( !Flink
                                  || (v111 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)Flink >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                                      ((v111 >> 12) & 0xFFFFFFFFFFLL) != BugCheckParameter3) )
                                {
                                  v133 = 2;
                                  v10 = BugCheckParameter2;
                                  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(BugCheckParameter2 + 16));
                                  goto LABEL_331;
                                }
                              }
                            }
                            else
                            {
                              if ( (v50 & 0x40) != 0 )
                              {
                                v52 = v136;
                                v53 = 0;
                                v54 = MiPteInShadowRange((unsigned __int64)v136);
                                v56 = 0;
                                if ( !v54 )
                                {
LABEL_79:
                                  *v52 = v51;
                                  if ( v53 )
                                    MiWritePteShadow((__int64)v52, v51, v55);
                                  v50 = v155[1];
                                  goto LABEL_82;
                                }
                                if ( MiPteHasShadow() )
                                {
                                  v53 = 1;
                                  if ( HIBYTE(word_140C6697C) != (_BYTE)v56 )
                                    goto LABEL_79;
                                }
                                else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                                {
                                  goto LABEL_79;
                                }
                                if ( (v51 & 1) != 0 )
                                  v51 |= 0x8000000000000000uLL;
                                goto LABEL_79;
                              }
                              if ( (v50 & 0x200) == 0 && (v50 & 0x10) != 0 )
                                MiLockNestedPageAtDpcInline(PageChain);
                              MiWriteValidPteNewPage(v136, v51, 0);
                              v50 = v155[1];
                            }
                            v56 = 0;
LABEL_82:
                            if ( v144 == v56 )
                            {
                              v62 = MiTbFlushType(v138);
                              KeFlushSingleTb(v137, v62, v134);
                              v50 = v155[1];
                            }
                            goto LABEL_84;
                          }
                          v153 = 0LL;
                          v150[1] = v137;
                          CurrentThread = KeGetCurrentThread();
                          v150[4] = BugCheckParameter3;
                          v150[0] = v138;
                          v150[3] = v45;
                          v154 = 0LL;
                          v150[2] = v141;
                          v152 = CurrentThread->ApcState.Process;
                          if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) != v45 )
                          {
                            MiReplacePageTablePage((unsigned __int64)v150);
                            goto LABEL_113;
                          }
                          if ( (*(_BYTE *)(v138 + 187) & 2) == 0
                            && !_interlockedbittestandset(
                                  (volatile signed __int32 *)&Process[2].Header.WaitListHead.Flink + 1,
                                  1u) )
                          {
                            v63 = LODWORD(v155[1]) | 0x400;
                            LODWORD(v155[1]) |= 0x400u;
                            if ( v152->DirectoryTableBase >> 12 != v45 )
                            {
                              HIDWORD(v153) = 1;
                              v154 = v152[1].ProcessListEntry.Flink;
                              LODWORD(v155[1]) = v63 | 0x4000;
                            }
                            MiReleaseFaultState((__int64)&v155[3], 0x11u, 0LL);
                            KeSwapDirectoryTableBase(v152, HIDWORD(v153), v150);
                            SharedVm = (volatile LONG *)MiGetSharedVm(v138);
                            ExAcquireSpinLockExclusive(SharedVm);
                            v65 = Process;
                            *((_DWORD *)SharedVm + 1) = 0;
                            _InterlockedAnd(
                              (volatile signed __int32 *)&v65[2].Header.WaitListHead.Flink + 1,
                              0xFFFFFFFD);
LABEL_113:
                            if ( (int)v153 >= 0 )
                            {
LABEL_114:
                              if ( (v155[1] & 0x200) != 0 )
                              {
                                *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
                                *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)(BugCheckParameter2 + 24) & 0xC000000000000000uLL | 1;
                                MiLockNestedPageAtDpcInline(PageChain);
                              }
                              else
                              {
                                ++dword_140C13530;
                                v61 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
                                *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
                                *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)(BugCheckParameter2 + 24) & 0xC000000000000000uLL | 1;
                                _InterlockedAnd64(
                                  (volatile signed __int64 *)(BugCheckParameter2 + 24),
                                  0x7FFFFFFFFFFFFFFFuLL);
                                if ( KiIrqlFlags )
                                {
                                  v101 = KeGetCurrentIrql();
                                  if ( (KiIrqlFlags & 1) != 0
                                    && v101 <= 0xFu
                                    && (unsigned __int8)v61 <= 0xFu
                                    && v101 >= 2u )
                                  {
                                    v102 = KeGetCurrentPrcb();
                                    v103 = v102->SchedulerAssist;
                                    v104 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v61 + 1));
                                    v75 = (v104 & v103[5]) == 0;
                                    v103[5] &= v104;
                                    if ( v75 )
                                      KiRemoveSystemWorkPriorityKick(v102);
                                  }
                                }
                                __writecr8(v61);
                                LOBYTE(v32) = 17;
                              }
                              v50 = v155[1];
                              goto LABEL_75;
                            }
                          }
                        }
                        if ( (v155[1] & 0x200) != 0 )
                          MiUnlockProtoPoolPage(v140, v131);
                        goto LABEL_254;
                      }
                      ++dword_140C13584;
LABEL_253:
                      MiUnlockProtoPoolPage(v99, v131);
                      goto LABEL_254;
                    }
                    IsPageFileHash = MiVaIsPageFileHash(v140, v42);
                    v142 = IsPageFileHash;
                    if ( IsPageFileHash )
                    {
                      v132 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(IsPageFileHash + 232));
                      v87 = v132;
                      if ( v142 == MiVaIsPageFileHash(v140, v42) )
                      {
                        v45 = BugCheckParameter2a;
                        if ( MiSmallVaStillMapsFrame(v42, BugCheckParameter2a) )
                          goto LABEL_50;
                      }
                      IsPageFileHash = v142;
                    }
                    else
                    {
                      v87 = v132;
                    }
                    ++dword_140C13558;
                    if ( IsPageFileHash )
                    {
                      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(IsPageFileHash + 232));
                      if ( KiIrqlFlags )
                      {
                        v88 = KeGetCurrentIrql();
                        if ( (KiIrqlFlags & 1) != 0 && v88 <= 0xFu && v87 <= 0xFu && v88 >= 2u )
                        {
                          v89 = KeGetCurrentPrcb();
                          v90 = v89->SchedulerAssist;
                          v91 = ~(unsigned __int16)(-1LL << (v87 + 1));
                          v75 = (v91 & v90[5]) == 0;
                          v90[5] &= v91;
                          if ( v75 )
                            KiRemoveSystemWorkPriorityKick(v89);
                        }
                      }
                      __writecr8(v87);
                    }
                    _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    if ( !KiIrqlFlags )
                      goto LABEL_210;
                    v92 = KeGetCurrentIrql();
                    if ( (KiIrqlFlags & 1) == 0 || v92 > 0xFu || (unsigned __int8)v32 > 0xFu )
                      goto LABEL_210;
                    v81 = v92 < 2u;
                    goto LABEL_207;
                  }
                }
                v42 = v137;
                goto LABEL_44;
              }
              v58 = 1;
LABEL_93:
              v29 = BugCheckParameter3;
              goto LABEL_94;
            }
            v58 = v133;
            ++dword_140C13574;
            v29 = -1LL;
LABEL_94:
            MiUnlockStealVm(v155);
            if ( v10 )
              MiReleaseFreshPage(v10);
            MiLockPageInline(BugCheckParameter2);
            if ( v58 == 1 )
            {
              if ( v149 )
                *v149 = v29;
              ++dword_140C13524;
              return v58;
            }
            if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 6 )
            {
              if ( v58 != 2 )
                return v58;
            }
            else
            {
              v133 = 2;
              v58 = 2;
            }
            if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
              return 0;
            else
              ++dword_140C13528;
            return v58;
          }
          v70 = MiSearchNumaNodeTable(BugCheckParameter2a);
          v147 = 1LL;
          PageChain = MiGetPageChain(v19, v138, v137, *((_DWORD *)v70 + 2) + 1, v25, v28, v156, &v147);
          if ( PageChain )
          {
            BugCheckParameter3 = 0xAAAAAAAAAAAAAAABuLL * ((PageChain + 0x220000000000LL) >> 4);
            goto LABEL_20;
          }
          ++dword_140C13578;
LABEL_179:
          v58 = v133;
          goto LABEL_94;
        }
        if ( (v24 & 0x20) != 0 || (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) != 0 || v21 == 2 || (v24 & 8) != 0 )
        {
          ++dword_140C135F4;
        }
        else
        {
          v66 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v136);
          v67 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL;
          if ( v67 == v17 )
          {
            ++dword_140C135F0;
          }
          else if ( (v66 & 0x42) != 0 )
          {
            ++dword_140C135F4;
          }
          else
          {
            if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
            {
              v29 = BugCheckParameter3;
              goto LABEL_179;
            }
            if ( (MiGetWsleContents(v67, v11) & 0xF) != 8 )
            {
              memset(v157, 0, 0xB8uLL);
              LODWORD(v157[0]) = MiTbFlushType(v138);
              WORD2(v157[0]) = 4;
              v157[2] = 0LL;
              LODWORD(v157[1]) = 20;
              v157[3] = 0LL;
              if ( dword_140C67C68 )
                MI_WSLE_LOG_ACCESS(v68, (unsigned __int64)v136);
              MiInsertTbFlushEntry((__int64)v157, v11, 1LL, 0);
              v29 = BugCheckParameter3;
              if ( !MiFreeWsleList(v138, (__int64)v157, 0) )
              {
                v58 = 2;
                goto LABEL_94;
              }
              goto LABEL_179;
            }
          }
        }
LABEL_340:
        v58 = v133;
        goto LABEL_93;
      }
LABEL_12:
      LOBYTE(v24) = v155[1];
      goto LABEL_13;
    }
  }
  ++dword_140C13588;
  dword_140C1358C = -1431655765 * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
  MiLockPageInline(BugCheckParameter2);
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
    return 0;
  return v20;
}
