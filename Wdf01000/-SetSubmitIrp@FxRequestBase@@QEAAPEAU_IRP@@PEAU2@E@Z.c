_IRP *__fastcall FxRequestBase::SetSubmitIrp(FxRequestBase *this, _IRP *NewIrp, unsigned __int8 a3)
{
  _IRP *m_Irp; // r8
  _IRP *result; // rax

  m_Irp = this->m_Irp.m_Irp;
  result = 0LL;
  this->m_Irp.m_Irp = NewIrp;
  if ( NewIrp )
    this->m_Completed = 0;
  if ( m_Irp && m_Irp != NewIrp && this->m_IrpAllocation == 1 )
    return m_Irp;
  return result;
}
