/*
 * XREFs of ??1TypeName@Interop@Xaml@UI@Windows@@QEAA@XZ @ 0x18035FE80
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::[Windows::UI::Xaml::Markup::IXamlMetadataProvider]::GetXamlType_::_1_::dtor$0_0 @ 0x180360CAA (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--[Windows--UI--Xaml_ea_180360CAA.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Xaml::Interop::TypeName::~TypeName(HSTRING *this)
{
  WindowsDeleteString_0(*this);
}
