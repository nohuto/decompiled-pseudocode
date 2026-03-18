/*
 * XREFs of ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C004412C
 * Callers:
 *     imp_WdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0044580 (imp_WdfDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C004B280 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C002D650 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

void __fastcall FxIrpPreprocessInfo::FxIrpPreprocessInfo(FxIrpPreprocessInfo *this)
{
  `vector constructor iterator'(
    (char *)this->Dispatch,
    0x18uLL,
    0x1CuLL,
    (void *(__fastcall *)(void *))FxIrpPreprocessInfo::Info::Info);
  this->ClassExtension = 0;
  this->ListEntry.Blink = (_LIST_ENTRY *)this;
  this->ListEntry.Flink = (_LIST_ENTRY *)this;
}
