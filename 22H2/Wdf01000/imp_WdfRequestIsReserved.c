/*
 * XREFs of imp_WdfRequestIsReserved @ 0x1C004A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int8 __fastcall imp_WdfRequestIsReserved(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  return pRequest->m_Reserved;
}
