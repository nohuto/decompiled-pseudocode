/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x140828C88
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x1402D1A5C (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x1403A6744 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x14059C3F0 (PpmHeteroHgsUpdateWorker.c)
 *     PpmEnableProfile @ 0x140825808 (PpmEnableProfile.c)
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 *     PopPpmHeteroPolicyCallback @ 0x1408601B0 (PopPpmHeteroPolicyCallback.c)
 *     PpmUpdatePerfStates @ 0x140983CC0 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x14099A1A4 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x1408261A0 (PpmReapplyPerfPolicy.c)
 */

void __fastcall PpmReinitializeHeteroEngine(char a1, char a2)
{
  int v2; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
    v2 = 2048;
  else
    v2 = 4096;
  v3 = v2;
  if ( a2 )
    v3 = v2 | 0x4000;
  PpmReapplyPerfPolicy(&v3);
}
