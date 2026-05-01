/*
 * XREFs of ??_G?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@winrt@@UEAAPEAXI@Z @ 0x1804D1778
 * Callers:
 *     ??_E?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@winrt@@WCA@EAAPEAXI@Z @ 0x1801713A0 (--_E-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@In.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@winrt@@UEAA@XZ @ 0x1804D13D8 (--1-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 */

winrt::immersive_shell_component *__fastcall winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::`scalar deleting destructor'(
        winrt::immersive_shell_component *a1,
        char a2)
{
  winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::~module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x70);
  return a1;
}
