/*
 * XREFs of ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C004FC84
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C004FB14 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C0051420 (--1FxDevice@@UEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C002D6A4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

FxIrpPreprocessInfo *__fastcall FxIrpPreprocessInfo::`scalar deleting destructor'(FxIrpPreprocessInfo *this)
{
  `vector destructor iterator'(
    (char *)this->Dispatch,
    0x18uLL,
    0x1CuLL,
    (void (__fastcall *)(void *))FxIrpPreprocessInfo::Info::~Info);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
