/*
 * XREFs of ?_AdapterListControl@FxDmaScatterGatherTransaction@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C000C7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z @ 0x1C000C350 (-InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVI.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 */

void __fastcall FxDmaScatterGatherTransaction::_AdapterListControl(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        _SCATTER_GATHER_LIST *SgList,
        void *Context)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  WDFDMATRANSACTION__ *_a1; // rax
  WDFDMATRANSACTION__ *v8; // rsi
  __int64 v9; // rcx
  WDFDEVICE__ *ObjectHandleUnchecked; // rax

  v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)Context + 2);
  _a1 = (WDFDMATRANSACTION__ *)FxObject::GetObjectHandleUnchecked((FxObject *)Context);
  v8 = _a1;
  if ( v4->FxVerifierOn && v4->FxVerboseOn )
    WPP_IFR_SF_q(v4, 5u, 0xFu, 0x12u, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, _a1);
  v9 = *((_QWORD *)Context + 16);
  *((_QWORD *)Context + 32) = SgList;
  ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(*(FxObject **)(v9 + 96));
  FxDmaTransactionProgramOrReserveDma::InvokeProgramDma(
    (FxDmaTransactionProgramOrReserveDma *)Context + 19,
    v8,
    ObjectHandleUnchecked,
    *((void **)Context + 20),
    *((_DWORD *)Context + 31),
    SgList);
  if ( v4->FxVerifierOn )
  {
    if ( v4->FxVerboseOn )
      WPP_IFR_SF_q(v4, 5u, 0xFu, 0x13u, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, v8);
  }
}
