__int64 __fastcall MiLockPagedAddress(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r15
  char *AnyMultiplexedVm; // rsi
  unsigned __int8 v6; // r12
  unsigned int v7; // r14d
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  char v10; // al
  int v12; // edi
  int v13; // eax
  ULONG_PTR v14; // rdi
  int v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  v2 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 0LL;
  v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v6 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v7 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      MiMakeSystemAddressValid(v2, 4);
      v8 = MI_READ_PTE_LOCK_FREE(v2);
      v16 = v8;
      if ( (v8 & 1) != 0 )
        break;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
      v13 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
      v14 = v13;
      if ( v13 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 2uLL, v14, 0LL, BugCheckParameter1);
      }
LABEL_16:
      MiLockWorkingSetShared(AnyMultiplexedVm);
    }
    if ( (v8 & 0x200) == 0 )
      break;
    v12 = MiCopyOnWrite((__int64)(v2 << 25) >> 16);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
    if ( v12 < 0 )
    {
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
      MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v12);
      goto LABEL_16;
    }
  }
  v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v16) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v15);
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  if ( (unsigned int)MiAddLockedPageCharge(v9, 0LL) )
    v3 = MiCaptureDirtyBitToPfn(v9);
  else
    v7 = 0;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v7 )
  {
    if ( v3 )
      MiReleasePageFileInfo(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)), v3, 1);
    v10 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (v10 & 0x20) == 0 || (v10 & 0x42) == 0 )
      MiWriteValidPteVolatile((volatile signed __int64 *)v2, 3, 0);
    if ( (MiFlags & 0x100) == 0 )
      KeFlushSingleTb(BugCheckParameter1, 0, 1u);
  }
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
  return v7;
}
