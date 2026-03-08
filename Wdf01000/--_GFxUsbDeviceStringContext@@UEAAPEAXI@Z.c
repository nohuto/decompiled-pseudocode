/*
 * XREFs of ??_GFxUsbDeviceStringContext@@UEAAPEAXI@Z @ 0x1C005C5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbDeviceStringContext@@UEAA@XZ @ 0x1C005C4CC (--1FxUsbDeviceStringContext@@UEAA@XZ.c)
 */

FxUsbDeviceStringContext *__fastcall FxUsbDeviceStringContext::`scalar deleting destructor'(
        FxUsbDeviceStringContext *this,
        char a2)
{
  FxUsbDeviceStringContext::~FxUsbDeviceStringContext(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
