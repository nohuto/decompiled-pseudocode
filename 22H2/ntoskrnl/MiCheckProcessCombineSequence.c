/*
 * XREFs of MiCheckProcessCombineSequence @ 0x140217440
 * Callers:
 *     MiCapturePfnVm @ 0x140215CFC (MiCapturePfnVm.c)
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCheckProcessCombineSequence(__int64 a1, signed __int32 a2)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(a1 + 2876);
  return v2 == 1 || v2 == a2 || v2 < 2 && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2876), a2, 0);
}
