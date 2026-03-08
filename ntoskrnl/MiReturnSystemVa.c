/*
 * XREFs of MiReturnSystemVa @ 0x14020E9A0
 * Callers:
 *     MmFreePoolMemory @ 0x14020DD58 (MmFreePoolMemory.c)
 *     MiExpandPtes @ 0x140210210 (MiExpandPtes.c)
 *     MiExpandSystemCache @ 0x1402E9B28 (MiExpandSystemCache.c)
 *     MiReturnSystemPtes @ 0x1402EB3FC (MiReturnSystemPtes.c)
 *     MiGetPageTablesForLargeMap @ 0x14038A5B8 (MiGetPageTablesForLargeMap.c)
 *     MiDeleteBootRange @ 0x14038BEB8 (MiDeleteBootRange.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403CE458 (MiReturnSystemCacheRegionsToKva.c)
 *     MiUnmapLargePages @ 0x1403D0D9C (MiUnmapLargePages.c)
 *     MmFreeSecurePoolMemory @ 0x14063F668 (MmFreeSecurePoolMemory.c)
 *     MiReleaseLargePdeMappings @ 0x14065D1F4 (MiReleaseLargePdeMappings.c)
 *     MiReserveDriverPtes @ 0x1407F6D70 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x1407F74BC (MiReleaseDriverPtes.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPageTables @ 0x14020F540 (MiDeleteSystemPageTables.c)
 *     MiMakeSystemRangeAvailable @ 0x14020F62C (MiMakeSystemRangeAvailable.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

unsigned __int64 __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2, int a3, _QWORD *a4)
{
  unsigned __int64 v8; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rdi
  ULONG_PTR v12; // rbx
  __int64 AnyMultiplexedVm; // rax
  int v14; // r8d
  unsigned int v15; // r9d
  char v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[24]; // [rsp+40h] [rbp-F8h] BYREF

  memset(v19, 0, 0xB8uLL);
  v8 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  result = 0xFFFFF68000000000uLL;
  v10 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v8 < v10 )
  {
    v11 = (__int64)(v10 << 25) >> 16;
    v12 = (__int64)(v8 << 25) >> 16;
    if ( (unsigned __int64)a4 <= 2 )
    {
      v19[3] = 0LL;
      a4 = v19;
      LODWORD(v19[1]) = 20;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL, 0xFFFFF68000000000uLL);
    if ( a3 == 1 )
      return MiMakeSystemRangeAvailable(v12, v11 - v12);
    v16 = 1;
    v17 = (unsigned int)(a3 - 6);
    if ( a3 == 6 )
    {
      v18 = 2LL;
      goto LABEL_14;
    }
    v17 = (unsigned int)(a3 - 8);
    if ( a3 == 8 )
    {
      v18 = 0LL;
      goto LABEL_14;
    }
    v17 = (unsigned int)(a3 - 9);
    if ( a3 == 9 )
      goto LABEL_13;
    v17 = (unsigned int)v17 - v15;
    if ( !(_DWORD)v17 )
    {
      v18 = 1LL;
      goto LABEL_14;
    }
    v17 = (unsigned int)(v17 - 1);
    if ( !(_DWORD)v17 )
    {
LABEL_13:
      v18 = v15;
    }
    else
    {
      v17 = (unsigned int)(v17 - 1);
      if ( (_DWORD)v17 && (_DWORD)v17 != 2 )
        goto LABEL_15;
      v18 = 4LL;
    }
LABEL_14:
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v18, v17);
LABEL_15:
    if ( AnyMultiplexedVm )
      MiDeleteSystemPageTables(AnyMultiplexedVm, a3, v12, v11 - 1, v16, (__int64)a4, v14);
    return MiMakeSystemRangeAvailable(v12, v11 - v12);
  }
  return result;
}
