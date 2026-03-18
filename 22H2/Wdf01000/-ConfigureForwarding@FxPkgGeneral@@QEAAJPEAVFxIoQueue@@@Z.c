/*
 * XREFs of ?ConfigureForwarding@FxPkgGeneral@@QEAAJPEAVFxIoQueue@@@Z @ 0x1C008DA7C
 * Callers:
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x1C00475C0 (imp_WdfDeviceConfigureRequestDispatching.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C00767C8 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureForwarding(FxPkgGeneral *this, FxIoQueue *TargetQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int v5; // edi
  FxObject *v6; // rcx
  unsigned __int8 v7; // r8
  const void *_a1; // rax
  unsigned __int8 v10; // r8
  FxIoQueue *m_DriverCreatedQueue; // rcx
  const void *ObjectHandleUnchecked; // rax
  unsigned int _a2; // edx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v5 = 0;
  irql = 0;
  if ( FxIoQueue::IsIoEventHandlerRegistered(TargetQueue, WdfRequestTypeCreate) )
  {
    FxNonPagedObject::Lock(this, &irql, v7);
    m_DriverCreatedQueue = this->m_DriverCreatedQueue;
    if ( m_DriverCreatedQueue )
    {
      v5 = -1073741811;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(m_DriverCreatedQueue);
      WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x13u, WPP_FxPkgGeneral_cpp_Traceguids, ObjectHandleUnchecked, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    else
    {
      this->m_DriverCreatedQueue = TargetQueue;
    }
    FxNonPagedObject::Unlock(this, irql, v10);
    return v5;
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v6);
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x12u, WPP_FxPkgGeneral_cpp_Traceguids, _a1, 0xC0000010);
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
}
