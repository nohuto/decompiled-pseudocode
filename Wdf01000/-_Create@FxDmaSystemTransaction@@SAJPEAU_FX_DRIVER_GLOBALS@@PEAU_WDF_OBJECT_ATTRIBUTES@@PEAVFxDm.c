/*
 * XREFs of ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C001EFEC
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x1C0019950 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0018D10 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ??0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C001C450 (--0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxDmaSystemTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $2CC3FC5F0458F7DBA3F7D6DD9579F542 *DmaDescription; // rax
  unsigned __int16 v9; // r8
  bool v10; // zf
  FxDmaPacketTransaction *v11; // rbx
  $2CC3FC5F0458F7DBA3F7D6DD9579F542 *v12; // rax
  unsigned __int16 v13; // cx
  int v14; // edi
  void *hTransaction; // [rsp+40h] [rbp-38h] BYREF
  FxPoolTypeOrPoolFlags v17; // [rsp+50h] [rbp-28h] BYREF

  hTransaction = 0LL;
  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  v9 = 0;
  v17 = 0LL;
  v10 = DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3;
  v17.u.PoolFlags = 64LL;
  if ( v10 )
    v9 = 128;
  v11 = (FxDmaPacketTransaction *)FxObjectHandleAllocCommon(
                                    FxDriverGlobals,
                                    &v17,
                                    0x158uLL,
                                    0,
                                    Attributes,
                                    v9,
                                    FxObjectTypeExternal);
  if ( v11 )
  {
    v12 = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
    v13 = 0;
    if ( v12->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      v13 = 128;
    FxDmaPacketTransaction::FxDmaPacketTransaction(v11, FxDriverGlobals, 0x158u, v13, DmaEnabler);
    v11->__vftable = (FxDmaPacketTransaction_vtbl *)FxDmaSystemTransaction::`vftable';
    v11[1].__vftable = 0LL;
    v11[1].m_Globals = 0LL;
    v14 = FxObject::Commit(v11, Attributes, &hTransaction, (_FX_DRIVER_GLOBALS *)DmaEnabler, 1u);
    if ( v14 < 0 )
    {
      FxObject::ClearEvtCallbacks(v11);
      v11->DeleteObject(v11);
    }
    else
    {
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
    }
    return (unsigned int)v14;
  }
  else
  {
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionSystem_cpp_Traceguids, 0xC000009A);
    return 3221225626LL;
  }
}
