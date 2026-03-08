/*
 * XREFs of ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0041F88
 * Callers:
 *     imp_WdfDeviceMiniportCreate @ 0x1C0038600 (imp_WdfDeviceMiniportCreate.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C003EF34 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0040090 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ??0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0041C84 (--0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDisposeList@@QEAAJPEAX@Z @ 0x1C0041E58 (-Initialize@FxDisposeList@@QEAAJPEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxDisposeList::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *WdmObject,
        FxDisposeList **pObject)
{
  FxDisposeList *v6; // rax
  FxDisposeList *v7; // rax
  FxDisposeList *v8; // rbx
  int v9; // edi
  FxPoolTypeOrPoolFlags v11; // [rsp+40h] [rbp-18h] BYREF

  *pObject = 0LL;
  *(_QWORD *)&v11.UsePoolType = 0LL;
  v11.u.PoolFlags = 64LL;
  v6 = (FxDisposeList *)FxObjectHandleAllocCommon(FxDriverGlobals, &v11, 0xA0uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( !v6 )
    return 3221225626LL;
  FxDisposeList::FxDisposeList(v6, FxDriverGlobals);
  v8 = v7;
  if ( !v7 )
    return 3221225626LL;
  v9 = FxDisposeList::Initialize(v7, WdmObject);
  if ( v9 < 0 )
  {
    FxObject::ClearEvtCallbacks(v8);
    v8->DeleteObject(v8);
  }
  else
  {
    *pObject = v8;
  }
  return (unsigned int)v9;
}
