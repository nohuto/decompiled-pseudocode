/*
 * XREFs of MiUseProtectedSlabAllocatorForDriverPage @ 0x1402A6DA0
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiAllocateDriverPage @ 0x1407290FC (MiAllocateDriverPage.c)
 * Callees:
 *     MiGetSlabAllocatorTypeByProtection @ 0x1404650AE (MiGetSlabAllocatorTypeByProtection.c)
 */

__int64 __fastcall MiUseProtectedSlabAllocatorForDriverPage(__int64 a1, __int64 a2)
{
  int SlabAllocatorTypeByProtection; // eax
  _DWORD *v4; // r9
  unsigned int v5; // r8d

  if ( (MiFlags & 0x8000) == 0 )
    return 0LL;
  LOBYTE(a1) = (*(_BYTE *)(a1 + 4) & 8) != 0;
  if ( ((unsigned __int8)a1 & ((a2 & 2) != 0)) == 0 )
    return 0LL;
  SlabAllocatorTypeByProtection = MiGetSlabAllocatorTypeByProtection(a1, a2, 1LL);
  *v4 = SlabAllocatorTypeByProtection;
  return v5;
}
