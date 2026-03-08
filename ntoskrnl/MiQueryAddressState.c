/*
 * XREFs of MiQueryAddressState @ 0x14031B4F0
 * Callers:
 *     MiComparePteProtections @ 0x1402DE51C (MiComparePteProtections.c)
 *     MiQueryAddressSpan @ 0x14031E2D0 (MiQueryAddressSpan.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiAllowProtectionChange @ 0x140367C88 (MiAllowProtectionChange.c)
 *     MiObtainRotateProtectionRanges @ 0x1406304A8 (MiObtainRotateProtectionRanges.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14020DC68 (MiLocateLockedVadEvent.c)
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiFastLockLeafPageTable @ 0x140269C50 (MiFastLockLeafPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x140290838 (MiGetPageTableLockBuffer.c)
 *     PsReferencePartitionSafe @ 0x140295BC8 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     MiGetSharedProtos @ 0x1402CCDF8 (MiGetSharedProtos.c)
 *     MiQueryStateMatches @ 0x1402E23F4 (MiQueryStateMatches.c)
 *     MiSkipEntirePagefileRegions @ 0x1402EC8D4 (MiSkipEntirePagefileRegions.c)
 *     MiSkipFractionalPagefileRegion @ 0x1402F3234 (MiSkipFractionalPagefileRegion.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x14031C310 (MiGetPageProtection.c)
 *     MiGetProtoPteAddress @ 0x14031C780 (MiGetProtoPteAddress.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14031F770 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiVadPureReserve @ 0x140321EB0 (MiVadPureReserve.c)
 *     MiIsPrototypePteVadLookup @ 0x140327240 (MiIsPrototypePteVadLookup.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405FB09C (EtwTraceShouldYieldProcessor.c)
 *     MiFaultInPagedPool @ 0x14062E748 (MiFaultInPagedPool.c)
 *     MiGetProtectionFromPte @ 0x140646910 (MiGetProtectionFromPte.c)
 *     MiGetAweVadPartition @ 0x1406483B4 (MiGetAweVadPartition.c)
 */

__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        ULONG_PTR a4,
        __int64 a5,
        int *a6,
        _DWORD *a7,
        _WORD *a8,
        __int64 *a9,
        _DWORD *a10)
{
  unsigned __int64 *v11; // rsi
  __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rdx
  unsigned __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // r14
  BOOL v18; // r15d
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  char *AnyMultiplexedVm; // rdi
  int v22; // eax
  unsigned int v23; // edx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rsi
  int i; // r14d
  __int64 v28; // rcx
  int v29; // esi
  int PageProtection; // eax
  ULONG_PTR v31; // rdi
  unsigned int v32; // r12d
  unsigned __int64 v33; // rax
  __int64 v34; // r10
  char v35; // dl
  char v36; // cl
  unsigned __int64 v37; // rax
  int v38; // eax
  bool v39; // zf
  _DWORD *v40; // rax
  struct _KPRCB *v41; // rcx
  int v42; // r8d
  __int64 v43; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // r15d
  _KTHREAD *NextThread; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  ULONG_PTR v50; // r10
  unsigned int v51; // r8d
  __int64 v52; // rax
  __int64 v53; // r12
  __int16 v54; // di
  _QWORD *v55; // r14
  __int64 v56; // rdi
  ULONG_PTR v57; // r15
  _QWORD *v58; // rax
  int v59; // r8d
  unsigned __int64 v60; // r9
  unsigned int v61; // edx
  __int64 v62; // rdi
  unsigned __int64 j; // rdx
  __int64 result; // rax
  _DWORD *v65; // rdx
  ULONG_PTR v66; // r8
  __int64 v67; // rdx
  ULONG_PTR v68; // rcx
  unsigned __int64 v69; // r8
  __int64 v70; // r12
  unsigned __int64 v71; // rbx
  unsigned __int64 v72; // rdi
  int v73; // r15d
  unsigned __int64 v74; // rbx
  int v75; // eax
  __int64 v76; // rax
  unsigned __int64 v77; // rbx
  unsigned __int64 v78; // r10
  __int16 v79; // ax
  unsigned __int64 v80; // rcx
  __int16 v81; // ax
  unsigned int v82; // r14d
  ULONG_PTR v83; // rdx
  __int64 v84; // rbx
  ULONG_PTR v85; // rcx
  unsigned __int64 v86; // rax
  int v87; // eax
  __int64 v88; // r10
  int v89; // eax
  unsigned __int64 v90; // rcx
  signed __int32 *v91; // rdx
  signed __int32 v92; // eax
  signed __int32 v93; // ett
  unsigned __int64 v94; // rdi
  __int64 v95; // rcx
  ULONG_PTR v96; // rax
  unsigned __int64 v97; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v99; // rax
  unsigned __int64 LockedVadEvent; // rax
  __int16 **v101; // r8
  struct _LIST_ENTRY *v102; // r9
  __int64 v103; // rcx
  __int64 v104; // rsi
  unsigned int SessionId; // eax
  __int64 SharedProtos; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rax
  char v109; // dl
  __int64 v110; // rcx
  char *PageTableLockBuffer; // rax
  struct _LIST_ENTRY *v112; // r8
  __int64 v113; // rcx
  struct _LIST_ENTRY *v114; // r8
  __int64 v115; // rcx
  unsigned __int64 v116; // rdx
  unsigned __int64 v117; // rbx
  unsigned __int64 v118; // rbx
  __int16 v119; // cx
  __int16 v120; // bx
  unsigned int v121; // edx
  int ProtectionFromPte; // edx
  __int64 LeafVa; // rax
  __int16 v125; // [rsp+38h] [rbp-C8h] BYREF
  int v126; // [rsp+3Ch] [rbp-C4h]
  __int16 v127; // [rsp+40h] [rbp-C0h]
  int v128; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v129; // [rsp+48h] [rbp-B8h]
  int v130; // [rsp+50h] [rbp-B0h]
  int v131; // [rsp+54h] [rbp-ACh]
  int v132; // [rsp+58h] [rbp-A8h]
  ULONG_PTR ProtoPteAddress; // [rsp+60h] [rbp-A0h]
  __int64 v134; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-90h]
  unsigned __int64 v136; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v137; // [rsp+80h] [rbp-80h]
  __int64 v138; // [rsp+88h] [rbp-78h] BYREF
  int v139; // [rsp+90h] [rbp-70h]
  int v140; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned __int64 v141; // [rsp+98h] [rbp-68h]
  unsigned __int64 v142; // [rsp+A0h] [rbp-60h]
  __int64 v143; // [rsp+A8h] [rbp-58h]
  int *v144; // [rsp+B0h] [rbp-50h]
  _QWORD *v145; // [rsp+B8h] [rbp-48h]
  __int64 *v146; // [rsp+C0h] [rbp-40h]
  _DWORD *v147; // [rsp+C8h] [rbp-38h]
  _WORD *v148; // [rsp+D0h] [rbp-30h]
  __int128 v149; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD *v150; // [rsp+E8h] [rbp-18h]
  __int64 v151; // [rsp+F0h] [rbp-10h]
  __int64 v152; // [rsp+F8h] [rbp-8h]
  __int64 v153; // [rsp+100h] [rbp+0h]
  _QWORD v154[22]; // [rsp+110h] [rbp+10h] BYREF

  v144 = a6;
  v147 = a7;
  v148 = a8;
  v146 = a9;
  BugCheckParameter2 = a4;
  v11 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v150 = a10;
  ProtoPteAddress = 0LL;
  v138 = 0LL;
  v12 = *((unsigned __int16 *)v11 + 87);
  v137 = v11;
  v13 = **(_WORD **)(qword_140C67048 + 8 * v12);
  *a10 = 1;
  v127 = v13;
  v125 = v13;
  v152 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v145 = (_QWORD *)v152;
  v142 = v14;
  v15 = v152;
  v139 = 0x2000;
  v132 = 0;
  v130 = 0;
  v136 = 0LL;
  v129 = 0LL;
  v16 = 0LL;
  v143 = 0LL;
  v17 = v14 << 25 >> 16;
  v153 = v17;
LABEL_2:
  v141 = v14;
  v131 = 0;
  v134 = 0LL;
  v18 = 0;
  v149 = 0LL;
  memset((char *)v154 + 4, 0, 0xACuLL);
  LODWORD(v154[0]) = 2145;
  v19 = (__int64)((v15 << 25) - v16) >> 16;
  v20 = v19;
  if ( v19 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v20 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v20 = (__int64)((v20 << 25) - v16) >> 16;
    }
    while ( v20 >= 0xFFFFF68000000000uLL );
    v11 = v137;
  }
  if ( v20 < 0xFFFF800000000000uLL || v20 >= qword_140C6A1D8 && v20 <= qword_140C66CF0 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v22 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v19, 0);
  if ( v22 )
  {
    v23 = v22 - 1;
    LODWORD(v149) = v22 - 1;
    v24 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v149 + 1) = v24;
  }
  else
  {
    LODWORD(v154[0]) |= 4u;
    v154[21] = &v149;
    v154[2] = 0LL;
    v154[3] = AnyMultiplexedVm;
    BYTE4(v154[0]) = BYTE4(v154[0]) & 0xE3 | 4;
    v154[20] = MiGetNextPageTableTail;
    HIBYTE(v154[0]) = a3;
    v154[4] = v19;
    v154[5] = v17;
    MiWalkPageTables((__m128i *)v154);
    v23 = v149;
    v24 = *((_QWORD *)&v149 + 1);
  }
  if ( v24 )
  {
    v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v136 = v25;
    if ( v23 )
    {
      v94 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v23 > 1 )
      {
        v95 = v23 - 1;
        do
        {
          v94 = ((v94 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v95;
        }
        while ( v95 );
      }
      v25 = ((v94 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v24 == v15 )
      {
        v96 = MI_READ_PTE_LOCK_FREE(v94);
        v97 = v96;
        if ( (v96 & 1) == 0 && qword_140C657C0 )
        {
          if ( (v96 & 0x10) != 0 )
            v97 = v96 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v97 = ~qword_140C657C0 & v96;
        }
        v116 = (v97 >> 12) & 0xFFFFFFFFFFLL;
        if ( v116 <= qword_140C65820
          && (v117 = *(_QWORD *)(48 * v116 - 0x21FFFFFFFFD8LL), (v117 & 0x40000000000000LL) != 0) )
        {
          v118 = v117 >> 43;
          v119 = 1023;
        }
        else
        {
          v119 = 2047;
          v118 = (unsigned __int64)*(unsigned int *)(qword_140C67A70 + 8 * (v116 >> 18)) >> 4;
        }
        v120 = v119 & v118;
        v121 = *(_DWORD *)(BugCheckParameter2 + 48);
        if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) == 0x30 || (v121 & 0xA00000) == 0xA00000 )
          ProtectionFromPte = MiGetProtectionFromPte(BugCheckParameter2, v96);
        else
          ProtectionFromPte = (v121 >> 7) & 0x1F;
        *v144 = ProtectionFromPte;
        MiUnlockPageTableInternal((__int64)v137, v25);
        *v147 = 0;
        *v148 = v120;
        LeafVa = MiGetLeafVa(v94 + 8);
        *v146 = LeafVa;
        return 4096LL;
      }
    }
    else if ( v15 == v24 )
    {
      v134 = MI_READ_PTE_LOCK_FREE(v15);
      v131 = 1;
      v24 = v15 + 8;
      v26 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v18 = v134 == 0;
      goto LABEL_11;
    }
    MiUnlockPageTableInternal((__int64)v11, v25);
    v136 = 0LL;
    v26 = (v24 & 0xFFFFFFFFFFFFF000uLL) - 8;
LABEL_11:
    v141 = v26;
    if ( v26 > v142 )
      v141 = v142;
    goto LABEL_13;
  }
  v24 = v142 + 8;
LABEL_13:
  for ( i = 0; ; i = 0 )
  {
    v28 = v134;
    v29 = 0;
    v126 = 0x2000;
    v128 = 0;
    if ( v134 )
    {
      if ( (unsigned __int64)&v134 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v134 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v134 & 1) != 0
        && ((v134 & 0x20) == 0 || (v134 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v99 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v134 >> 3) & 0x1FF));
          if ( (v99 & 0x20) != 0 )
            v28 = v134 | 0x20;
          if ( (v99 & 0x42) != 0 )
            v28 |= 0x42uLL;
        }
        else
        {
          v28 = v134;
        }
      }
      if ( (v28 & 0x3E0) == 0x200
        && (v28 & 1) == 0
        && ((v28 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v28)) )
      {
        goto LABEL_184;
      }
      v126 = 4096;
      PageProtection = MiGetPageProtection(BugCheckParameter2, v15, (__int64)&v125);
      v31 = ProtoPteAddress;
      v29 = PageProtection;
      if ( ProtoPteAddress )
      {
        v11 = v137;
        MiUnlockPageTableInternal((__int64)v137, v136);
        v136 = 0LL;
        MiUnlockWorkingSetShared((__int64)v11, a3);
        MiFaultInPagedPool(v31);
        MiLockWorkingSetShared(v11);
        v14 = v142;
        v16 = v143;
        v17 = v153;
        goto LABEL_2;
      }
      if ( !PageProtection )
        v126 = 0x2000;
      goto LABEL_20;
    }
    v50 = BugCheckParameter2;
    *v150 = 0;
    v51 = *(_DWORD *)(v50 + 48);
    if ( (*(_BYTE *)(v50 + 48) & 0x70) == 0x30 )
    {
      v125 = *(_WORD *)MiGetAweVadPartition(v50);
      goto LABEL_184;
    }
    if ( (v51 & 0x70) == 0x10 )
      goto LABEL_184;
    if ( (v51 & 0x200000) != 0 )
    {
      if ( *(int *)(v50 + 52) < 0 )
      {
        v29 = (v51 >> 7) & 0x1F;
        v126 = 4096;
        v128 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v50);
      }
      if ( (v51 & 0xA00000) == 0xA00000 )
      {
        LockedVadEvent = MiLocateLockedVadEvent(v50, 16);
        if ( LockedVadEvent )
        {
          if ( *(_QWORD *)(LockedVadEvent + 24) && PsReferencePartitionSafe(*(_QWORD *)(LockedVadEvent + 24)) )
          {
            v125 = **v101;
            PsDereferencePartition((__int64)v101);
          }
        }
      }
      goto LABEL_20;
    }
    v52 = *(_QWORD *)(v50 + 72);
    v53 = a1 >> 12;
    v151 = v53;
    v54 = **(_WORD **)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)v52 + 60LL) & 0x3FF));
    v125 = v54;
    ProtoPteAddress = MiGetProtoPteAddress(v50, v53, 4LL, &v138);
    v55 = (_QWORD *)ProtoPteAddress;
    if ( ProtoPteAddress )
    {
      v56 = v138;
      if ( v18 )
      {
        v66 = *(_QWORD *)(v138 + 8);
        v67 = ((__int64)(v141 - v15) >> 3) + 1;
        if ( v67 > 32 )
          v67 = 32LL;
        v68 = v66 + 8 * (*(unsigned int *)(v138 + 44) - (unsigned __int64)(*(_DWORD *)(v138 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v138 + 34) & 2) != 0 || ProtoPteAddress < v66 || ProtoPteAddress >= v68 )
        {
          v67 = 0LL;
        }
        else if ( ProtoPteAddress + 8 * v67 > v68 )
        {
          v67 = (__int64)(v68 - ProtoPteAddress) >> 3;
        }
        v69 = v15 + 8 * v67 - 8;
        v24 = v15 + 8;
        if ( v15 + 8 <= v69 )
        {
          do
          {
            v76 = *(_QWORD *)v24;
            if ( v24 >= 0xFFFFF6FB7DBED000uLL
              && v24 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v76 & 1) != 0
              && ((v76 & 0x20) == 0 || (v76 & 0x42) == 0) )
            {
              v102 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v102 )
              {
                v103 = *((_QWORD *)&v102->Flink + ((v24 >> 3) & 0x1FF));
                if ( (v103 & 0x20) != 0 )
                  v76 |= 0x20uLL;
                if ( (v103 & 0x42) != 0 )
                  v76 |= 0x42uLL;
              }
            }
            if ( v76 )
              break;
            v24 += 8LL;
          }
          while ( v24 <= v69 );
          v55 = (_QWORD *)ProtoPteAddress;
          v56 = v138;
          v53 = v151;
          v15 = (unsigned __int64)v145;
        }
        if ( v131 )
          goto LABEL_58;
      }
      else
      {
        if ( v131 )
        {
LABEL_58:
          v57 = BugCheckParameter2;
          goto LABEL_59;
        }
        v83 = *(_QWORD *)(v138 + 8);
        v84 = (__int64)(v24 - v15) >> 3;
        v85 = v83 + 8 * (*(unsigned int *)(v138 + 44) - (unsigned __int64)(*(_DWORD *)(v138 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v138 + 34) & 2) != 0 || ProtoPteAddress < v83 || ProtoPteAddress >= v85 )
        {
          v84 = 1LL;
        }
        else if ( ProtoPteAddress + 8 * v84 > v85 )
        {
          v84 = (__int64)(v85 - ProtoPteAddress) >> 3;
        }
        v24 = v15 + 8 * v84;
      }
      v57 = BugCheckParameter2;
      if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) )
      {
        v86 = MiSkipFractionalPagefileRegion((unsigned __int64)v55, v56, (__int64)(v24 - v15) >> 3);
        if ( (_QWORD *)v86 != v55 )
        {
          v24 = v15 + 8 * ((__int64)(v86 - (_QWORD)v55) >> 3);
          v55 = 0LL;
          ProtoPteAddress = 0LL;
        }
      }
LABEL_59:
      v58 = *(_QWORD **)(v57 + 120);
      if ( (__int64)v58 < 0 )
      {
        v59 = 1;
        v60 = (unsigned __int64)(*v58 - 1LL) >> 12;
      }
      else
      {
        v59 = 0;
        v60 = -1LL;
      }
      if ( !v55 )
        goto LABEL_184;
      v61 = *(_DWORD *)(v57 + 48);
      if ( (v61 & 0x70) == 0x20 )
      {
        v62 = *(_QWORD *)(v57 + 72);
        for ( j = 0LL; v62; v62 = *(_QWORD *)(v62 + 16) )
        {
          if ( (*(_BYTE *)(v62 + 34) & 2) != 0
            && (v104 = *(_QWORD *)v62, (*(_DWORD *)(*(_QWORD *)v62 + 56LL) & 0x8000000) != 0) )
          {
            SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
            SharedProtos = MiGetSharedProtos(v104, SessionId, v62);
            v55 = (_QWORD *)ProtoPteAddress;
            j = *(_QWORD *)(SharedProtos + 72);
          }
          else
          {
            j = *(_QWORD *)(v62 + 8);
          }
          if ( (unsigned __int64)v55 >= j && (unsigned __int64)v55 < j + 8LL * *(unsigned int *)(v62 + 44) )
            break;
        }
        if ( (__int64)((__int64)v55 - j) >> 3 >= (unsigned __int64)(*(_DWORD *)(v62 + 44)
                                                                  - (*(_DWORD *)(v62 + 52) & 0x3FFFFFFFu)) )
        {
          i = 0;
          v29 = 0;
        }
        else
        {
          v29 = (*(_DWORD *)(v57 + 48) >> 7) & 0x1F;
          if ( v29 == 7 )
            v29 = (*(unsigned __int16 *)(v62 + 32) >> 1) & 0x1F;
          i = 0;
          if ( v29 )
            v126 = 4096;
        }
      }
      else
      {
        if ( *(_QWORD *)(*(_QWORD *)v56 + 64LL) || (*(_DWORD *)(*(_QWORD *)v56 + 56LL) & 0x2000) != 0 )
        {
          v77 = (__int64)(v24 - v15) >> 3;
          v78 = (__int64)(*(_QWORD *)(v56 + 8)
                        + 8 * (*(unsigned int *)(v56 + 44) - (unsigned __int64)(*(_DWORD *)(v56 + 52) & 0x3FFFFFFF))
                        - (_QWORD)v55) >> 3;
          v129 = v78;
          if ( v78 > v77 )
          {
            v78 = v77;
            v129 = v77;
          }
          if ( v59 )
          {
            v90 = *(unsigned int *)(v57 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v57 + 32) << 32);
            if ( v53 - v90 <= v60 )
            {
              if ( v78 > v90 - v53 + v60 + 1 )
              {
                v78 = v90 - v53 + v60 + 1;
                v129 = v78;
              }
              v24 = v15 + 8 * v78;
LABEL_124:
              i = 0;
              v29 = (v61 >> 7) & 0x1F;
              v126 = 4096;
              goto LABEL_20;
            }
          }
          v24 = v15 + 8 * v78;
          if ( !v59 )
            goto LABEL_124;
          goto LABEL_184;
        }
        v70 = (__int64)v137;
        if ( v136 )
        {
          MiUnlockPageTableInternal((__int64)v137, v136);
          v136 = 0LL;
        }
        MiUnlockWorkingSetShared(v70, a3);
        v71 = (__int64)(v24 - v15) >> 3;
        v72 = (__int64)(*(_QWORD *)(v56 + 8)
                      + 8 * (*(unsigned int *)(v56 + 44) - (unsigned __int64)(*(_DWORD *)(v56 + 52) & 0x3FFFFFFF))
                      - (_QWORD)v55) >> 3;
        if ( v72 > v71 )
          v72 = v71;
        if ( *v55 )
        {
          v73 = 4096;
          v126 = 4096;
          v29 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
        }
        else
        {
          v73 = v126;
        }
        if ( !a5 || (LOBYTE(v89) = MiQueryStateMatches(a5, v73, v29, 0, v125), v89) )
        {
          v74 = v129;
          if ( v72 )
          {
            while ( 1 )
            {
LABEL_107:
              if ( *v55 )
              {
                if ( v73 != 4096 )
                  break;
              }
              else if ( v73 == 4096 )
              {
                break;
              }
              ++v74;
              ++v55;
              v129 = v74;
              ProtoPteAddress = (ULONG_PTR)v55;
              if ( !--v72 )
                break;
              v79 = (__int16)v55;
              v80 = (unsigned __int64)v55;
              while ( (v79 & 0xFFF) == 0 )
              {
                v81 = MI_READ_PTE_LOCK_FREE(((v80 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                if ( (v81 & 1) != 0 || (v81 & 0x3E0) != 0 )
                {
                  if ( v73 == 4096 )
                    goto LABEL_107;
                  goto LABEL_110;
                }
                if ( v73 == 4096 )
                  goto LABEL_110;
                if ( v72 <= 0x200 )
                {
                  v74 += v72;
                  v129 = v74;
                  ProtoPteAddress = (ULONG_PTR)&v55[v72];
                  goto LABEL_110;
                }
                v55 += 512;
                v74 += 512LL;
                v129 = v74;
                v79 = (__int16)v55;
                ProtoPteAddress = (ULONG_PTR)v55;
                v72 -= 512LL;
                if ( !v72 )
                  goto LABEL_110;
                v80 = (unsigned __int64)v55;
              }
            }
          }
LABEL_110:
          i = 0;
        }
        else
        {
          v74 = 0LL;
          i = 1;
          v129 = 0LL;
        }
        v24 = v15 + 8 * v74;
        MiLockWorkingSetShared(v70);
      }
      goto LABEL_20;
    }
    if ( a5 )
    {
      LOBYTE(v87) = MiQueryStateMatches(a5, 0x2000, 0, 0, v54);
      if ( !v87 )
      {
        i = 1;
        v24 = v15;
        goto LABEL_20;
      }
    }
    if ( !(unsigned int)MiVadPureReserve(BugCheckParameter2) || !v138 || *(_QWORD *)(v138 + 8) )
    {
      v24 = v15 + 8;
LABEL_184:
      i = 0;
      goto LABEL_20;
    }
    v24 = MiSkipEntirePagefileRegions(v88, v53, v15, v24, v138);
    i = 0;
    if ( v24 == v15 )
      v24 = v15 + 8;
LABEL_20:
    v32 = v126;
    if ( v15 == v152 )
    {
      v139 = v126;
      v132 = v29;
      v130 = v128;
      v127 = v125;
      if ( a5 )
      {
        LOBYTE(v75) = MiQueryStateMatches(a5, v126, v29, v128, v125);
        if ( !v75 )
          goto LABEL_115;
      }
      v33 = v129;
LABEL_76:
      if ( i || v33 )
        goto LABEL_78;
      goto LABEL_46;
    }
    if ( v126 != v139 || v29 != v132 || v125 != v127 || v128 != v130 )
    {
      v32 = v139;
      v125 = v127;
      v29 = v132;
      v128 = v130;
LABEL_115:
      v24 = v15;
      goto LABEL_78;
    }
    v33 = v129;
    if ( v129 )
      goto LABEL_76;
    if ( i )
      goto LABEL_78;
    if ( (__int64)((v15 - v152) & 0xFFFFFFFFFFFFFFF8uLL) < 256 )
      goto LABEL_46;
    v34 = (__int64)v137;
    if ( v136 )
    {
      v35 = *((_BYTE *)v137 + 184);
      v140 = 0;
      v36 = v35 & 7;
      if ( v136 == 0xFFFFF6FB7DBEDF68uLL )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v36 )
        {
          v109 = v35 & 7;
          if ( v109 == 7 )
          {
            SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[1];
          }
          else if ( v109 == 5 )
          {
            SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
          }
          else
          {
            SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
          }
        }
        else
        {
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[2];
        }
        v39 = SelfmapLockHandle->LockQueue.Next == 0LL;
        goto LABEL_35;
      }
      if ( !v36 )
      {
        if ( v136 >= 0xFFFFF6FB7DBED000uLL
          && v136 <= 0xFFFFF6FB7DBEDFFFuLL
          && (v110 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 624)) != 0 )
        {
          v38 = (*(_DWORD *)(v110 + 4LL * (((unsigned int)v136 >> 3) & 0x1FF)) >> 30) & 1;
        }
        else
        {
LABEL_32:
          v37 = *(_QWORD *)v136;
          if ( v136 >= 0xFFFFF6FB7DBED000uLL
            && v136 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x600000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v37 & 1) != 0
            && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
          {
            v112 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v112 )
            {
              v113 = *((_QWORD *)&v112->Flink + ((v136 >> 3) & 0x1FF));
              if ( (v113 & 0x20) != 0 )
                v37 |= 0x20uLL;
              if ( (v113 & 0x42) != 0 )
                v37 |= 0x42uLL;
            }
          }
          v38 = (v37 >> 60) & 2;
        }
        v39 = v38 == 0;
LABEL_35:
        if ( !v39 )
          goto LABEL_139;
        goto LABEL_36;
      }
      if ( v136 < 0xFFFFF6FB7DBED000uLL || v136 > 0xFFFFF6FB7DBEDFFFuLL )
        goto LABEL_32;
      PageTableLockBuffer = MiGetPageTableLockBuffer((__int64)v137, v136, &v140);
      if ( ((*(_DWORD *)PageTableLockBuffer >> v140) & 2) != 0 )
        goto LABEL_139;
    }
LABEL_36:
    if ( (*(_BYTE *)(v34 + 184) & 7) == 2 )
      v40 = &unk_140C69E00;
    else
      v40 = (_DWORD *)(v34 + 192);
    if ( (*v40 & 0x40000000) != 0 )
      goto LABEL_139;
    if ( a3 < 2u )
      break;
LABEL_46:
    v48 = (_QWORD *)(v15 + 8);
    v15 = (unsigned __int64)v48;
    v145 = v48;
    if ( v24 > v141 || (_QWORD *)v24 != v48 )
      goto LABEL_78;
    if ( v131 )
    {
      v49 = *v48;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v49 & 1) != 0
        && ((v49 & 0x20) == 0 || (v49 & 0x42) == 0) )
      {
        v114 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v114 )
        {
          v115 = *((_QWORD *)&v114->Flink + ((v15 >> 3) & 0x1FF));
          if ( (v115 & 0x20) != 0 )
            v49 |= 0x20uLL;
          if ( (v115 & 0x42) != 0 )
            v49 |= 0x42uLL;
        }
      }
      v134 = v49;
    }
    v24 += 8LL;
    a1 = (__int64)((v15 << 25) - v143) >> 16;
    v18 = 0;
  }
  v41 = KeGetCurrentPrcb();
  v42 = 0;
  v43 = 0LL;
  DpcRequestSummary = v41->DpcRequestSummary;
  DpcWatchdogCount = v41->DpcWatchdogCount;
  DpcTimeCount = v41->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v42 = 1;
    if ( DpcTimeCount <= 7 )
      goto LABEL_45;
    if ( v41->QuantumEnd )
    {
      v82 = 1;
      goto LABEL_136;
    }
  }
  else if ( v41->NestingLevel )
  {
    v43 = 1LL;
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_46;
    if ( v41->QuantumEnd )
    {
      v82 = 7;
      goto LABEL_136;
    }
  }
  else
  {
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v82 = 2;
      goto LABEL_136;
    }
    if ( v41->QuantumEnd )
    {
      v82 = 3;
      goto LABEL_136;
    }
    NextThread = v41->NextThread;
    if ( NextThread && NextThread != v41->CurrentThread )
    {
      v82 = 4;
      goto LABEL_136;
    }
LABEL_45:
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_46;
    if ( !v42 )
    {
LABEL_174:
      _disable();
      v41->DpcWatchdogCount = 0;
      v41->DpcTimeCount = 0;
      v43 = (__int64)KeGetCurrentPrcb();
      v91 = *(signed __int32 **)(v43 + 35000);
      if ( v91 )
      {
        _m_prefetchw(v91);
        v92 = *v91;
        do
        {
          v93 = v92;
          v92 = _InterlockedCompareExchange(v91, v92 & 0xFFDFFFFF, v92);
        }
        while ( v93 != v92 );
        if ( (v92 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
      _enable();
      v82 = 0;
      goto LABEL_136;
    }
  }
  if ( (DpcRequestSummary & 0x1E) != 0 )
  {
    v82 = 5;
  }
  else
  {
    if ( v41->CurrentThread == v41->IdleThread )
      goto LABEL_174;
    v82 = 6;
  }
LABEL_136:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v82, DpcWatchdogCount, DpcTimeCount, v43);
  if ( !v82 )
    goto LABEL_46;
LABEL_139:
  v24 = v15 + 8;
LABEL_78:
  if ( v136 )
    MiUnlockPageTableInternal((__int64)v137, v136);
  result = v32;
  v65 = v147;
  *v146 = (__int64)((v24 << 25) - v143) >> 16;
  *v144 = v29;
  *v65 = v128;
  *v148 = v125;
  return result;
}
