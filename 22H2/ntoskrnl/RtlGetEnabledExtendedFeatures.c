/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x1403B4060
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403F2CE0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     <none>
 */

ULONG64 __stdcall RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  return FeatureMask & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]);
}
