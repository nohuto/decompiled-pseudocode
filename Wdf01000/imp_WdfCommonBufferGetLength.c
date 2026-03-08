/*
 * XREFs of imp_WdfCommonBufferGetLength @ 0x1C001A900
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int64 __fastcall imp_WdfCommonBufferGetLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMMONBUFFER__ *CommonBuffer)
{
  FxCommonBuffer *pComBuf; // [rsp+30h] [rbp+8h] BYREF

  pComBuf = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)CommonBuffer,
    0x1402u,
    (void **)&pComBuf);
  return pComBuf->m_Length;
}
