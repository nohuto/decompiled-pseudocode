/*
 * XREFs of HalpUnregisterSecondaryIcInterface @ 0x1405180D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseSecondaryIcEntryShared @ 0x140379B70 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpDeleteSecondaryIcEntry @ 0x14051787C (HalpDeleteSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntryFromObjectAndRange @ 0x1405179A4 (HalpFindSecondaryIcEntryFromObjectAndRange.c)
 */

__int64 __fastcall HalpUnregisterSecondaryIcInterface(int a1, int a2, __int64 a3)
{
  void *SecondaryIcEntryFromObjectAndRange; // rax
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx

  SecondaryIcEntryFromObjectAndRange = (void *)HalpFindSecondaryIcEntryFromObjectAndRange(a3, a1, a2);
  v4 = (__int64)SecondaryIcEntryFromObjectAndRange;
  if ( SecondaryIcEntryFromObjectAndRange )
  {
    v5 = HalpDeleteSecondaryIcEntry(SecondaryIcEntryFromObjectAndRange);
    if ( v5 < 0 )
    {
      LOBYTE(v6) = 1;
      HalpReleaseSecondaryIcEntryShared(v4, v6);
    }
  }
  else
  {
    return (unsigned int)-1073700575;
  }
  return (unsigned int)v5;
}
