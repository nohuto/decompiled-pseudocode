/*
 * XREFs of VfIrpWatermark @ 0x140A8D2FC
 * Callers:
 *     IovUtilWatermarkIrp @ 0x1402D3080 (IovUtilWatermarkIrp.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140AA5A48 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AA5BCC (VfIrpDatabaseEntryReleaseLock.c)
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
