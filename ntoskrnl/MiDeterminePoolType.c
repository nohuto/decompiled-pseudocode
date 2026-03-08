/*
 * XREFs of MiDeterminePoolType @ 0x14020DEF0
 * Callers:
 *     MmFreePoolMemory @ 0x14020DD58 (MmFreePoolMemory.c)
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     ExQueryPoolBlockSize @ 0x1406055A0 (ExQueryPoolBlockSize.c)
 *     ExAllocateHeapSpecialPool @ 0x14060C980 (ExAllocateHeapSpecialPool.c)
 *     ExpFreeHeapSpecialPool @ 0x14060CCF8 (ExpFreeHeapSpecialPool.c)
 *     ExpSizeHeapPool @ 0x14060D0F0 (ExpSizeHeapPool.c)
 *     MmDeterminePoolType @ 0x14063F644 (MmDeterminePoolType.c)
 *     MiGenerateAccessViolation @ 0x1406439D8 (MiGenerateAccessViolation.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDeterminePoolType(unsigned __int64 a1)
{
  int v1; // ecx
  __int64 result; // rax

  if ( a1 < 0xFFFF800000000000uLL )
    return 32LL;
  v1 = byte_140C6A058[((a1 >> 39) & 0x1FF) - 256];
  if ( v1 == 5 )
    return 0LL;
  result = 32LL;
  if ( v1 == 6 )
    return 1LL;
  return result;
}
