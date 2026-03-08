/*
 * XREFs of NtGdiDDCCISetVCPFeature @ 0x1C026CE60
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z @ 0x1C026C504 (-DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C026C760 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysi.c)
 */

__int64 __fastcall NtGdiDDCCISetVCPFeature(void *a1, char a2, __int16 a3)
{
  struct OPM::CMutex *v6; // rbx
  int HandleObject; // ebx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  CPhysicalMonitorHandle *v10; // [rsp+58h] [rbp+20h] BYREF

  v6 = *(struct OPM::CMutex **)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 8728LL);
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v9, v6);
  v10 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject((__int64)v6 + 8, a1, &v10);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciSetVCPFeature(v10, a2, a3);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v9);
  return (unsigned int)HandleObject;
}
