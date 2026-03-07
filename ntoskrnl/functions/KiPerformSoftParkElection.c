__int64 __fastcall KiPerformSoftParkElection(__int64 a1, __int64 a2)
{
  int v3; // ecx

  v3 = KiPerformSoftParkElectionRound(a1, a2, ~*(_QWORD *)(a1 + 80) & *(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 80));
  if ( v3 == -1 )
    return 0LL;
  else
    return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(a1 + 136) + v3]];
}
