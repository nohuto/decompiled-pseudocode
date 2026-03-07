void __fastcall OPM::CMonitorPDO::~CMonitorPDO(OPM::CMonitorPDO *this, unsigned int a2)
{
  bool v2; // zf
  void *v4; // rcx

  v2 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &OPM::CMonitorPDO::`vftable';
  if ( !v2 )
    OPM::CMonitorPDO::Destroy(this);
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
    OPM::CMutex::`scalar deleting destructor'(v4, a2);
  *((_QWORD *)this + 1) = 0LL;
}
