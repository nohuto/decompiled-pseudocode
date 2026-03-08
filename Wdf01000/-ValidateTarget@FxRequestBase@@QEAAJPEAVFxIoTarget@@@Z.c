/*
 * XREFs of ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00021A8
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00022E8 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C0002AFC (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C000F306 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     imp_WdfRequestChangeTarget @ 0x1C0034FE0 (imp_WdfRequestChangeTarget.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0052BC8 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0055B14 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C0059D6C (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C005A0EC (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C005D2F4 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C005DC2C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C005F080 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C005F8A0 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C005FB28 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C005FD84 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C005FFC8 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0061078 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 * Callees:
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0002238 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z @ 0x1C0002260 (-SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxRequestBase::ValidateTarget(FxRequestBase *this, FxIoTarget *Target)
{
  _IRP *m_Irp; // rdi
  FxRequestBase *v4; // rbx
  CCHAR m_TargetStackSize; // cl
  unsigned int _a3; // edi
  _IRP *Irp; // rax
  unsigned __int8 v9; // r8
  _IRP *v10; // rax
  FxObject *v11; // rcx
  _IRP *v12; // rsi
  const void *_a1; // rax
  FxRequestBase *ObjectHandleUnchecked; // rax
  __int64 _a2; // rdx
  unsigned __int16 v16; // r9
  FxRequestBase *v17; // rcx
  FxRequestBase *v18; // rax
  _FX_DRIVER_GLOBALS *v19; // r10

  m_Irp = this->m_Irp.m_Irp;
  v4 = this;
  FxRequestBase::ContextReleaseAndRestore(this);
  m_TargetStackSize = Target->m_TargetStackSize;
  if ( !m_TargetStackSize )
  {
    _a3 = -1073741436;
    _a1 = FxObject::GetObjectHandleUnchecked(Target);
    WPP_IFR_SF_qd(v4->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, _a1, -1073741436);
    return _a3;
  }
  if ( m_Irp )
  {
    if ( m_Irp->CurrentLocation > m_TargetStackSize )
      return 0;
    if ( v4->m_IrpAllocation != 1 )
    {
      _a3 = -1073741616;
      FxObject::GetObjectHandleUnchecked(Target);
      ObjectHandleUnchecked = (FxRequestBase *)FxObject::GetObjectHandleUnchecked(v4);
      v16 = 13;
LABEL_13:
      v17 = v4;
      if ( ObjectHandleUnchecked )
        v17 = ObjectHandleUnchecked;
      WPP_IFR_SF_qid(v4->m_Globals, 2u, 0xEu, v16, WPP_FxRequestBase_cpp_Traceguids, v17, _a2, _a3);
      return _a3;
    }
  }
  Irp = IoAllocateIrp(m_TargetStackSize, 0);
  if ( !Irp )
  {
    _a3 = -1073741670;
    FxObject::GetObjectHandleUnchecked(Target);
    ObjectHandleUnchecked = (FxRequestBase *)FxObject::GetObjectHandleUnchecked(v4);
    v16 = 12;
    goto LABEL_13;
  }
  v10 = FxRequestBase::SetSubmitIrp(v4, Irp, v9);
  _a3 = 0;
  v4->m_IrpAllocation = 1;
  v12 = v10;
  if ( v10 )
  {
    if ( v4->m_Globals->FxVerboseOn )
    {
      v18 = (FxRequestBase *)FxObject::GetObjectHandleUnchecked(v11);
      if ( v18 )
        v4 = v18;
      WPP_IFR_SF_qq(v19, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v12, v4);
    }
    IoFreeIrp(v12);
  }
  return _a3;
}
