__int64 __fastcall FxRequest::GetParameters(FxRequest *this, _WDF_REQUEST_PARAMETERS *Parameters, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v7; // r8
  int IsCurrentStackValid; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( !m_Globals->FxVerifierIO )
    goto LABEL_2;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( !m_Globals->FxVerifierOn )
    goto LABEL_8;
  IsCurrentStackValid = FxRequest::Vf_VerifyRequestIsCurrentStackValid(this, m_Globals);
  if ( IsCurrentStackValid < 0 )
    goto LABEL_9;
  if ( m_Globals->FxVerifierOn )
    IsCurrentStackValid = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
  else
LABEL_8:
    IsCurrentStackValid = 0;
LABEL_9:
  FxNonPagedObject::Unlock(this, irql, v7);
  if ( IsCurrentStackValid < 0 )
    return (unsigned int)IsCurrentStackValid;
LABEL_2:
  Parameters->Size = 40;
  Parameters->Type = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  Parameters->MinorFunction = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  memmove(&Parameters->Parameters, &this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters, 0x20uLL);
  if ( m_Globals->FxVerifierIO )
  {
    CurrentStackLocation = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 14
      && (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3 )
    {
      Parameters->Parameters.DeviceIoControl.Type3InputBuffer = 0LL;
    }
  }
  return 0LL;
}
