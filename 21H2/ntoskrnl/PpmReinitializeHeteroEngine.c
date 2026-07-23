/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x1407BA278
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x1403A3450 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CDD74 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x140577DE0 (PpmHeteroHgsUpdateWorker.c)
 *     PpmCheckInitProcessors @ 0x1407BA2A8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 *     PpmEnableProfile @ 0x1407C6134 (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407D3D70 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D4BB0 (PopSetupHighPerfPowerRequest.c)
 *     PpmUpdatePerfStates @ 0x1408E66F0 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x1408F5DC8 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x1407BAE90 (PpmReapplyPerfPolicy.c)
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
