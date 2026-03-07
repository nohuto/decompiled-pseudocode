BOOLEAN __fastcall imp_WdfInterruptQueueWorkItemForIsr(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  FxInterrupt *v2; // rbx
  FxInterrupt *pFxInterrupt; // [rsp+30h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  v2 = pFxInterrupt;
  if ( KeGetCurrentIrql() <= 2u )
    return FxSystemWorkItem::EnqueueWorker(
             v2->m_SystemWorkItem,
             (void (__fastcall *)(void *))FxInterrupt::_InterruptWorkItemCallback,
             v2,
             0);
  else
    return KeInsertQueueDpc(&v2->m_Dpc, v2, 0LL);
}
