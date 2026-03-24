/*
 * XREFs of KiEncls @ 0x1403FE6E0
 * Callers:
 *     KeAddEnclavePage @ 0x140514E98 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x14051500C (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x14051505C (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x140515124 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x14051522C (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x140515270 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x140515330 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x140515374 (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x1408BB4EC (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1408BB6AC (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1408BB738 (KeInitializeEnclave.c)
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
