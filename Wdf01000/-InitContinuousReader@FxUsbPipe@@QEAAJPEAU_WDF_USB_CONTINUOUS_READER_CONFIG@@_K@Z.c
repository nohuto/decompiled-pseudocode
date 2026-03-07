__int64 __fastcall FxUsbPipe::InitContinuousReader(
        FxUsbPipe *this,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config,
        unsigned __int64 TotalBufferLength)
{
  const void *_a1; // rax
  unsigned __int8 NumPendingReads; // al
  unsigned __int8 v9; // bl
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  ULONG Tag; // r10d
  void *v12; // r8
  FX_POOL **v13; // rax
  FxUsbPipeContinuousReader *v14; // rax
  FxUsbPipeContinuousReader *v15; // rbx
  int v16; // ebp
  __m128i v17; // [rsp+40h] [rbp-28h]
  __m128i v18; // [rsp+50h] [rbp-18h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( this->m_Reader )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0x1Cu, (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids, _a1, -1073741436);
    return 3221225860LL;
  }
  else
  {
    NumPendingReads = Config->NumPendingReads;
    if ( NumPendingReads )
    {
      v9 = Config->NumPendingReads;
      if ( NumPendingReads > 0xAu )
        v9 = 10;
    }
    else
    {
      v9 = 2;
    }
    m_Globals = this->m_Globals;
    v17.m128i_i64[0] = 0LL;
    v17.m128i_i64[1] = 64LL;
    Tag = m_Globals->Tag;
    if ( m_Globals->FxPoolTrackingOn )
      v12 = retaddr;
    else
      v12 = 0LL;
    v18 = v17;
    v13 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v18, 120LL * ((unsigned int)v9 - 1) + 216, Tag, v12);
    if ( v13
      && (FxUsbPipeContinuousReader::FxUsbPipeContinuousReader((FxUsbPipeContinuousReader *)v13, this, v9),
          (v15 = v14) != 0LL) )
    {
      v16 = FxUsbPipeContinuousReader::Config(v14, Config, TotalBufferLength);
      if ( v16 >= 0 )
      {
        v15->m_ReadCompleteCallback = Config->EvtUsbTargetPipeReadComplete;
        v15->m_ReadCompleteContext = Config->EvtUsbTargetPipeReadCompleteContext;
        v15->m_ReadersFailedCallback = Config->EvtUsbTargetPipeReadersFailed;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Reader, (signed __int64)v15, 0LL) )
          FxUsbPipeContinuousReader::`scalar deleting destructor'(v15);
        return 0LL;
      }
      else
      {
        FxUsbPipeContinuousReader::`scalar deleting destructor'(v15);
        return (unsigned int)v16;
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
}
