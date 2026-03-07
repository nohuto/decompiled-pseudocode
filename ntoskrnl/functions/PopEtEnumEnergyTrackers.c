__int64 __fastcall PopEtEnumEnergyTrackers(__int64 a1, __int64 a2)
{
  void *i; // rcx
  __int64 NextEnergyTracker; // rax
  void *v5; // rbx
  int v6; // edi

  for ( i = 0LL; ; i = v5 )
  {
    NextEnergyTracker = PopEtGetNextEnergyTracker(i);
    v5 = (void *)NextEnergyTracker;
    if ( !NextEnergyTracker )
      return 0;
    v6 = PopEtEnergyTrackerEnumSnapshotCallback(NextEnergyTracker, a2);
    if ( v6 < 0 )
      break;
  }
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x74456F50u);
  return (unsigned int)v6;
}
