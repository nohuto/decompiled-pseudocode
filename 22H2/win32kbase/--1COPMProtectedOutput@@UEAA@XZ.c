/*
 * XREFs of ??1COPMProtectedOutput@@UEAA@XZ @ 0x1C015B164
 * Callers:
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C015B1A0 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMonitorPDO@OPM@@UEAA@XZ @ 0x1C01512A0 (--1CMonitorPDO@OPM@@UEAA@XZ.c)
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C015B610 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 */

void __fastcall COPMProtectedOutput::~COPMProtectedOutput(COPMProtectedOutput *this, unsigned int a2)
{
  bool v2; // zf

  v2 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  if ( !v2 )
    COPMProtectedOutput::Destroy(this);
  OPM::CMonitorPDO::~CMonitorPDO(this, a2);
}
