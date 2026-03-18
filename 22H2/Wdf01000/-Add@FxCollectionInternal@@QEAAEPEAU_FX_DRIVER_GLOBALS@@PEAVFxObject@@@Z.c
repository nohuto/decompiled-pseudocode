/*
 * XREFs of ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0018CCC
 * Callers:
 *     imp_WdfCollectionAdd @ 0x1C0018C30 (imp_WdfCollectionAdd.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0045E20 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0046180 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C005E500 (imp_WdfRegistryQueryMultiString.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C00611FC (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0061304 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018D40 (-AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxCollectionInternal::Add(
        FxCollectionInternal *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *Item)
{
  __int64 result; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v7; // r9

  result = (__int64)FxCollectionInternal::AllocateEntry(this, FxDriverGlobals);
  if ( result )
  {
    Blink = this->m_ListHead.Blink;
    v7 = (_LIST_ENTRY *)(result + 8);
    if ( Blink->Flink != &this->m_ListHead )
      __fastfail(3u);
    v7->Flink = &this->m_ListHead;
    *(_QWORD *)(result + 16) = Blink;
    Blink->Flink = v7;
    this->m_ListHead.Blink = v7;
    *(_QWORD *)result = Item;
    FxObject::AddRef(Item, this, 185, "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
    result = 1LL;
    ++this->m_Count;
  }
  return result;
}
