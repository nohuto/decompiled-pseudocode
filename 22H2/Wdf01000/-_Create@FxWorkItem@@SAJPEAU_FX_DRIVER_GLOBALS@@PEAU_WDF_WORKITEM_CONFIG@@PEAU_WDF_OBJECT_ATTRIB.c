/*
 * XREFs of ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0014028
 * Callers:
 *     imp_WdfWorkItemCreate @ 0x1C00142E0 (imp_WdfWorkItemCreate.c)
 * Callees:
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0013B34 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ??0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00140E4 (--0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
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
  FxWorkItem *v11; // rbx
  int v12; // edi

  v9 = (FxWorkItem *)FxObjectHandleAlloc(
                       FxDriverGlobals,
                       ExDefaultNonPagedPoolType,
                       0xD0uLL,
                       0,
                       Attributes,
                       0,
                       FxObjectTypeExternal);
  if ( v9 )
  {
    FxWorkItem::FxWorkItem(v9, FxDriverGlobals);
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    return 3221225626LL;
  v12 = FxWorkItem::Initialize(v11, (_FX_DRIVER_GLOBALS *)Attributes, Config, ParentObject, WorkItem);
  if ( v12 < 0 )
  {
    FxObject::ClearEvtCallbacks(v11);
    v11->DeleteObject(v11);
  }
  return (unsigned int)v12;
}
