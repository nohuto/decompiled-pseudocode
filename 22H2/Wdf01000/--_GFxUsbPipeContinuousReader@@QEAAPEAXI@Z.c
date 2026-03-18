/*
 * XREFs of ??_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z @ 0x1C006C9D0
 * Callers:
 *     ?Dispose@FxUsbPipe@@MEAAEXZ @ 0x1C006CC10 (-Dispose@FxUsbPipe@@MEAAEXZ.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C006D8EC (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbPipeContinuousReader@@QEAA@XZ @ 0x1C006C810 (--1FxUsbPipeContinuousReader@@QEAA@XZ.c)
 */

FxUsbPipeContinuousReader *__fastcall FxUsbPipeContinuousReader::`scalar deleting destructor'(
        FxUsbPipeContinuousReader *this)
{
  FxUsbPipeContinuousReader::~FxUsbPipeContinuousReader(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
