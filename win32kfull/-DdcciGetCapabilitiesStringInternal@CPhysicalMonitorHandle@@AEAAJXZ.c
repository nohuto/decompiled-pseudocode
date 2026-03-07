__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal(CPhysicalMonitorHandle *this)
{
  void *v2; // rcx
  struct OPM::CMutex *v3; // rdx
  unsigned int CapabilitiesStringFromRegistry; // edi
  char v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v7, (CPhysicalMonitorHandle *)((char *)this + 72));
  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x63326947u);
  v3 = (struct OPM::CMutex *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v6, v3);
  CapabilitiesStringFromRegistry = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromRegistry((PDEVICE_OBJECT *)this);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v6);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v7);
  if ( CapabilitiesStringFromRegistry == 1612644351 )
    return (unsigned int)CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor(this);
  return CapabilitiesStringFromRegistry;
}
