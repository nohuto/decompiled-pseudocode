/*
 * XREFs of ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18003A870
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180058192 (memset_0.c)
 */

void *__fastcall WPF::ProcessHeapImpl::AllocClear(WPF::ProcessHeapImpl *this, size_t a2)
{
  SIZE_T v3; // r8
  void *result; // rax
  void *v5; // rdi

  v3 = a2;
  if ( !a2 )
    v3 = 1LL;
  result = HeapAlloc(g_hProcessHeap, 0, v3);
  v5 = result;
  if ( result )
  {
    memset_0(result, 0, a2);
    return v5;
  }
  return result;
}
