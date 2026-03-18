/*
 * XREFs of ?DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z @ 0x1C026F198
 * Callers:
 *     NtGdiDDCCIGetTimingReport @ 0x1C026FDE0 (NtGdiDDCCIGetTimingReport.c)
 * Callees:
 *     ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z @ 0x1C026F224 (-DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C026F9D4 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysi.c)
 */

__int64 __fastcall CMonitorAPI::DdcciGetTimingReport(CMonitorAPI *this, void *a2, struct _MC_TIMING_REPORT *a3)
{
  char *v3; // rbx
  int HandleObject; // ebx
  CPhysicalMonitorHandle *v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = this;
  v3 = (char *)P;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v9, (struct OPM::CMutex *)P);
  v8 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(v3 + 8, a2, &v8);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciGetTimingReport(v8, a3);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v9);
  return (unsigned int)HandleObject;
}
