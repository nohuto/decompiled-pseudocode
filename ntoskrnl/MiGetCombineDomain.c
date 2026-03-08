/*
 * XREFs of MiGetCombineDomain @ 0x1402E8D88
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiCapturePfnVm @ 0x14022A10C (MiCapturePfnVm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetCombineDomain(int a1, __int64 a2)
{
  if ( a1 == 1 )
    return *(_QWORD *)(a2 + 864);
  if ( a1 == 2 )
    return 0LL;
  return *(_QWORD *)(a2 - 32);
}
