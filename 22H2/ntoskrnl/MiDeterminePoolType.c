/*
 * XREFs of MiDeterminePoolType @ 0x14027B41C
 * Callers:
 *     MmFreePoolMemory @ 0x14027AEC8 (MmFreePoolMemory.c)
 *     ExGetHeapFromVA @ 0x14027B2FC (ExGetHeapFromVA.c)
 *     MmDeterminePoolType @ 0x14032BD2C (MmDeterminePoolType.c)
 *     ExProtectPoolEx @ 0x1403622B8 (ExProtectPoolEx.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CD64C (ExpHpIsSpecialPoolHeap.c)
 *     MiGenerateAccessViolation @ 0x1405484A0 (MiGenerateAccessViolation.c)
 *     ExAllocateHeapSpecialPool @ 0x1405B9CBC (ExAllocateHeapSpecialPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1405BA020 (ExpFreeHeapSpecialPool.c)
 *     ExpSizeHeapPool @ 0x1405BA270 (ExpSizeHeapPool.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiDeterminePoolType(__int64 a1)
{
  int SystemRegionType; // eax
  int v2; // ecx
  __int64 result; // rax

  SystemRegionType = MiGetSystemRegionType(a1);
  v2 = SystemRegionType;
  if ( SystemRegionType == 1 )
    return 33LL;
  if ( SystemRegionType == 5 )
    return 0LL;
  result = 32LL;
  if ( v2 == 6 )
    return 1LL;
  return result;
}
