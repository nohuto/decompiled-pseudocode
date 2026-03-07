__int64 __fastcall CPhysicalMonitorHandle::Destroy(CPhysicalMonitorHandle *this)
{
  unsigned int v2; // edi
  void *v3; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = OPM::CMonitorPDO::Destroy(this);
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v5, (CPhysicalMonitorHandle *)((char *)this + 72));
  v3 = (void *)*((_QWORD *)this + 10);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x63326947u);
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v5);
  return v2;
}
