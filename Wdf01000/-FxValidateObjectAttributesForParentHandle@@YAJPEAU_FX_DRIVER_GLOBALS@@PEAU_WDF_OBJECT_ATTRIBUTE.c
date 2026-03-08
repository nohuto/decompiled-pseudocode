/*
 * XREFs of ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0001ADC
 * Callers:
 *     imp_WdfMemoryCreate @ 0x1C0001970 (imp_WdfMemoryCreate.c)
 *     imp_WdfDpcCreate @ 0x1C0020600 (imp_WdfDpcCreate.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C0034950 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfWorkItemCreate @ 0x1C0037C00 (imp_WdfWorkItemCreate.c)
 *     imp_WdfTimerCreate @ 0x1C0037D90 (imp_WdfTimerCreate.c)
 *     imp_WdfLookasideListCreate @ 0x1C0038110 (imp_WdfLookasideListCreate.c)
 *     imp_WdfObjectCreate @ 0x1C00454A0 (imp_WdfObjectCreate.c)
 *     imp_WdfRegistryCreateKey @ 0x1C004ACD0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1C004AF50 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfWaitLockCreate @ 0x1C004BFF0 (imp_WdfWaitLockCreate.c)
 *     imp_WdfCollectionCreate @ 0x1C004C2A0 (imp_WdfCollectionCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1C004C760 (imp_WdfSpinLockCreate.c)
 *     imp_WdfStringCreate @ 0x1C004C8C0 (imp_WdfStringCreate.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C005CDE0 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C005D024 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qddd @ 0x1C0019200 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxValidateObjectAttributesForParentHandle(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        char Flags)
{
  if ( Attributes )
  {
    if ( Attributes->Size != 56 )
    {
      WPP_IFR_SF_qddd(
        FxDriverGlobals,
        (unsigned __int8)Attributes,
        6u,
        0xBu,
        WPP_FxValidateFunctions_hpp_Traceguids,
        Attributes,
        56,
        Attributes->Size,
        -1073741820);
      return 3221225476LL;
    }
    if ( Attributes->ParentObject )
      return 0LL;
    if ( (Flags & 0x18) != 0 )
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0xCu, WPP_FxValidateFunctions_hpp_Traceguids, Attributes, -1071644142);
  }
  else if ( (Flags & 0x18) != 0 )
  {
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxValidateFunctions_hpp_Traceguids, 0xC0200212);
  }
  return 3223323154LL;
}
