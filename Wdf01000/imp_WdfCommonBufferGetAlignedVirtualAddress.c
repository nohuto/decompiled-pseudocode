void *__fastcall imp_WdfCommonBufferGetAlignedVirtualAddress(
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
  return pComBuf->m_BufferAlignedVA;
}
