/*
 * XREFs of ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C00049A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004920 (--1FxObject@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C000DB4A (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C000DE42 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C001ACB0 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003A954 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C0048258 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxRequestFromLookaside::SelfDestruct(FxRequestFromLookaside *this, unsigned int a2, unsigned int a3)
{
  FxDeviceBase *m_DeviceBase; // rdi
  FxRequestFromLookaside *v4; // rbx
  _MDL *m_AllocatedMdl; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rsi
  FxRequestTimer *m_Timer; // rcx
  __int64 v9; // rax
  _SLIST_ENTRY *v10; // rsi
  _SLIST_ENTRY *v11; // rdx
  _SLIST_HEADER *p_m_SpinLock; // rcx
  FxRequestContext *v13; // rcx
  FxVerifierLock *Flink; // rcx
  FX_POOL_HEADER *v15; // rax
  _SLIST_ENTRY *m_InternalContext; // rbx

  m_DeviceBase = this->m_DeviceBase;
  this->__vftable = (FxRequestFromLookaside_vtbl *)FxRequestBase::`vftable';
  v4 = this;
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    if ( v4->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(v4->m_Globals, m_AllocatedMdl);
    else
      IoFreeMdl(m_AllocatedMdl);
  }
  m_RequestContext = v4->m_RequestContext;
  m_Irp = v4->m_Irp.m_Irp;
  if ( m_RequestContext )
  {
    if ( m_Irp )
      m_RequestContext->ReleaseAndRestore(m_RequestContext, v4);
    v13 = v4->m_RequestContext;
    if ( v13 )
      ((void (__fastcall *)(FxRequestContext *, __int64))v13->~FxRequestContext)(v13, 1LL);
  }
  if ( m_Irp && v4->m_IrpAllocation == 1 )
    IoFreeIrp(v4->m_Irp.m_Irp);
  m_Timer = v4->m_Timer;
  if ( m_Timer )
    FxRequestTimer::`scalar deleting destructor'(m_Timer, a2);
  v4->__vftable = (FxRequestFromLookaside_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
  {
    Flink = (FxVerifierLock *)v4[-1].m_ForwardProgressList.Flink;
    if ( Flink )
    {
      FxVerifierLock::`scalar deleting destructor'(Flink, a2);
      v4[-1].m_ForwardProgressList.Flink = 0LL;
    }
  }
  v4->m_NPLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(v4, a2, a3);
  if ( v4->m_ForwardRequestToParent )
  {
    v15 = FxObject::_CleanupPointer(v4->m_Globals, v4);
    ExFreePoolWithTag(v15->Base, 0);
    return;
  }
  if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
    v4 = (FxRequestFromLookaside *)((char *)v4 - 48);
  if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
    FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v4[-1].m_InternalContext);
  v9 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( v9 && *(_WORD *)(v9 + 8) == 4354 && *(_BYTE *)(v9 + 1779) )
  {
    m_InternalContext = (_SLIST_ENTRY *)v4[-1].m_InternalContext;
    if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) >= LOWORD(m_DeviceBase[2].m_ParentObject) )
    {
      (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
      return;
    }
    v11 = m_InternalContext;
    p_m_SpinLock = (_SLIST_HEADER *)&m_DeviceBase[2].m_SpinLock;
LABEL_15:
    ExpInterlockedPushEntrySList(p_m_SpinLock, v11);
    return;
  }
  v10 = (_SLIST_ENTRY *)v4[-1].m_InternalContext;
  ++HIDWORD(m_DeviceBase[2].m_ChildEntry.Flink);
  if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) < LOWORD(m_DeviceBase[2].m_ParentObject) )
  {
    v11 = v10;
    p_m_SpinLock = (_SLIST_HEADER *)&m_DeviceBase[2].m_SpinLock;
    goto LABEL_15;
  }
  ++LODWORD(m_DeviceBase[2].m_ChildEntry.Blink);
  (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(v10);
}
