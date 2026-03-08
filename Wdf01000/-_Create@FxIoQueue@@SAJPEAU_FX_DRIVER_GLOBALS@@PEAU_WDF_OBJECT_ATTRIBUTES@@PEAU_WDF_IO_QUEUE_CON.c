/*
 * XREFs of ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x1C0066BC0
 * Callers:
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0062550 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x1C00630F8 (--0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C00641C4 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 */

__int64 __fastcall FxIoQueue::_Create(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_IO_QUEUE_CONFIG *Config,
        FxDriver *Caller,
        FxPkgIo *PkgIo,
        unsigned __int8 InitialPowerStateOn,
        FxIoQueue **Object)
{
  FxIoQueue *v11; // rax
  FxIoQueue *v12; // rax
  FxIoQueue *v13; // rbx
  signed int _a1; // eax
  unsigned int v15; // edi
  FxPoolTypeOrPoolFlags v17; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v17.UsePoolType = 0LL;
  v17.u.PoolFlags = 64LL;
  *Object = 0LL;
  v11 = (FxIoQueue *)FxObjectHandleAllocCommon(DriverGlobals, &v17, 0x3A8uLL, 0, Attributes, 0, FxObjectTypeExternal);
  if ( v11 && (FxIoQueue::FxIoQueue(v11, DriverGlobals, PkgIo), (v13 = v12) != 0LL) )
  {
    _a1 = FxIoQueue::Initialize(v12, Config, Attributes, Caller, InitialPowerStateOn);
    v15 = _a1;
    if ( _a1 >= 0 )
    {
      *Object = v13;
    }
    else
    {
      WPP_IFR_SF_D(DriverGlobals, 2u, 0xDu, 0xBu, WPP_FxIoQueue_cpp_Traceguids, _a1);
      FxObject::ClearEvtCallbacks(v13);
      v13->DeleteObject(v13);
    }
    return v15;
  }
  else
  {
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xDu, 0xAu, WPP_FxIoQueue_cpp_Traceguids, 0xC000009A);
    return 3221225626LL;
  }
}
