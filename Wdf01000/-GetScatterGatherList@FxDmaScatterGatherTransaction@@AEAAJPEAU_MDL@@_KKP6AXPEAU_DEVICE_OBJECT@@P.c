__int64 __fastcall FxDmaScatterGatherTransaction::GetScatterGatherList(
        FxDmaScatterGatherTransaction *this,
        _MDL *Mdl,
        unsigned __int64 CurrentOffset,
        unsigned int Length,
        void (__fastcall *Context)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *),
        void *Mdl_0)
{
  KIRQL v10; // al
  FxDmaEnabler *m_DmaEnabler; // rsi
  KIRQL v12; // di
  $2CC3FC5F0458F7DBA3F7D6DD9579F542 *DmaDescription; // rax
  _FxDmaDescription *m_AdapterInfo; // rcx
  _DEVICE_OBJECT *m_FDO; // rdx
  int v16; // eax
  unsigned int v17; // ebx

  v10 = KfRaiseIrql(2u);
  m_DmaEnabler = this->m_DmaEnabler;
  v12 = v10;
  DmaDescription = FxDmaEnabler::GetDmaDescription(m_DmaEnabler, WdfDmaDirectionReadFromDevice);
  m_AdapterInfo = this->m_AdapterInfo;
  m_FDO = m_DmaEnabler->m_FDO;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    v16 = m_AdapterInfo->AdapterObject->DmaOperations->GetScatterGatherListEx(
            m_AdapterInfo->AdapterObject,
            m_FDO,
            this->m_TransferContext,
            Mdl,
            CurrentOffset,
            Length,
            this->m_Flags,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            Mdl_0,
            this->m_DmaDirection,
            0LL,
            0LL,
            0LL);
  else
    v16 = m_AdapterInfo->AdapterObject->DmaOperations->GetScatterGatherList(
            m_AdapterInfo->AdapterObject,
            m_FDO,
            Mdl,
            (char *)Mdl->StartVa + Mdl->ByteOffset + CurrentOffset,
            Length,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            Mdl_0,
            this->m_DmaDirection);
  v17 = v16;
  KeLowerIrql(v12);
  return v17;
}
