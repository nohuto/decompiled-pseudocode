/*
 * XREFs of ??1COPMProtectedOutput@@UEAA@XZ @ 0x1C016C890
 * Callers:
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C016C8D0 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMonitorPDO@OPM@@UEAA@XZ @ 0x1C0169330 (--1CMonitorPDO@OPM@@UEAA@XZ.c)
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C016CAD0 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 */

void __fastcall COPMProtectedOutput::~COPMProtectedOutput(COPMProtectedOutput *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  if ( !v1 )
    COPMProtectedOutput::Destroy(this);
  OPM::CMonitorPDO::~CMonitorPDO(this);
}
