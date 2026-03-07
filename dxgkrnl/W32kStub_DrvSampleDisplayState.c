__int64 __fastcall W32kStub_DrvSampleDisplayState(_DWORD *a1)
{
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0;
  a1[1] = Win32Stub_MonitorUniqueness;
  a1[2] = Win32Stub_PopulationUniqueness;
  return 0LL;
}
