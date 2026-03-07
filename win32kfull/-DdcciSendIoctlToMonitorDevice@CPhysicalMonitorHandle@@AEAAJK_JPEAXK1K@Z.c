__int64 __fastcall CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(
        struct OPM::CMutex **this,
        unsigned int a2,
        union _LARGE_INTEGER a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  NTSTATUS v11; // ebx
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp-28h] BYREF
  char v14; // [rsp+60h] [rbp+8h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v14, this[1]);
  if ( (*((unsigned __int8 (__fastcall **)(struct OPM::CMutex **))*this + 2))(this) )
  {
    v11 = -1071774323;
  }
  else
  {
    v11 = AcquireCriticalSectionAndCheckState();
    if ( v11 >= 0 )
    {
      v11 = CallMonitor(this[2], a2, a4, a5, a6, a7);
      ReleaseUserCriticalSection();
      if ( v11 >= 0 && a3.QuadPart < 0 )
      {
        Interval = a3;
        v11 = KeDelayExecutionThread(0, OPM::NOT_ALERTABLE, &Interval);
      }
    }
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v14);
  return (unsigned int)v11;
}
