/*
 * XREFs of imp_WdfRequestIsFrom32BitProcess @ 0x1C00352B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

BOOLEAN __fastcall imp_WdfRequestIsFrom32BitProcess(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  return IoIs32bitProcess(pRequest->m_Irp.m_Irp);
}
