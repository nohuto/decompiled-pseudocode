/*
 * XREFs of AcpiArblibGetNextAlias @ 0x1C007D0B4
 * Callers:
 *     AcpiArblibIsAliasedRangeAvailable @ 0x1C007D0E8 (AcpiArblibIsAliasedRangeAvailable.c)
 *     AcpiPortarbAddAllocation @ 0x1C008C0D0 (AcpiPortarbAddAllocation.c)
 *     AcpiPortarbBacktrackAllocation @ 0x1C008C1D0 (AcpiPortarbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiArblibGetNextAlias(char a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax

  if ( (a1 & 4) != 0 )
  {
    v3 = 1024LL;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return 0;
    v3 = 4096LL;
  }
  if ( (unsigned __int64)(v3 + a2) <= 0xFFFF )
  {
    *a3 = v3 + a2;
    return 1;
  }
  return 0;
}
