/*
 * XREFs of HalpInitializeDeferredErrorVector @ 0x140378988
 * Callers:
 *     HalpInterruptInitializeLocalUnit @ 0x1403786F0 (HalpInterruptInitializeLocalUnit.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x14028EE80 (HalpInterruptFindLines.c)
 *     HalpInterruptGetPriority @ 0x1403792F0 (HalpInterruptGetPriority.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403796D0 (HalpInterruptSetLineStateInternal.c)
 */

__int64 __fastcall HalpInitializeDeferredErrorVector(__int64 a1)
{
  bool v2; // zf
  unsigned int v4; // [rsp+70h] [rbp+10h] BYREF
  int v5; // [rsp+74h] [rbp+14h]

  v2 = *(_DWORD *)(a1 + 240) == 2;
  v4 = *(_DWORD *)(a1 + 256);
  v5 = -8;
  if ( !v2 || !HalpInterruptFindLines(&v4) )
    return 0LL;
  HalpInterruptGetPriority(a1);
  return HalpInterruptSetLineStateInternal(a1, &v4);
}
