__int64 __fastcall PopPowerAggregatorEngageAggressiveStandbyActions(int a1)
{
  int v1; // ecx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx

  PopAcquirePolicyLock(a1);
  if ( dword_140C3D4D8 )
  {
    if ( (unsigned int)PopNetCheckAdaptiveCsState() != 1 )
      goto LABEL_7;
    v1 = 7;
  }
  else
  {
    v1 = 1;
  }
  PopNetSetConnectivityConstraint(v1);
  if ( dword_140C3D4DC == 1 )
    PopAggressiveStandbyAppliedActions ^= ((unsigned __int8)PopAggressiveStandbyAppliedActions ^ (unsigned __int8)PopAggressiveStandbyEnabledActions) & 1;
LABEL_7:
  v4 = ((unsigned __int8)PopAggressiveStandbyAppliedActions ^ (unsigned __int8)PopAggressiveStandbyEnabledActions) & 4;
  PopAggressiveStandbyAppliedActions ^= v4;
  PopReleasePolicyLock(v2, v4, v3);
  return PopPdcEngagePhases();
}
