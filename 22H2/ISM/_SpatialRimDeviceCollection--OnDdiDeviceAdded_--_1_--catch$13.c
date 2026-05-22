/*
 * XREFs of _SpatialRimDeviceCollection::OnDdiDeviceAdded_::_1_::catch$13 @ 0x1800947D4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800953AC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::OnDdiDeviceAdded_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 1032),
                           (void *)0x25D,
                           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialr"
                                         "imdevicecollection.cpp",
                           a4);
  return 0LL;
}
