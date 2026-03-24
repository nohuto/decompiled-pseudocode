/*
 * XREFs of MmReplaceImportEntry @ 0x14053585C
 * Callers:
 *     KsepPatchImportTableEntry @ 0x1408C0620 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceImportEntry @ 0x1409D9480 (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedOrderDependent @ 0x1409D94F8 (ViThunkReplaceImportIfThunkedOrderDependent.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x1409D95D4 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x1409D96C8 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     RtlImageDirectoryEntryToData @ 0x140252B30 (RtlImageDirectoryEntryToData.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiCaptureDirtyBitToPfn @ 0x140290190 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSessionVm @ 0x14029281C (MiGetSessionVm.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiLookupDataTableEntry @ 0x140358CCC (MiLookupDataTableEntry.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BE38 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmReplaceImportEntry(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  __int64 v4; // rax
  int v5; // edx
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rbp
  __int64 SessionVm; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned __int8 v16; // r13
  char v17; // r12
  __int64 v18; // r14
  __int64 v19; // r9
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  _DWORD *v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+90h] [rbp+18h] BYREF
  int v38; // [rsp+98h] [rbp+20h] BYREF

  v37 = 0;
  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter3, 1);
    v6 = v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter3, BugCheckParameter4);
    LOBYTE(v5) = 1;
    v7 = RtlImageDirectoryEntryToData(*(_QWORD *)(v4 + 48), v5, 12, (int)&v37);
    if ( !v7 || !v37 || BugCheckParameter3 < v7 || BugCheckParameter3 >= v7 + v37 )
      KeBugCheckEx(0x1Au, 0x1014uLL, v6, BugCheckParameter3, BugCheckParameter4);
  }
  result = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter3);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
    return result;
  }
  v9 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter3) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v14 = 0LL;
  v15 = SessionVm;
  v16 = MiLockWorkingSetShared(SessionVm, v11, v12, v13);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v14 )
      {
        if ( ((BugCheckParameter3 >> 9) & 0xFF8) != 0 )
          goto LABEL_17;
        MiUnlockPageTableInternal(v15, v14);
      }
      v14 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v15, v14, 0LL);
LABEL_17:
      v35[0] = MI_READ_PTE_LOCK_FREE(v9);
      v17 = v35[0];
      if ( (v35[0] & 1) != 0 )
        break;
      MiUnlockPageTableInternal(v15, v14);
      MiUnlockWorkingSetShared(v15, v16);
      MiLockWorkingSetShared(v15, v24, v25, v26);
      MiLockPageTableInternal(v15, v14, 0LL);
    }
    v18 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v35) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( !MI_PFN_IS_PROTO(v18) )
      break;
    v20 = MiCopyOnWrite(BugCheckParameter3, (ULONG_PTR *)v9, -1LL, 0);
    if ( v20 < 0 )
    {
      MiUnlockPageTableInternal(v15, v14);
      MiUnlockWorkingSetShared(v15, v16);
      MiCopyOnWriteCheckConditions(v15, (unsigned int)v20);
      MiLockWorkingSetShared(v15, v21, v22, v23);
      MiLockPageTableInternal(v15, v14, 0LL);
    }
  }
  if ( (v17 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
  }
  else
  {
    v27 = MiMapPageInHyperSpaceWorker(v19, 0LL, 0x80000000, v19);
    LOBYTE(v28) = 17;
    v29 = (_QWORD *)((BugCheckParameter3 & 0xFFF) + v27);
    *v29 = BugCheckParameter4;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v29, v28, 0x80000000LL);
    v38 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v38, v30, v31, v32);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    v33 = MiCaptureDirtyBitToPfn(v18);
    v34 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v18 + 40) >> 39) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v33 )
      MiReleasePageFileInfo(v34, v33, 1);
  }
  MiUnlockPageTableInternal(v15, v14);
  return MiUnlockWorkingSetShared(v15, v16);
}
