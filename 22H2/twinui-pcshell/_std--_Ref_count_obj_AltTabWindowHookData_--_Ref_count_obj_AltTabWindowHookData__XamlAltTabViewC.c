/*
 * XREFs of _std::_Ref_count_obj_AltTabWindowHookData_::_Ref_count_obj_AltTabWindowHookData__XamlAltTabViewController___&_HHOOK_____&__::_1_::dtor$0 @ 0x18038DDC2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj_AltTabWindowHookData_::_Ref_count_obj_AltTabWindowHookData__XamlAltTabViewController_____HHOOK________::_1_::dtor_0(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 48),
    (struct IServiceProvider *)a2,
    a3);
}
