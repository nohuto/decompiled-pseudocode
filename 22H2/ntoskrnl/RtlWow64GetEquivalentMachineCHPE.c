/*
 * XREFs of RtlWow64GetEquivalentMachineCHPE @ 0x140344600
 * Callers:
 *     PsWow64IsMachineSupported @ 0x1406C7650 (PsWow64IsMachineSupported.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075C6CC (LdrImageDirectoryEntryToLoadConfig.c)
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
