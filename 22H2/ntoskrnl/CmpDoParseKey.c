/*
 * XREFs of CmpDoParseKey @ 0x140646890
 * Callers:
 *     CmpParseKey @ 0x140646330 (CmpParseKey.c)
 * Callees:
 *     CmpGetCachedFullKCBName @ 0x140206D9C (CmpGetCachedFullKCBName.c)
 *     CmpFreeTransientPoolWithTag @ 0x140206F68 (CmpFreeTransientPoolWithTag.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     CmpTransSilentIgnore @ 0x1402D1860 (CmpTransSilentIgnore.c)
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentThreadProcess @ 0x140316F60 (PsGetCurrentThreadProcess.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmRmIsKcbStackVisible @ 0x1405CD270 (CmRmIsKcbStackVisible.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1405EC238 (CmpLockHashEntrySharedByKcb.c)
 *     CmpUnlockHashEntry @ 0x1405EC638 (CmpUnlockHashEntry.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     RtlPrefixUnicodeString @ 0x1405EDBE0 (RtlPrefixUnicodeString.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1405EE830 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405EEA70 (CmpGetSymbolicLinkTarget.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405EF620 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpConstructName @ 0x1405F2FBC (CmpConstructName.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmpLockKcbShared @ 0x140640230 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140648A80 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStack @ 0x140648AA0 (CmpStartKcbStack.c)
 *     CmpLockKcbStackShared @ 0x140648B00 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140648B60 (CmpUnlockKcbStack.c)
 *     CmpPopulateKcbStack @ 0x140648C10 (CmpPopulateKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x140648C60 (CmpIsKeyStackDeleted.c)
 *     CmpDereferenceKeyControlBlock @ 0x140648D30 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsKeyStackSymlink @ 0x1406492A0 (CmpIsKeyStackSymlink.c)
 *     CmpCleanupPathInfo @ 0x1406492F0 (CmpCleanupPathInfo.c)
 *     CmpRecordParseStartingKcb @ 0x140649360 (CmpRecordParseStartingKcb.c)
 *     CmpValidateComponents @ 0x140649380 (CmpValidateComponents.c)
 *     CmpComputeComponentHashes @ 0x1406493E0 (CmpComputeComponentHashes.c)
 *     CmpRecordParseCachedSymlinkKcb @ 0x140649710 (CmpRecordParseCachedSymlinkKcb.c)
 *     CmpOKToFollowLink @ 0x140649730 (CmpOKToFollowLink.c)
 *     CmpVEExecuteParseLogic @ 0x1406498B0 (CmpVEExecuteParseLogic.c)
 *     CmpRecordParseKcbCacheResult @ 0x140649B00 (CmpRecordParseKcbCacheResult.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140649B30 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpGetComponentNameAtIndex @ 0x140649CC0 (CmpGetComponentNameAtIndex.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140649D20 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCreateKeyBody @ 0x140649DB0 (CmpCreateKeyBody.c)
 *     CmpCheckKeyOwnerForPca @ 0x14065D348 (CmpCheckKeyOwnerForPca.c)
 *     CmpRecordParseFailure @ 0x14066C090 (CmpRecordParseFailure.c)
 *     CmpTransSearchAddTransFromHive @ 0x14066DD60 (CmpTransSearchAddTransFromHive.c)
 *     CmpGetComponentHashAtIndex @ 0x14066F8C0 (CmpGetComponentHashAtIndex.c)
 *     CmpRecordParseWalkResult @ 0x14067DE84 (CmpRecordParseWalkResult.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x140681F40 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpVEExecuteCreateLogic @ 0x140685510 (CmpVEExecuteCreateLogic.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140698BD4 (CmpUpdateHiveRootCellFlags.c)
 *     CmpTryToLockHashEntryExclusive @ 0x14069B388 (CmpTryToLockHashEntryExclusive.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1406AD2C4 (CmpDoesProcessBelongToServiceSession.c)
 *     CmpVEExecuteOpenLogic @ 0x1406CDD50 (CmpVEExecuteOpenLogic.c)
 *     CmpDoWritethroughReparse @ 0x1406CDE40 (CmpDoWritethroughReparse.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406DEB20 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x1406DF07C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406DF0B4 (HvLockHiveFlusherShared.c)
 *     CmpCreateChild @ 0x1406E08C4 (CmpCreateChild.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406E1E60 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1406E2D94 (CmpRebuildKcbCacheFromNode.c)
 *     CmpGetKeyNodeForKcb @ 0x1406E4DC4 (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x1406E4E40 (CmpUnlockHashEntryByKcb.c)
 *     CmpIsKeyDeleted @ 0x1406E9D20 (CmpIsKeyDeleted.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14071CD1C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14071D558 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x14071D590 (HvLockHiveFlusherExclusive.c)
 *     HvResetDirtyData @ 0x140720CF4 (HvResetDirtyData.c)
 *     CmpCheckExeOwnerForPca @ 0x14076F828 (CmpCheckExeOwnerForPca.c)
 *     CmpCreateHiveRootCell @ 0x14078DAF0 (CmpCreateHiveRootCell.c)
 *     CmpWaitForHiveMount @ 0x1407C4644 (CmpWaitForHiveMount.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863E54 (CmpReleaseKeyNodeForKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x14086AB7C (CmpPublishEventForPcaResolver.c)
 *     CmpSearchKeyControlBlockTree @ 0x14086F204 (CmpSearchKeyControlBlockTree.c)
 *     CmpLogUnsupportedOperation @ 0x14087639C (CmpLogUnsupportedOperation.c)
 *     HvMarkCellDirty @ 0x14087BD38 (HvMarkCellDirty.c)
 *     CmpPromoteKey @ 0x140880318 (CmpPromoteKey.c)
 */

__int64 __fastcall CmpDoParseKey(
        __int64 a1,
        struct _ACCESS_STATE *a2,
        unsigned __int8 a3,
        __int16 a4,
        const UNICODE_STRING *a5,
        __int128 *a6,
        __int64 a7,
        int a8,
        PADAPTER_OBJECT *a9)
{
  bool v10; // r14
  unsigned __int16 v11; // r12
  __int64 v12; // r13
  __int128 v13; // xmm0
  ULONG_PTR v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  ULONG_PTR v18; // r15
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  const UNICODE_STRING *CachedFullKCBName; // rax
  const UNICODE_STRING *v24; // r15
  __int16 v25; // r9
  __int16 v26; // r10
  wchar_t *v27; // r8
  __int16 v28; // cx
  wchar_t *v29; // rax
  __int16 v30; // dx
  int v31; // r15d
  __int64 v32; // rax
  unsigned int v33; // ecx
  unsigned __int64 v34; // rax
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // rdx
  ULONG_PTR v38; // rbx
  ULONG_PTR v39; // rcx
  int v40; // eax
  __int16 v41; // r10
  char v42; // al
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  int v46; // eax
  int v47; // eax
  __int64 v48; // r8
  int v49; // r15d
  int v50; // eax
  __int16 v51; // r12
  __int64 v52; // rcx
  __int64 v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  int started; // eax
  int v58; // eax
  __int64 v59; // r12
  __int16 v60; // bx
  __int64 v61; // rax
  int ComponentHashAtIndex; // ecx
  __m128i *v63; // r8
  char v64; // dl
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  ULONG_PTR v72; // rbx
  __int64 v73; // rax
  _OWORD *v74; // rcx
  int SymbolicLinkTarget; // eax
  __int64 v76; // rcx
  __int64 ComponentNameAtIndex; // rax
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // rax
  __int64 *v81; // rbx
  _OWORD *v82; // r14
  __int64 v83; // rcx
  bool v84; // zf
  bool v85; // r15
  __int64 v86; // r8
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rbx
  __int64 v90; // r8
  int v91; // ebx
  __int64 v92; // rdx
  __int64 v93; // r8
  _DWORD *v94; // r9
  __int64 v95; // rdx
  ULONG_PTR v96; // rdx
  ULONG_PTR v97; // rcx
  int HiveRootCell; // eax
  int updated; // eax
  ULONG_PTR v100; // rbx
  int v101; // eax
  int KeyBody; // eax
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  unsigned __int8 v107; // bl
  __int64 v108; // rdx
  __int64 v109; // r8
  _DWORD *v110; // r9
  __int64 v111; // r14
  int v112; // ebx
  int v113; // ecx
  __int64 v114; // r14
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // r8
  const UNICODE_STRING *v121; // r14
  int v122; // r9d
  unsigned int v123; // eax
  __int64 v124; // rdx
  __int64 v125; // r8
  _DWORD *v126; // r9
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r8
  __int64 v131; // r15
  unsigned int Logic; // eax
  _KPROCESS *v133; // rax
  __int64 v134; // rcx
  int v135; // eax
  int v136; // eax
  __int64 v137; // rdx
  int v138; // eax
  int v139; // ebx
  unsigned int v140; // eax
  int v141; // r8d
  unsigned int v142; // eax
  int v143; // eax
  __int64 v144; // rbx
  bool v145; // cl
  int v146; // eax
  __int64 v147; // rcx
  int v148; // ebx
  unsigned int v149; // eax
  unsigned int v150; // eax
  __int64 v151; // r8
  int v152; // eax
  void *v153; // rbx
  BOOLEAN v155[8]; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v156; // [rsp+38h] [rbp-C8h]
  int Child; // [rsp+60h] [rbp-A0h] BYREF
  int v158; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v159; // [rsp+68h] [rbp-98h] BYREF
  int v160; // [rsp+6Ah] [rbp-96h] BYREF
  bool v161; // [rsp+70h] [rbp-90h] BYREF
  __int16 v162; // [rsp+71h] [rbp-8Fh]
  int v163; // [rsp+74h] [rbp-8Ch]
  char v164; // [rsp+78h] [rbp-88h]
  int v165[2]; // [rsp+80h] [rbp-80h]
  __int64 v166; // [rsp+88h] [rbp-78h]
  __int64 v167; // [rsp+90h] [rbp-70h]
  __int64 v168; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-60h]
  struct _ACCESS_STATE *v170; // [rsp+A8h] [rbp-58h]
  __int64 v171; // [rsp+B0h] [rbp-50h] BYREF
  PCUNICODE_STRING String2; // [rsp+B8h] [rbp-48h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v174; // [rsp+C8h] [rbp-38h]
  __int128 v175; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v176; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v177; // [rsp+E8h] [rbp-18h]
  ULONG_PTR v178; // [rsp+F0h] [rbp-10h]
  __int64 v179; // [rsp+F8h] [rbp-8h] BYREF
  ULONG_PTR v180; // [rsp+100h] [rbp+0h] BYREF
  __int128 v181; // [rsp+108h] [rbp+8h] BYREF
  ULONG_PTR v182; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  PADAPTER_OBJECT *v184; // [rsp+130h] [rbp+30h]
  __int64 v185[2]; // [rsp+138h] [rbp+38h] BYREF
  __int128 v186; // [rsp+148h] [rbp+48h]
  int v187[4]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v188; // [rsp+170h] [rbp+70h]
  _OWORD v189[2]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v190[176]; // [rsp+1A0h] [rbp+A0h] BYREF

  v167 = a1;
  v10 = 0;
  v184 = a9;
  String2 = a5;
  v170 = a2;
  v179 = 0LL;
  v11 = 0;
  v12 = 0LL;
  DestinationString = 0LL;
  v13 = *a6;
  v158 = a3;
  v14 = 0LL;
  v174 = (__int64)a6;
  v175 = v13;
  LOWORD(v171) = 0;
  v176 = 0LL;
  v181 = 0LL;
  DmaAdapter = 0LL;
  v168 = 0LL;
  v180 = 0LL;
  v161 = 0;
  *(_QWORD *)v165 = 0LL;
  v164 = 0;
  v159 = 0;
  v162 = 0;
  v163 = 0;
  v182 = 0LL;
  LODWORD(v179) = -1;
  CmpInitializeDelayDerefContext(&v181);
  v160 = (unsigned __int8)v15;
  v177 = v15;
  memset(v190, v15, 0xA8uLL);
  *(_OWORD *)(a7 + 160) = 0LL;
  *(_OWORD *)(a7 + 176) = 0LL;
  *(_OWORD *)(a7 + 192) = 0LL;
  *(_OWORD *)v187 = 0LL;
  HIWORD(v187[0]) = -1;
  v189[0] = 0LL;
  WORD1(v189[0]) = -1;
  *(_OWORD *)v185 = 0LL;
  WORD1(v185[0]) = -1;
  *(_QWORD *)(a7 + 208) = 0LL;
  *(_OWORD *)(a7 + 216) = 0LL;
  *(_OWORD *)(a7 + 232) = 0LL;
  *(_OWORD *)(a7 + 248) = 0LL;
  *(_OWORD *)(a7 + 264) = 0LL;
  *(_OWORD *)(a7 + 280) = 0LL;
  v16 = *(_QWORD *)(a7 + 88);
  v188 = 0LL;
  v189[1] = 0LL;
  v186 = 0LL;
  CmpRecordParseCachedSymlinkKcb(a7, v16);
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v18 = *(_QWORD *)(a7 + 88);
  v19 = *(_QWORD *)(a7 + 72);
  v20 = v167;
  BugCheckParameter2 = v18;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v19 )
  {
    v21 = *(_QWORD *)(v20 + 56);
    if ( v21 && v19 != v21 )
    {
      Child = -1072103422;
      CmpRecordParseFailure(a7, 256LL, 3222863874LL);
      goto LABEL_33;
    }
    v166 = 0LL;
  }
  else
  {
    v17 = *(_QWORD *)(v20 + 64);
    v19 = *(_QWORD *)(v20 + 56);
    v166 = v17;
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(v20 + 50);
  v22 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( *(_QWORD *)(v20 + 8) != v22 && v18 )
  {
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v18);
    v18 = 0LL;
    BugCheckParameter2 = 0LL;
    CmpUnlockRegistry();
  }
  HIBYTE(v158) = 0;
  if ( v18 )
  {
    if ( (*(_DWORD *)a7 & 0x400) != 0 )
      CmpLockRegistryExclusive(v22, v17);
    else
      CmpLockRegistry();
    HIBYTE(v158) = 1;
    CachedFullKCBName = (const UNICODE_STRING *)CmpGetCachedFullKCBName(v18, (_BYTE *)&v160 + 1);
    v24 = CachedFullKCBName;
    if ( CachedFullKCBName && !BYTE1(v160) && RtlPrefixUnicodeString(CachedFullKCBName, String2, 1u) )
    {
      v25 = String2->Length - v24->Length;
      v26 = String2->MaximumLength - v24->Length;
      v27 = &String2->Buffer[(unsigned __int64)v24->Length >> 1];
      v28 = v25;
      LOWORD(v175) = v25;
      v29 = v27;
      *((_QWORD *)&v175 + 1) = v27;
      v30 = v26;
      WORD1(v175) = v26;
      if ( v25 )
      {
        do
        {
          if ( *v29 != 92 )
            break;
          ++v29;
          v30 -= 2;
          v28 -= 2;
        }
        while ( v28 );
        *((_QWORD *)&v175 + 1) = v29;
        LOWORD(v175) = v28;
        WORD1(v175) = v30;
      }
      v31 = ((*(_DWORD *)(BugCheckParameter2 + 8) >> 21) & 0x3FF) - 1;
      if ( (*(_DWORD *)a7 & 1) != 0 && !v28 )
      {
        v32 = *(_QWORD *)(BugCheckParameter2 + 80);
        v33 = *(unsigned __int16 *)(v32 + 24);
        v84 = (*(_DWORD *)v32 & 1) == 0;
        v34 = *(unsigned __int16 *)(v32 + 24);
        if ( v84 )
          v34 = (unsigned __int64)v33 >> 1;
        else
          LOWORD(v33) = 2 * v33;
        v11 = 1;
        v163 = 1;
        *((_QWORD *)&v175 + 1) = &v27[-v34];
        LOWORD(v175) = v25 + v33;
        WORD1(v175) = v26 + v33;
        --v31;
      }
      v35 = CmpComputeComponentHashes(&v175, (char *)&v160 + 2, v190);
      Child = v35;
      if ( v35 < 0 )
      {
        v36 = (unsigned int)v35;
        v37 = 512LL;
LABEL_31:
        CmpRecordParseFailure(a7, v37, v36);
LABEL_32:
        v18 = BugCheckParameter2;
        goto LABEL_33;
      }
      if ( (unsigned int)(SHIWORD(v160) + v31) > 0x20 )
      {
        Child = -1073741811;
        v37 = 768LL;
        v36 = 3221225485LL;
        goto LABEL_31;
      }
      v40 = CmpValidateComponents((unsigned int)SHIWORD(v160), v190);
      Child = v40;
      if ( v40 < 0 )
      {
        v36 = (unsigned int)v40;
        v37 = 1024LL;
        goto LABEL_31;
      }
      v18 = BugCheckParameter2;
      if ( v11 == v41 )
      {
        CmpLockHashEntrySharedByKcb(BugCheckParameter2);
        HIBYTE(v159) = 1;
      }
      CmpLockKcbShared(v18);
      if ( (unsigned __int8)CmpIsKeyDeleted(v18, 0LL) || (*(_DWORD *)(v18 + 8) & 0x40000) != 0 )
      {
        CmpUnlockKcb(v18);
        if ( HIBYTE(v159) )
          CmpUnlockHashEntryByKcb(v18);
        CmpDereferenceKeyControlBlock(v18);
        v11 = 0;
        BugCheckParameter2 = 0LL;
        v18 = 0LL;
        v163 = 0;
        v175 = *(_OWORD *)v174;
        CmpCleanupPathInfo(v190);
        memset(v190, 0, 0xA8uLL);
        v42 = 0;
        HIBYTE(v159) = 0;
      }
      else
      {
        CmpUnlockKcb(v18);
        v42 = HIBYTE(v159);
      }
      goto LABEL_49;
    }
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
    v18 = 0LL;
    BugCheckParameter2 = 0LL;
    CmpUnlockRegistry();
    HIBYTE(v158) = 0;
  }
  v42 = 0;
LABEL_49:
  BYTE1(v160) = v42;
  if ( !v18 )
  {
    v18 = *(_QWORD *)(v167 + 8);
    v43 = CmpComputeComponentHashes(&v175, (char *)&v160 + 2, v190);
    Child = v43;
    if ( v43 < 0 )
    {
      CmpRecordParseFailure(a7, 1280LL, (unsigned int)v43);
      goto LABEL_364;
    }
    v44 = CmpValidateComponents((unsigned int)SHIWORD(v160), v190);
    Child = v44;
    if ( v44 < 0 )
    {
      CmpRecordParseFailure(a7, 1536LL, (unsigned int)v44);
      goto LABEL_364;
    }
  }
  CmpRecordParseStartingKcb(a7, v18);
  v45 = (unsigned int)SHIWORD(v160);
  v46 = ((*(_DWORD *)(v18 + 8) >> 21) & 0x3FF) - v11;
  LODWORD(v174) = v11;
  LODWORD(v178) = SHIWORD(v160);
  if ( (unsigned int)(v45 + v46) > 0x200 )
  {
    Child = -1073741811;
    CmpRecordParseFailure(a7, 1792LL, 3221225485LL);
    goto LABEL_364;
  }
  if ( !HIBYTE(v158) )
  {
    if ( (*(_DWORD *)a7 & 0x400) != 0 )
      CmpLockRegistryExclusive(v11, v45);
    else
      CmpLockRegistry();
    LOWORD(v45) = HIWORD(v160);
    HIBYTE(v158) = 1;
  }
  v47 = *(_DWORD *)(v167 + 48);
  if ( (v47 & 9) != 0 )
  {
    v48 = 3221226533LL;
    if ( (v47 & 1) == 0 )
      v48 = 3221225852LL;
    Child = v48;
    CmpRecordParseFailure(a7, 2048LL, v48);
    goto LABEL_364;
  }
  if ( v11 == (_WORD)v45 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v18);
    v14 = v18;
    v168 = v18;
    if ( v18 == BugCheckParameter2 )
    {
      v49 = v163;
      BYTE1(v158) = BYTE1(v160);
      HIBYTE(v159) = 0;
    }
    else
    {
      CmpLockHashEntrySharedByKcb(v18);
      v49 = v163;
      BYTE1(v158) = 1;
    }
LABEL_72:
    v51 = HIWORD(v160);
    if ( (_WORD)v49 == HIWORD(v160) && (*(_DWORD *)a7 & 1) == 0 )
    {
      CmpUnlockHashEntryByKcb(v14);
      BYTE1(v158) = 0;
    }
    CmpLockKcbShared(v14);
    if ( (__int16)v49 >= v51 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    else
    {
      DestinationString.Buffer = *(wchar_t **)(CmpGetComponentNameAtIndex(v190, (unsigned int)(__int16)v49) + 8);
      DestinationString.Length = v175 - 2 * (((__int64)DestinationString.Buffer - *((_QWORD *)&v175 + 1)) >> 1);
      DestinationString.MaximumLength = DestinationString.Length;
    }
    Child = CmpVEExecuteParseLogic(
              v14,
              (unsigned int)&DestinationString,
              a7,
              (_DWORD)String2,
              v158,
              (__int64)&v170->SubjectSecurityContext);
    CmpUnlockKcb(v14);
    if ( Child != -1073741199 )
    {
      CmpRecordParseFailure(a7, 2496LL, (unsigned int)Child);
      goto LABEL_362;
    }
    if ( !(unsigned __int8)CmpOKToFollowLink(*(_QWORD *)(a7 + 64), *(_QWORD *)(v14 + 32)) )
    {
      Child = -1073741790;
      CmpRecordParseFailure(a7, 2560LL, 3221225506LL);
      goto LABEL_362;
    }
    v52 = v166;
    if ( v19 || v166 )
    {
      if ( *(_QWORD *)(v14 + 32) != CmpMasterHive )
      {
        if ( (v19 || v166) && *(_WORD *)(v14 + 66) )
        {
          CmpLogUnsupportedOperation(8LL);
          if ( !PsIsCurrentThreadInServerSilo(v55, v54) )
          {
            Child = -1072103419;
            CmpRecordParseFailure(a7, 2816LL, 3222863877LL);
            goto LABEL_362;
          }
          v19 = 0LL;
          v53 = 0LL;
        }
        else
        {
          v53 = v166;
        }
LABEL_94:
        if ( !CmpTransSilentIgnore() && (v19 || v53) )
        {
          Child = CmpTransSearchAddTransFromHive(*(_QWORD *)(v14 + 32), v19, v53, 0, (__int64)&v176);
          if ( Child < 0 )
          {
            if ( BYTE1(v158) )
            {
              CmpUnlockHashEntryByKcb(v14);
              BYTE1(v158) = 0;
            }
            CmpUnlockRegistry();
            Child = CmpTransSearchAddTransFromHive(*(_QWORD *)(v14 + 32), v19, v53, 1, (__int64)&v176);
            CmpLockRegistry();
            v56 = (unsigned int)Child;
            HIBYTE(v158) = 1;
            if ( Child >= 0 )
              v56 = 3221226029LL;
            Child = v56;
            CmpRecordParseFailure(a7, 3072LL, v56);
            goto LABEL_362;
          }
          v12 = v176;
        }
        started = CmpStartKcbStack(v187, *(unsigned __int16 *)(v14 + 66));
        Child = started;
        if ( started < 0 )
        {
          CmpRecordParseFailure(a7, 3328LL, (unsigned int)started);
          goto LABEL_362;
        }
        v58 = CmpStartKcbStack(v189, *(unsigned __int16 *)(v14 + 66));
        Child = v58;
        if ( v58 < 0 )
        {
          CmpRecordParseFailure(a7, 3584LL, (unsigned int)v58);
          goto LABEL_362;
        }
        v166 = (__int64)v189;
        v59 = (__int64)v187;
        CmpPopulateKcbStack(v187, v14);
        v60 = HIWORD(v160);
        if ( (__int16)v49 < SHIWORD(v160) )
        {
          while ( 1 )
          {
            CmpLockKcbStackShared(v59);
            if ( (unsigned __int8)CmpIsKeyStackDeleted(v59, v12) )
            {
              if ( CmpLoadingSystemHivesActive
                && (v14 = v168, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                && *(_QWORD *)(v168 + 32) == CmpMasterHive
                && (*(_DWORD *)(v168 + 8) & 0x7FE00000) == 0x600000
                && (__int16)v49 > 0
                && (ComponentNameAtIndex = CmpGetComponentNameAtIndex(v190, (unsigned int)((__int16)v49 - 1)),
                    (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v78, v79, a7 + 136)) )
              {
                *(_DWORD *)a7 |= 0x100u;
                Child = 259;
                CmpRecordParseFailure(a7, 3840LL, 259LL);
              }
              else
              {
                Child = -1073741772;
                CmpRecordParseFailure(a7, 4096LL, 3221225524LL);
              }
              goto LABEL_353;
            }
            if ( (unsigned __int8)CmpIsKeyStackSymlink(v59) )
              break;
            CmpUnlockKcbStack(v59);
            v61 = CmpGetComponentNameAtIndex(v190, (unsigned int)(__int16)v49);
            ComponentHashAtIndex = CmpGetComponentHashAtIndex(v190, (unsigned int)(__int16)v49, v61);
            v64 = (*(_DWORD *)a7 & 1) != 0 && (__int16)v49 == (_DWORD)v178 - 1;
            LODWORD(v156) = ComponentHashAtIndex + 37 * *(_DWORD *)(v14 + 16);
            v65 = CmpWalkOneLevel(v14, v59, &v180, v166, &v161, v63, ComponentHashAtIndex, v156, v12, v64, a7);
            Child = v65;
            if ( v65 == -1073741772 )
            {
              if ( !CmpLoadingSystemHivesActive )
                goto LABEL_131;
              v14 = v168;
              if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread() || *(_QWORD *)(v168 + 32) != CmpMasterHive )
              {
                v65 = Child;
LABEL_131:
                CmpRecordParseFailure(a7, 5504LL, (unsigned int)v65);
                goto LABEL_362;
              }
              if ( (*(_DWORD *)(v168 + 8) & 0x7FE00000) == 0x600000 && (__int16)v49 > 0 )
              {
                v66 = CmpGetComponentNameAtIndex(v190, (unsigned int)((__int16)v49 - 1));
                if ( (unsigned __int8)CmpWaitForHiveMount(v66, v67, v68, a7 + 136) )
                {
                  *(_DWORD *)a7 |= 0x100u;
                  Child = 259;
                  CmpRecordParseFailure(a7, 5120LL, 259LL);
                  goto LABEL_362;
                }
              }
              if ( (*(_DWORD *)(v14 + 8) & 0x7FE00000) == 0x400000 )
              {
                v69 = CmpGetComponentNameAtIndex(v190, (unsigned int)(__int16)v49);
                if ( (unsigned __int8)CmpWaitForHiveMount(v69, v70, v71, a7 + 136) )
                {
                  *(_DWORD *)a7 |= 0x100u;
                  Child = 259;
                  CmpRecordParseFailure(a7, 5376LL, 259LL);
                  goto LABEL_362;
                }
              }
              v65 = Child;
              v12 = v176;
            }
            if ( v65 < 0 )
              goto LABEL_131;
            v72 = v180;
            CmpRecordParseWalkResult(a7, v180);
            CmpDereferenceKeyControlBlockUnsafe(v14);
            LOWORD(v49) = v49 + 1;
            v168 = v72;
            v14 = v72;
            BYTE1(v158) = v161;
            v60 = HIWORD(v160);
            v73 = v59;
            v59 = v166;
            v74 = (_OWORD *)v73;
            v166 = v73;
            v180 = 0LL;
            v161 = 0;
            v163 = v49;
            if ( (__int16)v49 >= SHIWORD(v160) )
              goto LABEL_147;
          }
          SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                 v59,
                                 (__int64)v190,
                                 v49,
                                 v60,
                                 v12,
                                 a7,
                                 (__int64)&v181,
                                 (__int64)String2,
                                 (ULONG_PTR *)(a7 + 88));
          Child = SymbolicLinkTarget;
          if ( SymbolicLinkTarget >= 0 )
          {
            *(_DWORD *)a7 &= ~8u;
            if ( !*(_QWORD *)(a7 + 64) )
            {
              v76 = *(_QWORD *)(v14 + 32);
              if ( (*(_DWORD *)(v76 + 4152) & 1) != 0 )
                *(_QWORD *)(a7 + 64) = v76;
            }
            Child = 260;
            CmpRecordParseFailure(a7, 4864LL, 260LL);
          }
          else
          {
            CmpRecordParseFailure(a7, 4608LL, (unsigned int)SymbolicLinkTarget);
          }
          goto LABEL_362;
        }
        v74 = v189;
LABEL_147:
        v80 = *(_QWORD *)(v14 + 72);
        v81 = (__int64 *)(v14 + 72);
        *(_QWORD *)v165 = v74;
        v82 = v74;
        v178 = v14 + 72;
        if ( v80 )
        {
          CmpPopulateKcbStack(v74, v80);
          v80 = *v81;
        }
        else
        {
          v82 = 0LL;
          *(_QWORD *)v165 = 0LL;
        }
        v83 = *(_QWORD *)(v167 + 8);
        if ( v80 != v83 && v14 != v83 )
        {
          CmpLockKcbShared(v83);
          BYTE2(v158) = 1;
        }
        v84 = v82 == 0LL;
        if ( v82 )
        {
          CmpLockKcbStackShared(v82);
          v84 = v82 == 0LL;
        }
        v85 = !v84;
        v10 = !v84;
        CmpLockKcbStackShared(v59);
        if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v167, 0LL) )
        {
          v86 = 3221226533LL;
          v87 = 5888LL;
          v88 = a7;
          if ( (*(_BYTE *)(v167 + 48) & 1) == 0 )
            v86 = 3221225852LL;
LABEL_158:
          Child = v86;
          CmpRecordParseFailure(v88, v87, v86);
          v10 = v85;
LABEL_353:
          CmpUnlockKcbStack(v59);
LABEL_354:
          v144 = *(_QWORD *)v165;
LABEL_355:
          if ( v10 )
            CmpUnlockKcbStack(v144);
LABEL_357:
          if ( BYTE2(v158) )
            CmpUnlockKcb(*(_QWORD *)(v167 + 8));
          if ( HIBYTE(v162) )
            CmpUnlockHashEntry(*(PVOID *)(a7 + 48), 0);
          goto LABEL_362;
        }
        LOWORD(v163) = v163 - 1;
        v174 = v14 + 184;
        if ( (*(_DWORD *)(v14 + 184) & 0x20000) != 0 )
        {
          Child = -1073741772;
          CmpRecordParseFailure(a7, 6144LL, 3221225524LL);
          v10 = v85;
          goto LABEL_353;
        }
        if ( !CmRmIsKcbStackVisible(v59) )
        {
          Child = -1073741772;
          CmpRecordParseFailure(a7, 6400LL, 3221225524LL);
          v10 = v85;
          goto LABEL_353;
        }
        if ( (*(_DWORD *)a7 & 2) != 0 )
        {
          CmpUnlockKcbStack(v59);
          v89 = *(_QWORD *)v165;
          CmpUnlockKcbStack(*(_QWORD *)v165);
          if ( BYTE2(v158) )
            CmpUnlockKcb(*(_QWORD *)(v167 + 8));
          HIBYTE(v162) = CmpTryToLockHashEntryExclusive(*(_QWORD *)(a7 + 48), 0LL);
          if ( BYTE2(v158) )
            CmpLockKcbShared(*(_QWORD *)(v167 + 8));
          CmpLockKcbStackTopExclusiveRestShared(v89);
          CmpLockKcbStackTopExclusiveRestShared(v59);
          v166 = CmpGetComponentNameAtIndex(v190, (unsigned int)(__int16)v163);
          v91 = CmpGetComponentHashAtIndex(v190, (unsigned int)v90, v90);
          if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v167, 0LL) )
          {
            v86 = 3221226533LL;
            v87 = 6656LL;
            v88 = a7;
            if ( (*(_BYTE *)(v167 + 48) & 1) == 0 )
              v86 = 3221225852LL;
            goto LABEL_158;
          }
          if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v165, v12) )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 6912LL, 3221225524LL);
            v10 = v85;
            goto LABEL_353;
          }
          if ( !(unsigned __int8)CmpIsKeyStackDeleted(v59, v12) )
          {
            v95 = 7168LL;
LABEL_176:
            Child = -1073741790;
            CmpRecordParseFailure(a7, v95, 3221225506LL);
            v10 = v85;
            goto LABEL_353;
          }
          if ( *(_QWORD *)(*(_QWORD *)v178 + 32LL) != CmpMasterHive )
          {
            v95 = 7424LL;
            goto LABEL_176;
          }
          if ( (*(_DWORD *)(*(_QWORD *)v178 + 184LL) & 0x20000) != 0 )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 7680LL, 3221225524LL);
            v10 = v85;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
          {
            CmpAttachToRegistryProcess(a7 + 168, v92, v93, v94);
            *(_DWORD *)(a7 + 160) |= 1u;
          }
          v96 = *(unsigned int *)(a7 + 40);
          v97 = *(_QWORD *)(a7 + 48);
          if ( (_DWORD)v96 == -1 )
          {
            HiveRootCell = CmpCreateHiveRootCell(v97, a7 + 40);
            Child = HiveRootCell;
            if ( HiveRootCell < 0 )
            {
              CmpRecordParseFailure(a7, 7808LL, (unsigned int)HiveRootCell);
              v10 = v85;
              goto LABEL_353;
            }
          }
          else
          {
            updated = CmpUpdateHiveRootCellFlags(v97, v96);
            Child = updated;
            if ( updated < 0 )
            {
              CmpRecordParseFailure(a7, 7936LL, (unsigned int)updated);
              v10 = v85;
              goto LABEL_353;
            }
          }
          *(_WORD *)(v14 + 186) |= 2u;
          LODWORD(v156) = 0;
          *(_DWORD *)v155 = v91;
          Child = CmpCreateKeyControlBlock(
                    *(_QWORD *)(a7 + 48),
                    -1,
                    v14,
                    *(_QWORD *)(a7 + 80),
                    1,
                    (unsigned __int16 *)v166,
                    *(_QWORD *)v155,
                    v156,
                    &v182);
          *(_WORD *)(v14 + 186) = *(_WORD *)(v174 + 2) & 0xFFFD;
          if ( Child < 0 )
          {
            CmpRecordParseFailure(a7, 0x2000LL, (unsigned int)Child);
            v10 = v85;
            goto LABEL_353;
          }
          v100 = v14;
          v14 = v182;
          CmpDereferenceKeyControlBlockUnsafe(v100);
          CmpUnlockHashEntryByKcb(v100);
          BYTE1(v158) = 0;
          v101 = CmpStartKcbStackForTopLayerKcb(v185, v14);
          Child = v101;
          if ( v101 < 0 )
          {
            CmpRecordParseFailure(a7, 8448LL, (unsigned int)v101);
            v10 = v85;
            goto LABEL_353;
          }
          *(_WORD *)(v100 + 186) |= 2u;
          CmpLockKcbStackTopExclusiveRestShared(v185);
          *(_WORD *)(v100 + 186) &= ~2u;
          v164 = 1;
          KeyBody = CmpCreateKeyBody(v14, 1, (__int64)v185, (__int64)&DmaAdapter, (__int64)&v159);
          Child = KeyBody;
          if ( KeyBody < 0 )
          {
            CmpRecordParseFailure(a7, 8576LL, (unsigned int)KeyBody);
            v10 = v85;
            goto LABEL_352;
          }
          HvLockHiveFlusherShared(*(_QWORD *)(v100 + 32));
          HvLockHiveFlusherExclusive(*(_QWORD *)(v14 + 32));
          v103 = *(_QWORD *)(v14 + 32);
          v104 = *(unsigned int *)(a7 + 40);
          LODWORD(v174) = *(_DWORD *)(v103 + 104);
          if ( !(unsigned __int8)HvMarkCellDirty(v103, v104, 0LL) )
          {
            Child = -1073741443;
            CmpRecordParseFailure(a7, 8704LL, 3221225853LL);
LABEL_196:
            HvUnlockHiveFlusherExclusive(*(_QWORD *)(v14 + 32));
            HvUnlockHiveFlusherShared(*(_QWORD *)(v100 + 32));
            goto LABEL_352;
          }
          Child = CmpCreateChild(v165[0], v59, (_DWORD)v170, v166, a7, 10, 0, 1, v12);
          if ( Child < 0 )
            goto LABEL_196;
          LOBYTE(v105) = 1;
          *(_DWORD *)(v14 + 40) = *(_DWORD *)(a7 + 40);
          *(_DWORD *)(CmpGetKeyNodeForKcb(v14, &v179, v105, v106) + 16) = *(_DWORD *)(v100 + 40);
          ++*(_QWORD *)(v14 + 304);
          CmpRebuildKcbCacheFromNode(v14);
          CmpReleaseKeyNodeForKcb(v14, &v179);
          if ( !(_DWORD)v174 )
            HvResetDirtyData(*(_QWORD *)(v14 + 32));
          HvUnlockHiveFlusherExclusive(*(_QWORD *)(v14 + 32));
          HvUnlockHiveFlusherShared(*(_QWORD *)(v100 + 32));
          *(_WORD *)(v100 + 8) |= 8u;
          CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v14);
          *(_QWORD *)(v100 + 104) = v14;
          CmpUnlockHashEntry(*(PVOID *)(a7 + 48), 0);
          goto LABEL_201;
        }
        if ( (*(_DWORD *)a7 & 0x20) != 0 )
        {
          CmpUnlockKcbStack(v59);
          v111 = *(_QWORD *)v165;
          CmpUnlockKcbStack(*(_QWORD *)v165);
          CmpLockKcbStackTopExclusiveRestShared(v111);
          CmpLockKcbStackTopExclusiveRestShared(v59);
          if ( (unsigned __int8)CmpIsKeyStackDeleted(v111, v12) )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 8960LL, 3221225524LL);
            v10 = v85;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)(*v81 + 184) & 0x20000) != 0 )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 9216LL, 3221225524LL);
            v10 = v85;
            goto LABEL_353;
          }
          v112 = CmpGetComponentNameAtIndex(v190, (unsigned int)(__int16)v163);
          v113 = *(_DWORD *)(a7 + 24) >> 2;
          LOBYTE(v113) = (*(_DWORD *)(a7 + 24) & 4) != 0;
          if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                   v113,
                                   v111,
                                   a7,
                                   (_DWORD)v170,
                                   v158,
                                   16 * (*(_DWORD *)(a7 + 24) & 2u),
                                   v113,
                                   v12,
                                   (__int64)&Child) )
          {
            CmpRecordParseFailure(a7, 9472LL, (unsigned int)Child);
            v10 = v85;
            goto LABEL_353;
          }
          CmpCleanUpKcbCachedSymlink(v14);
          *(_WORD *)(v14 + 186) |= 0x40u;
          *(_DWORD *)(v14 + 100) = -1;
          *(_DWORD *)(v14 + 96) = *(_DWORD *)(a7 + 56);
          Child = CmpCreateKeyBody(v14, 1, v59, (__int64)&DmaAdapter, (__int64)&v159);
          v10 = v85;
          if ( Child < 0 )
            goto LABEL_353;
          if ( !(unsigned __int8)CmpIsKeyStackDeleted(v59, v12) )
            goto LABEL_202;
          Child = CmpCreateChild(v165[0], v59, (_DWORD)v170, v112, a7, 64, 0, 0, v12);
          if ( Child < 0 )
            goto LABEL_353;
LABEL_201:
          *(_DWORD *)(a7 + 32) = 1;
LABEL_202:
          v10 = v85;
LABEL_203:
          v107 = v158;
          goto LABEL_204;
        }
        if ( !(unsigned __int8)CmpIsKeyStackDeleted(v59, v12) )
        {
          if ( (unsigned __int8)CmpIsKeyStackSymlink(v59) && (*(_DWORD *)a7 & 0x200) == 0 )
          {
            if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
            {
              v144 = *(_QWORD *)v165;
              if ( *(_QWORD *)v165 )
                CmpUnlockKcbStack(*(_QWORD *)v165);
              v145 = 0;
              if ( !v144 )
                v145 = v10;
              v10 = v145;
              if ( BYTE2(v158) )
              {
                CmpUnlockKcb(*(_QWORD *)(v167 + 8));
                BYTE2(v158) = 0;
              }
              if ( BYTE1(v158) )
              {
                CmpUnlockHashEntryByKcb(v14);
                BYTE1(v158) = 0;
              }
              v146 = CmpGetSymbolicLinkTarget(
                       v59,
                       (__int64)v190,
                       0,
                       0,
                       v12,
                       a7,
                       (__int64)&v181,
                       (__int64)String2,
                       (ULONG_PTR *)(a7 + 88));
              Child = v146;
              if ( v146 >= 0 )
              {
                *(_DWORD *)a7 &= ~8u;
                if ( !*(_QWORD *)(a7 + 64) )
                {
                  v147 = *(_QWORD *)(v14 + 32);
                  if ( (*(_DWORD *)(v147 + 4152) & 1) != 0 )
                    *(_QWORD *)(a7 + 64) = v147;
                }
                Child = 260;
                CmpRecordParseFailure(a7, 14592LL, 260LL);
              }
              else
              {
                CmpRecordParseFailure(a7, 14336LL, (unsigned int)v146);
              }
              goto LABEL_355;
            }
            Child = -1073741771;
            CmpRecordParseFailure(a7, 14080LL, 3221225525LL);
            v10 = v85;
            goto LABEL_353;
          }
          if ( (_BYTE)v162 )
          {
            Child = -1073741811;
            CmpRecordParseFailure(a7, 14848LL, 3221225485LL);
            v10 = v85;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)v174 & 0x20000) != 0 )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 15104LL, 3221225524LL);
            v10 = v85;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
          {
            Child = -1073741771;
            CmpRecordParseFailure(a7, 15360LL, 3221225525LL);
            v10 = v85;
            goto LABEL_353;
          }
          v148 = (int)String2;
          v149 = CmpDoWritethroughReparse(v14, v59, v165[0], 0, 0LL, a7, (__int64)String2);
          Child = v149;
          if ( v149 != -1073741199 )
          {
            CmpRecordParseFailure(a7, 15424LL, v149);
            v10 = v85;
            goto LABEL_353;
          }
          v150 = CmpVEExecuteOpenLogic(v14, a7, 0, v148, v158, (__int64)&v170->SubjectSecurityContext);
          Child = v150;
          if ( v150 != -1073741199 )
          {
            CmpRecordParseFailure(a7, 15488LL, v150);
            v10 = v85;
            goto LABEL_353;
          }
          v107 = v158;
          Child = CmpCreateKeyBody(v14, 0, v59, (__int64)&DmaAdapter, (__int64)&v159);
          v151 = (unsigned int)Child;
          v10 = v85;
          if ( Child < 0 )
          {
            if ( Child == -1073741444 )
              v151 = 3221225524LL;
            Child = v151;
            CmpRecordParseFailure(a7, 15552LL, v151);
            goto LABEL_353;
          }
LABEL_204:
          if ( *(_DWORD *)(a7 + 32) == 1 )
          {
            *(&DmaAdapter->Size + 1) = WORD1(DmaAdapter->DmaOperations->MapTransfer);
          }
          else if ( !(unsigned __int8)CmpCheckOpenAccessOnKeyBody(
                                        DmaAdapter,
                                        v59,
                                        a7,
                                        v170,
                                        v107,
                                        (*(_DWORD *)(a7 + 24) & 4) != 0,
                                        v12,
                                        (bool *)&v160,
                                        &Child) )
          {
            if ( (_BYTE)v160 )
            {
              if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
              {
                CmpAttachToRegistryProcess(a7 + 168, v108, v109, v110);
                *(_DWORD *)(a7 + 160) |= 1u;
              }
              v177 = CmpConstructName(v14);
            }
            CmpRecordParseFailure(a7, 15584LL, (unsigned int)Child);
            goto LABEL_351;
          }
          *v184 = DmaAdapter;
          DmaAdapter = 0LL;
          if ( !*(_DWORD *)(a7 + 32) )
            *(_DWORD *)(a7 + 32) = 2;
          Child = (_BYTE)v159 != 0 ? 0x40000016 : 0;
LABEL_351:
          HIBYTE(v162) = 0;
          if ( !v164 )
            goto LABEL_353;
LABEL_352:
          CmpUnlockKcbStack(v185);
          goto LABEL_353;
        }
        if ( (_BYTE)v162 )
        {
          Child = -1073741811;
          CmpRecordParseFailure(a7, 9728LL, 3221225485LL);
          v10 = v85;
          goto LABEL_353;
        }
        v114 = *(_QWORD *)v165;
        if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v165, v12) || !CmRmIsKcbStackVisible(v114) )
        {
          Child = -1073741772;
          CmpRecordParseFailure(a7, 9984LL, 3221225524LL);
          v10 = v85;
          goto LABEL_353;
        }
        if ( (*(_DWORD *)(*v81 + 184) & 0x20000) != 0 )
        {
          Child = -1073741772;
          CmpRecordParseFailure(a7, 10240LL, 3221225524LL);
          v10 = v85;
          goto LABEL_353;
        }
        if ( (*(_DWORD *)a7 & 1) == 0 )
        {
          if ( CmpLoadingSystemHivesActive
            && (v14 = v168, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
            && *(_QWORD *)(v168 + 32) == CmpMasterHive
            && (*(_DWORD *)(v168 + 8) & 0x7FE00000) == 0x600000
            && (v115 = CmpGetComponentNameAtIndex(v190, (unsigned int)(__int16)v163),
                (unsigned __int8)CmpWaitForHiveMount(v115, v116, v117, a7 + 136)) )
          {
            *(_DWORD *)a7 |= 0x100u;
            Child = 259;
            CmpRecordParseFailure(a7, 10496LL, 259LL);
            v10 = v85;
          }
          else
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 10752LL, 3221225524LL);
            v10 = v85;
          }
          goto LABEL_353;
        }
        v166 = v14 + 32;
        if ( *(_QWORD *)(v14 + 32) == CmpMasterHive && CmpNoMasterCreates )
        {
          v14 = v168;
          if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
          {
            if ( CmpLoadingSystemHivesActive
              && (*(_DWORD *)(v168 + 8) & 0x7FE00000) == 0x600000
              && (v118 = CmpGetComponentNameAtIndex(v190, (unsigned int)(__int16)v163),
                  (unsigned __int8)CmpWaitForHiveMount(v118, v119, v120, a7 + 136)) )
            {
              *(_DWORD *)a7 |= 0x100u;
              Child = 259;
              CmpRecordParseFailure(a7, 11008LL, 259LL);
              v10 = v85;
            }
            else
            {
              Child = -1073741811;
              CmpRecordParseFailure(a7, 11264LL, 3221225485LL);
              v10 = v85;
            }
            goto LABEL_353;
          }
          v12 = v176;
        }
        v121 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v190, (unsigned int)(__int16)v163);
        LOBYTE(v122) = 1;
        v123 = CmpDoWritethroughReparse(v14, v59, v165[0], v122, v121, a7, (__int64)String2);
        Child = v123;
        if ( v123 != -1073741199 )
        {
          CmpRecordParseFailure(a7, 11392LL, v123);
          v10 = v85;
          goto LABEL_353;
        }
        if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
        {
          CmpAttachToRegistryProcess(a7 + 168, v124, v125, v126);
          *(_DWORD *)(a7 + 160) |= 1u;
        }
        if ( *(_DWORD *)(*v81 + 40) == -1 )
        {
          if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                   16 * (*(_DWORD *)(a7 + 24) & 2u),
                                   v165[0],
                                   a7,
                                   (_DWORD)v170,
                                   v158,
                                   16 * (*(_DWORD *)(a7 + 24) & 2u),
                                   (*(_DWORD *)(a7 + 24) & 4) != 0,
                                   v12,
                                   (__int64)&Child) )
          {
            if ( KeGetCurrentThread()->PreviousMode == 1 )
            {
              CurrentThreadProcess = PsGetCurrentThreadProcess();
              if ( !(unsigned __int8)CmpDoesProcessBelongToServiceSession(CurrentThreadProcess) )
              {
                if ( (unsigned __int8)CmpCheckKeyOwnerForPca(*(_QWORD *)v165, v176) )
                {
                  v128 = *v81;
                  LOBYTE(v160) = 1;
                  v177 = CmpConstructName(v128);
                }
              }
            }
            CmpRecordParseFailure(a7, 11520LL, (unsigned int)Child);
            v14 = v168;
            v10 = v85;
            goto LABEL_353;
          }
          CmpUnlockKcbStack(v59);
          CmpUnlockKcbStack(*(_QWORD *)v165);
          if ( BYTE2(v158) )
          {
            CmpUnlockKcb(*(_QWORD *)(v167 + 8));
            BYTE2(v158) = 0;
          }
          LOBYTE(v129) = 1;
          Child = CmpPromoteKey(*(_QWORD *)v165, 0LL, v129);
          v130 = (unsigned int)Child;
          if ( Child < 0 )
          {
            if ( Child == -1073741444 )
              v130 = 3221225524LL;
            Child = v130;
            CmpRecordParseFailure(a7, 11776LL, v130);
            v10 = v85;
            goto LABEL_354;
          }
          v131 = *(_QWORD *)v165;
        }
        else
        {
          CmpUnlockKcbStack(v59);
          v131 = *(_QWORD *)v165;
          CmpUnlockKcbStack(*(_QWORD *)v165);
          CmpLockKcbStackTopExclusiveRestShared(v131);
        }
        CmpLockKcbStackTopExclusiveRestShared(v59);
        if ( !CmRmIsKcbStackVisible(v59) )
        {
          Child = -1073741772;
          CmpRecordParseFailure(a7, 12032LL, 3221225524LL);
          v10 = 1;
          goto LABEL_353;
        }
        if ( (unsigned __int8)CmpIsKeyStackDeleted(v59, v12) )
        {
          if ( (unsigned __int8)CmpIsKeyStackDeleted(v131, v12) || !CmRmIsKcbStackVisible(v131) )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 12288LL, 3221225524LL);
            v10 = 1;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)(*v81 + 184) & 0x20000) != 0 )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 12544LL, 3221225524LL);
            v10 = 1;
            goto LABEL_353;
          }
          Logic = CmpVEExecuteCreateLogic(
                    *v81,
                    v14,
                    (_DWORD)v121,
                    (_DWORD)v170,
                    v158,
                    16 * (*(_DWORD *)(a7 + 24) & 2u),
                    v12,
                    a7,
                    (__int64)String2);
          Child = Logic;
          if ( Logic == -1073741739 )
          {
            *(_DWORD *)a7 |= 0x400u;
            Child = -1073741267;
            CmpRecordParseFailure(a7, 12672LL, 3221226029LL);
            v10 = 1;
            goto LABEL_353;
          }
          if ( Logic != -1073741199 )
          {
            CmpRecordParseFailure(a7, 12736LL, Logic);
            v10 = 1;
            goto LABEL_353;
          }
          if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                   16 * (*(_DWORD *)(a7 + 24) & 2u),
                                   v131,
                                   a7,
                                   (_DWORD)v170,
                                   v158,
                                   16 * (*(_DWORD *)(a7 + 24) & 2u),
                                   (*(_DWORD *)(a7 + 24) & 4) != 0,
                                   v12,
                                   (__int64)&Child) )
          {
            if ( KeGetCurrentThread()->PreviousMode == 1 )
            {
              v133 = PsGetCurrentThreadProcess();
              if ( !(unsigned __int8)CmpDoesProcessBelongToServiceSession(v133) )
              {
                if ( (unsigned __int8)CmpCheckKeyOwnerForPca(v131, v176) )
                {
                  v134 = *v81;
                  LOBYTE(v160) = 1;
                  v177 = CmpConstructName(v134);
                }
              }
            }
            CmpRecordParseFailure(a7, 12800LL, (unsigned int)Child);
            v14 = v168;
            v10 = 1;
            goto LABEL_353;
          }
          v135 = CmpCreateKeyBody(v14, 1, v59, (__int64)&DmaAdapter, (__int64)&v159);
          Child = v135;
          if ( v135 < 0 )
          {
            CmpRecordParseFailure(a7, 12928LL, (unsigned int)v135);
            v10 = 1;
            goto LABEL_353;
          }
          v136 = CmpCreateChild(v131, v59, (_DWORD)v170, (_DWORD)v121, a7, 8 * (*(_WORD *)(a7 + 24) & 2u), 0, 0, v12);
          Child = v136;
          if ( v136 < 0 )
          {
            CmpRecordParseFailure(a7, 12992LL, (unsigned int)v136);
            v10 = 1;
            goto LABEL_353;
          }
          *(_DWORD *)(a7 + 32) = 1;
          goto LABEL_287;
        }
        if ( !(unsigned __int8)CmpIsKeyStackSymlink(v59) || (*(_DWORD *)a7 & 0x200) != 0 )
        {
          if ( (*(_DWORD *)v174 & 0x20000) != 0 )
          {
            Child = -1073741772;
            CmpRecordParseFailure(a7, 13568LL, 3221225524LL);
            v10 = 1;
            goto LABEL_353;
          }
          if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
          {
            v139 = (int)String2;
            v140 = CmpDoWritethroughReparse(v14, v59, v131, 0, 0LL, a7, (__int64)String2);
            Child = v140;
            if ( v140 != -1073741199 )
            {
              CmpRecordParseFailure(a7, 13888LL, v140);
              v10 = 1;
              goto LABEL_353;
            }
            LOBYTE(v141) = 1;
            v142 = CmpVEExecuteOpenLogic(v14, a7, v141, v139, v158, (__int64)&v170->SubjectSecurityContext);
            Child = v142;
            if ( v142 != -1073741199 )
            {
              CmpRecordParseFailure(a7, 13952LL, v142);
              v10 = 1;
              goto LABEL_353;
            }
            v143 = CmpCreateKeyBody(v14, 1, v59, (__int64)&DmaAdapter, (__int64)&v159);
            Child = v143;
            if ( v143 < 0 )
            {
              CmpRecordParseFailure(a7, 14016LL, (unsigned int)v143);
              v10 = 1;
              goto LABEL_353;
            }
LABEL_287:
            v10 = 1;
            goto LABEL_203;
          }
          v137 = 13824LL;
        }
        else
        {
          if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
          {
            CmpUnlockKcbStack(v131);
            if ( BYTE2(v158) )
            {
              CmpUnlockKcb(*(_QWORD *)(v167 + 8));
              BYTE2(v158) = 0;
            }
            if ( BYTE1(v158) )
            {
              CmpUnlockHashEntryByKcb(v14);
              BYTE1(v158) = 0;
            }
            v138 = CmpGetSymbolicLinkTarget(
                     v59,
                     (__int64)v190,
                     0,
                     0,
                     v12,
                     a7,
                     (__int64)&v181,
                     (__int64)String2,
                     (ULONG_PTR *)(a7 + 88));
            Child = v138;
            if ( v138 >= 0 )
            {
              *(_DWORD *)a7 &= ~8u;
              if ( !*(_QWORD *)(a7 + 64) && (*(_DWORD *)(*(_QWORD *)v166 + 4152LL) & 1) != 0 )
                *(_QWORD *)(a7 + 64) = *(_QWORD *)v166;
              Child = 260;
              CmpRecordParseFailure(a7, 13440LL, 260LL);
            }
            else
            {
              CmpRecordParseFailure(a7, 13312LL, (unsigned int)v138);
            }
            goto LABEL_357;
          }
          v137 = 13056LL;
        }
        Child = -1073741771;
        CmpRecordParseFailure(a7, v137, 3221225525LL);
        v10 = 1;
        goto LABEL_353;
      }
      v52 = 0LL;
      LOBYTE(v162) = 1;
      v19 = 0LL;
    }
    v53 = v52;
    goto LABEL_94;
  }
  v50 = CmpPerformCompleteKcbCacheLookup(v18, a7, (__int64)&v168, (__int64)&v158 + 1, (__int64)&v171);
  Child = v50;
  if ( v50 >= 0 && v50 != 259 )
  {
    HIWORD(v49) = HIWORD(v163);
    v14 = v168;
    LOWORD(v49) = v171 + v163;
    v163 = v49;
    CmpRecordParseKcbCacheResult(a7, v168, (unsigned int)(__int16)v171);
    goto LABEL_72;
  }
  CmpRecordParseFailure(a7, 2432LL, (unsigned int)v50);
  v14 = v168;
LABEL_362:
  if ( BYTE1(v158) )
    CmpUnlockHashEntryByKcb(v14);
LABEL_364:
  if ( !HIBYTE(v159) )
    goto LABEL_32;
  v18 = BugCheckParameter2;
  CmpUnlockHashEntryByKcb(BugCheckParameter2);
LABEL_33:
  CmpCleanupKcbStack(v187);
  CmpCleanupKcbStack(v189);
  CmpCleanupKcbStack(v185);
  v38 = v180;
  if ( v180 )
  {
    CmpDereferenceKeyControlBlockUnsafe(v14);
    v39 = v38;
  }
  else
  {
    if ( !v14 )
      goto LABEL_369;
    v39 = v14;
  }
  CmpDereferenceKeyControlBlock(v39);
LABEL_369:
  if ( v18 )
    CmpDereferenceKeyControlBlock(v18);
  v152 = *(_DWORD *)(a7 + 100);
  if ( v152 && (v152 & 2) != 0 )
  {
    CmpSearchKeyControlBlockTree(CmpSyncKcbCacheForHive, *(_QWORD *)(a7 + 112), &v181);
    *(_DWORD *)(a7 + 100) &= ~2u;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v181);
  if ( HIBYTE(v158) )
    CmpUnlockRegistry();
  v153 = (void *)v177;
  if ( (_BYTE)v160 )
  {
    if ( !v177 )
      goto LABEL_382;
    if ( (unsigned __int8)CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(a7, v153);
  }
  if ( v153 )
    CmpFreeTransientPoolWithTag(v153, 0x624E4D43u);
LABEL_382:
  if ( (*(_DWORD *)(a7 + 160) & 1) != 0 )
    CmpDetachFromRegistryProcess(a7 + 168);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpCleanupPathInfo(v190);
  return (unsigned int)Child;
}
