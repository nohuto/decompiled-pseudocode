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
  ULONG_PTR v5; // rdi
  PVOID v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rbp
  __int64 SessionVm; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned __int8 v15; // r13
  char v16; // r12
  __int64 v17; // r14
  __int64 v18; // r9
  int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34[9]; // [rsp+30h] [rbp-48h] BYREF
  ULONG Size; // [rsp+90h] [rbp+18h] BYREF
  int v37; // [rsp+98h] [rbp+20h] BYREF

  Size = 0;
  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter3, 1);
    v5 = v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter3, BugCheckParameter4);
    v6 = RtlImageDirectoryEntryToData(*(PVOID *)(v4 + 48), 1u, 0xCu, &Size);
    if ( !v6 || !Size || BugCheckParameter3 < (unsigned __int64)v6 || BugCheckParameter3 >= (unsigned __int64)v6 + Size )
      KeBugCheckEx(0x1Au, 0x1014uLL, v5, BugCheckParameter3, BugCheckParameter4);
  }
  result = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter3);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
    return result;
  }
  v8 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter3) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v13 = 0LL;
  v14 = SessionVm;
  v15 = MiLockWorkingSetShared(SessionVm, v10, v11, v12);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v13 )
      {
        if ( ((BugCheckParameter3 >> 9) & 0xFF8) != 0 )
          goto LABEL_17;
        MiUnlockPageTableInternal(v14, v13);
      }
      v13 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v14, v13, 0LL);
LABEL_17:
      v34[0] = MI_READ_PTE_LOCK_FREE(v8);
      v16 = v34[0];
      if ( (v34[0] & 1) != 0 )
        break;
      MiUnlockPageTableInternal(v14, v13);
      MiUnlockWorkingSetShared(v14, v15);
      MiLockWorkingSetShared(v14, v23, v24, v25);
      MiLockPageTableInternal(v14, v13, 0LL);
    }
    v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v34) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( !MI_PFN_IS_PROTO(v17) )
      break;
    v19 = MiCopyOnWrite(BugCheckParameter3, (ULONG_PTR *)v8, -1LL, 0);
    if ( v19 < 0 )
    {
      MiUnlockPageTableInternal(v14, v13);
      MiUnlockWorkingSetShared(v14, v15);
      MiCopyOnWriteCheckConditions(v14, (unsigned int)v19);
      MiLockWorkingSetShared(v14, v20, v21, v22);
      MiLockPageTableInternal(v14, v13, 0LL);
    }
  }
  if ( (v16 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
  }
  else
  {
    v26 = MiMapPageInHyperSpaceWorker(v18, 0LL, 0x80000000, v18);
    LOBYTE(v27) = 17;
    v28 = (_QWORD *)((BugCheckParameter3 & 0xFFF) + v26);
    *v28 = BugCheckParameter4;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v28, v27, 0x80000000LL);
    v37 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v37, v29, v30, v31);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    v32 = MiCaptureDirtyBitToPfn(v17);
    v33 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v17 + 40) >> 39) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v32 )
      MiReleasePageFileInfo(v33, v32, 1);
  }
  MiUnlockPageTableInternal(v14, v13);
  return MiUnlockWorkingSetShared(v14, v15);
}
