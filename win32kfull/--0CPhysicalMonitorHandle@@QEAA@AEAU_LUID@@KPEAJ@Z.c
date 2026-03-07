CPhysicalMonitorHandle *__fastcall CPhysicalMonitorHandle::CPhysicalMonitorHandle(
        CPhysicalMonitorHandle *this,
        struct _LUID *a2,
        unsigned int a3,
        int *a4)
{
  CPhysicalMonitorHandle *result; // rax

  OPM::CMonitorPDO::CMonitorPDO(this, a2, a3, a4);
  *(_QWORD *)this = &CPhysicalMonitorHandle::`vftable';
  OPM::CMutex::CMutex((CPhysicalMonitorHandle *)((char *)this + 72), a4);
  *((_QWORD *)this + 10) = 0LL;
  result = this;
  *((_DWORD *)this + 22) = 0;
  return result;
}
