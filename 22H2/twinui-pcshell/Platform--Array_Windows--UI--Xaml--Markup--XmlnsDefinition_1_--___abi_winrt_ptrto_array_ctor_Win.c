/*
 * XREFs of Platform::Array_Windows::UI::Xaml::Markup::XmlnsDefinition_1_::___abi_winrt_ptrto_array_ctor_Windows::UI::Xaml::Markup::XmlnsDefinition_1__::_1_::dtor$0 @ 0x18035F07C
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Platform::Array_Windows::UI::Xaml::Markup::XmlnsDefinition_1_::___abi_winrt_ptrto_array_ctor_Windows::UI::Xaml::Markup::XmlnsDefinition_1__::_1_::dtor_0(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 48),
    (struct IServiceProvider *)0x88,
    a3);
}
