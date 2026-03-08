/*
 * XREFs of ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x1C001FAE0
 * Callers:
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C000CA84 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qDd @ 0x1C0018F98 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qLLd @ 0x1C001BE14 (WPP_IFR_SF_qLLd.c)
 *     WPP_IFR_SF_qDPq @ 0x1C001FE54 (WPP_IFR_SF_qDPq.c)
 *     WPP_IFR_SF_qDPqd @ 0x1C001FF60 (WPP_IFR_SF_qDPqd.c)
 *     WPP_IFR_SF_qPPd @ 0x1C002009C (WPP_IFR_SF_qPPd.c)
 */

__int64 __fastcall FxDmaTransactionBase::PrepareForSingleTransfer(FxDmaTransactionBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *globals; // rax
  unsigned __int64 level; // rdx
  unsigned __int64 flags; // r8
  int v7; // r14d
  const void *ObjectHandleUnchecked; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  int id; // [rsp+40h] [rbp-48h]

  m_Globals = this->m_Globals;
  if ( this->m_TransactionLength <= this->m_MaxFragmentLength )
  {
    v7 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, unsigned __int64, _QWORD))this->m_AdapterInfo->AdapterObject->DmaOperations->GetDmaTransferInfo)(
           this->m_AdapterInfo->AdapterObject,
           this->m_StartMdl,
           this->m_StartOffset,
           LODWORD(this->m_TransactionLength));
    if ( v7 >= 0 )
    {
      ((__int64 (__fastcall *)(FxDmaTransactionBase *))this->GetNumberOfAvailableMapRegisters)(this);
      if ( (*((_BYTE *)this->m_DmaEnabler + 380) & 0x20) != 0 )
        ((__int64 (__fastcall *)(FxDmaTransactionBase *))this->GetSgListBufferSize)(this);
    }
    else
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0xFu, WPP_FxDmaTransactionBase_cpp_Traceguids, ObjectHandleUnchecked, v7);
    }
    return (unsigned int)v7;
  }
  else
  {
    globals = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qPPd(m_Globals, level, flags, 0xEu, traceGuid, globals, level, flags, id);
    return 3223323155LL;
  }
}
