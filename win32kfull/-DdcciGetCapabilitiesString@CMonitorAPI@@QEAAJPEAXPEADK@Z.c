/*
 * XREFs of ?DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z @ 0x1C026B7A0
 * Callers:
 *     NtGdiDDCCIGetCapabilitiesString @ 0x1C026CB50 (NtGdiDDCCIGetCapabilitiesString.c)
 * Callees:
 *     ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z @ 0x1C026B834 (-DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C026C760 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysi.c)
 */

__int64 __fastcall CMonitorAPI::DdcciGetCapabilitiesString(CMonitorAPI *this, void *a2, char *a3, unsigned int a4)
{
  int HandleObject; // ebx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF
  CPhysicalMonitorHandle *v11; // [rsp+40h] [rbp+8h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v10, this);
  v11 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject((char *)this + 8, a2, &v11);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciGetCapabilitiesString(v11, a3, a4);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v10);
  return (unsigned int)HandleObject;
}
