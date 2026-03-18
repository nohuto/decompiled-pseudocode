/*
 * XREFs of MiMarkBootKernelStack @ 0x140B4944C
 * Callers:
 *     MiInitializeKernelStacks @ 0x140B49AB4 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F450 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x1402846E0 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     MiMarkKernelStack @ 0x140376810 (MiMarkKernelStack.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall MiMarkBootKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  char *AnyMultiplexedVm; // rbp
  __int64 v6; // r9
  unsigned __int8 i; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v12; // [rsp+20h] [rbp-108h] BYREF
  __int64 v13; // [rsp+28h] [rbp-100h] BYREF
  _QWORD v14[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v14, 0, 0xB8uLL);
  v14[3] = 0LL;
  v4 = 0LL;
  LODWORD(v14[1]) = 20;
  BYTE4(v14[0]) = 1;
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
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v4, 0, v6);
LABEL_4:
    v13 = MI_READ_PTE_LOCK_FREE(a1);
    v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13);
    v9 = 0xFFFFFFFFFFLL;
    v10 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    MiMarkKernelStack(v9, v10, 0xFFFFFFFFFFFFFFF0uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (MiFlags & 0x20000) == 0 )
    {
      MiWriteValidPteNewProtection(a1, v13 | 0x8000000000000062uLL);
      MiInsertTbFlushEntry((__int64)v14, (__int64)(a1 << 25) >> 16, 1LL, 0);
    }
  }
  MiFlushTbList((int *)v14);
  if ( v4 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, i);
}
