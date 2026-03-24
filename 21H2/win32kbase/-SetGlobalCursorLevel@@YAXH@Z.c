/*
 * XREFs of ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C00B04A0
 * Callers:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C000C3C0 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C01837A0 (-MKShowMouseCursor@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SetGlobalCursorLevel(int a1)
{
  __int64 i; // rdx
  __int64 k; // rcx
  __int64 v4; // rax
  __int64 *j; // rcx
  __int64 v6; // rax

  if ( grpdeskRitInput )
  {
    for ( i = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 16LL); i; i = *(_QWORD *)(i + 32) )
    {
      for ( j = *(__int64 **)(i + 168); j != (__int64 *)(i + 168); j = (__int64 *)*j )
      {
        v6 = *(j - 39);
        *((_DWORD *)j + 4) = a1;
        *(_DWORD *)(v6 + 384) = a1;
      }
    }
  }
  for ( k = *(_QWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 320); k; k = *(_QWORD *)(k + 664) )
  {
    v4 = *(_QWORD *)(k + 432);
    *(_DWORD *)(k + 760) = a1;
    *(_DWORD *)(v4 + 384) = a1;
  }
}
