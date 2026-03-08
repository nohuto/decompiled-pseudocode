/*
 * XREFs of MiAddUnicodeStringToCrashDump @ 0x14062D4C4
 * Callers:
 *     MiAddPartitionToCrashDump @ 0x14062D1FC (MiAddPartitionToCrashDump.c)
 * Callees:
 *     MiIsAddressRangeValid @ 0x14062D8D4 (MiIsAddressRangeValid.c)
 *     MmAddRangeToCrashDump @ 0x14062DD30 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall MiAddUnicodeStringToCrashDump(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi

  if ( *(_WORD *)(a2 + 2) )
  {
    v4 = *(unsigned __int16 *)(a2 + 2);
    if ( !(unsigned int)MiIsAddressRangeValid(*(_QWORD *)(a2 + 8), v4) )
      return 3221225473LL;
    MmAddRangeToCrashDump(a1, *(_QWORD *)(a2 + 8), v4);
  }
  return 0LL;
}
