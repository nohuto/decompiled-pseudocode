/*
 * XREFs of ??0CGlobalLightSet@@AEAA@_K@Z @ 0x180047734
 * Callers:
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x1800465E0 (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CGlobalLightSet *__fastcall CGlobalLightSet::CGlobalLightSet(CGlobalLightSet *this, __int64 a2)
{
  *(_QWORD *)this = &CGlobalLightSet::`vftable';
  *((_DWORD *)this + 2) = 1;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 16),
    CGenericTableMap<enum Windows::UI::LightType,CGlobalLightSet::VISUAL_RESOURCE_MAP_ENTRY_SHAREDLIGHT>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = 0LL;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)this + 12);
  return this;
}
