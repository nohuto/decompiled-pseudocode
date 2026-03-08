/*
 * XREFs of MultiUserGreDeleteScripts @ 0x1C00F60F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultiUserGreDeleteScripts(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v2 = *(_QWORD *)(v1 + 19600);
  if ( v2 )
    Win32FreePool((void *)(v2 - 2LL * *(unsigned int *)(v1 + 19584)));
}
