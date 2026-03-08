/*
 * XREFs of ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0040C60
 * Callers:
 *     imp_WdfWorkItemCreate @ 0x1C0037C00 (imp_WdfWorkItemCreate.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ??0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004078C (--0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0040A48 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxWorkItem::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_WORKITEM_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        WDFWORKITEM__ **WorkItem)
{
  FxWorkItem *v9; // rax
  FxWorkItem *v10; // rax
  FxObject *v11; // rbx
  int v12; // edi
  FxPoolTypeOrPoolFlags v14; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&v14.UsePoolType = 0LL;
  v14.u.PoolFlags = 64LL;
  v9 = (FxWorkItem *)FxObjectHandleAllocCommon(FxDriverGlobals, &v14, 0xD0uLL, 0, Attributes, 0, FxObjectTypeExternal);
  if ( !v9 )
    return 3221225626LL;
  FxWorkItem::FxWorkItem(v9, FxDriverGlobals);
  v11 = v10;
  if ( !v10 )
    return 3221225626LL;
  v12 = FxWorkItem::Initialize(v10, Attributes, Config, ParentObject, WorkItem);
  if ( v12 < 0 )
  {
    FxObject::ClearEvtCallbacks(v11);
    v11->DeleteObject(v11);
  }
  return (unsigned int)v12;
}
