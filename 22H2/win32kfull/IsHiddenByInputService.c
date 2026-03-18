/*
 * XREFs of IsHiddenByInputService @ 0x1C000BD34
 * Callers:
 *     DeferMessagesOnQueue @ 0x1C000BBE8 (DeferMessagesOnQueue.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C004F148 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C005CB08 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHiddenByInputService(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 100);
  return (v1 & 0x2000) != 0 || (v1 & 0x4000) != 0 || (v1 & 0x10000) != 0;
}
