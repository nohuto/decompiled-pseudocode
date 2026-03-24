/*
 * XREFs of GetCurrentKbdTables @ 0x1C01B05A0
 * Callers:
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01B0504 (-SendKeyUpDown@@YAXEE@Z.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1C01B10D8 (PtiKbdFromQ.c)
 */

__int64 GetCurrentKbdTables()
{
  __int64 v1; // rax

  if ( !gpqForeground )
    return 0LL;
  v1 = *(_QWORD *)(PtiKbdFromQ(gpqForeground) + 440);
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 48) + 32LL);
  else
    return gpKbdTbl;
}
