BOOLEAN __fastcall imp_WdfDpcCancel(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc, unsigned __int8 Wait)
{
  FxDpc *v4; // rcx
  BOOLEAN v6; // al
  BOOLEAN v7; // bl
  FxDpc *pFxDpc; // [rsp+30h] [rbp+8h] BYREF

  pFxDpc = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Dpc, 0x1015u, (void **)&pFxDpc);
  v4 = pFxDpc;
  if ( Wait )
  {
    if ( (int)FxVerifierCheckIrqlLevel(pFxDpc->m_Globals, 0) < 0 )
      return 0;
    v4 = pFxDpc;
  }
  v6 = KeRemoveQueueDpc(&v4->m_Dpc);
  v7 = v6;
  if ( Wait )
  {
    if ( !v6 )
      KeFlushQueuedDpcs();
  }
  return v7;
}
