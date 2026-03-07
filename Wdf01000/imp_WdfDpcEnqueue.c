BOOLEAN __fastcall imp_WdfDpcEnqueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  FxDpc *pFxDpc; // [rsp+30h] [rbp+8h] BYREF

  pFxDpc = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Dpc, 0x1015u, (void **)&pFxDpc);
  return KeInsertQueueDpc(&pFxDpc->m_Dpc, 0LL, 0LL);
}
