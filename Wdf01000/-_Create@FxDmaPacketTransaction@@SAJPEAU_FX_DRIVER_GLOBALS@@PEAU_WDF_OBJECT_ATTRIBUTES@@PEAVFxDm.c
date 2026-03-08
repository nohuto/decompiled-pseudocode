/*
 * XREFs of ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C001D984
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

__int64 __fastcall FxDmaPacketTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $2CC3FC5F0458F7DBA3F7D6DD9579F542 *DmaDescription; // rax
  unsigned __int16 v9; // r8
  bool v10; // zf
  $2CC3FC5F0458F7DBA3F7D6DD9579F542 *v11; // rax
  FxDmaPacketTransaction *v12; // r10
  unsigned __int16 v13; // cx
  FxObject *v14; // rax
  FxObject *v15; // rbx
  int v16; // edi
  void *hTransaction; // [rsp+40h] [rbp-38h] BYREF
  FxPoolTypeOrPoolFlags v19; // [rsp+50h] [rbp-28h] BYREF

  hTransaction = 0LL;
  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  v9 = 0;
  v19 = 0LL;
  v10 = DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3;
  v19.u.PoolFlags = 64LL;
  if ( v10 )
    v9 = 128;
  if ( !FxObjectHandleAllocCommon(FxDriverGlobals, &v19, 0x138uLL, 0, Attributes, v9, FxObjectTypeExternal) )
    goto LABEL_11;
  v11 = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  v13 = 0;
  if ( v11->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    v13 = 128;
  FxDmaPacketTransaction::FxDmaPacketTransaction(v12, FxDriverGlobals, 0x138u, v13, DmaEnabler);
  v15 = v14;
  if ( v14 )
  {
    v16 = FxObject::Commit(v14, Attributes, &hTransaction, (_FX_DRIVER_GLOBALS *)DmaEnabler, 1u);
    if ( v16 < 0 )
    {
      FxObject::ClearEvtCallbacks(v15);
      v15->DeleteObject(v15);
    }
    else
    {
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
    }
    return (unsigned int)v16;
  }
  else
  {
LABEL_11:
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionPacket_cpp_Traceguids, 0xC000009A);
    return 3221225626LL;
  }
}
