__int64 __fastcall imp_WdfMemoryAssignBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *Memory,
        void *Buffer,
        unsigned __int64 BufferSize)
{
  FxMemoryBufferPreallocated *v6; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxMemoryBufferPreallocated *pMemory; // [rsp+40h] [rbp+8h] BYREF

  pMemory = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Memory, 0x1022u, (void **)&pMemory);
  v6 = pMemory;
  m_Globals = pMemory->m_Globals;
  if ( !Buffer )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( BufferSize )
  {
    pMemory->m_pBuffer = Buffer;
    v6->m_BufferSize = BufferSize;
    return 0LL;
  }
  else
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xBu, WPP_FxMemoryBufferPreallocatedAPI_cpp_Traceguids, 0xC000000D);
    return 3221225485LL;
  }
}
