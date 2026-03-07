__int64 __fastcall KiUpdateLocalReadyQueueStatisticsOnRemoval(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_DWORD *)(a1 + 33140);
  *(_QWORD *)(a1 + 33144) -= *(unsigned int *)(a2 + 2288);
  MmGetMinWsPagePriority();
  result = Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting(0);
  if ( (_DWORD)result )
    return KiUpdateSoftParkElectionStatisticsOnRemoval(*(_QWORD *)(a1 + 34888), a2, 0);
  return result;
}
