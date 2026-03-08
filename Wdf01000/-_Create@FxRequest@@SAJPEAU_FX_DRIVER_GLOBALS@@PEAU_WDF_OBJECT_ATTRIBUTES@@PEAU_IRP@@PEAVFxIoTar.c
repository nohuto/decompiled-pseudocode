/*
 * XREFs of ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C0002AFC
 * Callers:
 *     imp_WdfRequestCreate @ 0x1C0002050 (imp_WdfRequestCreate.c)
 *     imp_WdfRequestCreateFromIrp @ 0x1C0035050 (imp_WdfRequestCreateFromIrp.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C0060DE4 (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00021A8 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z @ 0x1C0002260 (-SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ??0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@G@Z @ 0x1C0002C40 (--0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstru.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qLqd @ 0x1C003B3FC (WPP_IFR_SF_qLqd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        FxIoTarget *Target,
        FxRequestIrpOwnership Ownership,
        FxRequestConstructorCaller Caller,
        FxRequest **Request)
{
  const void **v7; // r14
  __int64 result; // rax
  FxRequest *v13; // rax
  FxRequestBase *v14; // rax
  FxRequestBase *v15; // rdi
  int _a4; // ebx
  unsigned __int8 v17; // r8
  unsigned __int16 _a1; // [rsp+28h] [rbp-60h]
  FxPoolTypeOrPoolFlags v19; // [rsp+50h] [rbp-38h] BYREF

  v7 = (const void **)Request;
  *Request = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, RequestAttributes, 0);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&v19.UsePoolType = 0LL;
    v19.u.PoolFlags = 64LL;
    v13 = (FxRequest *)FxObjectHandleAllocCommon(
                         FxDriverGlobals,
                         &v19,
                         0x168uLL,
                         0,
                         RequestAttributes,
                         0,
                         FxObjectTypeExternal);
    if ( v13 && (FxRequest::FxRequest(v13, FxDriverGlobals, Irp, Ownership, Caller, _a1), (v15 = v14) != 0LL) )
    {
      if ( Target && (_a4 = FxRequestBase::ValidateTarget(v14, Target), _a4 < 0)
        || (_a4 = FxObject::Commit(v15, RequestAttributes, (void **)&Request, 0LL, 1u), _a4 < 0) )
      {
        WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x10u, 0xCu, WPP_FxRequest_cpp_Traceguids, _a4);
        if ( Irp )
          FxRequestBase::SetSubmitIrp(v15, 0LL, v17);
        FxObject::ClearEvtCallbacks(v15);
        v15->DeleteObject(v15);
      }
      else
      {
        *v7 = v15;
      }
    }
    else
    {
      _a4 = -1073741670;
    }
    if ( FxDriverGlobals->FxVerboseOn )
      WPP_IFR_SF_qLqd(FxDriverGlobals, 5u, 0x10u, 0xDu, WPP_FxRequest_cpp_Traceguids, Irp, Ownership, *v7, _a4);
    return (unsigned int)_a4;
  }
  return result;
}
