/*
 * XREFs of ??1ResourceSetClientProxy@@MEAA@XZ @ 0x180012544
 * Callers:
 *     ??_GResourceSetClientProxy@@MEAAPEAXI@Z @ 0x1800125E0 (--_GResourceSetClientProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x180013700 (-ReleaseResources@ResourceSetClientProxy@@UEAAJXZ.c)
 */

void __fastcall ResourceSetClientProxy::~ResourceSetClientProxy(struct _RTL_CRITICAL_SECTION *this)
{
  bool v1; // zf
  HANDLE LockSemaphore; // rcx

  v1 = LODWORD(this[12].DebugInfo) == 2;
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&ResourceSetClientProxy::`vftable';
  if ( !v1 )
    ResourceSetClientProxy::ReleaseResources((ResourceSetClientProxy *)this);
  DeleteCriticalSection(this + 11);
  LockSemaphore = this[10].LockSemaphore;
  if ( LockSemaphore )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)LockSemaphore + 16LL))(LockSemaphore);
}
