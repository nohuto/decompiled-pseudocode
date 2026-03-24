/*
 * XREFs of PpmCheckReInit @ 0x1407BAFA4
 * Callers:
 *     PpmCheckResumePpmEngineFromSx @ 0x14038D59C (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038D62C (PpmCheckPausePpmEngineForSx.c)
 *     PopIntSteerSetMode @ 0x1403C0E80 (PopIntSteerSetMode.c)
 *     PpmParkSetLpiCap @ 0x14057D954 (PpmParkSetLpiCap.c)
 *     PpmCheckInitProcessors @ 0x1407BA2D8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407BA4A0 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407BAEC0 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x1402056D0 (PoEnergyEstimationEnabled.c)
 *     PpmCheckArmPeriod @ 0x1403C1794 (PpmCheckArmPeriod.c)
 *     PpmPerfClearResponsivenessHints @ 0x1403C181C (PpmPerfClearResponsivenessHints.c)
 *     PopInterruptSteeringEnabled @ 0x1403C1878 (PopInterruptSteeringEnabled.c)
 *     PpmPerfCheckRequired @ 0x1403C1894 (PpmPerfCheckRequired.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x1407BB0F8 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmParkParkingAvailable @ 0x1407BB1D0 (PpmParkParkingAvailable.c)
 *     PpmPerfResetHistoryAll @ 0x1407BC164 (PpmPerfResetHistoryAll.c)
 */

__int64 (__fastcall ***PpmCheckReInit())()
{
  char v0; // bl
  bool v1; // di
  __int64 *v2; // rbp
  char v3; // si
  char v4; // al
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall ***result)(); // rax

  v0 = 0;
  v1 = 0;
  v2 = &PpmCurrentProfile[342 * dword_140C2334C];
  v3 = 0;
  if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
  {
    v1 = PpmPerfCheckRequired((__int64)(v2 + 5)) != 0;
    v0 = v1;
    if ( PpmCheckPollForFeedback )
      v0 = 1;
    v4 = PoEnergyEstimationEnabled();
    v5 = (_DWORD *)v2 + 31;
    if ( v4 )
      v0 = 1;
    v6 = 2LL;
    do
    {
      if ( *v5 != v5[2] )
      {
        v0 = 1;
        v3 = 1;
      }
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  if ( (unsigned __int8)PpmParkParkingAvailable() )
  {
    v0 = 1;
    v1 = 1;
  }
  if ( PopInterruptSteeringEnabled() )
    v0 = 1;
  if ( v0 && !PpmCheckArmed )
    PpmPerfResetHistoryAll();
  if ( PpmCheckForceDisarm )
    v0 = 0;
  if ( !v3 )
    PpmPerfClearResponsivenessHints();
  LOBYTE(v7) = v1;
  PpmParkUpdateConcurrencyTracking(v7);
  if ( v0 )
  {
    PpmCheckArmPeriod();
  }
  else if ( PpmCheckArmed )
  {
    _InterlockedExchange64(&PpmCheckLastExecutionTime, 0LL);
    PpmCheckArmed = 0;
  }
  result = PpmCheckHomogeneousPipelines;
  PpmCheckPipelines = (__int64)PpmCheckHomogeneousPipelines;
  if ( PpmHeteroPolicy )
  {
    if ( v1 )
    {
      result = PpmCheckHeterogeneousPipelines;
      PpmCheckPipelines = (__int64)PpmCheckHeterogeneousPipelines;
    }
  }
  return result;
}
