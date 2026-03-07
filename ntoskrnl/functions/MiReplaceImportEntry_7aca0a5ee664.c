__int64 __fastcall MiReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  _QWORD *v4; // rax
  int v5; // edx
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rbp
  __int64 SessionVm; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int8 v13; // r13
  char v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // r14
  int v17; // r14d
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+90h] [rbp+18h] BYREF
  int v24; // [rsp+98h] [rbp+20h] BYREF

  v23 = 0;
  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter2, 1);
    v6 = (ULONG_PTR)v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter2, BugCheckParameter4);
    LOBYTE(v5) = 1;
    v7 = RtlImageDirectoryEntryToData(v4[6], v5, 12, (int)&v23);
    if ( !v7 || !v23 || BugCheckParameter2 < v7 || BugCheckParameter2 >= v7 + v23 )
      KeBugCheckEx(0x1Au, 0x1014uLL, v6, BugCheckParameter2, BugCheckParameter4);
  }
  _InterlockedIncrement64(&qword_140C655F8);
  result = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
    return result;
  }
  v9 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v11 = 0LL;
  v12 = SessionVm;
  v13 = MiLockWorkingSetShared(SessionVm);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v11 )
      {
        if ( ((BugCheckParameter2 >> 9) & 0xFF8) != 0 )
          goto LABEL_19;
        MiUnlockPageTableInternal(v12, v11);
      }
      v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v12, v11, 0);
LABEL_19:
      v21[0] = MI_READ_PTE_LOCK_FREE(v9);
      v14 = v21[0];
      if ( (v21[0] & 1) != 0 )
        break;
      MiUnlockPageTableInternal(v12, v11);
      MiUnlockWorkingSetShared(v12, v13);
      MiLockWorkingSetShared(v12);
      MiLockPageTableInternal(v12, v11, 0);
    }
    v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v21) >> 12) & 0xFFFFFFFFFFLL;
    v16 = 48 * v15 - 0x220000000000LL;
    if ( *(__int64 *)(v16 + 40) >= 0 )
      break;
    v17 = MiCopyOnWrite(BugCheckParameter2, v9, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( v17 < 0 )
    {
      MiUnlockPageTableInternal(v12, v11);
      MiUnlockWorkingSetShared(v12, v13);
      MiCopyOnWriteCheckConditions(v12, (unsigned int)v17);
      MiLockWorkingSetShared(v12);
      MiLockPageTableInternal(v12, v11, 0);
    }
  }
  if ( (v14 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
  }
  else
  {
    v18 = (_QWORD *)((BugCheckParameter2 & 0xFFF) + MiMapPageInHyperSpaceWorker(v15, 0LL, 0x80000000));
    *v18 = BugCheckParameter4;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v18, 0x11u);
    v24 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    v19 = MiCaptureDirtyBitToPfn(v16);
    v20 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v19 )
      MiReleasePageFileInfo(v20, v19, 1);
  }
  MiUnlockPageTableInternal(v12, v11);
  return MiUnlockWorkingSetShared(v12, v13);
}
