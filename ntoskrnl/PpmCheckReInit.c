/*
 * XREFs of PpmCheckReInit @ 0x1408265CC
 * Callers:
 *     PopIntSteerSetMode @ 0x14038D810 (PopIntSteerSetMode.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140593EFC (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x140593F40 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmParkSetLpiCap @ 0x14059ADFC (PpmParkSetLpiCap.c)
 *     PpmReapplyPerfPolicy @ 0x1408261A0 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x1402384C0 (PoEnergyEstimationEnabled.c)
 *     PopInterruptSteeringEnabled @ 0x14038E288 (PopInterruptSteeringEnabled.c)
 *     PpmPerfClearResponsivenessHints @ 0x14038E2A4 (PpmPerfClearResponsivenessHints.c)
 *     PpmCheckArmPeriod @ 0x14038E300 (PpmCheckArmPeriod.c)
 *     PpmPerfCheckRequired @ 0x14038E388 (PpmPerfCheckRequired.c)
 *     PpmParkParkingAvailable @ 0x1408266FC (PpmParkParkingAvailable.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x14082681C (PpmParkUpdateConcurrencyTracking.c)
 *     PpmPerfResetHistoryAll @ 0x140828CC4 (PpmPerfResetHistoryAll.c)
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
  v2 = &PpmCurrentProfile[55 * dword_140C3D48C];
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
