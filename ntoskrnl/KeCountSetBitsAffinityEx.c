/*
 * XREFs of KeCountSetBitsAffinityEx @ 0x140237550
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402341D0 (PpmParkSteerInterrupts.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140234630 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiComputeThreadAffinity @ 0x140236FD4 (KiComputeThreadAffinity.c)
 *     KeFlushProcessWriteBuffers @ 0x1402373CC (KeFlushProcessWriteBuffers.c)
 *     KiIntSteerLogStatus @ 0x1402A8FAC (KiIntSteerLogStatus.c)
 *     PpmParkReportParkedCores @ 0x1402E3AE0 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x1402EA9E0 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x1402EAA30 (PpmParkReportUnparkedCores.c)
 *     KeSynchronizeSecurityDomain @ 0x1402EAE28 (KeSynchronizeSecurityDomain.c)
 *     PpmPerfApplyProcessorStates @ 0x1402ED3A0 (PpmPerfApplyProcessorStates.c)
 *     KeSynchronizeAddressPolicy @ 0x1402F550C (KeSynchronizeAddressPolicy.c)
 *     KiForwardTick @ 0x1403C61D0 (KiForwardTick.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057AB44 (KiForceIdleUpdateSchedulerParkState.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14059C04C (PPmHeteroHgsUpdateOrderValue.c)
 *     PpmIdleInitializeConcurrency @ 0x1408258E4 (PpmIdleInitializeConcurrency.c)
 *     KiInitializeTopologyStructures @ 0x140A8A348 (KiInitializeTopologyStructures.c)
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
