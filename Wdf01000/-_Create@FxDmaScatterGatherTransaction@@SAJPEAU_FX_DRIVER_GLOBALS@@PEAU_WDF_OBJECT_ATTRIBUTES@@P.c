__int64 __fastcall FxDmaScatterGatherTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $2CC3FC5F0458F7DBA3F7D6DD9579F542 *DmaDescription; // rax
  unsigned __int16 v9; // r8
  bool v10; // zf
  $2CC3FC5F0458F7DBA3F7D6DD9579F542 *v11; // rax
  FxDmaScatterGatherTransaction *v12; // r10
  unsigned __int16 v13; // cx
  FxObject *v14; // rax
  FxObject *v15; // rbx
  unsigned __int64 v16; // rdx
  unsigned int v17; // edi
  PSLIST_ENTRY v18; // rax
  const void *_a1; // rax
  void *hTransaction; // [rsp+40h] [rbp-28h] BYREF
  FxPoolTypeOrPoolFlags v22; // [rsp+50h] [rbp-18h] BYREF

  hTransaction = 0LL;
  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  v9 = 0;
  v22 = 0LL;
  v10 = DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3;
  v22.u.PoolFlags = 64LL;
  if ( v10 )
    v9 = 128;
  if ( !FxObjectHandleAllocCommon(FxDriverGlobals, &v22, 0x118uLL, 0, Attributes, v9, FxObjectTypeExternal) )
    goto LABEL_14;
  v11 = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  v13 = 0;
  if ( v11->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    v13 = 128;
  FxDmaScatterGatherTransaction::FxDmaScatterGatherTransaction(v12, FxDriverGlobals, v13, DmaEnabler);
  v15 = v14;
  if ( !v14 )
  {
LABEL_14:
    v17 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, 0xC000009A);
    return v17;
  }
  v17 = FxObject::Commit(v14, Attributes, &hTransaction, (_FX_DRIVER_GLOBALS *)DmaEnabler, 1u);
  if ( (v17 & 0x80000000) != 0 )
    goto LABEL_11;
  if ( (*((_BYTE *)DmaEnabler + 380) & 0x20) == 0 )
  {
LABEL_13:
    *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
    return v17;
  }
  v18 = FxAllocateFromNPagedLookasideList(&DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside, v16);
  v15[2].m_SpinLock.m_Lock = (unsigned __int64)v18;
  if ( v18 )
  {
    FxObject::AddRef(
      DmaEnabler,
      v15,
      96,
      "minkernel\\wdf\\framework\\kmdf\\src\\dma\\base\\fxdmatransactionscattergather.cpp");
    LODWORD(v15[2].m_ParentObject) = DmaEnabler->m_SGListSize;
    BYTE4(v15[2].m_ParentObject) = 1;
    goto LABEL_13;
  }
  v17 = -1073741670;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v15);
  WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xFu, 0xBu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, _a1, -1073741670);
LABEL_11:
  FxObject::ClearEvtCallbacks(v15);
  v15->DeleteObject(v15);
  return v17;
}
