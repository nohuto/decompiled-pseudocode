/*
 * XREFs of ?GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z @ 0x1C026C7DC
 * Callers:
 *     NtGdiGetPhysicalMonitorDescription @ 0x1C026CF50 (NtGdiGetPhysicalMonitorDescription.c)
 * Callees:
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C026C760 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysi.c)
 *     ?GetMonitorDescription@CPhysicalMonitorHandle@@QEAAJKPEAG@Z @ 0x1C026C86C (-GetMonitorDescription@CPhysicalMonitorHandle@@QEAAJKPEAG@Z.c)
 */

__int64 __fastcall CMonitorAPI::GetMonitorDescription(
        CMonitorAPI *this,
        void *a2,
        unsigned int a3,
        unsigned __int16 *a4)
{
  int HandleObject; // ebx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF
  CPhysicalMonitorHandle *v11; // [rsp+40h] [rbp+8h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v10, this);
  v11 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject((__int64)this + 8, a2, &v11);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::GetMonitorDescription(v11, a3, a4);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v10);
  return (unsigned int)HandleObject;
}
