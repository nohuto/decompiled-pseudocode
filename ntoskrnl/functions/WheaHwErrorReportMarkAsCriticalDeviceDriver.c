__int64 WheaHwErrorReportMarkAsCriticalDeviceDriver()
{
  __int64 v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  *(_DWORD *)(*(_QWORD *)(v0 + 40) + 12LL) |= 2u;
  return 0LL;
}
