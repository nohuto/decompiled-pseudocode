/*
 * XREFs of ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x1C026C6B0
 * Callers:
 *     DestroyPhysicalMonitor @ 0x1C026CB10 (DestroyPhysicalMonitor.c)
 *     NtGdiDestroyPhysicalMonitor @ 0x1C026CF10 (NtGdiDestroyPhysicalMonitor.c)
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@AEAAJPEAVCPhysicalMonitorHandle@@KPEAVCMutex@2@@Z @ 0x1C026C618 (-DestroyHandleInternal@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@AEAAJPEAVCPhysic.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C026C760 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysi.c)
 */

__int64 __fastcall CMonitorAPI::DestroyPhysicalMonitor(CMonitorAPI *this, void *a2)
{
  int HandleObject; // ebx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v8, (CMonitorAPI *)((char *)this + 32));
  v7 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject((char *)this + 8, a2, &v7);
  if ( HandleObject >= 0 )
  {
    v5 = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(
           (__int64)this + 8,
           v7,
           (unsigned int)a2,
           this);
    HandleObject = 0;
    if ( v5 < 0 )
      HandleObject = v5;
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v8);
  return (unsigned int)HandleObject;
}
