/*
 * XREFs of ??$find@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIDragDropSimulator@DragDropSimulator@Shell@Internal@56@@impl@winrt@@SAPEAXPEBUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1804D0D50
 * Callers:
 *     ?find_interface@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1804D55D0 (-find_interface@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@.c)
 * Callees:
 *     ??$find@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIDragDropSimulator@DragDropSimulator@Shell@Internal@34@@impl@winrt@@SAPEAXPEBUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1804D0CE8 (--$find@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winr.c)
 */

__int64 __fastcall winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::find<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v6; // rax

  v3 = *a2;
  v4 = **a2 - winrt::impl::guid_storage<IServiceProvider>::value;
  if ( !v4 )
    v4 = v3[1] + 0x5F69FFF55FFCB80LL;
  if ( !v4 )
    return (a1 + 8) & -(__int64)(a1 != 0);
  v6 = *v3 - winrt::impl::guid_storage<IImmersiveShellComponent>::value;
  if ( *v3 == winrt::impl::guid_storage<IImmersiveShellComponent>::value )
    v6 = v3[1] + 0x3BA05710A3855A7ELL;
  if ( v6 )
    return winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::find<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::impl::iid_finder>(
             a1,
             a2);
  else
    return (a1 + 16) & -(__int64)(a1 != 0);
}
