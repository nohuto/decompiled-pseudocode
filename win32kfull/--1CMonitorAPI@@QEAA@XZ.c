/*
 * XREFs of ??1CMonitorAPI@@QEAA@XZ @ 0x1C00F47E0
 * Callers:
 *     DDCCICleanUpWrap @ 0x1C00F4770 (DDCCICleanUpWrap.c)
 * Callees:
 *     ??1?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAA@XZ @ 0x1C00F4820 (--1-$CList@VCPhysicalMonitorHandle@@@OPM@@QEAA@XZ.c)
 */

void __fastcall CMonitorAPI::~CMonitorAPI(CMonitorAPI *this)
{
  OPM::CMutex::~CMutex((CMonitorAPI *)((char *)this + 32));
  OPM::CList<CPhysicalMonitorHandle>::~CList<CPhysicalMonitorHandle>((char *)this + 8);
  OPM::CMutex::~CMutex(this);
}
