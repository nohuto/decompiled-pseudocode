/*
 * XREFs of VfIrpWatermark @ 0x140ACAC28
 * Callers:
 *     IovUtilWatermarkIrp @ 0x1402092B8 (IovUtilWatermarkIrp.c)
 *     PopAllocateIrp @ 0x1402BA774 (PopAllocateIrp.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140ADE768 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140ADE8EC (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfIrpWatermark(__int64 a1, char a2)
{
  __int64 result; // rax

  result = VfIrpDatabaseEntryFindAndLock(a1);
  if ( result )
  {
    if ( (a2 & 1) != 0 )
      *(_DWORD *)(result + 56) |= 0x100000u;
    if ( (a2 & 2) != 0 )
      *(_DWORD *)(result + 56) |= 0x20u;
    return VfIrpDatabaseEntryReleaseLock(result);
  }
  return result;
}
