/*
 * XREFs of _lambda_9df4cfb49f9aeda31819750223cddec6_::operator()_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy___ @ 0x18011C440
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy_________lambda_9df4cfb49f9aeda31819750223cddec6___ @ 0x18011C79C (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_18011C79C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall lambda_9df4cfb49f9aeda31819750223cddec6_::operator()_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  bool v3; // bl

  v2 = *a2;
  v3 = *a2 == *a1;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return v3;
}
