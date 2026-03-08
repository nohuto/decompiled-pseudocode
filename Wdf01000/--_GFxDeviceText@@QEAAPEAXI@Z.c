/*
 * XREFs of ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1C002E980
 * Callers:
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0030880 (imp_WdfPdoInitAddDeviceText.c)
 *     ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C003BF18 (-_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDeviceText@@QEAA@XZ @ 0x1C004F000 (--1FxDeviceText@@QEAA@XZ.c)
 */

FxDeviceText *__fastcall FxDeviceText::`scalar deleting destructor'(FxDeviceText *this)
{
  FxDeviceText::~FxDeviceText(this);
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
