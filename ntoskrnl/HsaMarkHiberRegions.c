/*
 * XREFs of HsaMarkHiberRegions @ 0x140A96750
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuExtMarkHiberMemory @ 0x140512ED8 (HalpIommuExtMarkHiberMemory.c)
 */

void __fastcall HsaMarkHiberRegions(void *a1, __int64 a2, __int64 ***a3)
{
  __int64 **i; // rbx
  void **v5; // rsi
  unsigned int j; // ebp

  if ( a1 )
  {
    HalpIommuExtMarkHiberMemory(a1, (void *)(a2 + 152), 8u);
  }
  else
  {
    for ( i = *a3; i != (__int64 **)a3; i = (__int64 **)*i )
    {
      HalpIommuExtMarkHiberMemory(0LL, i[5], 0x2000u);
      v5 = (void **)(i[5] + 512);
      for ( j = 0; j < 0x200; ++j )
      {
        if ( (*(_BYTE *)(v5 - 512) & 1) == 0 )
          break;
        HalpIommuExtMarkHiberMemory(0LL, *v5++, 0x1000u);
      }
    }
  }
}
