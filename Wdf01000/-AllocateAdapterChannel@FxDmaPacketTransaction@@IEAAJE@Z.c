/*
 * XREFs of ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C001C4BC
 * Callers:
 *     ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C001D3F0 (-StartTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_dq @ 0x1C0018070 (WPP_IFR_SF_dq.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0018D10 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C001D810 (-_AdapterControl@FxDmaPacketTransaction@@KA-AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_I.c)
 *     WPP_IFR_SF_dqd @ 0x1C001DADC (WPP_IFR_SF_dqd.c)
 */

__int64 __fastcall FxDmaPacketTransaction::AllocateAdapterChannel(
        FxDmaPacketTransaction *this,
        unsigned __int8 MapRegistersReserved)
{
  KIRQL v4; // al
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  KIRQL v6; // si
  unsigned __int8 FxVerboseOn; // cl
  const void *_a2; // rax
  _FX_DRIVER_GLOBALS *v9; // r10
  unsigned __int16 v10; // r9
  __int64 v11; // r11
  int v12; // eax
  int _a3; // edi
  const void *ObjectHandleUnchecked; // rax

  v4 = KfRaiseIrql(2u);
  m_Globals = this->m_Globals;
  v6 = v4;
  if ( m_Globals->FxVerifierOn )
  {
    FxVerboseOn = m_Globals->FxVerboseOn;
    if ( MapRegistersReserved )
    {
      if ( !FxVerboseOn )
        goto LABEL_8;
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v10 = 11;
    }
    else
    {
      if ( !FxVerboseOn )
        goto LABEL_8;
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v10 = 10;
    }
    WPP_IFR_SF_dq(v9, 5u, 0xFu, v10, WPP_FxDmaTransactionPacket_hpp_Traceguids, this->m_MapRegistersNeeded, _a2);
  }
LABEL_8:
  if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    if ( MapRegistersReserved )
    {
      FxDmaPacketTransaction::_AdapterControl(*(_DEVICE_OBJECT **)(v11 + 168), 0LL, this->m_MapRegisterBase, this);
      _a3 = 0;
      goto LABEL_14;
    }
    v12 = this->m_AdapterInfo->AdapterObject->DmaOperations->AllocateAdapterChannelEx(
            this->m_AdapterInfo->AdapterObject,
            *(_DEVICE_OBJECT **)(v11 + 168),
            this->m_TransferContext,
            this->m_MapRegistersNeeded,
            this->m_Flags,
            FxDmaPacketTransaction::_AdapterControl,
            this,
            0LL);
  }
  else
  {
    v12 = this->m_AdapterInfo->AdapterObject->DmaOperations->AllocateAdapterChannel(
            this->m_AdapterInfo->AdapterObject,
            *(_DEVICE_OBJECT **)(v11 + 168),
            this->m_MapRegistersNeeded,
            FxDmaPacketTransaction::_AdapterControl,
            this);
  }
  _a3 = v12;
LABEL_14:
  KeLowerIrql(v6);
  if ( _a3 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_dqd(
      this->m_Globals,
      2u,
      0xFu,
      0xCu,
      WPP_FxDmaTransactionPacket_hpp_Traceguids,
      this->m_MapRegistersNeeded,
      ObjectHandleUnchecked,
      _a3);
  }
  return (unsigned int)_a3;
}
