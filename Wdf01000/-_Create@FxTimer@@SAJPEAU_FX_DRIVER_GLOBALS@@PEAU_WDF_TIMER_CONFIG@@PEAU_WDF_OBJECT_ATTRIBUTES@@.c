/*
 * XREFs of ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0041260
 * Callers:
 *     imp_WdfTimerCreate @ 0x1C0037D90 (imp_WdfTimerCreate.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ??0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0040D44 (--0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0040FCC (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxTimer::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_TIMER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        WDFTIMER__ **Timer)
{
  FxTimer *v9; // rax
  FxTimer *v10; // rax
  FxObject *v11; // rbx
  int v12; // edi
  FxPoolTypeOrPoolFlags v14; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&v14.UsePoolType = 0LL;
  v14.u.PoolFlags = 64LL;
  v9 = (FxTimer *)FxObjectHandleAllocCommon(FxDriverGlobals, &v14, 0x160uLL, 0, Attributes, 0, FxObjectTypeExternal);
  if ( !v9 )
    return 3221225626LL;
  FxTimer::FxTimer(v9, FxDriverGlobals);
  v11 = v10;
  if ( !v10 )
    return 3221225626LL;
  v12 = FxTimer::Initialize(v10, Attributes, Config, ParentObject, Timer);
  if ( v12 < 0 )
  {
    FxObject::ClearEvtCallbacks(v11);
    v11->DeleteObject(v11);
  }
  return (unsigned int)v12;
}
