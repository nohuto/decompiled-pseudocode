/*
 * XREFs of MiDeleteVa @ 0x1402B8110
 * Callers:
 *     MiDeletePagablePteRange @ 0x1402B79F0 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140218590 (MiGetPfnPriority.c)
 *     MiLocateCloneAddress @ 0x14023E878 (MiLocateCloneAddress.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiIsPageTableDeletable @ 0x1402859D0 (MiIsPageTableDeletable.c)
 *     MiReadPteShadow @ 0x1402860B0 (MiReadPteShadow.c)
 *     MiEvictPageTableLock @ 0x14028CCA0 (MiEvictPageTableLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiRemoveWsle @ 0x1402B9670 (MiRemoveWsle.c)
 *     MiLogPageAccess @ 0x1402BACE0 (MiLogPageAccess.c)
 *     MiTerminateWsleCluster @ 0x1402BB3B0 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiCountWslesInPageTable @ 0x1402DAFF0 (MiCountWslesInPageTable.c)
 *     MiFlushTbListEarly @ 0x1402DF198 (MiFlushTbListEarly.c)
 *     MiLockSetPfnPriority @ 0x1402E1E0C (MiLockSetPfnPriority.c)
 *     MiIsPrototypePteVadLookup @ 0x1402E3470 (MiIsPrototypePteVadLookup.c)
 *     MiUnmapFrameBuffer @ 0x1402ECD7C (MiUnmapFrameBuffer.c)
 *     MiCompressTbFlushList @ 0x1402FBB30 (MiCompressTbFlushList.c)
 *     MiCreateDecayPfn @ 0x140306428 (MiCreateDecayPfn.c)
 *     MiRotatedToFrameBuffer @ 0x140307C88 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiUnlockWsle @ 0x140338C2C (MiUnlockWsle.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 *     MiDecrementCombinedPte @ 0x140366814 (MiDecrementCombinedPte.c)
 *     MiDeletePhysmemPte @ 0x14037E1AC (MiDeletePhysmemPte.c)
 *     MiWriteTopLevelPxe @ 0x14039D80C (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     qsort @ 0x1403D23C0 (qsort.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiDeleteVadAwePtes @ 0x14054BA74 (MiDeleteVadAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x14054F89C (MiDeleteLargeUserPde.c)
 *     MiDecrementCloneBlockReference @ 0x140559DC8 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeleteVa(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR v3; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned __int64 v8; // r11
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r10
  char v13; // r9
  unsigned __int64 i; // rsi
  __int64 v15; // rcx
  struct _LIST_ENTRY *v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r13
  _KPROCESS *v20; // r8
  __int64 v21; // r14
  int v22; // r12d
  unsigned __int64 v23; // r15
  __int64 Process; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // r8^7
  unsigned __int64 v31; // rdi
  struct _LIST_ENTRY *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r9
  __int64 v39; // r13
  unsigned __int64 v40; // rbx
  int v41; // r10d
  __int64 *v42; // r8
  __int64 v43; // rdx
  unsigned __int64 v44; // r11
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  char v48; // r8^7
  __int64 v49; // r12
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r9
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  struct _LIST_ENTRY *v57; // r8
  __int64 v58; // rax
  __int64 v59; // r8
  bool v60; // zf
  unsigned __int64 v61; // r11
  __int64 v62; // rax
  int v63; // r13d
  __int64 v64; // rdi
  unsigned int v65; // eax
  __int64 v66; // rdi
  unsigned __int64 v67; // r12
  unsigned __int64 v68; // rdx
  struct _LIST_ENTRY *v69; // r8
  __int64 v70; // rax
  __int64 v71; // r8
  _BYTE *v72; // r9
  unsigned __int8 WsleContents; // r13
  unsigned __int64 v74; // rdx
  struct _LIST_ENTRY *v75; // r8
  __int64 v76; // rax
  __int64 v77; // r8
  int v78; // eax
  __int64 v79; // r9
  int v80; // r10d
  int v81; // ecx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // r8
  unsigned __int64 v85; // r10
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // r9
  char v88; // r11
  int v89; // r9d
  unsigned __int64 v90; // r10
  unsigned __int64 v91; // rdx
  struct _LIST_ENTRY *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  unsigned __int64 *v95; // r12
  unsigned int v96; // r10d
  __int64 v97; // r11
  __int64 v98; // rax
  __int64 v99; // rax
  unsigned __int64 v100; // rax
  __int64 v101; // rax
  unsigned __int64 v102; // rdx
  __int64 v104; // rdx
  __int64 v105; // rdx
  unsigned __int64 v106; // rax
  __int64 v107; // rcx
  int v108; // eax
  unsigned __int64 v109; // rdx
  _QWORD *CloneAddress; // rax
  ULONG_PTR v111; // rdx
  __int64 v112; // rdx
  unsigned __int64 v113; // r9
  unsigned __int64 v114; // rax
  __int64 v115; // rdi
  __int64 v116; // rax
  __int64 *v117; // r15
  unsigned __int64 PteShadow; // rax
  __int64 v119; // r8
  unsigned __int64 *v120; // rdx
  ULONG_PTR v121; // rbx
  ULONG_PTR v122; // r9
  __int64 v123; // [rsp+30h] [rbp-69h]
  int v124; // [rsp+38h] [rbp-61h]
  char v126; // [rsp+40h] [rbp-59h]
  int v127; // [rsp+40h] [rbp-59h]
  __int64 v128; // [rsp+48h] [rbp-51h]
  int v129; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v130; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v131; // [rsp+60h] [rbp-39h] BYREF
  __int64 v132; // [rsp+68h] [rbp-31h]
  ULONG_PTR v133; // [rsp+70h] [rbp-29h] BYREF
  ULONG_PTR v134; // [rsp+78h] [rbp-21h] BYREF
  unsigned __int64 v135; // [rsp+80h] [rbp-19h] BYREF
  ULONG_PTR v136; // [rsp+88h] [rbp-11h]
  _DWORD v137[8]; // [rsp+90h] [rbp-9h] BYREF

  v3 = *(_QWORD *)a2;
  v5 = 0xFFFFF6FB7DBED000uLL;
  v6 = a3;
  v8 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v3 & 1) != 0
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v10 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
        v11 = v3 | 0x20;
        if ( (v10 & 0x20) == 0 )
          v11 = v3;
        v3 = v11;
        if ( (v10 & 0x42) != 0 )
          v3 = v11 | 0x42;
      }
    }
    v5 = 0xFFFFF6FB7DBED000uLL;
  }
  v133 = v3;
  if ( !v3 )
  {
    if ( !a3 )
    {
      v12 = *(_QWORD *)(a1 + 88);
      v13 = 1;
      if ( v12 > (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
        v12 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      for ( i = a2 + 8; i <= v12; i += 8LL )
      {
        v15 = *(_QWORD *)i;
        if ( i >= 0xFFFFF6FB7DBED000uLL
          && i <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v15 & 1) != 0
          && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
        {
          v16 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v16 )
          {
            v17 = *((_QWORD *)&v16->Flink + ((i >> 3) & 0x1FF));
            v18 = v15 | 0x20;
            if ( (v17 & 0x20) == 0 )
              v18 = *(_QWORD *)i;
            v15 = v18;
            if ( (v17 & 0x42) != 0 )
              v15 = v18 | 0x42;
          }
        }
        if ( v15 )
          break;
        if ( !++v13 )
          break;
      }
      *(_BYTE *)(a1 + 3) = v13 - 1;
    }
    return 0LL;
  }
  v19 = *(_QWORD *)(a1 + 168);
  v20 = *(_KPROCESS **)(a1 + 24);
  v21 = *(_QWORD *)(a1 + 16);
  v128 = v19;
  v22 = *(_DWORD *)(v19 + 104);
  v123 = (__int64)v20;
  v23 = (__int64)(a2 << 25) >> 16;
  if ( (v3 & 1) != 0 )
  {
    if ( (int)v6 >= 1 )
    {
      if ( (v3 & 0x80u) != 0LL )
      {
LABEL_38:
        MiDeleteLargeUserPde(a1, a2, (unsigned int)v6);
        return 0LL;
      }
      if ( !(unsigned int)MiIsPageTableDeletable(a1, a2, (__int64)v20) )
        return 0LL;
      v20 = (_KPROCESS *)v123;
      v6 = a3;
    }
    if ( (v20->Affinity.Bitmap[12] & 7) != 0 )
    {
      MiInsertTbFlushEntry(v21, (__int64)(a2 << 25) >> 16, 1LL, 0);
      if ( (v22 & 0x100) == 0 )
      {
        v38 = 0xFFFFF68000000000uLL;
        if ( v23 >= 0xFFFFF68000000000uLL && v23 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          if ( !(unsigned int)MiEvictPageTableLock(v123, a2, v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400, (int)a3 > 1) )
            return 0LL;
          goto LABEL_280;
        }
      }
      goto LABEL_98;
    }
    Process = 0xFFFFF6FFFFFFFFFFuLL;
    if ( (_DWORD)v6 )
      goto LABEL_96;
    if ( (v22 & 0x800) != 0 )
    {
      MiDeleteLargeUserPde(a1, a2, 0LL);
      MiFlushTbListEarly(v21, 0LL);
      return 0LL;
    }
    if ( (v22 & 0x10) != 0 )
    {
      v25 = MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 32LL), a2, v19 + 112, v6);
      MiInsertTbFlushEntry(v21, (__int64)(a2 << 25) >> 16, v25, 0);
      goto LABEL_280;
    }
    if ( (v22 & 0x60) != 0 )
    {
      MiDeletePhysmemPte(a1, a2);
      goto LABEL_280;
    }
    if ( (v22 & 8) != 0 )
    {
      if ( (unsigned int)MiRotatedToFrameBuffer(a2) == 1 )
      {
        v136 = 0LL;
        MiUnmapFrameBuffer(a2);
        MiInsertTbFlushEntry(v21, (__int64)(a2 << 25) >> 16, 1LL, 0);
        goto LABEL_280;
      }
      v20 = (_KPROCESS *)v123;
      Process = 0xFFFFF6FFFFFFFFFFuLL;
    }
    if ( (v22 & 0x90) != 0x80 )
    {
LABEL_96:
      if ( (v22 & 0x100) != 0 )
      {
        MiInsertTbFlushEntry(v21, (__int64)(a2 << 25) >> 16, 1LL, 0);
LABEL_98:
        v39 = v123;
LABEL_99:
        v40 = v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v133 = v40;
        if ( a3 == 3 && (*(_BYTE *)(v39 + 184) & 7) != 0 )
        {
          MiWriteTopLevelPxe(a2, v40);
        }
        else if ( a2 >= 0xFFFFF6FB7DBED000uLL
               && a2 <= 0xFFFFF6FB7DBED7F8uLL
               && (unsigned int)MiPteHasShadow(v36, v35, v37, v38) )
        {
          *(_QWORD *)a2 = v40;
          MiWritePteShadow(a2, v40);
        }
        else
        {
          *(_QWORD *)a2 = v40;
        }
        goto LABEL_280;
      }
      v41 = 0;
      v132 = 0LL;
      if ( a3 )
        goto LABEL_156;
      v6 = 0xFFFFF68000000000uLL;
      v42 = (__int64 *)(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v43 = *v42;
      v44 = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)v42 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v42 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, v43, v42, 0xFFFFF68000000000uLL)
        && (v43 & 1) != 0
        && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v46 = *(_QWORD *)(Process + 1928);
        if ( v46 )
        {
          v47 = *(_QWORD *)(v46 + 8 * ((v45 >> 3) & 0x1FF));
          v48 = HIBYTE(v43);
          Process = (unsigned __int8)v47;
          LOBYTE(Process) = v47 & 0x20;
          if ( (v47 & 0x20) == 0 )
            v48 = HIBYTE(v43);
          HIBYTE(v43) = v48;
          if ( (v47 & 0x42) != 0 )
            HIBYTE(v43) = v48;
        }
      }
      if ( (HIBYTE(v43) & 0xF) == 8 )
      {
LABEL_156:
        v61 = 0xFFFFFA8000000000uLL;
      }
      else
      {
        v49 = v19 + 120;
        v50 = v6 + ((v23 >> 9) & 0x7FFFFFFFF8LL);
        v51 = *(_QWORD *)v50;
        if ( v50 >= 0xFFFFF6FB7DBED000uLL
          && v50 <= v44
          && (unsigned int)MiPteHasShadow(Process, v51, v50, v6)
          && (v51 & 1) != 0
          && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          v52 = *(_QWORD *)(Process + 1928);
          if ( v52 )
          {
            v53 = *(_QWORD *)(v52 + 8 * ((v50 >> 3) & 0x1FF));
            v50 = v51 | 0x20;
            Process = (unsigned __int8)v53;
            LOBYTE(Process) = v53 & 0x20;
            if ( (v53 & 0x20) == 0 )
              v50 = v51;
            v51 = v50;
            if ( (v53 & 0x42) != 0 )
              v51 = v50 | 0x42;
          }
        }
        v54 = HIBYTE(v51) & 0xFu | (unsigned __int8)(16 * ((v51 >> 60) & 7));
        v55 = *(_QWORD *)a2;
        v126 = v54;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL
          && a2 <= v44
          && (unsigned int)MiPteHasShadow(Process, v55, v50, v54)
          && (v55 & 1) != 0
          && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
        {
          v50 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v50 )
          {
            v56 = *(_QWORD *)(v50 + 8 * ((a2 >> 3) & 0x1FF));
            v50 = v55 | 0x20;
            if ( (v56 & 0x20) == 0 )
              v50 = v55;
            v55 = v50;
            if ( (v56 & 0x42) != 0 )
              v55 = v50 | 0x42;
          }
        }
        v130 = v55;
        if ( (unsigned __int64)&v130 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v130 <= v44
          && (unsigned int)MiPteHasShadow(&v130, v55, v50, v54)
          && (v55 & 1) != 0
          && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
        {
          v57 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v57 )
          {
            v58 = *((_QWORD *)&v57->Flink + (((unsigned __int64)&v130 >> 3) & 0x1FF));
            v59 = v55 | 0x20;
            if ( (v58 & 0x20) == 0 )
              v59 = v55;
            v55 = v59;
            if ( (v58 & 0x42) != 0 )
              v55 = v59 | 0x42;
          }
        }
        v60 = (unsigned int)MI_PFN_IS_PROTO(48 * ((v55 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) == 0;
        v63 = v41;
        v62 = *(_QWORD *)(v49 + 8);
        LOBYTE(v63) = v60;
        if ( !v62 )
          goto LABEL_155;
        v64 = *(_QWORD *)(v49 + 16);
        if ( a2 == v62 + 8 * v64 && (_BYTE)v6 == *(_BYTE *)(v49 + 28) && v63 == (*(_DWORD *)(v49 + 24) & 1) )
        {
          *(_QWORD *)(v49 + 16) = v64 + 1;
          v136 = *(_QWORD *)a2;
          goto LABEL_280;
        }
        if ( (*(_DWORD *)(v49 + 24) & 2) == 0 )
        {
          MiTerminateWsleCluster(v49);
          LOBYTE(v6) = v126;
LABEL_155:
          *(_QWORD *)v49 = v123;
          v65 = *(_DWORD *)(v49 + 24) & 0xFFFFFFFE;
          *(_QWORD *)(v49 + 8) = a2;
          *(_BYTE *)(v49 + 28) = v6;
          *(_DWORD *)(v49 + 24) = v63 | v65;
          *(_QWORD *)(v49 + 16) = 1LL;
          v136 = *(_QWORD *)a2;
LABEL_280:
          v102 = qword_140C4DF90;
          if ( (*(_BYTE *)(v21 + 4) & 2) == 0
            && *(_DWORD *)v21 == 1
            && KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5] )
          {
            v102 = -1LL;
          }
          if ( (*(_DWORD *)(v21 + 12) >= *(_DWORD *)(v21 + 8) || *(_BYTE *)(v21 + 5) || *(_QWORD *)(v21 + 16) > v102)
            && v102 >= 0x400
            && !*(_BYTE *)(v21 + 5) )
          {
            MiFlushTbList(v21);
          }
          v19 = v128;
LABEL_291:
          if ( !*(_QWORD *)v19 )
            *(_QWORD *)v19 = a2;
          *(_QWORD *)(v19 + 8) = a2;
          return 0LL;
        }
      }
      v66 = 1LL;
      v124 = 1;
      v67 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v68 = *(_QWORD *)v67;
      if ( v67 >= 0xFFFFF6FB7DBED000uLL
        && v67 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v68, 0xFFFFF6FB7DBED000uLL, v6)
        && (v68 & 1) != 0
        && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
      {
        v69 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v69 )
        {
          v70 = *((_QWORD *)&v69->Flink + ((v67 >> 3) & 0x1FF));
          v71 = v68 | 0x20;
          if ( (v70 & 0x20) == 0 )
            v71 = v68;
          v68 = v71;
          if ( (v70 & 0x42) != 0 )
            v68 = v71 | 0x42;
        }
      }
      v72 = (_BYTE *)(v61 + 48 * ((v68 >> 12) & 0xFFFFFFFFFLL));
      if ( v23 >= 0xFFFFF68000000000uLL && v23 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        WsleContents = (*v72 >> 1) & 7;
        v127 = v41;
        if ( !(unsigned int)MiEvictPageTableLock(v123, ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, ZeroPte, 0) )
          return 0LL;
        goto LABEL_210;
      }
      v74 = *(_QWORD *)v67;
      v127 = 1;
      if ( v67 >= 0xFFFFF6FB7DBED000uLL
        && v67 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v74, 0xFFFFF6FB7DBED000uLL, v72)
        && (v74 & 1) != 0
        && ((v74 & 0x20) == 0 || (v74 & 0x42) == 0) )
      {
        v75 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v75 )
        {
          v76 = *((_QWORD *)&v75->Flink + ((v67 >> 3) & 0x1FF));
          v77 = v74 | 0x20;
          if ( (v76 & 0x20) == 0 )
            v77 = v74;
          v74 = v77;
          if ( (v76 & 0x42) != 0 )
            v74 = v77 | 0x42;
        }
      }
      WsleContents = HIBYTE(v74) & 0xF | (16 * ((v74 >> 60) & 7));
      v78 = MI_PFN_IS_PROTO(v72);
      v81 = v80;
      LOBYTE(v81) = v78 == 0;
      v124 = v81;
      if ( (WsleContents & 0xF) == 8 )
      {
        MiUnlockWsle(v123, (__int64)(a2 << 25) >> 16, v79);
        WsleContents = MiGetWsleContents(v82, (__int64)(a2 << 25) >> 16);
      }
      v83 = ZeroPte;
      v84 = *(_QWORD *)v67;
      v85 = 0xFFFFF6FB7DBED000uLL;
      v86 = 0xFFFFF6FB7DBED000uLL;
      v87 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v67 >= 0xFFFFF6FB7DBED000uLL )
      {
        v86 = 0xFFFFF6FB7DBED7F8uLL;
        if ( v67 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, ZeroPte, v84, 0xFFFFF6FB7DBED7F8uLL) )
            v84 |= 0x20uLL;
        }
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        v84 = 32LL;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v84 & 0x20) != 0 )
      {
        if ( v67 >= v85 && v67 <= v87 )
        {
          if ( (unsigned int)MiPteHasShadow(v86, v83, v84, v87) )
          {
            if ( !HIBYTE(word_140C4E008) && (v83 & 1) != 0 )
              v83 |= 0x8000000000000000uLL;
            *(_QWORD *)v67 = v83;
            MiWritePteShadow(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v83);
            goto LABEL_210;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v83 & 1) != 0 )
          {
            v83 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v67 = v83;
      }
      else
      {
        v88 = _InterlockedExchange64((volatile __int64 *)v67, v83);
        if ( v67 >= v85 && v67 <= v87 )
          MiWritePteShadow(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v83);
        if ( (v88 & 0x20) == 0 )
        {
LABEL_211:
          v89 = WsleContents;
          v39 = v123;
          MiRemoveWsle(v123, (__int64)(a2 << 25) >> 16, 1, v89, 10, v124);
          if ( v127 )
          {
            v37 = ((v23 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v90 = 0xFFFFF6FB7DBED000uLL;
            v91 = *(_QWORD *)v37;
            v38 = 0xFFFFF6FB7DBED7F8uLL;
            if ( v37 >= 0xFFFFF6FB7DBED000uLL
              && v37 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(v36, v91, v37, 0xFFFFF6FB7DBED7F8uLL)
              && (v91 & 1) != 0
              && ((v91 & 0x20) == 0 || (v91 & 0x42) == 0) )
            {
              v92 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v92 )
              {
                v93 = *((_QWORD *)&v92->Flink + ((v37 >> 3) & 0x1FF));
                v37 = v91 | 0x20;
                if ( (v93 & 0x20) == 0 )
                  v37 = v91;
                v91 = v37;
                if ( (v93 & 0x42) != 0 )
                  v91 = v37 | 0x42;
              }
            }
            v131 = v91;
            v36 = (unsigned __int64)&v131;
            if ( (unsigned __int64)&v131 >= v90 )
            {
              v36 = (unsigned __int64)&v131;
              if ( (unsigned __int64)&v131 <= v38
                && (unsigned int)MiPteHasShadow(&v131, v91, v37, v38)
                && (v91 & 1) != 0
                && ((v91 & 0x20) == 0 || (v91 & 0x42) == 0) )
              {
                v36 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
                v37 = *(_QWORD *)(v36 + 1928);
                if ( v37 )
                {
                  v94 = *(_QWORD *)(v37 + 8 * (((unsigned __int64)&v131 >> 3) & 0x1FF));
                  v37 = v91 | 0x20;
                  v36 = (unsigned __int8)v94;
                  LOBYTE(v36) = v94 & 0x20;
                  if ( (v94 & 0x20) == 0 )
                    v37 = v91;
                  v91 = v37;
                  if ( (v94 & 0x42) != 0 )
                    v91 = v37 | 0x42;
                }
              }
            }
            v35 = (v91 >> 12) & 0xFFFFFFFFFLL;
            v95 = (unsigned __int64 *)(48 * v35 - 0x58000000000LL);
            if ( ((*(_DWORD *)v95 >> 4) & 0x3FF) == 0 )
            {
              MiCountWslesInPageTable(v36, (__int64)(a2 << 25) >> 16, v137);
              LOBYTE(v36) = 8;
              while ( 1 )
              {
                LOBYTE(v36) = v36 - 1;
                v35 = (unsigned int)v137[(unsigned __int8)v36];
                if ( (_DWORD)v35 )
                  break;
                if ( !(_BYTE)v36 )
                  goto LABEL_240;
              }
              v35 &= 0x3FFu;
              v36 = *v95 & 0xFFFFFFFFFFFE000FuLL | (16 * (v35 | ((v36 & 7) << 10)));
              *v95 = v36;
            }
          }
LABEL_240:
          if ( (_DWORD)v132 != 1 )
            goto LABEL_99;
          if ( *(_DWORD *)v21 != 1 )
          {
            v36 = *(unsigned __int8 *)(v21 + 4);
            if ( (v36 & 8) == 0 )
            {
              v38 = 0xFFFFF68000000000uLL;
              if ( v23 >= 0xFFFFF68000000000uLL && v23 <= 0xFFFFF6FFFFFFFFFFuLL )
              {
                LOBYTE(v36) = v36 | 8;
                *(_BYTE *)(v21 + 4) = v36;
              }
            }
          }
          v96 = *(_DWORD *)(v21 + 12);
          v37 = *(unsigned __int8 *)(v21 + 4);
          if ( v96 )
          {
            if ( (v37 & 4) == 0 )
            {
              v97 = v21 + 8LL * (v96 - 1);
              v98 = *(_QWORD *)(v97 + 24);
              if ( (v98 & 0xC00) == 0 )
              {
                v38 = *(_QWORD *)(v97 + 24) & 0x3FFLL;
                v36 = v98 & 0xFFFFFFFFFFFFF000uLL;
                v35 = (v98 & 0xFFFFFFFFFFFFF000uLL) + ((v38 + 1) << 12);
                if ( v35 == v23 )
                {
                  v36 = v38 + 1;
                  if ( v38 + 1 >= v38 && v36 <= 0x3FF )
                  {
                    ++*(_QWORD *)(v21 + 16);
                    v36 = v98 ^ ((unsigned __int16)v98 ^ (unsigned __int16)(v98 + 1)) & 0x3FF;
                    *(_QWORD *)(v97 + 24) = v36;
                    goto LABEL_99;
                  }
                }
              }
            }
            if ( (v37 & 4) == 0 )
            {
              v37 = v21 + 8LL * (v96 - 1);
              v99 = *(_QWORD *)(v37 + 24);
              if ( (v99 & 0xC00) == 0 )
              {
                v36 = v23 + 4096;
                v35 = v99 & 0xFFFFFFFFFFFFF000uLL;
                if ( (v99 & 0xFFFFFFFFFFFFF000uLL) == v23 + 4096 )
                {
                  v36 = *(_QWORD *)(v37 + 24) & 0x3FFLL;
                  v35 = v36 + 1;
                  if ( v36 + 1 >= v36 && v35 <= 0x3FF )
                  {
                    ++*(_QWORD *)(v21 + 16);
                    v36 = (v99 - 4096) ^ ((unsigned __int16)(v99 - 4096) ^ (unsigned __int16)(v99 - 4096 + 1)) & 0x3FF;
                    *(_QWORD *)(v37 + 24) = v36;
                    goto LABEL_99;
                  }
                }
              }
            }
          }
          if ( v96 < *(_DWORD *)(v21 + 8) )
          {
            while ( 1 )
            {
              v35 = 1024LL;
              if ( (unsigned __int64)(v66 - 1) <= 0x3FF )
                v35 = v66;
              v66 -= v35;
              v100 = v23 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v35 - 1) & 0x3FF;
              v23 += v35 << 12;
              *(_QWORD *)(v21 + 8LL * (unsigned int)(*(_DWORD *)(v21 + 12))++ + 24) = v100;
              v36 = *(unsigned int *)(v21 + 12);
              *(_QWORD *)(v21 + 16) += v35;
              if ( (_DWORD)v36 == *(_DWORD *)(v21 + 8) && (*(_BYTE *)(v21 + 4) & 4) == 0 )
              {
                qsort((void *)(v21 + 24), (unsigned int)v36, 8uLL, MiTbFlushSort);
                MiCompressTbFlushList(v21);
                v101 = *(unsigned int *)(v21 + 12);
                if ( (_DWORD)v101 == *(_DWORD *)(v21 + 8) )
                  break;
              }
              if ( !v66 )
                goto LABEL_99;
            }
            if ( v66 )
            {
              *(_BYTE *)(v21 + 5) = 1;
              *(_QWORD *)(v21 + 16) = v101;
            }
          }
          else
          {
            *(_BYTE *)(v21 + 5) = 1;
          }
          goto LABEL_99;
        }
      }
LABEL_210:
      LODWORD(v132) = 1;
      goto LABEL_211;
    }
    if ( (v22 & 2) != 0 && (v20->Affinity.Bitmap[12] & 0x1000000) == 0 && dword_140C4E828 )
    {
      v5 = 0xFFFFF68000000000uLL;
      if ( v23 < 0xFFFFF68000000000uLL || v23 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v26 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v27 = *(_QWORD *)v26;
        if ( v26 >= 0xFFFFF6FB7DBED000uLL && v26 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          v5 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(v5 + 912) != 1 && (v27 & 1) != 0 && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
          {
            v5 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v28 = *(_QWORD *)(v5 + 1928);
            if ( v28 )
            {
              v29 = *(_QWORD *)(v28 + 8 * ((v26 >> 3) & 0x1FF));
              v30 = HIBYTE(*(_QWORD *)v26);
              v5 = (unsigned __int8)v29;
              LOBYTE(v5) = v29 & 0x20;
              if ( (v29 & 0x20) == 0 )
                v30 = HIBYTE(v27);
              HIBYTE(v27) = v30;
              if ( (v29 & 0x42) != 0 )
                HIBYTE(v27) = v30;
            }
          }
        }
        if ( (HIBYTE(v27) & 0xF) == 7 )
          goto LABEL_75;
        v20 = (_KPROCESS *)v123;
      }
      if ( (*(_BYTE *)a2 & 0x20) != 0 )
        MiLogPageAccess(v20, a2);
    }
LABEL_75:
    v31 = v3;
    if ( (unsigned int)MiPteInShadowRange(&v133, v5)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      v32 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v32 )
      {
        v31 = v3 | 0x20;
        v33 = *((_QWORD *)&v32->Flink + (((unsigned __int64)&v133 >> 3) & 0x1FF));
        if ( (v33 & 0x20) == 0 )
          v31 = v3;
        if ( (v33 & 0x42) != 0 )
          v31 |= 0x42uLL;
      }
    }
    v34 = 48 * ((v31 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    Process = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    {
      if ( (v22 & 1) != 0 && (unsigned int)MiGetPfnPriority(v34) - 3 <= 2 )
        MiLockSetPfnPriority(Process, 2LL);
      if ( (v22 & 4) != 0
        && !*(_QWORD *)(v19 + 88)
        && (v3 & 0x42) == 0
        && (unsigned int)MI_PFN_IS_PROTO(v34)
        && (*(_BYTE *)(v34 + 34) & 0x10) == 0
        && (unsigned int)MiGetPfnPriority(Process) < 5 )
      {
        *(_QWORD *)(v19 + 88) = MiCreateDecayPfn();
      }
    }
    goto LABEL_96;
  }
  if ( (v3 & 0x400) == 0 )
  {
    if ( (v3 & 0x800) != 0 )
    {
      if ( (v22 & 0x800) != 0 )
        goto LABEL_38;
      if ( (v22 & 0x10) != 0 && (v3 & 0x3E0) == 0x300 )
        MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 32LL), a2, v19 + 112, v6);
      goto LABEL_291;
    }
    if ( (v3 & 0x3E0) == 0 )
      KeBugCheckEx(0x1Au, 0x41792uLL, a2, v3, 0LL);
    v107 = HIWORD(v20->Affinity.Bitmap[10]);
    v134 = v3;
    v115 = *(_QWORD *)(qword_140C4E648 + 8 * v107);
    if ( (v3 & 4) != 0 || (v3 & 2) != 0 )
      v116 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v134);
    else
      v116 = 0LL;
    v134 = v116;
    if ( v116 )
      MiReleasePageFileInfo(v115, v116, 0LL);
    if ( (*(_BYTE *)(v123 + 184) & 7) != 0 )
      goto LABEL_332;
    if ( (v22 & 0x80u) != 0 )
    {
      if ( qword_140C4DF40 && (v3 & 0x10) == 0 )
        LOWORD(v3) = ~(_WORD)qword_140C4DF40 & v3;
      if ( (v3 & 0x400) != 0 || (v3 & 0x800) != 0 || (v3 & 4) != 0 )
LABEL_332:
        ++*(_QWORD *)(*(_QWORD *)(v19 + 16) + 24LL);
    }
    v112 = ZeroPte;
    v113 = 0xFFFFF6FB7DBED000uLL;
    if ( a2 < 0xFFFFF6FB7DBED000uLL )
      goto LABEL_344;
    v114 = 0xFFFFF6FB7DBED7F8uLL;
    goto LABEL_335;
  }
  v104 = v3;
  if ( qword_140C4DF40 && (v3 & 0x10) == 0 )
    v104 = v3 & ~qword_140C4DF40;
  v105 = v104 >> 16;
  v106 = v3;
  if ( qword_140C4DF40 && (v3 & 0x10) == 0 )
    v106 = v3 & ~qword_140C4DF40;
  v107 = 0xFFFFFFFFLL;
  if ( HIDWORD(v106) != 0xFFFFFFFF && (v3 & 0x800) != 0 )
  {
    v108 = MiDecrementCombinedPte(v20, v105);
LABEL_309:
    if ( v108 == 3 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v19 + 16) + 8LL);
    }
    else if ( v108 == 5 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
    }
    v8 = 0xFFFFF6FB7DBED7F8uLL;
    goto LABEL_314;
  }
  v20 = KeGetCurrentThread()->ApcState.Process;
  if ( v20[1].Affinity.Bitmap[12] )
  {
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v3) )
    {
      CloneAddress = MiLocateCloneAddress((__int64)v20, v109);
      if ( CloneAddress )
      {
        v108 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v111);
        goto LABEL_309;
      }
    }
  }
LABEL_314:
  v112 = ZeroPte;
  v113 = 0xFFFFF6FB7DBED000uLL;
  if ( a2 < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_344;
  v114 = v8;
LABEL_335:
  if ( a2 <= v114 )
  {
    if ( (unsigned int)MiPteHasShadow(v107, v112, v20, 0xFFFFF6FB7DBED000uLL) )
    {
      if ( !HIBYTE(word_140C4E008) && (v112 & 1) != 0 )
        v112 |= 0x8000000000000000uLL;
      *(_QWORD *)a2 = v112;
      MiWritePteShadow(a2, v112);
      v113 = 0xFFFFF6FB7DBED000uLL;
      goto LABEL_345;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v112 & 1) != 0 )
      v112 |= 0x8000000000000000uLL;
  }
LABEL_344:
  *(_QWORD *)a2 = v112;
LABEL_345:
  if ( (v22 & 0x80u) != 0 && (a2 < v113 || a2 > 0xFFFFF6FB7DBEDFFFuLL) )
  {
    v117 = (__int64 *)(((v23 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    PteShadow = *v117;
    v119 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v117 >= v113 && (unsigned __int64)v117 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow((unsigned __int64)v117, *v117);
      v119 = 0xFFFFF6FB7DBED7F8uLL;
    }
    v135 = PteShadow;
    v120 = &v135;
    if ( (unsigned __int64)&v135 >= v113 )
    {
      v120 = &v135;
      if ( (unsigned __int64)&v135 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow((unsigned __int64)&v135, PteShadow);
    }
    v121 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v122 = HIWORD(*(_DWORD *)(v121 + 16)) & 0x3FF;
    if ( (*(_DWORD *)(v121 + 16) & 0x3FF0000) == 0 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v121, v122, 1uLL);
    v129 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v121 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v129, (__int64)v120, v119, v122);
      while ( *(__int64 *)(v121 + 24) < 0 );
    }
    *(_QWORD *)(v121 + 16) ^= ((unsigned int)*(_QWORD *)(v121 + 16) ^ (((unsigned int)(*(_QWORD *)(v121 + 16) >> 16) - 1) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v121 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
