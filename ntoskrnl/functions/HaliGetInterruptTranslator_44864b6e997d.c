__int64 __fastcall HaliGetInterruptTranslator(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6)
{
  if ( a3 != 1 && a3 != -1 && a3 != 2 )
    return 3221225474LL;
  *(_QWORD *)(a6 + 4) = 0LL;
  *(_DWORD *)(a6 + 12) = 0;
  *(_QWORD *)(a6 + 16) = xHalTimerWatchdogStop;
  *(_QWORD *)(a6 + 24) = xHalTimerWatchdogStop;
  *(_QWORD *)(a6 + 32) = HalacpiIrqTranslateResourcesIsa;
  *(_QWORD *)(a6 + 40) = HalacpiIrqTranslateResourceRequirementsIsa;
  *(_DWORD *)a6 = 48;
  return 0LL;
}
