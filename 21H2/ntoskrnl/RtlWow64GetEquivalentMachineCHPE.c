/*
 * XREFs of RtlWow64GetEquivalentMachineCHPE @ 0x140269590
 * Callers:
 *     PsWow64IsMachineSupported @ 0x1406436B0 (PsWow64IsMachineSupported.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075D09C (LdrImageDirectoryEntryToLoadConfig.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlWow64GetEquivalentMachineCHPE(__int16 a1)
{
  __int16 result; // ax

  result = 332;
  if ( a1 != 14948 )
    return a1;
  return result;
}
