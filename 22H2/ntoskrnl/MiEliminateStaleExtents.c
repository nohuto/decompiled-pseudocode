/*
 * XREFs of MiEliminateStaleExtents @ 0x140540808
 * Callers:
 *     MiAllocateFileExtents @ 0x1408CF560 (MiAllocateFileExtents.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x140332CE0 (MiLockLeafPage.c)
 */

void __fastcall MiEliminateStaleExtents(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rax
  unsigned __int8 v13; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = 0;
    v13 = 17;
    v4 = 0LL;
    do
    {
      while ( 1 )
      {
        v10 = MiLockProtoPoolPage(BugCheckParameter1, (__int64)&v13);
        if ( v10 )
          break;
        MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
      }
      do
      {
        v11 = *(_QWORD *)(a2 + 8 * v4);
        if ( v11 != 0x8000000000000000uLL )
        {
          v12 = MiLockLeafPage((__int64 *)BugCheckParameter1, 0, v8, v9);
          if ( v12 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            *(_QWORD *)(a2 + 8 * v4) = v11 | 0x4000000000000000LL;
          }
        }
        ++v3;
        BugCheckParameter1 += 8LL;
        v4 = v3;
      }
      while ( v3 < a3 && (BugCheckParameter1 & 0xFFF) != 0 );
      MiUnlockProtoPoolPage(v10, v13);
    }
    while ( v3 < a3 );
  }
}
