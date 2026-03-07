__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringLength(
        CPhysicalMonitorHandle *this,
        unsigned int *a2)
{
  int CapabilitiesStringInternal; // ebx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(CPhysicalMonitorHandle *))(*(_QWORD *)this + 16LL))(this) )
  {
    return (unsigned int)-1071774323;
  }
  else
  {
    CapabilitiesStringInternal = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal(this);
    if ( CapabilitiesStringInternal >= 0 )
    {
      OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v6, (CPhysicalMonitorHandle *)((char *)this + 72));
      if ( CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized(this) )
        *a2 = *((_DWORD *)this + 22);
      else
        CapabilitiesStringInternal = -1071774323;
      OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v6);
    }
  }
  return (unsigned int)CapabilitiesStringInternal;
}
