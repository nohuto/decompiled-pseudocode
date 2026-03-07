__int64 __fastcall imp_WdfMemoryGetBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *Memory,
        unsigned __int64 *BufferSize)
{
  IFxMemory *pMemory; // [rsp+30h] [rbp+8h] BYREF

  pMemory = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Memory, 0x100Au, (void **)&pMemory);
  if ( BufferSize )
    *BufferSize = pMemory->GetBufferSize(pMemory);
  return pMemory->GetBuffer(pMemory);
}
