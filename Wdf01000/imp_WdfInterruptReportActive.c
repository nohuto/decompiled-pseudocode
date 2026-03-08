/*
 * XREFs of imp_WdfInterruptReportActive @ 0x1C00682D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?ReportActive@FxInterrupt@@QEAAXE@Z @ 0x1C00800F8 (-ReportActive@FxInterrupt@@QEAAXE@Z.c)
 */

void __fastcall imp_WdfInterruptReportActive(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  FxInterrupt *pFxInterrupt; // [rsp+30h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  FxInterrupt::ReportActive(pFxInterrupt, 0);
}
