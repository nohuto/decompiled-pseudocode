/*
 * XREFs of ?HasFallbackInteractionSink@@YAHPEBUtagWND@@@Z @ 0x1C000DC88
 * Callers:
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0049D3C (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C002B7B4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 */

__int64 __fastcall HasFallbackInteractionSink(const struct tagWND *a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>(a1, &v2) )
    return (*(_DWORD *)(v2 + 52) >> 1) & 1;
  else
    return 0LL;
}
