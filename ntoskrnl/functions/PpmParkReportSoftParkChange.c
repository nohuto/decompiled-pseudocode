char __fastcall PpmParkReportSoftParkChange(__int64 a1)
{
  int v2; // ebx
  char v3; // si
  int v4; // edx

  v2 = KeCheckProcessorAffinityEx((unsigned __int16 *)&PpmParkNewSoftParkingMask, *(_DWORD *)(a1 + 36));
  v3 = v2 != 0;
  KeTransitionProcessorParkState(a1, (v2 != 0) + 1);
  v4 = *(_DWORD *)(a1 + 36);
  if ( v2 )
    KeInterlockedSetProcessorAffinityEx((__int64)PpmParkSoftParkingMask, v4);
  else
    KeInterlockedClearProcessorAffinityEx((__int64)PpmParkSoftParkingMask, v4);
  *(_BYTE *)(a1 + 33659) = v3;
  return PpmEventCoreParkingSoftParkedStateChange(a1, v3);
}
