BOOLEAN __fastcall FxRequestBase::Cancel(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  signed __int32 m_IrpCompletionReferenceCount; // eax
  signed __int32 v4; // ecx
  signed __int32 v5; // edx
  BOOLEAN v6; // al
  BOOLEAN v7; // di
  _FX_DRIVER_GLOBALS *v8; // rcx
  _FX_DRIVER_GLOBALS *v9; // rcx
  _FX_DRIVER_GLOBALS *v10; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0xFu, WPP_FxRequestBase_cpp_Traceguids, this);
  this->m_Canceled = 1;
  m_IrpCompletionReferenceCount = this->m_IrpCompletionReferenceCount;
  while ( m_IrpCompletionReferenceCount > 0 )
  {
    v4 = m_IrpCompletionReferenceCount;
    v5 = m_IrpCompletionReferenceCount + 1;
    m_IrpCompletionReferenceCount = _InterlockedCompareExchange(
                                      &this->m_IrpCompletionReferenceCount,
                                      m_IrpCompletionReferenceCount + 1,
                                      m_IrpCompletionReferenceCount);
    if ( v4 == m_IrpCompletionReferenceCount )
      goto LABEL_8;
  }
  v5 = m_IrpCompletionReferenceCount;
LABEL_8:
  if ( v5 )
  {
    v6 = IoCancelIrp(this->m_Irp.m_Irp);
    v7 = v6;
    v8 = this->m_Globals;
    if ( v8->FxVerboseOn )
      WPP_IFR_SF_qid(v8, 5u, 0xDu, 0x10u, WPP_FxRequestBase_cpp_Traceguids, this, (__int64)this->m_Irp.m_Irp, v6);
    if ( _InterlockedExchangeAdd(&this->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
    {
      v9 = this->m_Globals;
      if ( v9->FxVerboseOn )
        WPP_IFR_SF_qqq(v9, 5u, 0xDu, 0x11u, WPP_FxRequestBase_cpp_Traceguids, this, this->m_Irp.m_Irp, this->m_Target);
      FxIoTarget::CompleteCanceledRequest(this->m_Target, this);
    }
  }
  else
  {
    v10 = this->m_Globals;
    if ( v10->FxVerboseOn )
      WPP_IFR_SF_q(v10, 5u, 0xDu, 0x12u, WPP_FxRequestBase_cpp_Traceguids, this);
    return 0;
  }
  return v7;
}
