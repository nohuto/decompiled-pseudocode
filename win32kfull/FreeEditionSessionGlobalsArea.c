/*
 * XREFs of FreeEditionSessionGlobalsArea @ 0x1C00F6000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FreeEditionSessionGlobalsArea(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = SGDGetSessionState(a1);
  v2 = *(void **)(v1 + 32);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(v1 + 32) = 0LL;
  }
}
