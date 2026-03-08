/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x1403A0184
 * Callers:
 *     KseSetCompletionHook @ 0x1403A00F0 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x14079D690 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void *__fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  void *Pool2; // rax
  void *v3; // rbx

  Pool2 = (void *)ExAllocatePool2(64LL, Size, 1648710475LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    _InterlockedIncrement(&dword_140C40388);
    memset(Pool2, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C40394);
  }
  return v3;
}
