/*
 * XREFs of PpmCheckReInit @ 0x14081A3AC
 * Callers:
 *     PpmCheckResumePpmEngineFromSx @ 0x140399068 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140399140 (PpmCheckPausePpmEngineForSx.c)
 *     PopIntSteerSetMode @ 0x1403DEC60 (PopIntSteerSetMode.c)
 *     PpmParkSetLpiCap @ 0x1405DD354 (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140849940 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     PpmPerfClearResponsivenessHints @ 0x1403B3E0C (PpmPerfClearResponsivenessHints.c)
 *     PopInterruptSteeringEnabled @ 0x1403B3E68 (PopInterruptSteeringEnabled.c)
 *     PpmCheckArmPeriod @ 0x1403B3E84 (PpmCheckArmPeriod.c)
 *     PpmPerfCheckRequired @ 0x1403B3F0C (PpmPerfCheckRequired.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x14081A4FC (PpmParkUpdateConcurrencyTracking.c)
 *     PpmParkParkingAvailable @ 0x14081A654 (PpmParkParkingAvailable.c)
 *     PpmPerfResetHistoryAll @ 0x14081A760 (PpmPerfResetHistoryAll.c)
 */

__int64 (__fastcall ***PpmCheckReInit())()
{
  char v0; // bl
  bool v1; // si
  __int64 *v2; // r14
  char v3; // di
  char v4; // bp
  char v5; // al
  _DWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // bl
  __int64 (__fastcall ***result)(); // rax

  v0 = 0;
  v1 = 0;
  v2 = &PpmCurrentProfile[534 * dword_140C232CC];
  v3 = 1;
  v4 = 0;
  if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
  {
    v1 = PpmPerfCheckRequired((__int64)(v2 + 5)) != 0;
    v0 = v1;
    if ( PpmCheckPollForFeedback )
      v0 = 1;
    v5 = PoEnergyEstimationEnabled();
    v6 = (_DWORD *)v2 + 31;
    if ( v5 )
      v0 = 1;
    v7 = 2LL;
    do
    {
      if ( *v6 != v6[2] )
      {
        v0 = 1;
        v4 = 1;
      }
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  if ( (unsigned __int8)PpmParkParkingAvailable() )
  {
    v0 = 1;
    v1 = 1;
  }
  if ( (PopInterruptSteeringEnabled() || (v3 = v0) != 0) && !PpmCheckArmed )
    PpmPerfResetHistoryAll();
  v9 = v3;
  if ( PpmCheckForceDisarm )
    v9 = 0;
  if ( !v4 )
    PpmPerfClearResponsivenessHints();
  LOBYTE(v8) = v1;
  PpmParkUpdateConcurrencyTracking(v8);
  if ( v9 )
  {
    PpmCheckArmPeriod();
  }
  else if ( PpmCheckArmed )
  {
    _InterlockedExchange64(&PpmCheckLastEffectiveExecutionTime, 0LL);
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
