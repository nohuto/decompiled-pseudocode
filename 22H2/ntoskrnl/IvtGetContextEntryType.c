/*
 * XREFs of IvtGetContextEntryType @ 0x1404DFEB0
 * Callers:
 *     IvtUpdateContextEntry @ 0x1404E0AFC (IvtUpdateContextEntry.c)
 *     IvtUpdateExtendedContextEntry @ 0x1404E0CB0 (IvtUpdateExtendedContextEntry.c)
 *     IvtInitializeIommu @ 0x1409A9A90 (IvtInitializeIommu.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall IvtGetContextEntryType(char a1, char a2)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 5;
  if ( !a2 )
    return 2LL;
  return result;
}
