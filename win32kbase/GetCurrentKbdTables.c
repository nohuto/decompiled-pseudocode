/*
 * XREFs of GetCurrentKbdTables @ 0x1C021A790
 * Callers:
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C021A6EC (-SendKeyUpDown@@YAXEE@Z.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1C00F43EE (PtiKbdFromQ.c)
 */

__int64 GetCurrentKbdTables()
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( !gpqForeground )
    return 0LL;
  v1 = *(_QWORD *)(PtiKbdFromQ(gpqForeground) + 440);
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 48) + 32LL);
  else
    return *(_QWORD *)(SGDGetUserSessionState(v3, v2, v4, v5) + 13840);
}
