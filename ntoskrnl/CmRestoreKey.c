/*
 * XREFs of CmRestoreKey @ 0x140A08004
 * Callers:
 *     NtRestoreKey @ 0x140A0BBB0 (NtRestoreKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpInitializeDelayDerefContext @ 0x140262F00 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpSignalDeferredPosts @ 0x1406B5564 (CmpSignalDeferredPosts.c)
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 *     CmpLockRegistryFreezeAware @ 0x1406BF3D0 (CmpLockRegistryFreezeAware.c)
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpCleanupRollbackPacket @ 0x14074A888 (CmpCleanupRollbackPacket.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x14074B804 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14074C0F0 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14074C150 (CmpTryAcquireKcbIXLocks.c)
 *     CmpInvalidateSubtree @ 0x14074C208 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x14074C8DC (CmpAbortRollbackPacket.c)
 *     CmpReportNotify @ 0x140783638 (CmpReportNotify.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpCopyKeyPartial @ 0x14078ECB4 (CmpCopyKeyPartial.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14079B2C8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpCleanUpSubKeyInfo @ 0x1407A5570 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1407A560C (CmpAssignSecurityToKcb.c)
 *     HvReallocateCell @ 0x1407A5D90 (HvReallocateCell.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1407A751C (CmpCleanUpKcbCachedSymlink.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     CmpTraceHiveRestoreStart @ 0x140A0FFC0 (CmpTraceHiveRestoreStart.c)
 *     CmpTraceHiveRestoreStop @ 0x140A100D4 (CmpTraceHiveRestoreStop.c)
 *     CmpCheckKeyAccess @ 0x140A18390 (CmpCheckKeyAccess.c)
 *     CmpDestroyHive @ 0x140A19FFC (CmpDestroyHive.c)
 *     CmpRetryBackOff @ 0x140A1BA24 (CmpRetryBackOff.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1CE0C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpLogUnsupportedOperation @ 0x140A1D140 (CmpLogUnsupportedOperation.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140A1D3D0 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x140A1E748 (CmpCopySyncTree.c)
 *     CmpDeleteTree @ 0x140A22F10 (CmpDeleteTree.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF21E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpIsShutdownRundownActive @ 0x140AF24D4 (CmpIsShutdownRundownActive.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140AF2AFC (CmpDoAccessCheckOnSubtree.c)
 */

__int64 __fastcall CmRestoreKey(_QWORD *a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v6; // r15
  char v7; // si
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rdi
  int v10; // ebx
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int HiveVolatile; // eax
  char v17; // r15
  __int64 v18; // rbx
  __int64 CellFlat; // rax
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // r15
  int v23; // ebx
  size_t v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  bool v29; // zf
  unsigned int v30; // r15d
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char v38; // si
  int v39; // eax
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  unsigned int v47; // r12d
  unsigned int v48; // r13d
  __int64 CellPaged; // rax
  unsigned int v50; // r15d
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // esi
  _WORD *v55; // rax
  unsigned int *v56; // r15
  ULONG_PTR v57; // rdx
  __int64 v58; // rax
  _WORD *v59; // rsi
  unsigned int v60; // edx
  __int64 v61; // rax
  _DWORD *v62; // rcx
  _DWORD *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rax
  unsigned int v67; // eax
  ULONG_PTR v68; // rcx
  ULONG_PTR v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rsi
  int v72; // ecx
  int v73; // eax
  int v74; // ecx
  int v75; // eax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  ULONG_PTR v82; // [rsp+28h] [rbp-D8h]
  __int64 v83; // [rsp+60h] [rbp-A0h]
  char v84; // [rsp+68h] [rbp-98h]
  unsigned int BugCheckParameter4; // [rsp+6Ch] [rbp-94h]
  ULONG_PTR BugCheckParameter4_4; // [rsp+70h] [rbp-90h] BYREF
  __int64 v87; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v88; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v89; // [rsp+84h] [rbp-7Ch]
  __int64 v90; // [rsp+88h] [rbp-78h] BYREF
  __int64 v91; // [rsp+90h] [rbp-70h]
  __int64 v92; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v93; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v95; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR v96; // [rsp+B8h] [rbp-48h]
  __int64 v97; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v98; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v99; // [rsp+D0h] [rbp-30h] BYREF
  int v100; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v101; // [rsp+E4h] [rbp-1Ch]
  unsigned int v102; // [rsp+E8h] [rbp-18h] BYREF
  _WORD *v103; // [rsp+F0h] [rbp-10h]
  __int64 v104; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v105; // [rsp+100h] [rbp+0h] BYREF
  __int128 v106; // [rsp+110h] [rbp+10h] BYREF
  ULONG_PTR v107[4]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v108[432]; // [rsp+140h] [rbp+40h] BYREF

  v98 = 0xFFFFFFFFLL;
  v103 = 0LL;
  v83 = 0LL;
  v95 = 0LL;
  v92 = 0xFFFFFFFFLL;
  v91 = 0LL;
  BugCheckParameter4_4 = 0xFFFFFFFFLL;
  v6 = 0LL;
  v87 = 0xFFFFFFFFLL;
  BugCheckParameter3 = 0LL;
  v90 = 0xFFFFFFFFLL;
  memset(v107, 0, sizeof(v107));
  v106 = 0LL;
  memset(v108, 0, sizeof(v108));
  v100 = 0;
  v105 = 0LL;
  v99 = 0LL;
  CmpInitializeDelayDerefContext(&v105);
  LODWORD(v93) = -1;
  v7 = 0;
  v88 = -1;
  v8 = a1[1];
  v9 = *(_QWORD *)(v8 + 32);
  if ( (*(_DWORD *)(v9 + 160) & 0x100000) != 0 )
  {
    v10 = -1073741790;
    goto LABEL_3;
  }
  CmpTraceHiveRestoreStart(a2, a3);
  if ( (a3 & 0xFFFFFFFD) != 0 && (a3 & 2) != 0 || a1[7] || a1[8] )
  {
    v10 = -1073741811;
    goto LABEL_3;
  }
  if ( (a3 & 1) != 0 )
  {
    HiveVolatile = CmpLoadHiveVolatile(a1, a2);
LABEL_17:
    v10 = HiveVolatile;
    goto LABEL_3;
  }
  if ( (a3 & 2) != 0 )
  {
    HiveVolatile = CmpRefreshHive(a1);
    goto LABEL_17;
  }
  *((_QWORD *)&v106 + 1) = &v106;
  v107[0] = a2;
  *(_QWORD *)&v106 = &v106;
  memset(&v107[1], 0, 24);
  v10 = CmpCreateHive(
          &BugCheckParameter3,
          2u,
          0x8000,
          0,
          0LL,
          (__int64)v107,
          0LL,
          18415617,
          0LL,
          0LL,
          0LL,
          (__int64)v108);
  if ( v10 < 0 )
    goto LABEL_3;
  CmpLockRegistryFreezeAware(0);
  v7 = 1;
  CmpLockKcbShared(v8);
  v17 = 1;
  BugCheckParameter4 = *(_DWORD *)(v8 + 40);
  if ( *(_WORD *)(v8 + 66) )
  {
    CmpLogUnsupportedOperation(17LL);
    v10 = -1073741822;
LABEL_23:
    v11 = 0LL;
    goto LABEL_78;
  }
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v10 = -1073741535;
    goto LABEL_23;
  }
  if ( *(_BYTE *)(v8 + 65) == 1 || v9 == CmpMasterHive )
  {
    v10 = -1073741790;
    goto LABEL_23;
  }
  if ( *(_BYTE *)(v9 + 2944) == 1 )
  {
    v10 = -1073741431;
    goto LABEL_23;
  }
  v18 = KeAbPreAcquire(v9 + 72, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 72), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v9 + 72), 0, v18, v9 + 72);
  if ( v18 )
    *(_BYTE *)(v18 + 18) = 1;
  v84 = 1;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v9, BugCheckParameter4, &BugCheckParameter4_4);
  else
    CellFlat = HvpGetCellPaged(v9, BugCheckParameter4, (unsigned int *)&BugCheckParameter4_4);
  v91 = CellFlat;
  if ( !CellFlat )
  {
    v10 = -1073741670;
    goto LABEL_74;
  }
  if ( (*(_BYTE *)(CellFlat + 2) & 4) != 0 )
    v20 = -1;
  else
    v20 = *(_DWORD *)(CellFlat + 16);
  v21 = *(_QWORD *)(BugCheckParameter3 + 64);
  v89 = v20;
  v101 = BugCheckParameter4 >> 31;
  v10 = CmpCopyKeyPartial(
          BugCheckParameter3,
          *(unsigned int *)(v21 + 36),
          v9,
          v20,
          6,
          v82,
          BugCheckParameter4 >> 31,
          &v88);
  if ( v10 < 0 )
    goto LABEL_74;
  v22 = v91;
  v10 = HvReallocateCell(
          v9,
          v88,
          (unsigned int)*(unsigned __int16 *)(v91 + 72) + 76,
          1,
          (int *)&v93,
          &v95,
          (__int64)&v92);
  if ( v10 < 0 )
  {
    v11 = v95;
LABEL_71:
    v17 = v84;
    if ( (unsigned __int8)CmpDeleteTree(v9, v88) )
      CmpFreeKeyByCell(v9, v88, 0);
    if ( !v84 )
    {
LABEL_77:
      if ( !v17 )
      {
LABEL_79:
        v6 = v91;
        goto LABEL_4;
      }
LABEL_78:
      CmpUnlockKcb(v8);
      goto LABEL_79;
    }
LABEL_74:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v9 + 72));
    KeAbPostRelease(v9 + 72);
    v11 = v95;
    goto LABEL_77;
  }
  v23 = v93;
  v24 = *(unsigned __int16 *)(v22 + 72);
  v88 = v93;
  v83 = v95;
  memmove((void *)(v95 + 76), (const void *)(v22 + 76), v24);
  *(_WORD *)(v83 + 72) = *(_WORD *)(v22 + 72);
  if ( (*(_BYTE *)(v22 + 2) & 0x20) != 0 )
    *(_WORD *)(v83 + 2) |= 0x20u;
  else
    *(_WORD *)(v83 + 2) &= ~0x20u;
  v10 = CmpCopySyncTree(BugCheckParameter3, *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL), v9, v23, 2, 0);
  if ( v10 < 0 )
  {
LABEL_70:
    v11 = v83;
    goto LABEL_71;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v9 + 72));
  KeAbPostRelease(v9 + 72);
  v84 = 0;
  CmpUnlockKcb(v8);
  CmpUnlockRegistry(v26, v25, v27, v28);
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v9, &BugCheckParameter4_4);
  else
    HvpReleaseCellPaged(v9, (unsigned int *)&BugCheckParameter4_4);
  v29 = (*(_BYTE *)(v9 + 140) & 1) == 0;
  v91 = 0LL;
  if ( v29 )
    HvpReleaseCellPaged(v9, (unsigned int *)&v92);
  else
    HvpReleaseCellFlat(v9, &v92);
  v83 = 0LL;
  v95 = 0LL;
  CmpLockRegistryFreezeAware(1);
  if ( (unsigned __int8)CmpIsShutdownRundownActive() )
  {
LABEL_91:
    v10 = -1073741431;
LABEL_69:
    v7 = 1;
    goto LABEL_70;
  }
  v30 = v89;
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      goto LABEL_95;
    if ( BugCheckParameter4 != *(_DWORD *)(v8 + 40) )
    {
      v10 = -1073741444;
      goto LABEL_69;
    }
    if ( (*(_DWORD *)(v8 + 8) & 0x40000) != 0 )
    {
      v10 = -1073740763;
      goto LABEL_69;
    }
    if ( *(_BYTE *)(v9 + 2944) == 1 )
      goto LABEL_91;
    if ( v30 != -1 )
    {
      v10 = CmpCheckKeyAccess(v9, 1);
      if ( v10 < 0 )
        goto LABEL_69;
    }
    v10 = CmpCheckKeyAccess(v9, 1);
    if ( v10 < 0 )
      goto LABEL_69;
    LOBYTE(v31) = 1;
    v10 = CmpTryAcquireKcbIXLocks(v8, v31, v32, (__int64)&v99);
    if ( v10 == -1073741267 )
    {
      CmpLogTransactionAbortedWithChildName(v8, 0LL, 7u, v33, v99);
      CmpUnlockRegistry(v35, v34, v36, v37);
      v10 = CmpAbortRollbackPacket((__int64)&v99, 0LL);
      if ( v10 < 0 )
      {
        CmpLockRegistryFreezeAware(1);
        goto LABEL_69;
      }
      goto LABEL_90;
    }
    if ( v10 < 0 )
      goto LABEL_69;
    v10 = CmpDoAccessCheckOnSubtree(v9, 2);
    if ( v10 < 0 )
      goto LABEL_69;
    if ( (a3 & 8) == 0 )
      break;
    v10 = CmpPrepareToInvalidateAllHigherLayerKcbs(v8, 0LL, &v99);
    if ( v10 == -1073741267 )
    {
      v38 = 1;
    }
    else
    {
      v38 = 0;
      if ( v10 < 0 )
        goto LABEL_69;
    }
    v39 = CmpPrepareForSubtreeInvalidation(v8, 0, (__int64)&v99);
    v10 = v39;
    if ( v39 != -1073741267 )
    {
      if ( v39 < 0 )
        goto LABEL_69;
      if ( !v38 )
      {
        v104 = 1LL;
        v47 = 0;
        CmpEnumerateAllHigherLayerKcbs(
          v8,
          (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
          (unsigned int)CmpInvalidateAllHigherLayerKcbsPostCallback,
          (unsigned int)&v105,
          (__int64)&v104,
          1,
          1);
        CmpInvalidateSubtree(v8, 1, 0, (__int64)&v105, 0LL);
        CmpDrainDelayDerefContext((_QWORD **)&v105);
        goto LABEL_97;
      }
    }
    CmpLogTransactionAbortedWithChildName(v8, 0LL, 7u, v40, v99);
    CmpUnlockRegistry(v42, v41, v43, v44);
    v7 = 0;
    v10 = CmpAbortRollbackPacket((__int64)&v99, 0LL);
    if ( v10 < 0 )
    {
      CmpLockRegistryFreezeAware(1);
      goto LABEL_70;
    }
LABEL_90:
    CmpCleanupRollbackPacket((__int64)&v99);
    v99 = 0LL;
    CmpRetryBackOff(&v100, v45, v46);
    CmpLockRegistryFreezeAware(1);
    if ( (unsigned __int8)CmpIsShutdownRundownActive() )
      goto LABEL_91;
  }
  v47 = 0;
  CmpEnumerateAllHigherLayerKcbs(
    v8,
    (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int)CmpCleanUpHigherLayerKcbCachesPostCallback,
    0,
    0LL,
    1,
    1);
  if ( CmpDoesKeyHaveOpenSubkeys(v8) || *(_QWORD *)v8 != 1LL )
  {
LABEL_95:
    v10 = -1073741535;
    goto LABEL_69;
  }
LABEL_97:
  v48 = v93;
  v10 = HvpMarkCellDirty(v9, (unsigned int)v93, 0);
  v7 = 1;
  if ( v10 < 0 )
    goto LABEL_70;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v9, BugCheckParameter4, &v92);
  else
    CellPaged = HvpGetCellPaged(v9, BugCheckParameter4, (unsigned int *)&v92);
  v83 = CellPaged;
  v95 = CellPaged;
  if ( !CellPaged )
  {
LABEL_102:
    v10 = -1073741670;
    goto LABEL_70;
  }
  v29 = (*(_BYTE *)(CellPaged + 2) & 4) == 0;
  v50 = *(_DWORD *)(CellPaged + 16);
  LODWORD(v96) = v50;
  if ( v29 )
  {
    v10 = HvpMarkCellDirty(v9, v50, 0);
    if ( v10 < 0 )
      goto LABEL_70;
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      v53 = HvpGetCellFlat(v9, v50, &v87);
    else
      v53 = HvpGetCellPaged(v9, v50, (unsigned int *)&v87);
    if ( !v53 )
      goto LABEL_102;
    v29 = (*(_BYTE *)(v9 + 140) & 1) == 0;
    v54 = *(_DWORD *)(v53 + 4LL * v101 + 28);
    v102 = v54;
    if ( v29 )
      HvpReleaseCellPaged(v9, (unsigned int *)&v87);
    else
      HvpReleaseCellFlat(v9, &v87);
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      v55 = (_WORD *)HvpGetCellFlat(v9, v54, &v98);
    else
      v55 = (_WORD *)HvpGetCellPaged(v9, v54, (unsigned int *)&v98);
    v103 = v55;
    if ( !v55 )
      goto LABEL_115;
    if ( *v55 != 26994 )
    {
      v89 = 1;
      v56 = &v102;
      goto LABEL_136;
    }
    v56 = (unsigned int *)(v55 + 2);
    v89 = (unsigned __int16)v55[1];
    if ( !v89 )
    {
LABEL_161:
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        v64 = HvpGetCellFlat(v9, (unsigned int)v96, &v87);
      else
        v64 = HvpGetCellPaged(v9, v96, (unsigned int *)&v87);
      v65 = v64;
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        v66 = HvpGetCellFlat(v9, v48, &BugCheckParameter4_4);
      else
        v66 = HvpGetCellPaged(v9, v48, (unsigned int *)&BugCheckParameter4_4);
      v67 = *(unsigned __int16 *)(v66 + 74);
      if ( *(_DWORD *)(v65 + 56) < v67 )
        *(_DWORD *)(v65 + 56) = v67;
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v9, &BugCheckParameter4_4);
      else
        HvpReleaseCellPaged(v9, (unsigned int *)&BugCheckParameter4_4);
      v29 = (*(_BYTE *)(v9 + 140) & 1) == 0;
      v6 = 0LL;
      v91 = 0LL;
      if ( v29 )
        HvpReleaseCellPaged(v9, (unsigned int *)&v87);
      else
        HvpReleaseCellFlat(v9, &v87);
      goto LABEL_175;
    }
    while ( 1 )
    {
LABEL_136:
      v57 = *v56;
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        v58 = HvpGetCellFlat(v9, v57, &v90);
      else
        v58 = HvpGetCellPaged(v9, v57, (unsigned int *)&v90);
      v59 = (_WORD *)v58;
      if ( !v58 )
        goto LABEL_115;
      v10 = HvpMarkCellDirty(v9, *v56, 0);
      if ( v10 < 0 )
        break;
      v60 = (unsigned __int16)v59[1];
      v61 = 0LL;
      if ( ((*v59 - 26220) & 0xFDFF) != 0 )
      {
        if ( v59[1] )
        {
          v62 = v59 + 2;
          while ( *v62 != BugCheckParameter4 )
          {
            v61 = (unsigned int)(v61 + 1);
            ++v62;
            if ( (unsigned int)v61 >= v60 )
              goto LABEL_151;
          }
          *(_DWORD *)&v59[2 * v61 + 2] = v48;
LABEL_158:
          if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v9, &v90);
          else
            HvpReleaseCellPaged(v9, (unsigned int *)&v90);
          goto LABEL_161;
        }
      }
      else if ( v59[1] )
      {
        v63 = v59 + 2;
        while ( *v63 != BugCheckParameter4 )
        {
          v61 = (unsigned int)(v61 + 1);
          v63 += 2;
          if ( (unsigned int)v61 >= v60 )
            goto LABEL_151;
        }
        *(_DWORD *)&v59[4 * v61 + 2] = v48;
        goto LABEL_158;
      }
LABEL_151:
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v9, &v90);
      else
        HvpReleaseCellPaged(v9, (unsigned int *)&v90);
      ++v47;
      ++v56;
      if ( v47 >= v89 )
        goto LABEL_161;
    }
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, &v90);
    else
      HvpReleaseCellPaged(v9, (unsigned int *)&v90);
    goto LABEL_69;
  }
  if ( (*(_BYTE *)(CmpMasterHive + 140) & 1) != 0 )
    v51 = HvpGetCellFlat(CmpMasterHive, v50, &v87);
  else
    v51 = HvpGetCellPaged(CmpMasterHive, v50, (unsigned int *)&v87);
  if ( !v51 )
    goto LABEL_102;
  *(_DWORD *)(v51 + 28) = v48;
  if ( (*(_BYTE *)(CmpMasterHive + 140) & 1) != 0 )
    HvpReleaseCellFlat(CmpMasterHive, &v87);
  else
    HvpReleaseCellPaged(CmpMasterHive, (unsigned int *)&v87);
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v52 = HvpGetCellFlat(v9, v48, &BugCheckParameter4_4);
  else
    v52 = HvpGetCellPaged(v9, v48, (unsigned int *)&BugCheckParameter4_4);
  v91 = v52;
  if ( !v52 )
    goto LABEL_115;
  *(_DWORD *)(v52 + 16) = v50;
  *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v48;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v9, &BugCheckParameter4_4);
  else
    HvpReleaseCellPaged(v9, (unsigned int *)&BugCheckParameter4_4);
  v6 = 0LL;
  v91 = 0LL;
LABEL_175:
  *(_DWORD *)(v8 + 40) = v48;
  CmpCleanUpKcbCachedSymlink(v8);
  v68 = *(_QWORD *)(v8 + 32);
  v97 = 0xFFFFFFFFLL;
  v69 = *(unsigned int *)(v8 + 40);
  if ( (*(_BYTE *)(v68 + 140) & 1) != 0 )
    v70 = HvpGetCellFlat(v68, v69, &v97);
  else
    v70 = HvpGetCellPaged(v68, v69, (unsigned int *)&v97);
  v71 = v70;
  if ( !v70 )
  {
LABEL_115:
    v10 = -1073741670;
    goto LABEL_69;
  }
  v72 = *(_DWORD *)(v70 + 40);
  v73 = *(_DWORD *)(v70 + 36);
  *(_DWORD *)(v8 + 100) = v72;
  *(_DWORD *)(v8 + 96) = v73;
  *(_WORD *)(v8 + 186) = *(_WORD *)(v71 + 2);
  CmpAssignSecurityToKcb(v8, *(unsigned int *)(v71 + 44), 0LL, 0, 0);
  CmpCleanUpSubKeyInfo(v8, 1);
  ++*(_QWORD *)(v8 + 304);
  *(_QWORD *)(v8 + 168) = *(_QWORD *)(v71 + 4);
  *(_WORD *)(v8 + 176) = *(_WORD *)(v71 + 52);
  *(_WORD *)(v8 + 178) = *(_WORD *)(v71 + 60);
  *(_DWORD *)(v8 + 180) = *(_DWORD *)(v71 + 64);
  v74 = *(_DWORD *)(v8 + 184) ^ (*(_DWORD *)(v8 + 184) ^ *(unsigned __int16 *)(v71 + 54)) & 0xF;
  *(_DWORD *)(v8 + 184) = v74;
  v75 = v74 ^ ((unsigned __int8)v74 ^ (unsigned __int8)*(_WORD *)(v71 + 54)) & 0xF0;
  v76 = *(_QWORD *)(v8 + 32);
  *(_DWORD *)(v8 + 184) = v75;
  *(_BYTE *)(v8 + 185) = *(_BYTE *)(v71 + 55);
  if ( (*(_BYTE *)(v76 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v76, &v97);
  else
    HvpReleaseCellPaged(v76, (unsigned int *)&v97);
  *(_WORD *)(v8 + 8) = 64;
  if ( (unsigned __int8)CmpDeleteTree(v9, BugCheckParameter4) )
    CmpFreeKeyByCell(v9, BugCheckParameter4, 0);
  CmpReportNotify(v8, 0LL, 1u, (__int64)&v106);
  if ( !CmpProfileLoaded )
  {
    CmpGlobalQuotaAllowed = CmpGlobalQuota;
    CmpProfileLoaded = 1;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v105);
  CmpUnlockRegistry(v78, v77, v79, v80);
  v7 = 0;
  CmpDestroyHive((PVOID)BugCheckParameter3);
  BugCheckParameter3 = 0LL;
  CmpSignalDeferredPosts((_QWORD **)&v106);
LABEL_3:
  v11 = v83;
LABEL_4:
  CmpDrainDelayDerefContext((_QWORD **)&v105);
  if ( v7 )
    CmpUnlockRegistry(v13, v12, v14, v15);
  if ( BugCheckParameter3 )
  {
    CmpDestroyHive((PVOID)BugCheckParameter3);
    BugCheckParameter3 = 0LL;
  }
  if ( v103 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, &v98);
    else
      HvpReleaseCellPaged(v9, (unsigned int *)&v98);
  }
  if ( v6 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, &BugCheckParameter4_4);
    else
      HvpReleaseCellPaged(v9, (unsigned int *)&BugCheckParameter4_4);
  }
  if ( v11 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, &v92);
    else
      HvpReleaseCellPaged(v9, (unsigned int *)&v92);
  }
  CmpCleanupRollbackPacket((__int64)&v99);
  CmpTraceHiveRestoreStop((unsigned int)v10);
  return (unsigned int)v10;
}
