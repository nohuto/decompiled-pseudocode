/*
 * XREFs of HalpMapCR3Ex @ 0x140A8D980
 * Callers:
 *     HalpMmBuildTiledMemoryMap @ 0x140A8D8E8 (HalpMmBuildTiledMemoryMap.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpStoreFreeCr3 @ 0x1403A3C2C (HalpStoreFreeCr3.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HalpMapCR3Ex(__int64 BaseAddress, PHYSICAL_ADDRESS PhysicalAddress, PHYSICAL_ADDRESS *a3)
{
  unsigned __int64 v5; // r14
  int v6; // ebp
  __int64 *v7; // rsi
  __int64 v8; // rdi
  void *v9; // rax
  __int64 v10; // rcx

  v5 = BaseAddress;
  v6 = 3;
  v7 = (__int64 *)((char *)HalpCR3Root + 8 * (((unsigned __int64)BaseAddress >> 39) & 0x1FF));
  do
  {
    v8 = *v7;
    if ( !*v7 )
    {
      v9 = (void *)HalpMmAllocCtxAlloc(BaseAddress, 4096LL);
      v8 = (__int64)v9;
      if ( !v9 )
        return 3221225626LL;
      memset(v9, 0, 0x1000uLL);
      if ( (int)HalpStoreFreeCr3(v8) < 0 )
      {
        HalpMmAllocCtxFree(v10, v8);
        return 3221225626LL;
      }
      *v7 = v8;
    }
    --v6;
    BaseAddress = (unsigned int)(v6 + 8 * v6 + 12);
    v7 = (__int64 *)(v8 + 8 * ((v5 >> (v6 + 8 * (unsigned __int8)v6 + 12)) & 0x1FF));
  }
  while ( v6 );
  if ( !PhysicalAddress.QuadPart )
    PhysicalAddress = MmGetPhysicalAddress((PVOID)v5);
  *v7 = *v7 ^ (*v7 ^ PhysicalAddress.QuadPart) & 0xFFFFFFFFFF000LL | 3;
  if ( a3 )
    *a3 = MmGetPhysicalAddress(v7);
  return 0LL;
}
