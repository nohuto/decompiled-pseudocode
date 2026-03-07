void __fastcall CPhysicalMonitorHandle::~CPhysicalMonitorHandle(CPhysicalMonitorHandle *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &CPhysicalMonitorHandle::`vftable';
  if ( !v1 )
    CPhysicalMonitorHandle::Destroy(this);
  OPM::CMutex::~CMutex((CPhysicalMonitorHandle *)((char *)this + 72));
  OPM::CMonitorPDO::~CMonitorPDO(this);
}
