/*
 * XREFs of MiCombineWorkingSet @ 0x14055CB64
 * Callers:
 *     MiCombineIdenticalPages @ 0x140726870 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiWalkPageTables @ 0x140209280 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiIsStoreProcess @ 0x1403334C0 (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiFreeCombineMdls @ 0x140726C28 (MiFreeCombineMdls.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCombineWorkingSet(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // r14
  unsigned int v6; // ebx
  int v7; // r13d
  void *v8; // rsi
  __int64 v9; // rdi
  int v10; // r12d
  __int64 v11; // rax
  SIZE_T v12; // rdi
  PVOID Pool; // rax
  __int128 v15; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v16; // [rsp+38h] [rbp-D0h]
  PVOID v17; // [rsp+48h] [rbp-C0h]
  _QWORD v18[22]; // [rsp+58h] [rbp-B0h] BYREF

  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  memset(v18, 0, sizeof(v18));
  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 60);
  v8 = 0LL;
  v9 = v5 - 1664;
  v10 = 3;
  if ( (*(_BYTE *)(v5 + 184) & 7) != 0 )
    v9 = 0LL;
  BYTE6(v18[0]) = MiLockWorkingSetShared(v5, v2, v3, v4);
  if ( !v9
    || (*(_DWORD *)(v9 + 1124) & 0xC00u) >= 0xC00 && !*(_QWORD *)(v5 + 104) && !(unsigned int)MiIsStoreProcess(v9) )
  {
    v11 = *(_QWORD *)(v5 + 144);
    if ( v11 )
    {
      v12 = (40 * v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      while ( 1 )
      {
        Pool = MiAllocatePool(64, v12, 0x6D75534Du);
        v8 = Pool;
        if ( Pool )
          break;
        v12 >>= 1;
        if ( v12 < 0x10000 )
          goto LABEL_13;
      }
      v18[5] = -1LL;
      *((_QWORD *)&v16 + 1) = a1;
      v17 = Pool;
      v18[21] = &v15;
      v18[19] = MiCombinePte;
      v18[20] = MiCombineWorkingSetTail;
      *(_QWORD *)&v16 = v12 / 0x28;
      LODWORD(v15) = v7;
      v18[3] = v5;
      LOWORD(v18[0]) = 6;
      BYTE5(v18[0]) = 7;
      v10 = MiWalkPageTables((__int64)v18);
    }
  }
LABEL_13:
  MiUnlockWorkingSetShared(v5, BYTE6(v18[0]));
  MiFreeCombineMdls(a1);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v10 == 4 )
    return (unsigned int)-1073741248;
  return v6;
}
