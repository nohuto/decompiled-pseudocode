/*
 * XREFs of imp_WdfInterruptQueueDpcForIsr @ 0x1C00058F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

BOOLEAN __fastcall imp_WdfInterruptQueueDpcForIsr(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  FxInterrupt *pFxInterrupt; // [rsp+30h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Interrupt, 0x1027u, (void **)&pFxInterrupt);
  return KeInsertQueueDpc(&pFxInterrupt->m_Dpc, pFxInterrupt, 0LL);
}
