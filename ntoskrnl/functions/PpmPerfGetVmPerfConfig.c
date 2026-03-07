__int64 __fastcall PpmPerfGetVmPerfConfig(int a1, unsigned __int64 *a2)
{
  unsigned int v4; // ebx
  _PROC_PERF_DOMAIN *Domain; // r11
  unsigned int MaxPercent; // esi
  unsigned int MinThrottlePercent; // ebp
  int v8; // edi
  unsigned int MinPerfPercent; // eax
  unsigned int MinPolicyPercent; // r10d
  unsigned int v11; // eax
  unsigned int MaxPolicyPercent; // ecx
  unsigned int MaxEquivalentFrequencyPercent; // r9d
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v4 = 0;
  if ( !PpmPerfVmPerfSelectionSupported )
  {
    v4 = -1073741637;
    goto LABEL_62;
  }
  if ( !a1 )
  {
    *a2 = 0LL;
    goto LABEL_62;
  }
  Domain = KeGetCurrentPrcb()->PowerState.CheckContext.Domain;
  MaxPercent = Domain->MaxPercent;
  MinThrottlePercent = Domain->MinThrottlePercent;
  v8 = Domain->QosPolicies[0].ProvideGuidance == 0 ? 4 : 0;
  if ( Domain->QosPolicies[0].AllowThrottling )
  {
    v8 |= 1u;
    MinPerfPercent = Domain->MinThrottlePercent;
  }
  else
  {
    MinPerfPercent = Domain->MinPerfPercent;
  }
  MinPolicyPercent = Domain->QosPolicies[0].MinPolicyPercent;
  if ( MinPerfPercent > MinPolicyPercent )
    MinPolicyPercent = MinPerfPercent;
  if ( Domain->QosPolicies[0].PerfBoostMode )
  {
    v11 = Domain->MaxPercent;
  }
  else
  {
    v8 |= 8u;
    v11 = 100;
  }
  MaxPolicyPercent = Domain->QosPolicies[0].MaxPolicyPercent;
  if ( MaxPolicyPercent < 0x64 && v11 >= MaxPolicyPercent )
    v11 = Domain->QosPolicies[0].MaxPolicyPercent;
  MaxEquivalentFrequencyPercent = Domain->QosPolicies[0].MaxEquivalentFrequencyPercent;
  if ( v11 < MaxEquivalentFrequencyPercent )
    MaxEquivalentFrequencyPercent = v11;
  v15 = ((Domain->NominalFrequency >> 1) + 100 * a1) / Domain->NominalFrequency;
  v14 = v15;
  v16 = v15;
  if ( MaxEquivalentFrequencyPercent < v15 )
    v15 = MaxEquivalentFrequencyPercent;
  if ( MinPolicyPercent < v14 )
    v14 = MinPolicyPercent;
  if ( v14 <= MinThrottlePercent )
  {
    v17 = MinThrottlePercent;
    if ( MinPolicyPercent < (unsigned int)v16 )
      goto LABEL_32;
  }
  else
  {
    if ( MinPolicyPercent < (unsigned int)v16 )
    {
      v17 = MinPolicyPercent;
LABEL_32:
      v18 = MinPolicyPercent;
      goto LABEL_27;
    }
    v17 = (unsigned int)v16;
  }
  v18 = v16;
LABEL_27:
  if ( v18 <= v15 )
  {
    v19 = v15;
  }
  else
  {
    v19 = v16;
    if ( MinPolicyPercent < (unsigned int)v16 )
      v19 = MinPolicyPercent;
  }
  if ( v19 >= MaxPercent )
  {
    v21 = Domain->MaxPercent;
  }
  else
  {
    v20 = v16;
    if ( MinPolicyPercent < (unsigned int)v16 )
      v20 = MinPolicyPercent;
    if ( v20 <= v15 )
    {
      v21 = v15;
    }
    else
    {
      v21 = v16;
      if ( MinPolicyPercent < (unsigned int)v16 )
        v21 = MinPolicyPercent;
    }
  }
  if ( v21 <= MinThrottlePercent )
  {
    v16 = MinThrottlePercent;
  }
  else
  {
    v22 = v16;
    if ( MinPolicyPercent < (unsigned int)v16 )
      v22 = MinPolicyPercent;
    if ( v22 <= v15 )
    {
      v23 = v15;
    }
    else
    {
      v23 = v16;
      if ( MinPolicyPercent < (unsigned int)v16 )
        v23 = MinPolicyPercent;
    }
    if ( v23 >= MaxPercent )
    {
      v16 = MaxPercent;
    }
    else
    {
      v24 = v16;
      if ( MinPolicyPercent < (unsigned int)v16 )
        v24 = MinPolicyPercent;
      if ( v24 <= v15 )
      {
        v16 = v15;
      }
      else if ( MinPolicyPercent < (unsigned int)v16 )
      {
        v16 = MinPolicyPercent;
      }
    }
  }
  Domain->PerfSelectionHandler(
    Domain->Processors->PerfContext,
    v16,
    v17,
    v16,
    Domain->QosPolicies[0].EnergyPerfPreference,
    Domain->QosPolicies[0].AutonomousActivityWindow,
    v8,
    0LL,
    a2);
LABEL_62:
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v4;
}
