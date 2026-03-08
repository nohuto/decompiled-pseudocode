/*
 * XREFs of ??1FxRequestBase@@MEAA@XZ @ 0x1C0002EE8
 * Callers:
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0006A60 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ??_EFxRequestFromLookaside@@UEAAPEAXI@Z @ 0x1C003A7D0 (--_EFxRequestFromLookaside@@UEAAPEAXI@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0089B74 (--1FxSyncRequest@@UEAA@XZ.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0002D30 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C000DE42 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C0048258 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxRequestBase::~FxRequestBase(FxRequestBase *this, unsigned int a2)
{
  _MDL *m_AllocatedMdl; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rdi
  FxRequestTimer *m_Timer; // rcx
  FxRequestContext *v7; // rcx

  this->__vftable = (FxRequestBase_vtbl *)FxRequestBase::`vftable';
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    if ( this->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(this->m_Globals, m_AllocatedMdl);
    else
      IoFreeMdl(m_AllocatedMdl);
  }
  m_RequestContext = this->m_RequestContext;
  m_Irp = this->m_Irp.m_Irp;
  if ( m_RequestContext )
  {
    if ( m_Irp )
      m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
    v7 = this->m_RequestContext;
    if ( v7 )
      ((void (__fastcall *)(FxRequestContext *, __int64))v7->~FxRequestContext)(v7, 1LL);
  }
  if ( m_Irp && this->m_IrpAllocation == 1 )
    IoFreeIrp(this->m_Irp.m_Irp);
  m_Timer = this->m_Timer;
  if ( m_Timer )
    FxRequestTimer::`scalar deleting destructor'(m_Timer, a2);
  FxNonPagedObject::~FxNonPagedObject(this, a2);
}
