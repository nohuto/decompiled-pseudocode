/*
 * XREFs of HvpAdjustHiveFreeDisplay @ 0x1407300D8
 * Callers:
 *     HvFreeHivePartial @ 0x14072DB74 (HvFreeHivePartial.c)
 *     HvLoadHive @ 0x14072F5C0 (HvLoadHive.c)
 *     HvpAddBin @ 0x14072F9F0 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x1407FBCAC (HvpPerformLogFileRecovery.c)
 *     HvHiveStartMemoryBacked @ 0x1407FF060 (HvHiveStartMemoryBacked.c)
 * Callees:
 *     HvpAdjustBitmap @ 0x140730154 (HvpAdjustBitmap.c)
 */

__int64 __fastcall HvpAdjustHiveFreeDisplay(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r14
  __int64 result; // rax

  if ( a2 > 0x7FFFE000 )
    return 3221225804LL;
  v5 = 0;
  v6 = 632LL * a3;
  while ( 1 )
  {
    result = HvpAdjustBitmap(a1, a2, a1 + v6 + 24 * (v5 + 13LL));
    if ( (int)result < 0 )
      break;
    if ( ++v5 >= 0x18 )
      return 0LL;
  }
  return result;
}
