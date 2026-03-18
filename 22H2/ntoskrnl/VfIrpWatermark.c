/*
 * XREFs of VfIrpWatermark @ 0x140ACEC28
 * Callers:
 *     PopAllocateIrp @ 0x14028F314 (PopAllocateIrp.c)
 *     IovUtilWatermarkIrp @ 0x140302C64 (IovUtilWatermarkIrp.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140AE2768 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AE28EC (VfIrpDatabaseEntryReleaseLock.c)
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
