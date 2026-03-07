bool __fastcall HalpTimerQueryWakeTime(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r11
  bool v4; // cf

  v2 = HalpTscOnWake;
  v3 = HalpTscRestoreValue;
  v4 = HalpTscOnWake < (unsigned __int64)HalpTscRestoreValue;
  *a1 = HalpTscOnWake;
  if ( a2 )
  {
    if ( v3 > __rdtsc() )
      HIDWORD(HalpTscRestoreValue) = 0;
    *a2 = HalpTscRestoreValue - v2;
  }
  return v4;
}
