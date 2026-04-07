/*
 * XREFs of ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18003A780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WPF::ProcessHeapImpl::Free(WPF::ProcessHeapImpl *this, void *a2)
{
  if ( a2 )
    HeapFree(g_hProcessHeap, 0, a2);
}
