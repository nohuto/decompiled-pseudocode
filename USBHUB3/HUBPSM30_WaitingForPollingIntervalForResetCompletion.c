__int64 __fastcall HUBPSM30_WaitingForPollingIntervalForResetCompletion(__int64 a1)
{
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 240LL),
    -5000000LL);
  return 1000LL;
}
