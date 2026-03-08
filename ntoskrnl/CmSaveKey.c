/*
 * XREFs of CmSaveKey @ 0x140A08D50
 * Callers:
 *     CmDumpKeyToFile @ 0x140A07E64 (CmDumpKeyToFile.c)
 *     NtSaveKeyEx @ 0x140A0BF70 (NtSaveKeyEx.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140613E8C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x140613F14 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpUuidCreate @ 0x140733C60 (CmpUuidCreate.c)
 *     CmpInitializeKeyNodeStack @ 0x1407836E4 (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x140783738 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140783798 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackShared @ 0x1407AF490 (CmpLockKcbStackShared.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpCreateTemporaryHive @ 0x140A09630 (CmpCreateTemporaryHive.c)
 *     CmpSaveKeyByFileCopy @ 0x140A0A220 (CmpSaveKeyByFileCopy.c)
 *     CmpTraceHiveSaveFileCopied @ 0x140A10164 (CmpTraceHiveSaveFileCopied.c)
 *     CmpTraceHiveSaveStart @ 0x140A101D4 (CmpTraceHiveSaveStart.c)
 *     CmpTraceHiveSaveStop @ 0x140A102AC (CmpTraceHiveSaveStop.c)
 *     CmpTraceHiveSaveTreeCopied @ 0x140A1033C (CmpTraceHiveSaveTreeCopied.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140A18A38 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpDestroyHive @ 0x140A19FFC (CmpDestroyHive.c)
 *     CmpLogUnsupportedOperation @ 0x140A1D140 (CmpLogUnsupportedOperation.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140A1D1EC (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x140A1D5E8 (CmpStartKeyNodeStack.c)
 *     HvWriteExternal @ 0x140A1DE94 (HvWriteExternal.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A1E428 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPromoteSubtree @ 0x140A23F00 (CmpPromoteSubtree.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmSaveKey(__int64 a1, __int64 a2, int a3, char a4)
{
  char v5; // si
  char v6; // r12
  BOOLEAN v7; // r13
  __int64 v8; // r15
  ULONG_PTR v9; // rdi
  int started; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ecx
  __int64 EntryAtLayerHeight; // rbx
  unsigned int v28; // r9d
  unsigned int *v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  char v35; // [rsp+30h] [rbp-99h]
  int v37; // [rsp+34h] [rbp-95h] BYREF
  int v38; // [rsp+38h] [rbp-91h]
  __int128 v39; // [rsp+40h] [rbp-89h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+50h] [rbp-79h]
  __int64 v41; // [rsp+60h] [rbp-69h]
  __int64 v42; // [rsp+68h] [rbp-61h]
  __int16 v43[40]; // [rsp+70h] [rbp-59h] BYREF
  UUID v44; // [rsp+C0h] [rbp-9h] BYREF
  UUID Uuid; // [rsp+D0h] [rbp+7h] BYREF

  v41 = a2;
  v38 = a3;
  v42 = a1;
  Uuid = 0LL;
  v44 = 0LL;
  memset(v43, 0, 0x4AuLL);
  v39 = 0LL;
  WORD1(v39) = -1;
  *(_OWORD *)Privileges = 0LL;
  CmpInitializeKeyNodeStack((char *)v43);
  v37 = -1;
  v5 = 0;
  v35 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  started = CmpUuidCreate(&Uuid);
  if ( started >= 0 )
  {
    started = CmpUuidCreate(&v44);
    if ( started >= 0 )
    {
      v9 = CmpCreateTemporaryHive(&Uuid, &v44);
      if ( !v9 )
      {
        started = -1073741670;
        goto LABEL_17;
      }
      CmpLockRegistry(v12, v11, v13, v14);
      v15 = *(_QWORD *)(a1 + 8);
      v5 = 1;
      started = CmpStartKcbStackForTopLayerKcb((__int64)&v39, v15);
      if ( started >= 0 )
      {
        CmpLockKcbStackShared((__int64)&v39);
        v6 = 1;
        if ( *(_QWORD *)(v15 + 32) == CmpMasterHive )
        {
          started = -1073741790;
          goto LABEL_17;
        }
        CmpTraceHiveSaveStart(v15);
        v35 = 1;
        started = CmpPerformKeyBodyDeletionCheck(v42, 0LL);
        if ( started >= 0 )
        {
          started = CmpStartKeyNodeStack(v43, (unsigned __int16)(*(_WORD *)(v15 + 66) + 1));
          if ( started >= 0 )
          {
            CmpLockKcbStackFlusherLocksExclusive((__int64)&v39);
            CmpPopulateKeyNodeStackFromKcbStack(v43, &v39, 0LL);
            LOBYTE(v16) = a4;
            started = CmpDoAccessCheckOnLayeredSubtree(0, 0, (unsigned int)v43, v16, 131097, 3);
            if ( started < 0 )
            {
LABEL_16:
              CmpUnlockKcbStackFlusherLocksExclusive((__int64)&v39);
              goto LABEL_17;
            }
            v8 = *(_QWORD *)(v15 + 32);
            if ( (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104) && *(_QWORD *)(v8 + 1544) )
            {
              if ( *(_WORD *)(v15 + 66) )
              {
                CmpLogUnsupportedOperation(25LL);
                started = -1073741822;
                goto LABEL_16;
              }
              v7 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 1640));
              if ( !v7 )
              {
                started = -1073741444;
                goto LABEL_16;
              }
              CmpUnlockKcbStackFlusherLocksExclusive((__int64)&v39);
              CmpUnlockKcbStack((__int64)&v39);
              v6 = 0;
              CmpUnlockRegistry(v23, v22, v24, v25);
              v5 = 0;
              started = CmpSaveKeyByFileCopy(v8);
              if ( started >= 0 )
                CmpTraceHiveSaveFileCopied();
            }
            else
            {
              v26 = v38;
              *(_DWORD *)(*(_QWORD *)(v9 + 64) + 24LL) = v38;
              *(_DWORD *)(v9 + 220) = v26;
              started = CmpCopyMergeOfLayeredKeyNode(v43, v9, 0xFFFFFFFFLL, 1LL, 0, &v37);
              if ( started < 0 )
                goto LABEL_16;
              CmpTraceHiveSaveTreeCopied();
              *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v37;
              EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v43, v43[0]);
              *(_QWORD *)EntryAtLayerHeight = v9;
              v29 = (unsigned int *)(EntryAtLayerHeight + 24);
              *(_DWORD *)(EntryAtLayerHeight + 8) = v28;
              v30 = (*(_BYTE *)(v9 + 140) & 1) != 0 ? HvpGetCellFlat(v9, v28, v29) : HvpGetCellPaged(v9, v28, v29);
              *(_QWORD *)(EntryAtLayerHeight + 16) = v30;
              started = CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, v43);
              if ( started < 0 )
                goto LABEL_16;
              started = CmpPromoteSubtree(0LL, v43);
              if ( started < 0 )
                goto LABEL_16;
              CmpUnlockKcbStackFlusherLocksExclusive((__int64)&v39);
              CmpCleanupKeyNodeStack((__int64)v43);
              CmpInitializeKeyNodeStack((char *)v43);
              CmpUnlockKcbStack((__int64)&v39);
              v6 = 0;
              CmpUnlockRegistry(v32, v31, v33, v34);
              *(_QWORD *)(v9 + 1560) = v41;
              v5 = 0;
              started = HvWriteExternal(v9);
              if ( started >= 0 )
                started = 0;
            }
          }
        }
      }
    }
  }
LABEL_17:
  CmpCleanupKeyNodeStack((__int64)v43);
  if ( v6 )
    CmpUnlockKcbStack((__int64)&v39);
  if ( v5 )
    CmpUnlockRegistry(v18, v17, v19, v20);
  if ( v7 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 1640));
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 1560) = 0LL;
    CmpDestroyHive((PVOID)v9);
  }
  if ( v35 )
    CmpTraceHiveSaveStop((unsigned int)started);
  return (unsigned int)started;
}
