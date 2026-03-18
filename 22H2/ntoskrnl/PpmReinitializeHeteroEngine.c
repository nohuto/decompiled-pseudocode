/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x140830CF8
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x14036D1E4 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x1403ABBD4 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x14059E910 (PpmHeteroHgsUpdateWorker.c)
 *     PpmEnableProfile @ 0x14082D878 (PpmEnableProfile.c)
 *     PpmCheckInitProcessors @ 0x14082FE14 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14083009C (PpmRegisterPerfStates.c)
 *     PopPpmHeteroPolicyCallback @ 0x1408646F0 (PopPpmHeteroPolicyCallback.c)
 *     PpmUpdatePerfStates @ 0x140986D70 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x14099D234 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x14082E210 (PpmReapplyPerfPolicy.c)
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
