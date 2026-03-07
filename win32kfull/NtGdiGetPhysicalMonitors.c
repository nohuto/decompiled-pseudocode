__int64 __fastcall NtGdiGetPhysicalMonitors(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdi
  int PhysicalMonitorObjects; // ebx

  v8 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  OPM::CMutex::Lock(*(OPM::CMutex **)(v8 + 8728));
  PhysicalMonitorObjects = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  if ( PhysicalMonitorObjects >= 0 )
  {
    PhysicalMonitorObjects = DrvCreatePhysicalMonitorObjects(a1, 1LL, 1LL, 1LL, a2, a3, a4);
    ReleaseUserCriticalSection();
  }
  OPM::CMutex::Unlock(*(OPM::CMutex **)(v8 + 8728));
  return (unsigned int)PhysicalMonitorObjects;
}
