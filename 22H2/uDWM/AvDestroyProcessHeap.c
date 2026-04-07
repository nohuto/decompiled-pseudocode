/*
 * XREFs of AvDestroyProcessHeap @ 0x1800BF268
 * Callers:
 *     _DllMainStartup @ 0x180040D20 (_DllMainStartup.c)
 * Callees:
 *     ??_GHeapBase@WPF@@UEAAPEAXI@Z @ 0x18007DE40 (--_GHeapBase@WPF@@UEAAPEAXI@Z.c)
 */

__int64 AvDestroyProcessHeap()
{
  if ( WPF::g_pProcessHeap )
  {
    WPF::HeapBase::`scalar deleting destructor'(WPF::g_pProcessHeap, 0);
    HeapFree(g_hProcessHeap, 0, WPF::g_pProcessHeap);
    WPF::g_pProcessHeap = 0LL;
    g_hProcessHeap = 0LL;
  }
  return 0LL;
}
