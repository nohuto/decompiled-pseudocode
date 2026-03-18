/*
 * XREFs of ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0033D30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002F470 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C0032E2C (-AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z.c)
 *     WPP_IFR_SF_qqii @ 0x1C0034770 (WPP_IFR_SF_qqii.c)
 */

__int64 __fastcall FxDmaPacketTransaction::StartTransfer(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rax
  const void *v4; // rbp
  unsigned __int8 v5; // dl
  unsigned int v6; // r8d
  __int64 v7; // rcx
  signed int v8; // esi
  const void *ObjectHandleUnchecked; // rax
  unsigned __int64 m_MaxFragmentLength; // rax
  unsigned __int64 m_Remaining; // r8
  unsigned __int64 m_StartOffset; // r9
  unsigned __int64 v13; // rdx
  bool v14; // zf
  unsigned __int8 v15; // dl
  unsigned __int64 v16; // rcx
  __int16 v17; // cx
  signed int AdapterChannel; // eax
  __int64 v19; // rcx

  m_Globals = this->m_Globals;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  v4 = _a1;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerboseOn )
    {
      WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x13u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qqii(
          m_Globals,
          v5,
          v6,
          0x14u,
          WPP_FxDmaTransactionPacket_cpp_Traceguids,
          v4,
          this->m_StartMdl,
          this->m_StartOffset,
          this->m_TransactionLength);
    }
  }
  if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    v8 = 0;
  else
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v7 + 96) + 192LL), 1, 0) != 0
       ? 0xC0200204
       : 0;
  if ( v8 >= 0 )
  {
    m_MaxFragmentLength = this->m_MaxFragmentLength;
    m_Remaining = this->m_Remaining;
    m_StartOffset = this->m_StartOffset;
    v13 = m_Remaining;
    this->m_CurrentFragmentOffset = m_StartOffset;
    if ( m_Remaining >= m_MaxFragmentLength )
      v13 = m_MaxFragmentLength;
    v14 = this->m_State == FxDmaTransactionStateReserved;
    this->m_CurrentFragmentLength = v13;
    if ( v14 )
    {
      v15 = 0;
      this->m_MapRegistersNeeded = this->m_MapRegistersReserved;
    }
    else
    {
      if ( (*((_BYTE *)this->m_DmaEnabler + 380) & 4) != 0 )
      {
        if ( v13 == m_Remaining )
          v17 = m_StartOffset + LOWORD(this->m_CurrentFragmentMdl->StartVa) + this->m_CurrentFragmentMdl->ByteOffset;
        else
          v17 = 4095;
        v16 = (v13 + (v17 & 0xFFF) + 4095LL) >> 12;
      }
      else
      {
        LODWORD(v16) = this->m_AdapterInfo->NumberOfMapRegisters;
      }
      this->m_MapRegistersNeeded = v16;
      v15 = this->m_MapRegistersReserved != 0;
    }
    AdapterChannel = FxDmaPacketTransaction::AllocateAdapterChannel(this, v15);
    v8 = AdapterChannel;
    if ( AdapterChannel < 0 )
    {
      WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0x16u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v4, AdapterChannel);
      if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v19 + 96) + 192LL), 0);
    }
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
      WPP_IFR_SF_qL(m_Globals, 5u, 0xFu, 0x17u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v4, v8);
  }
  else
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DmaEnabler);
    WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0x15u, WPP_FxDmaTransactionPacket_cpp_Traceguids, ObjectHandleUnchecked, v8);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return (unsigned int)v8;
}
