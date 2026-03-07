__int64 __fastcall MiMarkBootKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  char *AnyMultiplexedVm; // rbp
  unsigned __int8 i; // r15
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v11; // [rsp+20h] [rbp-108h] BYREF
  __int64 v12; // [rsp+28h] [rbp-100h] BYREF
  _QWORD v13[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v13, 0, 0xB8uLL);
  v13[3] = 0LL;
  v4 = 0LL;
  LODWORD(v13[1]) = 20;
  BYTE4(v13[0]) = 1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  for ( i = MiLockWorkingSetShared((__int64)AnyMultiplexedVm); a1 < a2; a1 += 8LL )
  {
    if ( v4 )
    {
      if ( (a1 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
    }
    v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v4, 0);
LABEL_4:
    v12 = MI_READ_PTE_LOCK_FREE(a1);
    v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
    v8 = 0xFFFFFFFFFFLL;
    v9 = 48 * ((v7 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v11);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    MiMarkKernelStack(v8, v9, 0xFFFFFFFFFFFFFFF0uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (MiFlags & 0x20000) == 0 )
    {
      MiWriteValidPteNewProtection(a1, v12 | 0x8000000000000062uLL);
      MiInsertTbFlushEntry((__int64)v13, (__int64)(a1 << 25) >> 16, 1LL, 0);
    }
  }
  MiFlushTbList((int *)v13);
  if ( v4 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, i);
}
