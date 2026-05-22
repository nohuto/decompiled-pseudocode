/*
 * XREFs of _SpatialRimDeviceCollection::OnDdiDeviceUpdated_::_1_::catch$40 @ 0x180094B93
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800953AC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::OnDdiDeviceUpdated_::_1_::catch_40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 1024) = wil::details::in1diag3::Return_CaughtException(
                             *(wil::details::in1diag3 **)(a2 + 1016),
                             (void *)0x26B,
                             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatia"
                                           "lrimdevicecollection.cpp",
                             a4);
  return 0LL;
}
