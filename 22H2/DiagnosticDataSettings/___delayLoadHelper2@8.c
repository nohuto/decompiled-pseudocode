/*
 * XREFs of ___delayLoadHelper2@8 @ 0x10003E90
 * Callers:
 *     __tailMerge_netapi32_dll @ 0x10004BDC (__tailMerge_netapi32_dll.c)
 * Callees:
 *     <none>
 */

int __stdcall __delayLoadHelper2(int a1, int a2)
{
  return ResolveDelayLoadedAPI(&_ImageBase, a1, __pfnDliFailureHook2, DelayLoadFailureHook, a2, __pfnDliFailureHook2);
}
