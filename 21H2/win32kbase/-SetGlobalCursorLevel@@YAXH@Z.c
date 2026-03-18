/*
 * XREFs of ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C00BE010
 * Callers:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C005FA20 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C01B9570 (-MKShowMouseCursor@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SetGlobalCursorLevel(int a1)
{
  __int64 i; // rdx
  __int64 *j; // rcx
  __int64 k; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  if ( grpdeskRitInput )
  {
    for ( i = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 16LL); i; i = *(_QWORD *)(i + 32) )
    {
      for ( j = *(__int64 **)(i + 168); j != (__int64 *)(i + 168); j = (__int64 *)*j )
      {
        v5 = *(j - 39);
        *((_DWORD *)j + 4) = a1;
        *(_DWORD *)(v5 + 384) = a1;
      }
    }
  }
  for ( k = *(_QWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 320); k; k = *(_QWORD *)(k + 664) )
  {
    v6 = *(_QWORD *)(k + 432);
    *(_DWORD *)(k + 760) = a1;
    *(_DWORD *)(v6 + 384) = a1;
  }
}
