/*
 * XREFs of ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x1C026F91C
 * Callers:
 *     NtGdiDestroyPhysicalMonitor @ 0x1C026FD30 (NtGdiDestroyPhysicalMonitor.c)
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@AEAAJPEAVCPhysicalMonitorHandle@@KPEAVCMutex@2@@Z @ 0x1C026F888 (-DestroyHandleInternal@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@AEAAJPEAVCPhysic.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C026F9D4 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysi.c)
 */

__int64 __fastcall CMonitorAPI::DestroyPhysicalMonitor(CMonitorAPI *this, void *a2)
{
  struct OPM::CMutex *v2; // rdi
  int HandleObject; // ebx
  int v5; // eax
  CMonitorAPI *v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = this;
  v2 = (struct OPM::CMutex *)P;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v8, (struct OPM::CMutex *)((char *)P + 32));
  v7 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject((char *)v2 + 8, a2, &v7);
  if ( HandleObject >= 0 )
  {
    v5 = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(
           (__int64)v2 + 8,
           (__int64)v7,
           (unsigned int)a2,
           v2);
    HandleObject = 0;
    if ( v5 < 0 )
      HandleObject = v5;
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v8);
  return (unsigned int)HandleObject;
}
