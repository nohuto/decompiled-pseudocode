/*
 * XREFs of MiProtectDriverSectionPte @ 0x140618060
 * Callers:
 *     <none>
 * Callees:
 *     MiMarkPfnVerified @ 0x1402093BC (MiMarkPfnVerified.c)
 *     MiTradeActivePage @ 0x140211BC0 (MiTradeActivePage.c)
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiUnlockLoaderEntry @ 0x1402A6ACC (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402A6B58 (MiLockLoaderEntry.c)
 *     MiCheckSlabPage @ 0x1402A6DE4 (MiCheckSlabPage.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiReleaseWalkLocks @ 0x1402D45CC (MiReleaseWalkLocks.c)
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x14032D3F0 (MiGetPagePrivilege.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPfnChannel @ 0x140334470 (MiGetPfnChannel.c)
 *     MiReplenishSlabAllocator @ 0x1403496D8 (MiReplenishSlabAllocator.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     KeSetPagePrivilege @ 0x1403CF124 (KeSetPagePrivilege.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiReacquireWalkLocks @ 0x140463468 (MiReacquireWalkLocks.c)
 *     MiMakeDriverPageStayResident @ 0x140617F48 (MiMakeDriverPageStayResident.c)
 */

__int64 __fastcall MiProtectDriverSectionPte(__int64 *a1, unsigned __int64 a2, int a3)
{
  int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  char *v10; // r9
  int v11; // eax
  bool v12; // zf
  signed __int64 v13; // r12
  ULONG_PTR v14; // r15
  int v15; // eax
  ULONG_PTR v17; // r12
  int v18; // ebx
  int PfnChannel; // eax
  __int64 SlabPage; // rax
  __int64 v21; // rbx
  __int64 v22; // r12
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int128 v27[8]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v28[7]; // [rsp+D0h] [rbp-30h] BYREF

  v5 = 0;
  v24 = 0LL;
  memset(v27, 0, 120);
  if ( a3 )
    return 0LL;
  v6 = a1[21];
  v7 = *(_QWORD *)(v6 + 8);
  v26 = v7;
  v25 = a1[6];
  v8 = (__int64)(a2 << 25) >> 16;
  while ( 1 )
  {
    v23 = MI_READ_PTE_LOCK_FREE(a2);
    v9 = v23;
    if ( (v23 & 1) != 0 )
      break;
    MiReleaseWalkLocks((__int64)a1);
    if ( *(_DWORD *)v6 == 1 )
      MiUnlockLoaderEntry(v7 + 160, 0);
    v10 = 0LL;
    if ( !*(_DWORD *)v6 )
    {
      LOWORD(v27[1]) = 6;
      v10 = (char *)&v27[1] + 1;
      *((_QWORD *)&v27[1] + 1) = 0LL;
      memset(&v27[2], 0, 24);
    }
    v11 = MmAccessFault(0LL, (__int64)(a2 << 25) >> 16, 0, (ULONG_PTR)v10);
    v12 = *(_DWORD *)v6 == 1;
    LODWORD(v23) = v11;
    if ( v12 )
      MiLockLoaderEntry(v7 + 160, 0);
    MiReacquireWalkLocks((__int64)a1, v25, 0);
    if ( (int)v23 < 0 )
      return 5LL;
  }
  v13 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFFLL);
  v14 = v13 - 0x220000000000LL;
  v15 = *(_DWORD *)v6;
  if ( !*(_DWORD *)v6 )
  {
    if ( v9 >= 0 )
    {
      *(_DWORD *)(v6 + 24) |= 1u;
      return 5LL;
    }
    if ( *(__int64 *)(v14 + 40) >= 0 && (unsigned int)MiGetPagePrivilege(v13 - 0x220000000000LL, 0, 0LL) )
    {
      *(_DWORD *)(v6 + 24) |= 2u;
      return 5LL;
    }
    goto LABEL_29;
  }
  if ( v15 == 1 )
  {
    MiMakeDriverPageStayResident(v26, a1[3], v8);
    goto LABEL_29;
  }
  if ( v15 != 2 )
  {
    v22 = 0xAAAAAAAAAAAAAAABuLL * (v13 >> 4);
    *(_QWORD *)&v27[0] = v8;
    if ( (int)KeSetPagePrivilege(v22, v27, 256) < 0 )
      KeBugCheckEx(0x1Au, 0x1106uLL, v14, v8, 0LL);
    memset(v28, 0, 0x68uLL);
    *((_QWORD *)&v28[0] + 1) = v22;
    v28[1] = v27[0];
    if ( (int)VslpEnterIumSecureMode(2u, 257, 0, (__int64)v28) < 0 )
      KeBugCheckEx(0x1Au, 0x1107uLL, v8, 0LL, 0LL);
    MiMarkPfnVerified(v14, 0);
    goto LABEL_29;
  }
  if ( *(_WORD *)(v14 + 32) != 1
    || (unsigned int)MiCheckSlabPfnBitmap(v13 - 0x220000000000LL, 1LL, 0)
    && (unsigned int)MiCheckSlabPage(v13 - 0x220000000000LL, 1) )
  {
LABEL_29:
    ++*(_QWORD *)(v6 + 16);
    return 0LL;
  }
  v17 = 0xAAAAAAAAAAAAAAABuLL * (v13 >> 4);
  v18 = *((_DWORD *)MiSearchNumaNodeTable(v17) + 2);
  PfnChannel = MiGetPfnChannel(v14);
  SlabPage = MiGetSlabPage(
               (__int64)&MiSystemPartition,
               1u,
               (PfnChannel << byte_140C6570E) | dword_140C65778 & v17 | (v18 << byte_140C6570D),
               2LL,
               (__int64 *)&v24);
  if ( SlabPage != -1 )
  {
    v21 = 48 * SlabPage - 0x220000000000LL;
    LOBYTE(v5) = (unsigned int)MiCheckSlabPfnBitmap(v14, 1LL, 0) != 0;
    MiTradeActivePage(v14, v21, v8, 0, 2u, v5);
    *(_QWORD *)(v14 + 16) = ZeroPte;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v14 + 16));
    MiReleaseFreshPage(v14);
    goto LABEL_29;
  }
  if ( !v24 )
    return 5LL;
  MiReleaseWalkLocks((__int64)a1);
  MiReplenishSlabAllocator(v24, 1uLL);
  MiReacquireWalkLocks((__int64)a1, v25, 0);
  return 2LL;
}
