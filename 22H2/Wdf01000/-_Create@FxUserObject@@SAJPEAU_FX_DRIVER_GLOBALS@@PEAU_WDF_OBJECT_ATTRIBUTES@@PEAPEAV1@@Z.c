/*
 * XREFs of ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C00147CC
 * Callers:
 *     imp_WdfObjectCreate @ 0x1C0014880 (imp_WdfObjectCreate.c)
 *     ?AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C004FCC4 (-AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAP.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0014298 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxUserObject::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxUserObject **pUserObject)
{
  FxNonPagedObject *v6; // rax
  FxUserObject *v7; // rbx
  int _a1; // eax
  unsigned int v9; // edi
  void *handle; // [rsp+78h] [rbp+20h] BYREF

  v6 = (FxNonPagedObject *)FxObjectHandleAlloc(
                             FxDriverGlobals,
                             ExDefaultNonPagedPoolType,
                             0x78uLL,
                             0,
                             Attributes,
                             0,
                             FxObjectTypeExternal);
  v7 = (FxUserObject *)v6;
  if ( v6 )
  {
    FxNonPagedObject::FxNonPagedObject(v6, 0x100Cu, 0x78u, FxDriverGlobals);
    v7->__vftable = (FxUserObject_vtbl *)FxUserObject::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    _a1 = FxObject::Commit(v7, (_FX_DRIVER_GLOBALS *)Attributes, &handle, 0LL, 1u);
    v9 = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x14u, 0xBu, WPP_FxUserObject_cpp_Traceguids, _a1);
      FxObject::ClearEvtCallbacks(v7);
      ((void (*)(void))v7->DeleteObject)();
    }
    else
    {
      *pUserObject = v7;
    }
    return v9;
  }
  else
  {
    WPP_IFR_SF_(FxDriverGlobals, 2u, 0x14u, 0xAu, WPP_FxUserObject_cpp_Traceguids);
    return 3221225626LL;
  }
}
