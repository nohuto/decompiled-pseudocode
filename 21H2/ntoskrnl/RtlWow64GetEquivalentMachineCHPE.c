/*
 * XREFs of RtlWow64GetEquivalentMachineCHPE @ 0x14027B5F0
 * Callers:
 *     PsWow64IsMachineSupported @ 0x14064E890 (PsWow64IsMachineSupported.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075CEDC (LdrImageDirectoryEntryToLoadConfig.c)
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
