int __fastcall FxRequest::InsertTailIrpQueue(FxRequest *this, FxIrpQueue *IrpQueue, unsigned int *a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int result; // eax
  _IRP *m_Irp; // rdx
  int inserted; // edi
  __int64 v9; // r9
  FxRequest_vtbl *v10; // rcx
  unsigned int *v11; // [rsp+20h] [rbp-18h]

  m_Globals = this->m_Globals;
  if ( !m_Globals->FxVerifierOn || (result = FxRequest::Vf_VerifyInsertIrpQueue(this, m_Globals, IrpQueue), result >= 0) )
  {
    FxObject::AddRef(this, (void *)0x75657551, 1900, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    m_Irp = this->m_Irp.m_Irp;
    this->m_IrpQueue = IrpQueue;
    inserted = FxIrpQueue::InsertIrpInQueue(IrpQueue, m_Irp, &this->m_CsqContext, 0, v11);
    if ( inserted < 0 )
    {
      v10 = this->__vftable;
      this->m_IrpQueue = (FxIrpQueue *)((__int64)this->m_IrpQueue & v9);
      v10->Release(this, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    return inserted;
  }
  return result;
}
