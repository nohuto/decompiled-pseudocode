/*
 * XREFs of MiOutSwapWorkingSet @ 0x1402DB710
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1402DAFF8 (MmOutSwapWorkingSet.c)
 *     MiOutSwapKernelStackPage @ 0x140650568 (MiOutSwapKernelStackPage.c)
 *     MmOutSwapVirtualAddresses @ 0x14065065C (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall MiOutSwapWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // zf
  __int64 SharedVm; // rbx
  KIRQL v14; // al
  __m128i v15[11]; // [rsp+20h] [rbp-91h] BYREF

  memset(v15, 0, sizeof(v15));
  v12 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v15[9].m128i_i64[1] = (__int64)MiOutSwapWorkingSetPte;
  v15[1].m128i_i64[1] = a1;
  v15[10].m128i_i64[1] = a5;
  v15[0].m128i_i32[0] = 129;
  if ( v12 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 4) != 0 )
      return;
    v15[0].m128i_i32[0] = 131;
    v15[2].m128i_i64[0] = a3;
    v15[2].m128i_i64[1] = a4;
    SharedVm = MiGetSharedVm(a1, v9, v10, v11);
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v15[0].m128i_i8[7] = v14;
  }
  else
  {
    v15[0].m128i_i8[7] = 17;
  }
  MiWalkPageTables(v15);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    MiUnlockWorkingSetExclusive(a1, v15[0].m128i_u8[7]);
}
