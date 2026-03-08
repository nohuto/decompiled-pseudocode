/*
 * XREFs of KiEncls @ 0x140417230
 * Callers:
 *     KeAddEnclavePage @ 0x14056DC68 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x14056DDC8 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x14056DE10 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x14056DED0 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x14056DFD0 (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x14056E00C (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x14056E0D0 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x14056E10C (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x140971484 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x14097163C (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1409716C0 (KeInitializeEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEncls(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  __asm { encls }
  return result;
}
