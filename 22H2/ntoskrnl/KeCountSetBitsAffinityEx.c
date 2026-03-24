/*
 * XREFs of KeCountSetBitsAffinityEx @ 0x140344490
 * Callers:
 *     KiForwardTick @ 0x140227F90 (KiForwardTick.c)
 *     PpmParkReportParkedCores @ 0x140303400 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x140307C00 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x140307C50 (PpmParkReportUnparkedCores.c)
 *     KeSynchronizeSecurityDomain @ 0x1403154EC (KeSynchronizeSecurityDomain.c)
 *     KeSynchronizeAddressPolicy @ 0x14031B76C (KeSynchronizeAddressPolicy.c)
 *     KeFlushProcessWriteBuffers @ 0x140343D14 (KeFlushProcessWriteBuffers.c)
 *     PpmPerfApplyProcessorStates @ 0x140398250 (PpmPerfApplyProcessorStates.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C1DF4 (PpmHeteroUpdateHgsConfiguration.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1405233F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmIdleInitializeConcurrency @ 0x1407BB2E8 (PpmIdleInitializeConcurrency.c)
 *     KiInitializeKernel @ 0x14099CCF0 (KiInitializeKernel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCountSetBitsAffinityEx(unsigned __int16 *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // r8d
  unsigned __int64 *v3; // rcx
  __int64 v4; // r9
  unsigned __int64 v5; // rdx

  v1 = *a1;
  v2 = 0;
  if ( (_WORD)v1 )
  {
    v3 = (unsigned __int64 *)(a1 + 4);
    v4 = v1;
    do
    {
      v5 = *v3++;
      v2 += (unsigned int)((0x101010101010101LL
                          * ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
