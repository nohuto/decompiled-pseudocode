/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x1407B9AE8
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x1403A3300 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CDC04 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x140577BA0 (PpmHeteroHgsUpdateWorker.c)
 *     PpmCheckInitProcessors @ 0x1407B9B18 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407B9CE0 (PpmRegisterPerfStates.c)
 *     PpmEnableProfile @ 0x1407C5C14 (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407D3C00 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D4A40 (PopSetupHighPerfPowerRequest.c)
 *     PpmUpdatePerfStates @ 0x1408E6590 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x1408F5C68 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x1407BA700 (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PpmReinitializeHeteroEngine(char a1)
{
  int v1; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
    v1 = 2048;
  else
    v1 = 4096;
  v3 = v1;
  return PpmReapplyPerfPolicy(&v3);
}
