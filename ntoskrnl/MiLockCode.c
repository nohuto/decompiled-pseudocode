/*
 * XREFs of MiLockCode @ 0x14032C9C0
 * Callers:
 *     MmLockRegistryRecoverySections @ 0x140618448 (MmLockRegistryRecoverySections.c)
 *     MiLockImageSection @ 0x1406A7B00 (MiLockImageSection.c)
 *     MiHandleDriverNonPagedSections @ 0x140726FEC (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x140729FA4 (MiDisablePagingOfDriver.c)
 *     MmResetDriverPaging @ 0x14072A050 (MmResetDriverPaging.c)
 *     MmLockPreChargedPagedPool @ 0x140A2DC90 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiTradeActivePage @ 0x140211BC0 (MiTradeActivePage.c)
 *     MiGetWsleContents @ 0x140229790 (MiGetWsleContents.c)
 *     MiWriteValidPteVolatile @ 0x140229800 (MiWriteValidPteVolatile.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiUnlockCodePage @ 0x1402A441C (MiUnlockCodePage.c)
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiCapturePageFileInfoInline @ 0x1402DE2D4 (MiCapturePageFileInfoInline.c)
 *     MiRemoveSystemImagePage @ 0x1402E3EA0 (MiRemoveSystemImagePage.c)
 *     MiBetterDriverPageNeeded @ 0x1402E93C8 (MiBetterDriverPageNeeded.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MmIsExecutivePagingDisabled @ 0x14032D3D0 (MmIsExecutivePagingDisabled.c)
 *     MiGetPagePrivilege @ 0x14032D3F0 (MiGetPagePrivilege.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiCopyOnWriteCheckConditions @ 0x140664840 (MiCopyOnWriteCheckConditions.c)
 *     MiAllocateDriverPage @ 0x1407290FC (MiAllocateDriverPage.c)
 *     MiPrefetchDriverPages @ 0x1407C81C0 (MiPrefetchDriverPages.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // r15
  __int64 v7; // r12
  char v8; // di
  int v9; // ebp
  int SystemRegionType; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *AnyMultiplexedVm; // r13
  __int64 v16; // r9
  __int64 v17; // rsi
  unsigned __int64 v18; // r14
  __int64 v19; // rbx
  unsigned __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // r13
  __int64 v24; // rdi
  __int64 v25; // r8
  bool v26; // si
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rbx
  __int64 v30; // r8
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rcx
  char WsleContents; // r12
  unsigned __int64 v34; // rcx
  int v35; // esi
  unsigned __int64 v36; // rax
  bool v37; // zf
  __int64 v38; // r14
  unsigned __int64 v39; // r13
  __int64 v40; // rax
  __int16 v41; // cx
  __int64 v42; // rax
  int v43; // edx
  unsigned __int8 v44; // dl
  ULONG_PTR v45; // rax
  unsigned __int64 v47; // r8
  char v48; // r9
  int v49; // eax
  unsigned __int8 v50; // al
  __int64 v51; // rcx
  unsigned __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // r8
  _KPROCESS *Process; // rcx
  int IsExecutivePagingDisabled; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // ebx
  struct _LIST_ENTRY *v61; // r8
  __int64 v62; // rax
  __int64 v63; // r8
  struct _LIST_ENTRY *v64; // rcx
  __int64 v65; // rcx
  struct _LIST_ENTRY *v66; // r8
  __int64 v67; // rcx
  char v68; // [rsp+30h] [rbp-188h]
  unsigned __int8 v69; // [rsp+31h] [rbp-187h]
  __int64 DriverPage; // [rsp+38h] [rbp-180h]
  __int64 v71; // [rsp+48h] [rbp-170h]
  char *SessionVm; // [rsp+58h] [rbp-160h]
  unsigned __int64 v74; // [rsp+60h] [rbp-158h]
  int v75; // [rsp+68h] [rbp-150h]
  char v76; // [rsp+6Ch] [rbp-14Ch]
  int v77; // [rsp+70h] [rbp-148h]
  int v78; // [rsp+74h] [rbp-144h] BYREF
  int v79; // [rsp+78h] [rbp-140h] BYREF
  unsigned __int64 v80; // [rsp+80h] [rbp-138h]
  unsigned __int64 v81; // [rsp+88h] [rbp-130h]
  __int64 v82; // [rsp+90h] [rbp-128h]
  __int64 v83; // [rsp+98h] [rbp-120h]
  __int64 v84; // [rsp+A0h] [rbp-118h] BYREF
  unsigned __int64 v85; // [rsp+A8h] [rbp-110h]
  int v86; // [rsp+B0h] [rbp-108h] BYREF
  __int16 v87; // [rsp+B4h] [rbp-104h]
  __int16 v88; // [rsp+B6h] [rbp-102h]
  __int64 v89; // [rsp+B8h] [rbp-100h]
  __int64 v90; // [rsp+C0h] [rbp-F8h]
  __int64 v91; // [rsp+C8h] [rbp-F0h]
  _BYTE v92[152]; // [rsp+D0h] [rbp-E8h] BYREF

  v81 = a3;
  v5 = a2;
  v85 = a2;
  v82 = a1;
  v88 = 0;
  memset(v92, 0, sizeof(v92));
  v7 = 0LL;
  v83 = 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(v5 << 25) >> 16) )
    return 0LL;
  v8 = 1;
  v68 = 1;
  v9 = 0;
  v77 = 0;
  SystemRegionType = MiGetSystemRegionType((__int64)(v5 << 25) >> 16);
  if ( SystemRegionType == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v80 = Process[1].Affinity.StaticBitmap[25];
    v9 = 2;
    SessionVm = (char *)MiGetSessionVm(Process, v80, v13, v14);
    v77 = 2;
    AnyMultiplexedVm = SessionVm;
  }
  else
  {
    v80 = 0LL;
    if ( SystemRegionType == 6 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      SessionVm = AnyMultiplexedVm;
    }
    else
    {
      AnyMultiplexedVm = (char *)&unk_140C697C0;
      SessionVm = (char *)&unk_140C697C0;
    }
  }
  LOBYTE(v13) = 0;
  v75 = 0;
  v76 = 0;
  v16 = 1LL;
  if ( a1 )
  {
    if ( v9 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    {
      IsExecutivePagingDisabled = MmIsExecutivePagingDisabled(v12, v11, v13, 1LL);
      v13 = (unsigned __int8)v13;
      if ( IsExecutivePagingDisabled == (_DWORD)v16 )
        v13 = (unsigned int)v16;
      v76 = v13;
    }
    if ( (*(_DWORD *)(a1 + 196) & 0x100) == 0 )
      v75 = 2;
  }
  MiPrefetchDriverPages(v5, a3, v13, v16);
  v17 = -1LL;
  v89 = 20LL;
  DriverPage = -1LL;
  v86 = v9;
  v18 = 0LL;
  v87 = 0;
  v90 = 0LL;
  v91 = 0LL;
  v74 = 0LL;
  v69 = MiLockWorkingSetShared(AnyMultiplexedVm);
  do
  {
    if ( v18 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_12;
      MiFlushTbList(&v86);
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v18);
    }
    v18 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v74 = v18;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v18, 0);
LABEL_12:
    v19 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v58 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        v59 = v19 | 0x20;
        if ( (v58 & 0x20) == 0 )
          v59 = *(_QWORD *)v5;
        v19 = v59;
        if ( (v58 & 0x42) != 0 )
          v19 = v59 | 0x42;
      }
    }
    v84 = v19;
    v20 = (__int64)((v5 << 25) - v7) >> 16;
    if ( (v19 & 1) != 0 )
    {
      v23 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v84) >> 12) & 0xFFFFFFFFFFLL;
      v24 = 48 * v23 - 0x220000000000LL;
      v25 = *(_QWORD *)(v24 + 40);
      if ( (v25 & 0x10000000000LL) == 0 && *(__int64 *)(v24 + 8) > 0 )
      {
        MiFlushTbList(&v86);
        AnyMultiplexedVm = SessionVm;
        v60 = MiCopyOnWrite((__int64)((v5 << 25) - v7) >> 16, v5, 0xFFFFFFFFFFFFFFFFuLL, 0);
        if ( v60 < 0 )
        {
          MiUnlockPageTableInternal((__int64)SessionVm, v18);
          MiUnlockWorkingSetShared((__int64)SessionVm, v69);
          MiCopyOnWriteCheckConditions(SessionVm, (unsigned int)v60);
          v18 = 0LL;
          v74 = 0LL;
          MiLockWorkingSetShared(SessionVm);
        }
        goto LABEL_61;
      }
      v26 = 0;
      if ( (unsigned int)MmIsExecutivePagingDisabled(v22, v21, v25, 0xFFFFDE0000000000uLL) && (a4 & 4) != 0 )
        v26 = ((*(_BYTE *)(v24 + 16) >> 5) & 2) == 0;
      if ( v27 < 0 && (!v80 || v76 || v26) && (a4 & 1) != 0 )
      {
        MiFlushTbList(&v86);
        AnyMultiplexedVm = SessionVm;
        MiUnlockPageTableInternal((__int64)SessionVm, v18);
        MiUnlockWorkingSetShared((__int64)SessionVm, v69);
        v47 = v81;
        if ( v26 )
          v47 = v5;
        v48 = 0;
        goto LABEL_121;
      }
      if ( (v19 & 0x800) == 0 && (v19 & 0x200) != 0 )
      {
        MiFlushTbList(&v86);
        AnyMultiplexedVm = SessionVm;
        MiUnlockPageTableInternal((__int64)SessionVm, v18);
        MiUnlockWorkingSetShared((__int64)SessionVm, v69);
        v47 = v81;
        v48 = 1;
LABEL_121:
        MiMakeDriverPagesPrivate(v82, (ULONG_PTR *)v5, v47, v48);
        v18 = 0LL;
        v74 = 0LL;
        MiLockWorkingSetShared(AnyMultiplexedVm);
        v17 = DriverPage;
LABEL_61:
        v8 = v68;
        continue;
      }
      v29 = 0LL;
      v30 = *(_QWORD *)(qword_140C67048 + 8 * (((unsigned __int64)v27 >> 43) & 0x3FF));
      v71 = v30;
      v31 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v32 = *(_QWORD *)v31;
      if ( v31 >= 0xFFFFF6FB7DBED000uLL
        && v31 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v32 & 1) != 0
        && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        v61 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v61 )
        {
          v62 = *((_QWORD *)&v61->Flink + ((v31 >> 3) & 0x1FF));
          v63 = v32 | 0x20;
          if ( (v62 & 0x20) == 0 )
            v63 = *(_QWORD *)v31;
          v32 = v63;
          if ( (v62 & 0x42) != 0 )
            v32 = v63 | 0x42;
        }
        v30 = v71;
      }
      WsleContents = HIBYTE(v32) & 0xF | (16 * ((v32 >> 60) & 7));
      v34 = DriverPage;
      if ( DriverPage != -1 )
      {
        v51 = v28 + 48 * DriverPage;
        if ( v30 == *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v51 + 40) >> 43) & 0x3FFLL)) )
        {
          v34 = DriverPage;
          v35 = a4 & 2;
          v38 = v71;
          goto LABEL_38;
        }
        MiReleaseFreshPage(v51);
        v34 = -1LL;
        DriverPage = -1LL;
      }
      v35 = a4 & 2;
      if ( (a4 & 2) != 0 )
      {
        if ( (WsleContents & 0xF) == 9 )
        {
          v38 = v71;
          goto LABEL_38;
        }
      }
      else if ( *(_WORD *)(v24 + 32) != 1 )
      {
LABEL_76:
        v38 = v71;
LABEL_38:
        v78 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v78);
            while ( *(__int64 *)(v24 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
          v34 = DriverPage;
          v35 = a4 & 2;
        }
        if ( v34 == -1LL )
          goto LABEL_40;
        if ( v35 )
        {
          WsleContents = MiGetWsleContents(v34, v20);
          if ( (WsleContents & 0xF) == 9 )
          {
            v39 = v20;
            goto LABEL_88;
          }
          v34 = DriverPage;
        }
        else if ( *(_WORD *)(v24 + 32) != 1 )
        {
          v39 = v20;
LABEL_42:
          if ( v77 == 2 )
          {
            if ( !(unsigned int)MiAddLockedPageCharge(v24, 0) )
              v68 = 0;
            goto LABEL_52;
          }
          v40 = *(_QWORD *)(v24 + 40);
          if ( (v40 & 0x10000000000LL) == 0 && (v40 & 0x20000000000000LL) == 0 )
          {
            v41 = *(_WORD *)(v24 + 32);
            v42 = *(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            v43 = 0;
            if ( v41 )
            {
              if ( v41 == 1 )
              {
                if ( v42 || (*(_BYTE *)(v24 + 34) & 8) != 0 )
                  v43 = 1;
                if ( !v43 )
                  goto LABEL_51;
              }
              else if ( v41 != 2 || !v42 || (*(_BYTE *)(v24 + 34) & 8) == 0 )
              {
                goto LABEL_51;
              }
            }
            *(_BYTE *)(v24 + 35) |= 0x20u;
          }
LABEL_51:
          ++*(_WORD *)(v24 + 32);
LABEL_52:
          if ( (*(_QWORD *)(v24 + 16) & 0x400) == 0 )
          {
            v44 = *(_BYTE *)(v24 + 34);
            if ( (v44 & 0x10) == 0 )
            {
              if ( (((*(_QWORD *)(v24 + 16) & 0x400LL) == 0) & (unsigned __int8)~(v44 >> 3)) != 0 )
                v29 = MiCapturePageFileInfoInline((unsigned __int64 *)(v24 + 16), 1, 0);
              *(_BYTE *)(v24 + 34) |= 0x10u;
            }
          }
          v45 = *(_QWORD *)v5;
          if ( v5 >= 0xFFFFF6FB7DBED000uLL
            && v5 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x600000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v45 & 1) != 0
            && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
          {
            v66 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v66 )
            {
              v67 = *((_QWORD *)&v66->Flink + ((v5 >> 3) & 0x1FF));
              if ( (v67 & 0x20) != 0 )
                LOWORD(v45) = v45 | 0x20;
              if ( (v67 & 0x42) != 0 )
                LOWORD(v45) = v45 | 0x42;
            }
          }
          if ( (v45 & 0x800) == 0 || (v45 & 0x42) != 0 )
          {
            v17 = DriverPage;
          }
          else
          {
            MiWriteValidPteVolatile((volatile signed __int64 *)v5, 2, 0);
            MiInsertTbFlushEntry((__int64)&v86, v39, 1LL, 0);
            v17 = DriverPage;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v29 )
            MiReleasePageFileInfo(v71, v29, 1);
          v18 = v74;
          v5 += 8LL;
          v7 = v83;
          AnyMultiplexedVm = SessionVm;
          goto LABEL_61;
        }
        if ( _bittest64((const signed __int64 *)(v24 + 40), 0x35u)
          || !(unsigned int)MiBetterDriverPageNeeded(v38, v23, v34) )
        {
LABEL_40:
          v39 = v20;
          goto LABEL_41;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( *(__int64 *)(v24 + 40) >= 0 )
        {
          v52 = 1LL;
        }
        else
        {
          v52 = MiLockProtoPoolPage(*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL, 0LL);
          if ( !v52 )
          {
            v39 = v20;
LABEL_106:
            if ( v52 > 1 )
              MiUnlockProtoPoolPage(v52, 0x11u);
            v79 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v79);
              while ( *(__int64 *)(v24 + 24) < 0 );
            }
LABEL_41:
            if ( !v35 )
              goto LABEL_42;
LABEL_88:
            if ( (WsleContents & 0xF) != 9 )
              MiRemoveSystemImagePage((__int64)SessionVm, v5, v24);
            goto LABEL_52;
          }
        }
        v39 = v20;
        if ( (unsigned int)MiTradeActivePage(v24, 48 * DriverPage - 0x220000000000LL, v20, 0, 2u, v75) == 1 )
        {
          *(_QWORD *)(v24 + 16) = ZeroPte;
          MiSetOriginalPtePfnFromFreeList(v24 + 16, v53, v54);
          MiReleaseFreshPage(v24);
          v24 = 48 * DriverPage - 0x220000000000LL;
          DriverPage = -1LL;
        }
        goto LABEL_106;
      }
      if ( _bittest64((const signed __int64 *)(v24 + 40), 0x35u)
        || (*(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || *(_WORD *)(v24 + 32) != 1 )
      {
LABEL_75:
        v35 = a4 & 2;
        goto LABEL_76;
      }
      if ( (MiFlags & 0x4000) != 0 && (unsigned int)MiGetPagePrivilege(48 * v23 - 0x220000000000LL)
        || (MiFlags & 0x20000) != 0 && (unsigned int)MiGetPagePrivilege(48 * v23 - 0x220000000000LL) )
      {
LABEL_74:
        v34 = DriverPage;
        goto LABEL_75;
      }
      v36 = *(_QWORD *)v31;
      if ( v31 >= 0xFFFFF6FB7DBED000uLL
        && v31 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v36 & 1) != 0 )
      {
        if ( (v36 & 0x20) != 0 )
        {
          v37 = (v36 & 0x42) == 0;
          if ( (v36 & 0x42) != 0 )
          {
LABEL_35:
            if ( v37 || (v75 & 2) != 0 )
            {
              v38 = v71;
              if ( (unsigned int)MiCheckSlabPfnBitmap(48 * v23 - 0x220000000000LL, 1LL, 0) )
              {
                v34 = DriverPage;
                v35 = a4 & 2;
              }
              else
              {
                if ( !*(_QWORD *)(v71 + 16264) || v23 < *(_QWORD *)(v71 + 16248) )
                {
                  MiFlushTbList(&v86);
                  AnyMultiplexedVm = SessionVm;
                  MiUnlockPageTableInternal((__int64)SessionVm, v74);
                  MiUnlockWorkingSetShared((__int64)SessionVm, v69);
                  v18 = 0LL;
                  DriverPage = MiAllocateDriverPage(v71, (*(_DWORD *)(v24 + 16) >> 5) & 0x1F, 0LL);
                  v74 = 0LL;
                  v17 = DriverPage;
                  v50 = MiLockWorkingSetShared(SessionVm);
                  v7 = v83;
                  v69 = v50;
                  goto LABEL_61;
                }
                v34 = DriverPage;
                v35 = a4 & 2;
              }
              goto LABEL_38;
            }
            goto LABEL_74;
          }
        }
        v64 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v64 )
        {
          v65 = *((_QWORD *)&v64->Flink + ((v31 >> 3) & 0x1FF));
          if ( (v65 & 0x20) != 0 )
            LOBYTE(v36) = v36 | 0x20;
          if ( (v65 & 0x42) != 0 )
            LOBYTE(v36) = v36 | 0x42;
        }
      }
      v37 = (v36 & 0x42) == 0;
      goto LABEL_35;
    }
    MiFlushTbList(&v86);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v18);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v69);
    v49 = MmAccessFault(0LL, (__int64)((v5 << 25) - v7) >> 16, 0, 0LL);
    if ( v49 < 0 )
      KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)((v5 << 25) - v7) >> 16, v19, v49);
    v18 = 0LL;
    v74 = 0LL;
    MiLockWorkingSetShared(AnyMultiplexedVm);
  }
  while ( v5 <= v81 && v8 == 1 );
  if ( v69 != 17 )
  {
    MiFlushTbList(&v86);
    if ( v18 )
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v18);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v69);
  }
  if ( v17 != -1 )
    MiReleaseFreshPage(48 * v17 - 0x220000000000LL);
  if ( v8 )
    return 0LL;
  MiUnlockCodePage(v85, v5 - 16, 0);
  return 3221225626LL;
}
