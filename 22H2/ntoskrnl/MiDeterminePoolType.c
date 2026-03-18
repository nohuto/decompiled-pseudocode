/*
 * XREFs of MiDeterminePoolType @ 0x1402123E0
 * Callers:
 *     MmFreePoolMemory @ 0x140212244 (MmFreePoolMemory.c)
 *     ExFreeHeapPool @ 0x140322ED0 (ExFreeHeapPool.c)
 *     ExQueryPoolBlockSize @ 0x1406079F0 (ExQueryPoolBlockSize.c)
 *     ExAllocateHeapSpecialPool @ 0x14060EDA0 (ExAllocateHeapSpecialPool.c)
 *     ExpFreeHeapSpecialPool @ 0x14060F118 (ExpFreeHeapSpecialPool.c)
 *     ExpSizeHeapPool @ 0x14060F510 (ExpSizeHeapPool.c)
 *     MmDeterminePoolType @ 0x140641AA4 (MmDeterminePoolType.c)
 *     MiGenerateAccessViolation @ 0x140645FFC (MiGenerateAccessViolation.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDeterminePoolType(unsigned __int64 a1)
{
  int v1; // ecx
  __int64 result; // rax

  if ( a1 < 0xFFFF800000000000uLL )
    return 32LL;
  v1 = byte_140C6A4D8[((a1 >> 39) & 0x1FF) - 256];
  if ( v1 == 5 )
    return 0LL;
  result = 32LL;
  if ( v1 == 6 )
    return 1LL;
  return result;
}
