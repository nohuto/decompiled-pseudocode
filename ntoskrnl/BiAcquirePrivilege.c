/*
 * XREFs of BiAcquirePrivilege @ 0x14082F784
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
 *     RtlImpersonateSelfEx @ 0x140783B34 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14082F868 (BiAdjustPrivilege.c)
 */

__int64 __fastcall BiAcquirePrivilege(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // bl
  __int64 result; // rax
  int v6; // edi
  __int64 ThreadInformation; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(ThreadInformation) = 0;
  v2 = a2;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    result = RtlImpersonateSelfEx(2, 0, 0LL);
    if ( (int)result < 0 )
      return result;
  }
  LOBYTE(a2) = 1;
  v6 = BiAdjustPrivilege(a1, a2, &ThreadInformation);
  if ( v6 < 0 )
  {
    if ( !v4 )
    {
      ThreadInformation = 0LL;
      ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    }
  }
  else
  {
    *(_BYTE *)(v2 + 4) = ThreadInformation;
    *(_BYTE *)(v2 + 5) = v4;
    *(_DWORD *)v2 = a1;
  }
  return (unsigned int)v6;
}
