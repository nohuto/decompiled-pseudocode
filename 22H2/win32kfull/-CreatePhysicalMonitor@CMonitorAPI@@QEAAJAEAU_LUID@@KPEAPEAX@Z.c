/*
 * XREFs of ?CreatePhysicalMonitor@CMonitorAPI@@QEAAJAEAU_LUID@@KPEAPEAX@Z @ 0x1C0270664
 * Callers:
 *     CreatePhysicalMonitorWrap @ 0x1C0271B30 (CreatePhysicalMonitorWrap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ??0CPhysicalMonitorHandle@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C0270374 (--0CPhysicalMonitorHandle@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAVCPhysicalMonitorHandle@@PEAPEAX@Z @ 0x1C0270558 (-AddHandleToTable@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAVCPhysicalMon.c)
 */

__int64 __fastcall CMonitorAPI::CreatePhysicalMonitor(CMonitorAPI *this, struct _LUID *a2, unsigned int a3, void **a4)
{
  PVOID v4; // rbx
  CPhysicalMonitorHandle *PoolWithTag; // rax
  CPhysicalMonitorHandle *v9; // rdi
  unsigned int v10; // ebx
  void *v12; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v13[16]; // [rsp+28h] [rbp-10h] BYREF
  CMonitorAPI *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = this;
  v4 = qword_1C033A068;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v13, (struct OPM::CMutex *)qword_1C033A068);
  v12 = 0LL;
  LODWORD(v14) = 0;
  PoolWithTag = (CPhysicalMonitorHandle *)ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x63326947u);
  if ( PoolWithTag )
    v9 = CPhysicalMonitorHandle::CPhysicalMonitorHandle(PoolWithTag, a2, a3, (int *)&v14);
  else
    v9 = 0LL;
  if ( v9 )
  {
    if ( (int)v14 < 0
      || (LODWORD(v14) = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::AddHandleToTable(
                           (__int64)v4 + 8,
                           (__int64)v9,
                           &v12),
          v10 = (unsigned int)v14,
          (int)v14 < 0) )
    {
      (**(void (__fastcall ***)(CPhysicalMonitorHandle *, __int64))v9)(v9, 1LL);
      v10 = (unsigned int)v14;
    }
    else
    {
      *a4 = v12;
    }
  }
  else
  {
    v10 = -1073741801;
    LODWORD(v14) = -1073741801;
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v13);
  return v10;
}
