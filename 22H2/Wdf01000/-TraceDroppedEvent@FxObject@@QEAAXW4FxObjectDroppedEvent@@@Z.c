/*
 * XREFs of ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005A340
 * Callers:
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C00040D8 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0005D70 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C00082F0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0009970 (imp_WdfRegistryOpenKey.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AddChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C0059BC8 (-AddChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0059DF0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005A288 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012660 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxObject::TraceDroppedEvent(FxObject *this, FxObjectDroppedEvent Event)
{
  const void *_a2; // rax
  _FX_DRIVER_GLOBALS **_a1; // r10
  unsigned int _a4; // edx
  unsigned int _a3; // r8d

  if ( (this->m_ObjectFlags & 0x200) != 0 )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqLL(_a1[2], 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, _a1, _a2, _a3, _a4);
  }
}
