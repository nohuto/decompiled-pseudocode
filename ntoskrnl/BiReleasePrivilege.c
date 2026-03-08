/*
 * XREFs of BiReleasePrivilege @ 0x14082F810
 * Callers:
 *     BiQueryBootEntryOrder @ 0x14082BC18 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x14082BCCC (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x14082F6B4 (BiTranslateFilePath.c)
 *     BiEnumerateBootEntries @ 0x140830608 (BiEnumerateBootEntries.c)
 *     BiLoadHive @ 0x1408306AC (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5A134 (BiUnloadHiveByName.c)
 *     BiAddBootEntry @ 0x140A5AAD4 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x140A5B66C (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x140A5B6EC (BiDeleteEfiVariable.c)
 *     BiModifyBootEntry @ 0x140A5BF28 (BiModifyBootEntry.c)
 *     BiSetBootEntryOrder @ 0x140A5C048 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140A5C0C0 (BiSetBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140A5D1A4 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1404124B0 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x14082F868 (BiAdjustPrivilege.c)
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
