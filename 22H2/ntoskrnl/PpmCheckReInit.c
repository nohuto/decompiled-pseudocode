/*
 * XREFs of PpmCheckReInit @ 0x14082E63C
 * Callers:
 *     PopIntSteerSetMode @ 0x14038FCD0 (PopIntSteerSetMode.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140596418 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14059645C (PpmCheckResumePpmEngineFromSx.c)
 *     PpmParkSetLpiCap @ 0x14059D31C (PpmParkSetLpiCap.c)
 *     PpmReapplyPerfPolicy @ 0x14082E210 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x14082FE14 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14083009C (PpmRegisterPerfStates.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x1402C0B20 (PoEnergyEstimationEnabled.c)
 *     PopInterruptSteeringEnabled @ 0x140390748 (PopInterruptSteeringEnabled.c)
 *     PpmPerfClearResponsivenessHints @ 0x140390764 (PpmPerfClearResponsivenessHints.c)
 *     PpmCheckArmPeriod @ 0x1403907C0 (PpmCheckArmPeriod.c)
 *     PpmPerfCheckRequired @ 0x140390848 (PpmPerfCheckRequired.c)
 *     PpmParkParkingAvailable @ 0x14082E76C (PpmParkParkingAvailable.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x14082E88C (PpmParkUpdateConcurrencyTracking.c)
 *     PpmPerfResetHistoryAll @ 0x140830D34 (PpmPerfResetHistoryAll.c)
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
  v2 = &PpmCurrentProfile[55 * dword_140C3D90C];
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
