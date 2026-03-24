/*
 * XREFs of BiReleasePrivilege @ 0x140785B38
 * Callers:
 *     BiUnloadHiveByName @ 0x140779304 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140785948 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x140970188 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x140971854 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x1409718D4 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x1409719E8 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x140972840 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x1409728AC (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x140972984 (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x140972B14 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140972B8C (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x140972D78 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x140973FF8 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1403F9BC0 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x140785C10 (BiAdjustPrivilege.c)
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
