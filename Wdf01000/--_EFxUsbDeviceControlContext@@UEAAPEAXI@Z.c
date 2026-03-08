/*
 * XREFs of ??_EFxUsbDeviceControlContext@@UEAAPEAXI@Z @ 0x1C005C590
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbDeviceControlContext@@UEAA@XZ @ 0x1C000F564 (--1FxUsbDeviceControlContext@@UEAA@XZ.c)
 */

FxUsbDeviceControlContext *__fastcall FxUsbDeviceControlContext::`vector deleting destructor'(
        FxUsbDeviceControlContext *this,
        char a2)
{
  FxUsbDeviceControlContext::~FxUsbDeviceControlContext(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
