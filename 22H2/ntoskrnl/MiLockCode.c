/*
 * XREFs of MiLockCode @ 0x1402A3C40
 * Callers:
 *     MiLockImageSection @ 0x14063C7FC (MiLockImageSection.c)
 *     MmResetDriverPaging @ 0x1406FE2F0 (MmResetDriverPaging.c)
 *     MiHandleDriverNonPagedSections @ 0x14075C100 (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x14075E690 (MiDisablePagingOfDriver.c)
 *     MmLockPreChargedPagedPool @ 0x140777640 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiIsPfnFileOnly @ 0x140218D20 (MiIsPfnFileOnly.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiWriteValidPteVolatile @ 0x140240CE0 (MiWriteValidPteVolatile.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiIsPfnFromSlabAllocation @ 0x140283570 (MiIsPfnFromSlabAllocation.c)
 *     MiGetSessionVm @ 0x14029281C (MiGetSessionVm.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14029AA98 (MiAddLockedPageCharge.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiAreChargesNeededToLockPage @ 0x1402A3AC0 (MiAreChargesNeededToLockPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiCapturePageFileInfoInline @ 0x1402FB540 (MiCapturePageFileInfoInline.c)
 *     MiTradeActivePage @ 0x14030DD40 (MiTradeActivePage.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiRemoveSystemImagePage @ 0x14031AD48 (MiRemoveSystemImagePage.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     MiMakeDriverPagesPrivate @ 0x140358454 (MiMakeDriverPagesPrivate.c)
 *     MiUnlockCodePage @ 0x1403A0950 (MiUnlockCodePage.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BE38 (MiCopyOnWriteCheckConditions.c)
 *     MiPrefetchDriverPages @ 0x140668420 (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x1406FF348 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // rbx
  char v8; // si
  int v9; // r13d
  int SystemRegionType; // eax
  char *AnyMultiplexedVm; // r14
  unsigned __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  __int64 Flink; // rdx
  unsigned __int8 v17; // di
  unsigned __int64 v18; // r8
  __int64 v19; // r10
  unsigned __int64 v20; // r11
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // r13
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  unsigned __int64 v29; // rsi
  struct _LIST_ENTRY *v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rdi
  int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // r8
  _DWORD *v37; // r9
  unsigned __int64 v38; // rdx
  unsigned __int64 Process; // rcx
  unsigned __int64 v40; // r11
  char v41; // r10
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  _DWORD *v45; // r9
  __int64 v46; // rbx
  __int64 v47; // r9
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  char v52; // r15
  __int64 v53; // rdx
  char WsleContents; // r15
  __int64 v55; // r9
  __int64 v56; // r14
  unsigned __int64 v57; // r8
  __int64 v58; // rdx
  unsigned __int64 v59; // rsi
  __int64 v60; // r9
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // r8
  _DWORD *v64; // r9
  __int64 v65; // r9
  __int64 v66; // rcx
  char v67; // al
  struct _LIST_ENTRY *v68; // r8
  __int64 v69; // rax
  __int64 v70; // r8
  int v72; // [rsp+28h] [rbp-D8h]
  char v73; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v74; // [rsp+31h] [rbp-CFh]
  __int64 DriverPage; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v77; // [rsp+40h] [rbp-C0h]
  bool v78; // [rsp+48h] [rbp-B8h]
  int v79; // [rsp+4Ch] [rbp-B4h]
  char *SessionVm; // [rsp+50h] [rbp-B0h]
  int v81; // [rsp+58h] [rbp-A8h] BYREF
  int v82; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v83; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v84; // [rsp+68h] [rbp-98h]
  unsigned __int64 v85; // [rsp+70h] [rbp-90h]
  __int64 v86; // [rsp+78h] [rbp-88h]
  __int64 v87; // [rsp+80h] [rbp-80h]
  __int64 v88; // [rsp+88h] [rbp-78h]
  unsigned __int64 v89; // [rsp+90h] [rbp-70h]
  int v90; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v91; // [rsp+A4h] [rbp-5Ch]
  __int16 v92; // [rsp+A6h] [rbp-5Ah]
  __int64 v93; // [rsp+A8h] [rbp-58h]
  __int64 v94; // [rsp+B0h] [rbp-50h]
  __int64 v95; // [rsp+B8h] [rbp-48h]
  __int128 v96; // [rsp+C0h] [rbp-40h]
  __int128 v97; // [rsp+D0h] [rbp-30h]
  __int128 v98; // [rsp+E0h] [rbp-20h]
  __int128 v99; // [rsp+F0h] [rbp-10h]
  __int128 v100; // [rsp+100h] [rbp+0h]
  __int128 v101; // [rsp+110h] [rbp+10h]
  __int128 v102; // [rsp+120h] [rbp+20h]
  __int128 v103; // [rsp+130h] [rbp+30h]
  __int128 v104; // [rsp+140h] [rbp+40h]
  __int64 v105; // [rsp+150h] [rbp+50h]

  v85 = a3;
  v92 = 0;
  v105 = 0LL;
  v5 = a2;
  v89 = a2;
  v86 = a1;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v88 = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 0LL;
  v8 = 1;
  v9 = 0;
  v73 = 1;
  v79 = 0;
  SystemRegionType = MiGetSystemRegionType(v7);
  if ( SystemRegionType == 1 )
  {
    v84 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    v9 = 2;
    SessionVm = (char *)MiGetSessionVm();
    v79 = 2;
    AnyMultiplexedVm = SessionVm;
  }
  else
  {
    v84 = 0LL;
    if ( SystemRegionType == 6 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      SessionVm = AnyMultiplexedVm;
    }
    else
    {
      AnyMultiplexedVm = (char *)&unk_140C4F140;
      SessionVm = (char *)&unk_140C4F140;
    }
  }
  v78 = 0;
  if ( a1 && v9 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    v78 = (dword_140CFB174 & 1) != 0;
  MiPrefetchDriverPages(v5, a3);
  DriverPage = -1LL;
  v93 = 20LL;
  v12 = 0LL;
  v90 = v9;
  v91 = 0;
  v94 = 0LL;
  v95 = 0LL;
  v77 = 0LL;
  v17 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v13, v14, v15);
  v74 = v17;
  do
  {
    v18 = 0xFFFFFA8000000000uLL;
    v19 = 0x1000000000LL;
    v20 = 0xFFFFF6FB7DBED7F8uLL;
    v21 = 0xFFFFFFFFFLL;
    if ( v12 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_16;
      MiFlushTbList(&v90);
      MiUnlockPageTableInternal(AnyMultiplexedVm, v12);
    }
    v12 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v77 = v12;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v12, 0LL);
    v20 = 0xFFFFF6FB7DBED7F8uLL;
    v21 = 0xFFFFFFFFFLL;
    v19 = 0x1000000000LL;
    v18 = 0xFFFFFA8000000000uLL;
LABEL_16:
    v22 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, Flink, 0xFFFFFA8000000000uLL, 0xFFFFFFFFFLL)
      && (v22 & 1) != 0
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v23 = *(_QWORD *)(Flink + 8 * ((v5 >> 3) & 0x1FF));
        Flink = v22 | 0x20;
        if ( (v23 & 0x20) == 0 )
          Flink = v22;
        v22 = Flink;
        if ( (v23 & 0x42) != 0 )
          v22 = Flink | 0x42;
      }
    }
    v83 = v22;
    v24 = (__int64)((v5 << 25) - v88) >> 16;
    if ( (v22 & 1) == 0 )
    {
      MiFlushTbList(&v90);
      MiUnlockPageTableInternal(AnyMultiplexedVm, v12);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v17);
      v25 = MmAccessFault(0LL, v24, 0, 0LL);
      if ( v25 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, v24, v22, v25);
      v12 = 0LL;
      v77 = 0LL;
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v26, v27, v28);
      goto LABEL_132;
    }
    if ( (unsigned __int64)&v83 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)&v83 > v20 )
    {
      v29 = v22;
    }
    else
    {
      v29 = v22;
      if ( (unsigned int)MiPteHasShadow(&v83, Flink, v18, v21) && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        v30 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v30 )
        {
          v29 = v22 | 0x20;
          v31 = *((_QWORD *)&v30->Flink + (((unsigned __int64)&v83 >> 3) & 0x1FF));
          if ( (v31 & 0x20) == 0 )
            v29 = v22;
          if ( (v31 & 0x42) != 0 )
            v29 |= 0x42uLL;
        }
      }
    }
    v32 = v21 & (v29 >> 12);
    v33 = v18 + 48 * v32;
    if ( (*(_QWORD *)(v33 + 40) & v19) == 0 && *(__int64 *)(v33 + 8) > 0 )
    {
      MiFlushTbList(&v90);
      v34 = MiCopyOnWrite(v24, (ULONG_PTR *)v5, -1LL, 0);
      if ( v34 >= 0 )
      {
        v17 = v74;
      }
      else
      {
        MiUnlockPageTableInternal(AnyMultiplexedVm, v12);
        v17 = v74;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v74);
        MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v34);
        v12 = 0LL;
        v77 = 0LL;
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v35, v36, v37);
      }
LABEL_131:
      v8 = v73;
LABEL_132:
      v61 = DriverPage;
      continue;
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v18 + 48 * v32) && (!v84 || v78) )
    {
      v41 = a4;
      if ( (a4 & 1) != 0 )
      {
        MiFlushTbList(&v90);
        MiUnlockPageTableInternal(AnyMultiplexedVm, v12);
        v17 = v74;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v74);
        v42 = 0LL;
LABEL_50:
        MiMakeDriverPagesPrivate(v86, v5, v85, v42);
        v12 = 0LL;
        v77 = 0LL;
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v43, v44, v45);
        goto LABEL_131;
      }
    }
    else
    {
      v41 = a4;
    }
    if ( (v22 & 0x800) == 0 && (v22 & 0x200) != 0 )
    {
      MiFlushTbList(&v90);
      MiUnlockPageTableInternal(AnyMultiplexedVm, v12);
      v17 = v74;
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v74);
      v42 = 1LL;
      goto LABEL_50;
    }
    v46 = 0LL;
    v47 = *(_QWORD *)(qword_140C4E648 + 8 * ((v38 >> 39) & 0x3FF));
    v87 = v47;
    v48 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v49 = *(_QWORD *)v48;
    if ( v48 >= 0xFFFFF6FB7DBED000uLL
      && v48 <= v40
      && (unsigned int)MiPteHasShadow(Process, v49, v48, v47)
      && (v49 & 1) != 0
      && ((v49 & 0x20) == 0 || (v49 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      v50 = *(_QWORD *)(Process + 1928);
      if ( v50 )
      {
        v51 = *(_QWORD *)(v50 + 8 * ((v48 >> 3) & 0x1FF));
        v48 = v49 | 0x20;
        Process = (unsigned __int8)v51;
        LOBYTE(Process) = v51 & 0x20;
        if ( (v51 & 0x20) == 0 )
          v48 = v49;
        v49 = v48;
        if ( (v51 & 0x42) != 0 )
          v49 = v48 | 0x42;
      }
    }
    v52 = (v49 >> 60) & 7;
    v53 = HIBYTE(v49);
    LOBYTE(v53) = v53 & 0xF;
    WsleContents = v53 | (16 * v52);
    if ( DriverPage != -1 )
    {
      Process = 48 * DriverPage - 0x58000000000LL;
      v53 = (*(_QWORD *)(Process + 40) >> 39) & 0x3FFLL;
      if ( v47 == *(_QWORD *)(qword_140C4E648 + 8 * v53) )
        goto LABEL_71;
      MiReleaseFreshPage(Process);
      v41 = a4;
      DriverPage = -1LL;
    }
    if ( (v41 & 2) != 0 )
    {
      if ( (WsleContents & 0xF) == 9 )
        goto LABEL_71;
    }
    else if ( *(_WORD *)(v33 + 32) != 1 )
    {
      goto LABEL_71;
    }
    Process = qword_140C4CCF0 & 0x1FF;
    if ( (v32 & 0x1FF) >= Process || MiIsPfnFromSlabAllocation(v33) )
    {
LABEL_71:
      v81 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v81, v53, v48, v47);
          while ( *(__int64 *)(v33 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) );
        v41 = a4;
      }
      if ( DriverPage != -1 && (v41 & 2) != 0 )
      {
        WsleContents = MiGetWsleContents(Process, v24);
        if ( (WsleContents & 0xF) != 9
          && !MiIsPfnFileOnly(v33)
          && !MiIsPfnFromSlabAllocation(v33)
          && (v32 & 0x1FF) < ((unsigned __int16)v55 & 0x1FFu) )
        {
          v56 = 48 * v55 - 0x58000000000LL;
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned int)MI_PFN_IS_PROTO(v33) && (*(_DWORD *)(v33 + 16) & 0x400LL) != 0 )
          {
            v59 = MiLockProtoPoolPage(v57, 0LL);
            if ( v59 )
              goto LABEL_90;
          }
          else
          {
            v59 = 1LL;
LABEL_90:
            if ( (unsigned int)MiTradeActivePage(v33, v56, v24, 0, 2, v72) == 1 )
            {
              *(_QWORD *)(v33 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList(v33 + 16);
              MiReleaseFreshPage(v33);
              v33 = v56;
              DriverPage = -1LL;
            }
          }
          if ( v59 > 1 )
            MiUnlockProtoPoolPage(v59, 0x11u);
          v82 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v82, v58, v48, v60);
            while ( *(__int64 *)(v33 + 24) < 0 );
          }
          AnyMultiplexedVm = SessionVm;
        }
      }
      v65 = a4;
      if ( (a4 & 2) != 0 )
      {
        if ( (WsleContents & 0xF) != 9 )
          MiRemoveSystemImagePage(AnyMultiplexedVm, v5, v33);
        goto LABEL_107;
      }
      if ( v79 == 2 )
      {
        if ( (unsigned int)MiAddLockedPageCharge(v33, 0) )
          goto LABEL_107;
        v8 = 0;
        v73 = 0;
      }
      else
      {
        if ( (unsigned int)MiAreChargesNeededToLockPage(v33) )
          *(_BYTE *)(v33 + 35) |= 0x20u;
        ++*(_WORD *)(v33 + 32);
LABEL_107:
        v8 = v73;
      }
      v66 = v33 + 16;
      if ( (*(_DWORD *)(v33 + 16) & 0x400LL) == 0 )
      {
        v67 = *(_BYTE *)(v33 + 34);
        if ( (v67 & 0x10) == 0 )
        {
          if ( (v67 & 8) == 0 )
          {
            v46 = MiCapturePageFileInfoInline(v66, 1LL, 0LL);
            v67 = *(_BYTE *)(v33 + 34);
          }
          *(_BYTE *)(v33 + 34) = v67 | 0x10;
        }
      }
      Flink = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL
        && v5 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v66, Flink, v48, v65)
        && (Flink & 1) != 0
        && ((Flink & 0x20) == 0 || (Flink & 0x42) == 0) )
      {
        v68 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v68 )
        {
          v69 = *((_QWORD *)&v68->Flink + ((v5 >> 3) & 0x1FF));
          v70 = Flink | 0x20;
          if ( (v69 & 0x20) == 0 )
            v70 = Flink;
          Flink = v70;
          if ( (v69 & 0x42) != 0 )
            Flink = v70 | 0x42;
        }
      }
      if ( (Flink & 0x800) != 0 && (Flink & 0x42) == 0 )
      {
        MiWriteValidPteVolatile((volatile signed __int64 *)v5, 2, 0);
        MiInsertTbFlushEntry(&v90, v24, 1LL, 0LL);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v46 )
        MiReleasePageFileInfo(v87, v46, 1LL);
      v12 = v77;
      v5 += 8LL;
      v17 = v74;
      goto LABEL_132;
    }
    MiFlushTbList(&v90);
    MiUnlockPageTableInternal(AnyMultiplexedVm, v77);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v74);
    v12 = 0LL;
    DriverPage = MiAllocateDriverPage(v87, 0LL, 0LL);
    v77 = 0LL;
    v61 = DriverPage;
    v8 = v73;
    v17 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v62, v63, v64);
    v74 = v17;
  }
  while ( v5 <= v85 && v8 == 1 );
  if ( v17 != 17 )
  {
    MiFlushTbList(&v90);
    if ( v12 )
      MiUnlockPageTableInternal(AnyMultiplexedVm, v12);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v17);
  }
  if ( v61 != -1 )
    MiReleaseFreshPage(48 * v61 - 0x58000000000LL);
  if ( !v8 )
  {
    MiUnlockCodePage(v89, v5 - 16, 0LL);
    return 3221225626LL;
  }
  return 0LL;
}
