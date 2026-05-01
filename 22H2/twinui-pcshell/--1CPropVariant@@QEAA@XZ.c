/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x180213EB0
 * Callers:
 *     _wil::PropertyStoreHelperBase_IPropertyStore_::GetAsString__tagpropertykey__::_1_::dtor$0 @ 0x18012A3A1 (_wil--PropertyStoreHelperBase_IPropertyStore_--GetAsString__tagpropertykey__--_1_--dtor$0.c)
 *     _wil::PropertyStoreHelperBase_IPropertyStore_::GetUInt32__tagpropertykey__::_1_::dtor$0 @ 0x18012A43A (_wil--PropertyStoreHelperBase_IPropertyStore_--GetUInt32__tagpropertykey__--_1_--dtor$0.c)
 *     _GetUnpackagedAppPinnableItem_::_1_::dtor$1 @ 0x18013A793 (_GetUnpackagedAppPinnableItem_--_1_--dtor$1.c)
 *     _CDesktopPositioner::_IsViewManaged_::_1_::dtor$5 @ 0x180175205 (_CDesktopPositioner--_IsViewManaged_--_1_--dtor$5.c)
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetAsInt32__tagpropertykey__::_1_::dtor$0 @ 0x180213215 (_CPropertyStoreHelperBase_IPropertyStore_--GetAsInt32__tagpropertykey__--_1_--dtor$0.c)
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetBoolean__tagpropertykey__::_1_::dtor$0 @ 0x1802132A5 (_CPropertyStoreHelperBase_IPropertyStore_--GetBoolean__tagpropertykey__--_1_--dtor$0.c)
 *     _wil::PropertyStoreHelperBase_IPropertyStore_::GetString__tagpropertykey__::_1_::dtor$0 @ 0x1804D6374 (_wil--PropertyStoreHelperBase_IPropertyStore_--GetString__tagpropertykey__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
