__int64 __fastcall NtGdiGetNumberOfPhysicalMonitors(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int SuggestedPhysicalMonitorArraySize; // ebx

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  if ( (int)result >= 0 )
  {
    SuggestedPhysicalMonitorArraySize = DrvGetSuggestedPhysicalMonitorArraySize(a1, 1LL, a2);
    ReleaseUserCriticalSection();
    return SuggestedPhysicalMonitorArraySize;
  }
  return result;
}
