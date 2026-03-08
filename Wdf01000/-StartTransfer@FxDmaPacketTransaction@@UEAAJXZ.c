/*
 * XREFs of ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C001D3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0018D10 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C001C4BC (-AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z.c)
 *     WPP_IFR_SF_qqii @ 0x1C001DE48 (WPP_IFR_SF_qqii.c)
 */

__int64 __fastcall FxDmaPacketTransaction::StartTransfer(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rax
  const void *v4; // rbp
  unsigned __int8 v5; // dl
  unsigned int v6; // r8d
  __int64 v7; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // esi
  const void *ObjectHandleUnchecked; // rax
  int v11; // edx
  unsigned __int64 m_MaxFragmentLength; // rax
  unsigned __int64 m_Remaining; // r8
  unsigned __int64 m_StartOffset; // r9
  unsigned __int64 v15; // rdx
  bool v16; // zf
  unsigned __int8 v17; // dl
  unsigned __int64 v18; // rcx
  __int16 v19; // cx
  int AdapterChannel; // eax
  __int64 v21; // rcx

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
  if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3
    || (v8 = -_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v7 + 96) + 192LL), 1, 0),
        v9 = v8 != 0 ? 0xC0200204 : 0,
        !v8) )
  {
    m_MaxFragmentLength = this->m_MaxFragmentLength;
    m_Remaining = this->m_Remaining;
    m_StartOffset = this->m_StartOffset;
    v15 = m_Remaining;
    this->m_CurrentFragmentOffset = m_StartOffset;
    if ( m_Remaining >= m_MaxFragmentLength )
      v15 = m_MaxFragmentLength;
    v16 = this->m_State == FxDmaTransactionStateReserved;
    this->m_CurrentFragmentLength = v15;
    if ( v16 )
    {
      v17 = 0;
      this->m_MapRegistersNeeded = this->m_MapRegistersReserved;
    }
    else
    {
      if ( (*((_BYTE *)this->m_DmaEnabler + 380) & 4) != 0 )
      {
        if ( v15 == m_Remaining )
          v19 = m_StartOffset + LOWORD(this->m_CurrentFragmentMdl->StartVa) + this->m_CurrentFragmentMdl->ByteOffset;
        else
          v19 = 4095;
        v18 = (v15 + (v19 & 0xFFF) + 4095LL) >> 12;
      }
      else
      {
        LODWORD(v18) = this->m_AdapterInfo->NumberOfMapRegisters;
      }
      this->m_MapRegistersNeeded = v18;
      v17 = this->m_MapRegistersReserved != 0;
    }
    AdapterChannel = FxDmaPacketTransaction::AllocateAdapterChannel(this, v17);
    v9 = AdapterChannel;
    if ( AdapterChannel < 0 )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x16u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v4, AdapterChannel);
      if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v21 + 96) + 192LL), 0);
    }
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0x17u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v4, v9);
  }
  else
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DmaEnabler);
    WPP_IFR_SF_qd(
      m_Globals,
      2u,
      v11 + 14,
      v11 + 20,
      WPP_FxDmaTransactionPacket_cpp_Traceguids,
      ObjectHandleUnchecked,
      v9);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return v9;
}
