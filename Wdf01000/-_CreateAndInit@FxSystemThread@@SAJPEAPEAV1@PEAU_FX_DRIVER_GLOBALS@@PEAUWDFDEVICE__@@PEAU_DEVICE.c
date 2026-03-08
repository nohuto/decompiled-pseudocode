/*
 * XREFs of ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00896E8
 * Callers:
 *     ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1C0072040 (-CreatePowerThread@FxPkgPnp@@IEAAJXZ.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0089184 (--0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateThread@FxSystemThread@@AEAAJXZ @ 0x1C008928C (-CreateThread@FxSystemThread@@AEAAJXZ.c)
 */

__int64 __fastcall FxSystemThread::_CreateAndInit(
        FxSystemThread **SystemThread,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *DeviceObject)
{
  FxSystemThread *v8; // rax
  FxNonPagedObject *v9; // rax
  unsigned __int8 v10; // r8
  FxSystemThread *v11; // rbx
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // r8
  FxPoolTypeOrPoolFlags v15; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h] BYREF

  *SystemThread = 0LL;
  *(_QWORD *)&v15.UsePoolType = 0LL;
  v15.u.PoolFlags = 64LL;
  v8 = (FxSystemThread *)FxObjectHandleAllocCommon(FxDriverGlobals, &v15, 0x100uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( v8 && (FxSystemThread::FxSystemThread(v8, FxDriverGlobals), (v11 = (FxSystemThread *)v9) != 0LL) )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(v9, &PreviousIrql, v10);
    v12 = PreviousIrql;
    v11->m_Initialized = 1;
    FxNonPagedObject::Unlock(v11, v12, v13);
    if ( (int)FxSystemThread::CreateThread(v11) < 0 )
    {
      WPP_IFR_SF_qid(
        FxDriverGlobals,
        2u,
        0xCu,
        0xBu,
        WPP_FxSystemThread_cpp_Traceguids,
        Device,
        (__int64)DeviceObject,
        -1073741823);
      FxObject::ClearEvtCallbacks(v11);
      v11->DeleteObject(v11);
      return 3221225473LL;
    }
    else
    {
      *SystemThread = v11;
      return 0LL;
    }
  }
  else
  {
    WPP_IFR_SF_qid(
      FxDriverGlobals,
      2u,
      0xCu,
      0xAu,
      WPP_FxSystemThread_cpp_Traceguids,
      Device,
      (__int64)DeviceObject,
      -1073741670);
    return 3221225626LL;
  }
}
