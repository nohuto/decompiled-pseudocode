bool __fastcall KiShouldSoftParkElectionBePerformed(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = (unsigned int)KeSoftParkedQueueThreshold;
  if ( !KeSoftParkedQueueThreshold
    || !(unsigned __int8)KiAreSoftUnparkingElectionsEnabled()
    || *(_QWORD *)(a1 + 712) <= v1 )
  {
    return 0;
  }
  if ( (unsigned int)Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting() )
    v3 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int64)*(unsigned __int16 *)(a1 + 662)
                                                          + *(unsigned __int8 *)(a1 + 657)];
  else
    v3 = *(unsigned __int8 *)(a1 + 657);
  v4 = *(_QWORD *)(KiProcessorBlock[v3] + 192);
  return (~*(_QWORD *)(v4 + 80) & *(_QWORD *)(v4 + 96)) != 0LL;
}
