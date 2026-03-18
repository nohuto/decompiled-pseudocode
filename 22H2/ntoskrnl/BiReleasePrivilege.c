/*
 * XREFs of BiReleasePrivilege @ 0x1408086B4
 * Callers:
 *     BiQueryBootOptions @ 0x140804AD4 (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x140808558 (BiTranslateFilePath.c)
 *     BiQueryBootEntryOrder @ 0x1408094AC (BiQueryBootEntryOrder.c)
 *     BiEnumerateBootEntries @ 0x140809560 (BiEnumerateBootEntries.c)
 *     BiLoadHive @ 0x140809604 (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5D60C (BiUnloadHiveByName.c)
 *     BiAddBootEntry @ 0x140A5D7BC (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x140A5E380 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x140A5E400 (BiDeleteEfiVariable.c)
 *     BiModifyBootEntry @ 0x140A5EC3C (BiModifyBootEntry.c)
 *     BiSetBootEntryOrder @ 0x140A5ED5C (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140A5EDD4 (BiSetBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140A5FEA4 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14041A840 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x14080870C (BiAdjustPrivilege.c)
 */

NTSTATUS __fastcall BiReleasePrivilege(unsigned int *a1)
{
  bool v1; // zf
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)a1 + 4) == 0;
  LOBYTE(ThreadInformation) = 0;
  if ( v1 )
    result = BiAdjustPrivilege(*a1, 0LL, &ThreadInformation);
  if ( !*((_BYTE *)a1 + 5) )
  {
    ThreadInformation = 0LL;
    return ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  return result;
}
