/*
 * XREFs of GetCurrentKbdTables @ 0x1C01E9BB0
 * Callers:
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01E9B0C (-SendKeyUpDown@@YAXEE@Z.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1C01EA3D8 (PtiKbdFromQ.c)
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
