__int64 __fastcall HUBDSM_RequestingCyclePortAndCompletingPnpEventOnFailureInUnconfigured(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 8) + 1240LL))(*(_QWORD *)(v1 + 8), 3011LL);
  HUBPDO_SignalPnpPowerEvent(v1);
  return 4077LL;
}
