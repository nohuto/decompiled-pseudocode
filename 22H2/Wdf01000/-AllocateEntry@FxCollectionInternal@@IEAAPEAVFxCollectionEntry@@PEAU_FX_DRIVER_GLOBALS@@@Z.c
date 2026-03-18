/*
 * XREFs of ?AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018D40
 * Callers:
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0018CCC (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C0061094 (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 */

FX_POOL **__fastcall FxCollectionInternal::AllocateEntry(
        FxCollectionInternal *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  void *Caller; // [rsp+38h] [rbp+0h]

  return FxPoolAllocator(
           FxDriverGlobals,
           &FxDriverGlobals->FxPoolFrameworks,
           ExDefaultNonPagedPoolType,
           0x18uLL,
           FxDriverGlobals->Tag,
           Caller);
}
