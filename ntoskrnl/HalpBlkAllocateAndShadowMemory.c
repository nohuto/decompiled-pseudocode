/*
 * XREFs of HalpBlkAllocateAndShadowMemory @ 0x140B8E9BC
 * Callers:
 *     HalpBlkAllocateShadowCodePages @ 0x140B8EBC4 (HalpBlkAllocateShadowCodePages.c)
 *     HalpBlkAllocateShadowData @ 0x140B8EC14 (HalpBlkAllocateShadowData.c)
 * Callees:
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpAllocPhysicalMemory @ 0x140B3D9F4 (HalpAllocPhysicalMemory.c)
 *     HalpBlkAddVirtualMapping @ 0x140B8E880 (HalpBlkAddVirtualMapping.c)
 */

char *__fastcall HalpBlkAllocateAndShadowMemory(char *Src, unsigned int a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v6; // rsi
  char *v8; // rdi
  __int64 v9; // rbx
  char *v10; // rax
  size_t v11; // r8

  v6 = a2;
  v8 = 0LL;
  v9 = HalpAllocPhysicalMemory(HalpMmLoaderBlock, 0LL, a2);
  if ( v9 )
  {
    if ( a5 )
      *a5 = v9;
    v10 = (char *)HalpMap(v9, (unsigned int)v6, 1u, 0LL, 4u);
    v8 = v10;
    if ( v10 )
    {
      v11 = v6 << 12;
      if ( Src )
      {
        memmove(v10, Src, v11);
      }
      else
      {
        memset(v10, 0, v11);
        Src = v8;
      }
      if ( (_DWORD)v6 )
      {
        while ( (int)HalpBlkAddVirtualMapping(HalpBlkRootPageTablePa, v9, (unsigned __int64)Src, 1, a4) >= 0 )
        {
          v9 += 4096LL;
          Src += 4096;
          LODWORD(v6) = v6 - 1;
          if ( !(_DWORD)v6 )
            return v8;
        }
        return 0LL;
      }
    }
  }
  return v8;
}
