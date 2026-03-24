/*
 * XREFs of MiQueryAddressState @ 0x1402AFDC0
 * Callers:
 *     MiQueryAddressSpan @ 0x14025AC30 (MiQueryAddressSpan.c)
 *     MiComparePteProtections @ 0x14025B2B8 (MiComparePteProtections.c)
 *     MiAllowProtectionChange @ 0x14025EEF8 (MiAllowProtectionChange.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiWalkPageTables @ 0x140209280 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14020E690 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14021B950 (MiVadPureReserve.c)
 *     MiQueryStateMatches @ 0x14025A92C (MiQueryStateMatches.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14025AB70 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiLocateLockedVadEvent @ 0x14027EA4C (MiLocateLockedVadEvent.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B11D0 (MiGetProtoPteAddress.c)
 *     MiGetPageProtection @ 0x1402B1430 (MiGetPageProtection.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x1402DB688 (MiGetPageTableLockBuffer.c)
 *     MiIsPrototypePteVadLookup @ 0x1402E3470 (MiIsPrototypePteVadLookup.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402F1418 (KiResetGlobalDpcWatchdogProfiler.c)
 *     PsDereferencePartition @ 0x140303F4C (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140303F74 (PsReferencePartitionSafe.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiSkipFractionalPagefileRegion @ 0x14031BE14 (MiSkipFractionalPagefileRegion.c)
 *     MiGetSharedProtos @ 0x1403A5B08 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiGetProtectionFromPte @ 0x1403F3BD0 (MiGetProtectionFromPte.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiFaultInPagedPool @ 0x14052D054 (MiFaultInPagedPool.c)
 *     MiSkipEntirePagefileRegions @ 0x140547690 (MiSkipEntirePagefileRegions.c)
 *     MiGetAweVadPartition @ 0x14054C3C0 (MiGetAweVadPartition.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A805C (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        ULONG_PTR a4,
        _KPROCESS *a5,
        int *a6,
        int *a7,
        _WORD *a8,
        _QWORD *a9,
        int *a10)
{
  unsigned __int64 v10; // r15
  unsigned __int8 v11; // r13
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  unsigned __int64 v17; // r12
  __int64 v18; // rbx
  BOOL v19; // esi
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rcx
  char *AnyMultiplexedVm; // rbx
  int v23; // eax
  unsigned int v24; // edx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r14
  __int64 v27; // r13
  unsigned __int64 v28; // rbx
  __int64 v29; // rcx
  unsigned __int64 v30; // r13
  int v31; // r10d
  ULONG_PTR v32; // rdx
  int v33; // ebx
  unsigned int v34; // r13d
  unsigned __int64 v35; // r11
  ULONG_PTR v36; // r8
  struct _LIST_ENTRY *v37; // rdx
  __int64 v38; // rax
  int PageProtection; // eax
  unsigned __int64 v40; // rbx
  __int64 v41; // rsi
  int v42; // r15d
  __int64 v43; // rcx
  ULONG_PTR v44; // r11
  unsigned int v45; // r9d
  __int64 **LockedVadEvent; // rax
  __int16 **v47; // r8
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // rdi
  int v50; // r11d
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // rbx
  unsigned __int64 v54; // rsi
  unsigned __int64 v55; // r8
  __int64 v56; // rdx
  unsigned __int64 Process; // rcx
  unsigned __int64 v58; // r10
  __int64 v59; // rdx
  __int64 v60; // rax
  ULONG_PTR v61; // r11
  _QWORD *v62; // rdx
  int v63; // r8d
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rdx
  __int64 v66; // r14
  unsigned __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 *v70; // rbx
  unsigned __int64 v71; // rdx
  __int64 v72; // rsi
  unsigned int SessionId; // eax
  __int64 SharedProtos; // rax
  __int64 v75; // rdx
  unsigned __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rbx
  unsigned __int64 v79; // r14
  unsigned __int64 v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  _DWORD *v84; // r9
  __int64 v85; // rax
  _KPROCESS *v86; // rcx
  __int64 v87; // rax
  __int16 v88; // ax
  __int64 v89; // r12
  unsigned __int64 v90; // r14
  unsigned __int64 v91; // rcx
  char v92; // dl
  struct _KPRCB *CurrentPrcb; // rax
  bool v94; // zf
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  int v96; // edx
  _DWORD *PageTableLockBuffer; // rax
  unsigned __int64 v98; // rdx
  __int64 v99; // rax
  LONG *v100; // rax
  unsigned int v101; // edi
  unsigned int v102; // esi
  int v103; // edx
  unsigned int v104; // ebx
  __int64 v105; // rax
  ULONG_PTR v106; // rdx
  struct _LIST_ENTRY *v107; // r8
  __int64 v108; // rax
  __int64 v109; // r8
  __int64 v110; // r13
  __int64 v111; // rdx
  __int64 v112; // r8
  _DWORD *v113; // r9
  __int64 v114; // rdx
  ULONG_PTR v115; // rdi
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 v121; // rax
  __int16 v122; // di
  unsigned int v123; // ecx
  int ProtectionFromPte; // ecx
  unsigned __int64 LeafVa; // rax
  __int64 result; // rax
  int *v127; // rdx
  int v128; // ecx
  __int16 v130; // [rsp+34h] [rbp-CCh] BYREF
  int v131; // [rsp+38h] [rbp-C8h]
  int v132; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 *v133; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v134; // [rsp+48h] [rbp-B8h]
  __int16 v135; // [rsp+50h] [rbp-B0h]
  unsigned int v136; // [rsp+54h] [rbp-ACh]
  unsigned __int64 ProtoPteAddress; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h]
  int v140; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v141; // [rsp+78h] [rbp-88h]
  int v142; // [rsp+80h] [rbp-80h]
  unsigned int v143; // [rsp+84h] [rbp-7Ch]
  __int64 v144; // [rsp+88h] [rbp-78h] BYREF
  int v145; // [rsp+90h] [rbp-70h]
  unsigned int v146; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned __int64 v147; // [rsp+98h] [rbp-68h]
  unsigned __int64 v148; // [rsp+A0h] [rbp-60h]
  __int64 v149; // [rsp+A8h] [rbp-58h]
  _QWORD *v150; // [rsp+B0h] [rbp-50h]
  int *v151; // [rsp+B8h] [rbp-48h]
  int *v152; // [rsp+C0h] [rbp-40h]
  _WORD *v153; // [rsp+C8h] [rbp-38h]
  __int128 v154; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v155; // [rsp+E0h] [rbp-20h]
  int *v156; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v157; // [rsp+F0h] [rbp-10h]
  _QWORD v158[22]; // [rsp+100h] [rbp+0h] BYREF

  v10 = a1;
  v151 = a6;
  v11 = a3;
  v152 = a7;
  v153 = a8;
  v150 = a9;
  BugCheckParameter2 = a4;
  v12 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v156 = a10;
  v133 = v12;
  v13 = a1 >> 9;
  ProtoPteAddress = 0LL;
  v14 = *((unsigned __int16 *)v12 + 87);
  v144 = 0LL;
  LOWORD(v12) = **(_WORD **)(qword_140C4E648 + 8 * v14);
  *a10 = 1;
  v135 = (__int16)v12;
  v130 = (__int16)v12;
  v15 = (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v157 = v15;
  v16 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v134 = v15;
  v148 = v16;
  v145 = 0x2000;
  v17 = 0LL;
  v142 = 0;
  v143 = 0;
  v141 = 0LL;
  v18 = 0LL;
  v149 = 0LL;
  v155 = v16 << 25 >> 16;
LABEL_2:
  v147 = v16;
  v140 = 0;
  BugCheckParameter3 = 0LL;
  v19 = 0;
  v154 = 0LL;
  memset((char *)v158 + 2, 0, 0xAEuLL);
  LOWORD(v158[0]) = 2145;
  v20 = (__int64)((v15 << 25) - v18) >> 16;
  v21 = v20;
  if ( v20 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v21 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v21 = (__int64)((v21 << 25) - v18) >> 16;
    }
    while ( v21 >= 0xFFFFF68000000000uLL );
    v11 = a3;
  }
  if ( v21 < 0xFFFF800000000000uLL || v21 >= qword_140C4FB38 && v21 <= qword_140C4E368 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v23 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v20, 0);
  if ( v23 )
  {
    v24 = v23 - 1;
    v25 = 0x7FFFFFFFF8LL;
    LODWORD(v154) = v23 - 1;
    v26 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v154 + 1) = v26;
  }
  else
  {
    LOWORD(v158[0]) |= 4u;
    v158[21] = &v154;
    v158[2] = 0LL;
    v158[3] = AnyMultiplexedVm;
    BYTE2(v158[0]) = BYTE2(v158[0]) & 0xE3 | 4;
    v158[20] = MiGetNextPageTableTail;
    v158[5] = v155;
    BYTE6(v158[0]) = v11;
    v158[4] = v20;
    MiWalkPageTables((__int64)v158);
    v24 = v154;
    v25 = 0x7FFFFFFFF8LL;
    v26 = *((_QWORD *)&v154 + 1);
  }
  if ( v26 )
  {
    v27 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v141 = (unsigned __int64 *)v27;
    if ( v24 )
    {
      v28 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v24 > 1 )
      {
        v29 = v24 - 1;
        do
        {
          v28 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v29;
        }
        while ( v29 );
      }
      v27 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v26 == v15 )
      {
        BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v28);
        v115 = BugCheckParameter3;
        if ( (BugCheckParameter3 & 1) != 0 )
        {
          if ( (unsigned int)MiPteInShadowRange(&BugCheckParameter3, v114)
            && (unsigned int)MiPteHasShadow(v117, v116, v118, v119)
            && ((v115 & 0x20) == 0 || (v115 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v121 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
              if ( (v121 & 0x20) != 0 )
                v115 |= 0x20uLL;
              if ( (v121 & 0x42) != 0 )
                v115 |= 0x42uLL;
            }
            else
            {
              v115 = BugCheckParameter3;
            }
          }
        }
        else if ( qword_140C4DF40 )
        {
          if ( (BugCheckParameter3 & 0x10) != 0 )
            v115 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v115 = ~qword_140C4DF40 & BugCheckParameter3;
        }
        v122 = (*(_QWORD *)(48 * ((v115 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 39) & 0x3FF;
        v123 = *(_DWORD *)(BugCheckParameter2 + 48);
        if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) == 0x30 || (v123 & 0x500000) == 0x500000 )
          ProtectionFromPte = MiGetProtectionFromPte(BugCheckParameter2, BugCheckParameter3);
        else
          ProtectionFromPte = (v123 >> 7) & 0x1F;
        *v151 = ProtectionFromPte;
        MiUnlockPageTableInternal(v133, v27);
        *v152 = 0;
        *v153 = v122;
        LeafVa = MiGetLeafVa(v28 + 8);
        *v150 = LeafVa;
        return 4096LL;
      }
    }
    else if ( v15 == v26 )
    {
      BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v15);
      v140 = 1;
      v26 = v15 + 8;
      v30 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v19 = BugCheckParameter3 == 0;
      goto LABEL_22;
    }
    MiUnlockPageTableInternal(v133, v27);
    v141 = 0LL;
    v30 = (v26 & 0xFFFFFFFFFFFFF000uLL) - 8;
LABEL_22:
    if ( v30 > v148 )
      v30 = v148;
    v147 = v30;
    goto LABEL_25;
  }
  v26 = v148 + 8;
LABEL_25:
  v31 = 0;
  while ( 1 )
  {
    v32 = BugCheckParameter3;
    v33 = v31;
    v132 = v31;
    v34 = 0x2000;
    v136 = v31;
    v131 = v31;
    if ( !BugCheckParameter3 )
    {
      v44 = BugCheckParameter2;
      *v156 = v31;
      v45 = *(_DWORD *)(v44 + 48);
      if ( (*(_BYTE *)(v44 + 48) & 0x70) == 0x30 || (v45 & 0x70) == 0x10 )
      {
        v25 = v45 & 0x70;
        if ( (_BYTE)v25 == 48 )
          v130 = *(_WORD *)MiGetAweVadPartition(v44);
LABEL_69:
        v42 = v33;
LABEL_70:
        v43 = (__int64)a5;
        goto LABEL_71;
      }
      if ( (v45 & 0x100000) != 0 )
      {
        if ( *(int *)(v44 + 52) >= 0 )
        {
          v42 = v31;
        }
        else
        {
          v34 = 4096;
          v42 = (v45 >> 7) & 0x1F;
          v136 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v44);
        }
        v25 = v45 & 0x500000;
        if ( (_DWORD)v25 == 5242880 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(v44, 16);
          if ( LockedVadEvent )
          {
            if ( LockedVadEvent[3] && (unsigned __int8)PsReferencePartitionSafe(LockedVadEvent[3]) )
            {
              v130 = **v47;
              PsDereferencePartition(v47);
              v31 = 0;
            }
          }
        }
        goto LABEL_70;
      }
      v48 = v10 >> 12;
      v130 = **(_WORD **)(qword_140C4E648 + 8LL * (*(_WORD *)(**(_QWORD **)(v44 + 72) + 60LL) & 0x3FF));
      ProtoPteAddress = MiGetProtoPteAddress(v44, v48, 4LL, &v144);
      v49 = ProtoPteAddress;
      if ( !ProtoPteAddress )
      {
        if ( a5 && !MiQueryStateMatches((__int64)a5, 0x2000, 0, 0, 0) )
        {
          v15 = v134;
          v33 = 1;
          v42 = v132;
          v26 = v134;
          v131 = 1;
LABEL_71:
          v41 = (__int64)v133;
LABEL_72:
          v35 = 0xFFFFF6FB7DBED000uLL;
          goto LABEL_73;
        }
        if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) && v144 && !*(_QWORD *)(v144 + 8) )
        {
          v15 = v134;
          v51 = MiSkipEntirePagefileRegions(v50, v48, v134, v26, v144);
          v41 = (__int64)v133;
          v31 = 0;
          v43 = (__int64)a5;
          v26 = v51;
          v35 = 0xFFFFF6FB7DBED000uLL;
          v42 = v33;
          if ( v51 == v15 )
            v26 = v15 + 8;
          goto LABEL_73;
        }
        v15 = v134;
        v26 = v134 + 8;
        goto LABEL_69;
      }
      v53 = v144;
      if ( v19 )
      {
        v54 = v134;
        v55 = *(_QWORD *)(v144 + 8);
        v56 = ((__int64)(v147 - v134) >> 3) + 1;
        if ( v56 > 32 )
          v56 = 32LL;
        Process = v55 + 8 * (*(unsigned int *)(v144 + 44) - (unsigned __int64)(*(_DWORD *)(v144 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v144 + 34) & 2) != 0 || ProtoPteAddress < v55 || ProtoPteAddress >= Process )
        {
          v56 = 0LL;
        }
        else if ( ProtoPteAddress + 8 * v56 > Process )
        {
          v56 = (__int64)(Process - ProtoPteAddress) >> 3;
        }
        v25 = v134 - 8 + 8 * v56;
        v26 = v134 + 8;
        if ( v134 + 8 <= v25 )
        {
          v58 = 0xFFFFF6FB7DBED000uLL;
          do
          {
            v59 = *(_QWORD *)v26;
            if ( v26 >= v58
              && v26 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(Process, v59, v55, v25)
              && (v59 & 1) != 0
              && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v55 = *(_QWORD *)(Process + 1928);
              if ( v55 )
              {
                v60 = *(_QWORD *)(v55 + 8 * ((v26 >> 3) & 0x1FF));
                v55 = v59 | 0x20;
                Process = (unsigned __int8)v60;
                LOBYTE(Process) = v60 & 0x20;
                if ( (v60 & 0x20) == 0 )
                  v55 = v59;
                v59 = v55;
                if ( (v60 & 0x42) != 0 )
                  v59 = v55 | 0x42;
              }
            }
            if ( v59 )
              break;
            v26 += 8LL;
          }
          while ( v26 <= v25 );
          v49 = ProtoPteAddress;
          v53 = v144;
          v54 = v134;
        }
        if ( v140 )
          goto LABEL_103;
      }
      else
      {
        if ( v140 )
        {
LABEL_103:
          v61 = BugCheckParameter2;
          goto LABEL_104;
        }
        v54 = v134;
        v65 = *(_QWORD *)(v144 + 8);
        v66 = (__int64)(v26 - v134) >> 3;
        v67 = v65 + 8 * (*(unsigned int *)(v144 + 44) - (unsigned __int64)(*(_DWORD *)(v144 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v144 + 34) & 2) != 0 || ProtoPteAddress < v65 || ProtoPteAddress >= v67 )
        {
          v66 = 1LL;
        }
        else if ( ProtoPteAddress + 8 * v66 > v67 )
        {
          v66 = (__int64)(v67 - ProtoPteAddress) >> 3;
        }
        v26 = v134 + 8 * v66;
      }
      if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) )
      {
        v68 = MiSkipFractionalPagefileRegion(v49, v53, (__int64)(v26 - v54) >> 3);
        v61 = BugCheckParameter2;
        if ( v68 != v49 )
        {
          v69 = (__int64)(v68 - v49) >> 3;
          v31 = 0;
          v49 = 0LL;
          ProtoPteAddress = 0LL;
          v26 = v54 + 8 * v69;
LABEL_105:
          v62 = *(_QWORD **)(v61 + 120);
          if ( (__int64)v62 >= 0 )
          {
            v63 = 0;
            v64 = -1LL;
          }
          else
          {
            v63 = 1;
            v64 = (unsigned __int64)(*v62 - 1LL) >> 12;
          }
          if ( v49 )
          {
            if ( (*(_DWORD *)(v61 + 48) & 0x70) == 0x20 )
            {
              v70 = *(__int64 **)(v61 + 72);
              v31 = 0;
              v71 = 0LL;
              if ( v70 )
              {
                do
                {
                  if ( (*((_BYTE *)v70 + 34) & 2) != 0 && (v72 = *v70, (*(_DWORD *)(*v70 + 56) & 0x4000000) != 0) )
                  {
                    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
                    SharedProtos = MiGetSharedProtos(v72, SessionId, v70);
                    v49 = ProtoPteAddress;
                    v71 = *(_QWORD *)(SharedProtos + 72);
                  }
                  else
                  {
                    v71 = v70[1];
                  }
                  if ( v49 >= v71 && v49 < v71 + 8LL * *((unsigned int *)v70 + 11) )
                    break;
                  v70 = (__int64 *)v70[2];
                }
                while ( v70 );
                v61 = BugCheckParameter2;
                v31 = 0;
              }
              if ( (__int64)(v49 - v71) >> 3 < (unsigned __int64)(*((_DWORD *)v70 + 11)
                                                                - (*((_DWORD *)v70 + 13) & 0x3FFFFFFFu)) )
              {
                v42 = (*(_DWORD *)(v61 + 48) >> 7) & 0x1F;
                if ( v42 == 7 )
                  v42 = (*((unsigned __int16 *)v70 + 16) >> 1) & 0x1F;
                v15 = v134;
                v33 = v131;
                v41 = (__int64)v133;
                v43 = (__int64)a5;
                v35 = 0xFFFFF6FB7DBED000uLL;
                if ( v42 )
                  v34 = 4096;
                goto LABEL_73;
              }
              v15 = v134;
              v42 = 0;
              v33 = v131;
            }
            else
            {
              if ( !*(_QWORD *)(*(_QWORD *)v53 + 64LL) && (*(_DWORD *)(*(_QWORD *)v53 + 56LL) & 0x2000) == 0 )
              {
                if ( v141 )
                {
                  MiUnlockPageTableInternal(v133, v141);
                  v141 = 0LL;
                }
                MiUnlockWorkingSetShared((__int64)v133, a3);
                v76 = *(unsigned int *)(v53 + 44) - (unsigned __int64)(*(_DWORD *)(v53 + 52) & 0x3FFFFFFF);
                v77 = *(_QWORD *)(v53 + 8);
                v78 = *(_QWORD *)v49;
                v79 = (__int64)(v26 - v134) >> 3;
                v80 = (__int64)(v77 + 8 * v76 - v49) >> 3;
                if ( v80 > v79 )
                  v80 = v79;
                if ( (unsigned int)MiPteInShadowRange(v49, v75)
                  && (unsigned int)MiPteHasShadow(v82, v81, v83, v84)
                  && (v78 & 1) != 0
                  && ((v78 & 0x20) == 0 || (v78 & 0x42) == 0) )
                {
                  v49 = ProtoPteAddress;
                  v81 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v81 )
                  {
                    v85 = *(_QWORD *)(v81 + 8 * ((ProtoPteAddress >> 3) & 0x1FF));
                    v81 = v78 | 0x20;
                    if ( (v85 & 0x20) == 0 )
                      v81 = v78;
                    v78 = v81;
                    if ( (v85 & 0x42) != 0 )
                      v78 = v81 | 0x42;
                  }
                }
                if ( v78 )
                {
                  v34 = 4096;
                  v42 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
                }
                else
                {
                  v42 = v132;
                }
                v86 = a5;
                if ( !a5 || MiQueryStateMatches((__int64)a5, v34, v42, 0, v130) )
                {
                  if ( v80 )
                  {
                    while ( 1 )
                    {
LABEL_159:
                      v81 = *(_QWORD *)v49;
                      if ( v49 >= 0xFFFFF6FB7DBED000uLL
                        && v49 <= 0xFFFFF6FB7DBED7F8uLL
                        && (unsigned int)MiPteHasShadow(v86, v81, v83, v84)
                        && (v81 & 1) != 0
                        && ((v81 & 0x20) == 0 || (v81 & 0x42) == 0) )
                      {
                        v49 = ProtoPteAddress;
                        v86 = KeGetCurrentThread()->ApcState.Process;
                        v83 = (__int64)v86[1].ProcessListEntry.Flink;
                        if ( v83 )
                        {
                          v87 = *(_QWORD *)(v83 + 8 * ((ProtoPteAddress >> 3) & 0x1FF));
                          v83 = v81 | 0x20;
                          v86 = (_KPROCESS *)(unsigned __int8)v87;
                          LOBYTE(v86) = v87 & 0x20;
                          if ( (v87 & 0x20) == 0 )
                            v83 = v81;
                          v81 = v83;
                          if ( (v87 & 0x42) != 0 )
                            v81 = v83 | 0x42;
                        }
                      }
                      if ( v81 )
                      {
                        if ( v34 != 4096 )
                          break;
                      }
                      else if ( v34 == 4096 )
                      {
                        break;
                      }
                      v49 += 8LL;
                      ++v17;
                      ProtoPteAddress = v49;
                      if ( !--v80 )
                        break;
                      while ( (v49 & 0xFFF) == 0 )
                      {
                        v88 = MI_READ_PTE_LOCK_FREE(((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                        if ( (v88 & 1) != 0 || (v88 & 0x3E0) != 0 )
                        {
                          if ( v34 == 4096 )
                            goto LABEL_159;
                          goto LABEL_185;
                        }
                        if ( v34 == 4096 )
                          goto LABEL_185;
                        if ( v80 <= 0x200 )
                        {
                          v17 += v80;
                          ProtoPteAddress = v49 + 8 * v80;
                          goto LABEL_185;
                        }
                        v49 += 4096LL;
                        v17 += 512LL;
                        ProtoPteAddress = v49;
                        v80 -= 512LL;
                        if ( !v80 )
                          goto LABEL_185;
                      }
                    }
                  }
LABEL_185:
                  v33 = v131;
                }
                else
                {
                  v33 = 1;
                  v131 = 1;
                  v17 = 0LL;
                }
                v15 = v134;
                v41 = (__int64)v133;
                v26 = v134 + 8 * v17;
                MiLockWorkingSetShared((__int64)v133, v81, v83, v84);
                v43 = (__int64)a5;
                v31 = 0;
                goto LABEL_72;
              }
              v89 = *(_QWORD *)(v53 + 8)
                  + 8 * (*(unsigned int *)(v53 + 44) - (unsigned __int64)(*(_DWORD *)(v53 + 52) & 0x3FFFFFFF))
                  - v49;
              v15 = v134;
              v17 = v89 >> 3;
              v90 = (__int64)(v26 - v134) >> 3;
              if ( v17 > v90 )
                v17 = v90;
              v25 = v17;
              if ( v63 )
              {
                v91 = *(unsigned int *)(v61 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v61 + 32) << 32);
                if ( v48 - v91 <= v64 )
                {
                  v17 = v91 - v48 + v64 + 1;
                  v63 = 0;
                  if ( v25 <= v17 )
                    v17 = v25;
                }
              }
              v26 = v134 + 8 * v17;
              if ( v63 )
                v42 = v132;
              else
                v42 = (*(_DWORD *)(v61 + 48) >> 7) & 0x1F;
              v33 = v131;
              v34 = 4096;
              if ( v63 )
                v34 = 0x2000;
              v31 = 0;
            }
          }
          else
          {
            v42 = v132;
            v33 = v132;
            v15 = v134;
          }
          goto LABEL_70;
        }
      }
LABEL_104:
      v31 = 0;
      goto LABEL_105;
    }
    v35 = 0xFFFFF6FB7DBED000uLL;
    if ( (unsigned __int64)&BugCheckParameter3 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&BugCheckParameter3 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(&BugCheckParameter3, BugCheckParameter3, BugCheckParameter3, v25)
      && (v36 & 1) != 0
      && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
    {
      v37 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v37 )
      {
        v38 = *((_QWORD *)&v37->Flink + (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
        v32 = v36;
        if ( (v38 & 0x20) != 0 )
          v32 = v36 | 0x20;
        if ( (v38 & 0x42) != 0 )
          v32 |= 0x42uLL;
      }
      else
      {
        v32 = BugCheckParameter3;
      }
    }
    if ( (v32 & 0x3E0) == 0x200
      && (v32 & 1) == 0
      && ((v32 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v32)) )
    {
      v41 = (__int64)v133;
      v42 = v33;
      v43 = (__int64)a5;
    }
    else
    {
      v34 = 4096;
      PageProtection = MiGetPageProtection(BugCheckParameter2, v15, (__int64)&v130);
      v40 = ProtoPteAddress;
      if ( ProtoPteAddress )
      {
        v110 = (__int64)v133;
        MiUnlockPageTableInternal(v133, v141);
        v141 = 0LL;
        MiUnlockWorkingSetShared(v110, a3);
        MiFaultInPagedPool(v40);
        MiLockWorkingSetShared(v110, v111, v112, v113);
        v16 = v148;
        v18 = v149;
        v11 = a3;
        goto LABEL_2;
      }
      v33 = v131;
      v31 = 0;
      v41 = (__int64)v133;
      v42 = PageProtection;
      v43 = (__int64)a5;
      v35 = 0xFFFFF6FB7DBED000uLL;
      if ( !PageProtection )
        v34 = 0x2000;
    }
LABEL_73:
    v52 = v157;
    if ( v15 == v157 )
    {
      v135 = v130;
      v145 = v34;
      v142 = v42;
      v143 = v136;
      if ( v43 && !MiQueryStateMatches(v43, v34, v42, v136, v130) )
        goto LABEL_312;
      goto LABEL_270;
    }
    if ( v34 != v145 )
      break;
    if ( v130 != v135 )
      break;
    if ( v42 != v142 )
      break;
    v43 = v143;
    if ( v136 != v143 )
      break;
    if ( v17 || v33 == 1 || (__int64)((v15 - v157) & 0xFFFFFFFFFFFFFFF8uLL) < 256 )
      goto LABEL_270;
    v25 = (unsigned __int64)v141;
    if ( !v141 )
      goto LABEL_244;
    v92 = *(_BYTE *)(v41 + 184) & 7;
    v146 = v31;
    if ( v141 != (unsigned __int64 *)0xFFFFF6FB7DBEDF68LL )
    {
      if ( v92 )
        goto LABEL_225;
      v43 = 0xFFFFF6FB7DBEDFFFuLL;
      if ( (unsigned __int64)v141 >= v35 && (unsigned __int64)v141 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v43 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608);
        if ( v43 )
        {
          v96 = (*(_DWORD *)(v43 + 4LL * (((unsigned int)v141 >> 3) & 0x1FF)) >> 30) & 1;
LABEL_242:
          v94 = v96 == 0;
          goto LABEL_243;
        }
LABEL_225:
        v43 = 0xFFFFF6FB7DBEDFFFuLL;
      }
      if ( v92 && (unsigned __int64)v141 >= v35 && (unsigned __int64)v141 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(v41, v141, &v146);
        v43 = v146;
        v94 = ((*PageTableLockBuffer >> v146) & 2) == 0;
        goto LABEL_243;
      }
      v98 = *v141;
      if ( (unsigned __int64)v141 >= v35
        && (unsigned __int64)v141 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBEDFFFuLL, v98, v157, v141)
        && (v98 & 1) != 0
        && ((v98 & 0x20) == 0 || (v98 & 0x42) == 0) )
      {
        v43 = (__int64)KeGetCurrentThread()->ApcState.Process;
        v52 = *(_QWORD *)(v43 + 1928);
        if ( v52 )
        {
          v99 = *(_QWORD *)(v52 + 8 * ((v25 >> 3) & 0x1FF));
          v52 = v98 | 0x20;
          v43 = (unsigned __int8)v99;
          LOBYTE(v43) = v99 & 0x20;
          if ( (v99 & 0x20) == 0 )
            v52 = v98;
          v98 = v52;
          if ( (v99 & 0x42) != 0 )
            v98 = v52 | 0x42;
        }
      }
      v96 = (v98 >> 60) & 2;
      goto LABEL_242;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v92 )
    {
      if ( v92 == 7 )
      {
        v94 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
      }
      else
      {
        if ( v92 == 5 )
          Next = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next;
        else
          Next = CurrentPrcb->SelfmapLockHandle[3].LockQueue.Next;
        v94 = Next == 0LL;
      }
    }
    else
    {
      v94 = CurrentPrcb->SelfmapLockHandle[2].LockQueue.Next == 0LL;
    }
LABEL_243:
    if ( !v94 )
      goto LABEL_310;
LABEL_244:
    v100 = &dword_140C4F780;
    if ( (*(_BYTE *)(v41 + 184) & 7) != 2 )
      v100 = (LONG *)(v41 + 192);
    if ( (*v100 & 0x40000000) != 0 )
      goto LABEL_310;
    if ( a3 < 2u )
    {
      v43 = (__int64)KeGetCurrentPrcb();
      v52 = *(unsigned int *)(v43 + 12588);
      v101 = *(_DWORD *)(v43 + 31724);
      v102 = *(_DWORD *)(v43 + 32412);
      if ( (v52 & 1) != 0 )
      {
        v103 = 1;
        if ( v102 > 7 )
        {
          if ( *(_BYTE *)(v43 + 12585) )
          {
            v104 = 1;
LABEL_266:
            if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
            {
              EtwTraceShouldYieldProcessor(v104, v101, v102);
              v31 = 0;
            }
            if ( v104 )
            {
              v15 = v134;
LABEL_310:
              v26 = v15 + 8;
              goto LABEL_313;
            }
LABEL_269:
            v15 = v134;
            goto LABEL_270;
          }
LABEL_261:
          if ( (v52 & 0x1E) != 0 )
          {
            v104 = 5;
            goto LABEL_266;
          }
          if ( *(_QWORD *)(v43 + 8) != *(_QWORD *)(v43 + 24) )
          {
            v104 = 6;
            goto LABEL_266;
          }
LABEL_265:
          _disable();
          *(_DWORD *)(v43 + 31724) = v31;
          *(_DWORD *)(v43 + 32412) = v31;
          KiResetGlobalDpcWatchdogProfiler(v43);
          _enable();
          v31 = 0;
          v104 = 0;
          goto LABEL_266;
        }
      }
      else
      {
        v103 = v31;
        if ( (v52 & 0x1E) != 0 )
        {
          v104 = 2;
          goto LABEL_266;
        }
        if ( *(_BYTE *)(v43 + 12585) )
        {
          v104 = 3;
          goto LABEL_266;
        }
        v105 = *(_QWORD *)(v43 + 16);
        if ( v105 && v105 != *(_QWORD *)(v43 + 8) )
        {
          v104 = 4;
          goto LABEL_266;
        }
      }
      if ( v101 <= 7 )
        goto LABEL_269;
      if ( v103 )
        goto LABEL_261;
      goto LABEL_265;
    }
LABEL_270:
    if ( v131 )
      goto LABEL_313;
    if ( v17 )
      goto LABEL_313;
    v15 += 8LL;
    v134 = v15;
    if ( v26 != v15 || v26 > v147 )
      goto LABEL_313;
    if ( v140 )
    {
      v106 = *(_QWORD *)v15;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v43, v106, v52, v25)
        && (v106 & 1) != 0
        && ((v106 & 0x20) == 0 || (v106 & 0x42) == 0) )
      {
        v107 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v107 )
        {
          v108 = *((_QWORD *)&v107->Flink + ((v15 >> 3) & 0x1FF));
          v109 = v106 | 0x20;
          if ( (v108 & 0x20) == 0 )
            v109 = v106;
          v106 = v109;
          if ( (v108 & 0x42) != 0 )
            v106 = v109 | 0x42;
        }
      }
      BugCheckParameter3 = v106;
    }
    v19 = v31;
    v10 = (__int64)((v15 << 25) - v149) >> 16;
    v26 += 8LL;
  }
  v42 = v142;
  v34 = v145;
  v130 = v135;
  v136 = v143;
LABEL_312:
  v26 = v15;
LABEL_313:
  if ( v141 )
    MiUnlockPageTableInternal(v133, v141);
  result = v34;
  v127 = v151;
  *v150 = (__int64)((v26 << 25) - v149) >> 16;
  v128 = v136;
  *v127 = v42;
  *v152 = v128;
  *v153 = v130;
  return result;
}
