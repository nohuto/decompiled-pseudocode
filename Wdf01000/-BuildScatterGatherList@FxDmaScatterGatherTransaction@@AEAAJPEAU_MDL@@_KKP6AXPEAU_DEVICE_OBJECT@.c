/*
 * XREFs of ?BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z55K@Z @ 0x1C000C392
 * Callers:
 *     ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C001E730 (-StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0018D10 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::BuildScatterGatherList(
        FxDmaScatterGatherTransaction *this,
        _MDL *Mdl,
        unsigned __int64 CurrentOffset,
        unsigned int Length,
        void (__fastcall *Context)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *),
        void *ScatterGatherBuffer,
        void *ScatterGatherBufferLength,
        unsigned int Mdl_0)
{
  KIRQL v12; // al
  FxDmaEnabler *m_DmaEnabler; // r14
  KIRQL v14; // bp
  _FxDmaDescription *DmaDescription; // rax
  unsigned int v16; // edx
  _DMA_ADAPTER *AdapterObject; // rsi
  unsigned int m_Flags; // edi
  __int64 v19; // r9
  __int64 v20; // r11
  int v21; // eax
  unsigned int v22; // ebx

  v12 = KfRaiseIrql(2u);
  m_DmaEnabler = this->m_DmaEnabler;
  v14 = v12;
  DmaDescription = FxDmaEnabler::GetDmaDescription(m_DmaEnabler, WdfDmaDirectionReadFromDevice);
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  if ( DmaDescription->DeviceDescription.Version == 3 )
  {
    m_Flags = 0;
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v16, 0xFu) )
      m_Flags = this->m_Flags;
    v21 = (*(__int64 (__fastcall **)(_DMA_ADAPTER *, _DEVICE_OBJECT *, void *, _MDL *, unsigned __int64, unsigned int, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, _BYTE, void *, unsigned int, __int64, __int64, __int64))(v20 + 200))(
            AdapterObject,
            m_DmaEnabler->m_FDO,
            this->m_TransferContext,
            Mdl,
            CurrentOffset,
            Length,
            m_Flags,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            ScatterGatherBuffer,
            this->m_DmaDirection,
            ScatterGatherBufferLength,
            Mdl_0,
            v19,
            v19,
            v19);
  }
  else
  {
    v21 = AdapterObject->DmaOperations->BuildScatterGatherList(
            AdapterObject,
            m_DmaEnabler->m_FDO,
            Mdl,
            (char *)Mdl->StartVa + Mdl->ByteOffset + CurrentOffset,
            Length,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            ScatterGatherBuffer,
            this->m_DmaDirection,
            ScatterGatherBufferLength,
            Mdl_0);
  }
  v22 = v21;
  KeLowerIrql(v14);
  return v22;
}
