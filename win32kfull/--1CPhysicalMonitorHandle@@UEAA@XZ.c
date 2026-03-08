/*
 * XREFs of ??1CPhysicalMonitorHandle@@UEAA@XZ @ 0x1C026B3F8
 * Callers:
 *     ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x1C026B450 (--_GCPhysicalMonitorHandle@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Destroy@CPhysicalMonitorHandle@@UEAAJXZ @ 0x1C026C5A0 (-Destroy@CPhysicalMonitorHandle@@UEAAJXZ.c)
 */

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
