void __fastcall COPMProtectedOutput::~COPMProtectedOutput(COPMProtectedOutput *this, unsigned int a2)
{
  bool v2; // zf

  v2 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  if ( !v2 )
    COPMProtectedOutput::Destroy(this);
  OPM::CMonitorPDO::~CMonitorPDO(this, a2);
}
